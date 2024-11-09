// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VerbManager.generated.h"

class UVerb;
UCLASS(Blueprintable)
class VOICEOFTHEOCEAN_API UVerbManager : public UObject
{
	GENERATED_BODY()

public:
	UVerbManager(const FObjectInitializer& ObjectInitializer);
	
	void InitializeVerbs();
	
	UFUNCTION(BlueprintCallable)
	UVerb* GetVerbByName(FString verbName) const;
	UFUNCTION(BlueprintCallable)
	TArray<UVerb*> GetVerbs() const;

private:
	UPROPERTY()
	TArray<UVerb*> Verbs;
};
