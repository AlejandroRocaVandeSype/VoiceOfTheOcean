// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ConvertLocationToActorTask.generated.h"

/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API UConvertLocationToActorTask : public UBTTaskNode
{
	GENERATED_BODY()
public:
	UConvertLocationToActorTask();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;

	UPROPERTY(EditAnywhere, Category="TargetActorClass")
	FBlackboardKeySelector TargetActorType;
};
