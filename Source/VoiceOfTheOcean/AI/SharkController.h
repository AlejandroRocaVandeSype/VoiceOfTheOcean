// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AIController.h"
#include "SharkController.generated.h"

/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API ASharkController : public AAIController
{
	GENERATED_BODY()
public:
	ASharkController();
protected:
	virtual void BeginPlay() override;
	virtual void OnPossess(APawn* InPawn) override;
public:
	 // Reference to the behavior tree asset
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI|BehaviorTree")
    class UBehaviorTree* BehaviorTreeAsset;
private:
};
