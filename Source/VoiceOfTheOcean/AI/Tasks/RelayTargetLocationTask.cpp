// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/RelayTargetLocationTask.h"

#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Shark/SharkMovementCP.h"

URelayTargetLocationTask::URelayTargetLocationTask()
{
	bNotifyTick = true;
}

EBTNodeResult::Type URelayTargetLocationTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	// Get the target location from the blackboard
	FVector targetLocation = OwnerComp.GetBlackboardComponent()->GetValueAsVector("TargetLocation");
	const AAIController* ownerController = OwnerComp.GetAIOwner();

	if (const auto ownerPawn = ownerController->GetPawn())
	{
		if (const auto movementCP = ownerPawn->FindComponentByClass<USharkMovementCP>())
		{
			if (!movementCP->TargetActor)
			{
				movementCP->SetTargetLocation(targetLocation);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("RelayTargetLocationTask: OwnerPawn was NULL"));
		return EBTNodeResult::Failed;
	}

	// Return InProgress so TickTask will continue to check until the target is reached
	return EBTNodeResult::InProgress;
}

void URelayTargetLocationTask::TickTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory, float DeltaSeconds)
{
	// Check if the movement component has reached the target
	const AAIController* ownerController = OwnerComp.GetAIOwner();
	if (const auto ownerPawn = ownerController->GetPawn())
	{
		if (const auto movementCP = ownerPawn->FindComponentByClass<USharkMovementCP>())
		{
			if (movementCP->HasReachedTarget)
			{
				// Finish the task with success once the target is reached
				FinishLatentTask(OwnerComp, EBTNodeResult::Succeeded);
				return;
			}
		}
	}

	// Call the parent TickTask to ensure regular ticking
	Super::TickTask(OwnerComp, NodeMemory, DeltaSeconds);
}
