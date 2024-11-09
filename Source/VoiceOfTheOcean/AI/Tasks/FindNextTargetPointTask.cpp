// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/FindNextTargetPointTask.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "AIController.h"


UFindNextTargetPointTask::UFindNextTargetPointTask()
{
    NodeName = TEXT("Find Next Target Point");
    bRandomSelection = false;
    CurrentTargetIndex = 0;
}

EBTNodeResult::Type UFindNextTargetPointTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
    // Get the AI controller and its blackboard
    AAIController* AIController = OwnerComp.GetAIOwner();
    UBlackboardComponent* BlackboardComp = OwnerComp.GetBlackboardComponent();

    if (!AIController || !BlackboardComp)
    {
        return EBTNodeResult::Failed;
    }

    // Make sure we have target points
    if (TargetPoints.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("No target points specified for FindNextTargetPointTask"));
        return EBTNodeResult::Failed;
    }

    // Get the next target point
    AActor* TargetPoint = nullptr;
    
    if (bRandomSelection)
    {
        // Random selection
        int32 RandomIndex = FMath::RandRange(0, TargetPoints.Num() - 1);
        TargetPoint = TargetPoints[RandomIndex];
    }
    else
    {
        // Sequential selection
        TargetPoint = TargetPoints[CurrentTargetIndex];
        
        // Update index for next time
        CurrentTargetIndex = (CurrentTargetIndex + 1) % TargetPoints.Num();
    }

    if (!TargetPoint)
    {
        return EBTNodeResult::Failed;
    }

    // Set the target location in the blackboard
    FVector TargetLocation = TargetPoint->GetActorLocation();
    BlackboardComp->SetValueAsVector(TargetLocationKey.SelectedKeyName, TargetLocation);

    return EBTNodeResult::Succeeded;
}