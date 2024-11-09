// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/RelayTargetActorTask.h"
#include "AIController.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Shark.h"
#include "Characters/Shark/SharkMovementCP.h"

URelayTargetActorTask::URelayTargetActorTask()
{
}

EBTNodeResult::Type URelayTargetActorTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	//Get the target actor from the blackboard
	AActor* TargetActor = Cast<AActor>(OwnerComp.GetBlackboardComponent()->GetValueAsObject({ "TargetActor" }));
	const AAIController* ownerController = OwnerComp.GetAIOwner();
	TArray<AActor*> actors{};
	if (const auto ownerPawn = ownerController->GetPawn())
	{
		if (const auto movementCP = ownerPawn->GetComponentByClass<USharkMovementCP>(); !movementCP->TargetActor)
			movementCP->SetTargetActor(TargetActor);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("RelayTargetActorTask: OwnerPawn was NULL"))
	}

	return EBTNodeResult::Succeeded;

}