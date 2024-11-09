// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RelayTargetActorTask.generated.h"

/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API URelayTargetActorTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
	URelayTargetActorTask();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
};
