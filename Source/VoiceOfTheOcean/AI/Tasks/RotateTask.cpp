// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/Tasks/RotateTask.h"

#include "AIController.h"
#include "Characters/Shark.h"
URotateTask::URotateTask()
{
}

EBTNodeResult::Type URotateTask::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	auto ownerAI = OwnerComp.GetAIOwner();
	auto owner = ownerAI->GetPawn();
	AShark* shark = Cast<AShark>(owner);
	auto patrolCenter = shark->AIPatrolCenter;

	// Get vector from current location to the patrol center
	FVector toPatrolCenter = patrolCenter->GetActorLocation() - owner->GetActorLocation();
	FVector currentFwd = owner->GetActorForwardVector();

	// Find in which way the shark should turn 
	float dot = FVector::DotProduct(toPatrolCenter, currentFwd);
	int angleMultiplier = dot >= 0.0f ? 1 : -1;
	
	//owner->SetActorRotation(owner->GetActorRotation() + FRotator(0.0f,1.0f * angleMultiplier,0.0f));
	//owner->SetActorLocation(owner->GetActorLocation() + currentFwd * 3.0f);
	return EBTNodeResult::Succeeded;
}

