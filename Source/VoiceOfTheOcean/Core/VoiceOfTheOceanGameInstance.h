// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "VoiceOfTheOceanGameInstance.generated.h"

/**
 * 
 */
class UVerbManager;
UCLASS()
class VOICEOFTHEOCEAN_API UVoiceOfTheOceanGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:

	virtual void Init() override;

	UFUNCTION(BlueprintCallable, Category = "VerbManager")
	UVerbManager* GetVerbManager();

private:
	UPROPERTY()
	UVerbManager* VerbManager;
	
};
