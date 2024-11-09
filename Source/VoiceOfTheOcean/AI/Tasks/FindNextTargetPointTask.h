// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "Engine/TargetPoint.h"
#include "FindNextTargetPointTask.generated.h"

/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API UFindNextTargetPointTask : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UFindNextTargetPointTask();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

protected:
	// The Blackboard key that will store our target location
	UPROPERTY(EditAnywhere, Category = "Blackboard")
	FBlackboardKeySelector TargetLocationKey;

	// Array of target points (you can populate this via blueprint)
	UPROPERTY(EditAnywhere, Category = "Target Points", meta = (AllowedClasses = "TargetPoint"))
	TArray<AActor*> TargetPoints;


	// Should we pick points randomly or sequentially?
	UPROPERTY(EditAnywhere, Category = "Behavior")
	bool bRandomSelection;

	// Current index for sequential selection
	int32 CurrentTargetIndex;
};
