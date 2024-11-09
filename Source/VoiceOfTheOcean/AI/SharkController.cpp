// Fill out your copyright notice in the Description page of Project Settings.


#include "AI/SharkController.h"

#include "BehaviorTree/BlackboardComponent.h"
#include "Characters/Shark.h"

ASharkController::ASharkController()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ASharkController::BeginPlay()
{
	Super::BeginPlay();
}

void ASharkController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	if (BehaviorTreeAsset)
	{
		// RunBehaviorTree automatically handles blackboard initialization
		RunBehaviorTree(BehaviorTreeAsset);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("SharkController: Behavior Tree Asset is not assigned!"));
	}
}
