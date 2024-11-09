// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/ConvertLocationToActorTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"

UConvertLocationToActorTask::UConvertLocationToActorTask()
{
}
EBTNodeResult::Type UConvertLocationToActorTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{

	// Get the blackboard component
    const auto blackboardCP = OwnerComp.GetBlackboardComponent();
    
    // Retrieve the target location from the blackboard
    const FVector targetLocation = blackboardCP->GetValueAsVector("TargetLocation");

    // Retrieve the target actor class from the blackboard

    if (UClass* targetActorClass = blackboardCP->GetValueAsClass(TargetActorType.SelectedKeyName)) // Check if the class is valid
    {
        // Get the world context
        if (UWorld* world = OwnerComp.GetWorld()) // Ensure the world is valid
        {
            // Set spawn parameters
            FActorSpawnParameters spawnParams;
            spawnParams.Owner = OwnerComp.GetAIOwner(); // Set the owner
            spawnParams.Instigator = OwnerComp.GetAIOwner()->GetInstigator(); // Set the instigator if applicable

            // Spawn the actor at the target location

            if (AActor* spawnedActor = world->SpawnActor<AActor>(targetActorClass, targetLocation, FRotator::ZeroRotator, spawnParams)) // Check if the actor was spawned successfully
            {
                // Optionally store a reference to the spawned actor in the blackboard
                blackboardCP->SetValueAsObject("TargetActor", spawnedActor);
                
                return EBTNodeResult::Succeeded; // Return success if the actor is spawned
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("Failed to spawn actor of class: %s"), *targetActorClass->GetName());
                return EBTNodeResult::Failed; // Return failed if the actor could not be spawned
            }
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("Target actor class is NULL"));
        return EBTNodeResult::Failed; // Return failed if the target actor class is not valid
    }

    return EBTNodeResult::Succeeded; // Default return (you might want to handle this case differently)
}