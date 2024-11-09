// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "DebugPrintTask.generated.h"

/**
 * 
 */
UCLASS()
class VOICEOFTHEOCEAN_API UDebugPrintTask : public UBTTaskNode
{
	GENERATED_BODY()

public:
	UDebugPrintTask();
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Print")
	FString DebugMessage;
	virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	
};
