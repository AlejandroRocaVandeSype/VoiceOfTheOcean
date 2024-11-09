// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "RotateTask.generated.h"

/**
 * 
 */
UCLASS()
class VOICEOFTHEOCEAN_API URotateTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
	URotateTask();

	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
