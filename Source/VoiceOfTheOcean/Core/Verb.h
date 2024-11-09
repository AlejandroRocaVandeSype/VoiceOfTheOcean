// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VOTOStatics.h"
#include "Verb.generated.h"


UCLASS(Blueprintable)
class VOICEOFTHEOCEAN_API UVerb : public UObject
{
	GENERATED_BODY()

public:
	UVerb(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
	void InitializeVerb(FString newVerbName, TArray<FMusicalNote> newVerbNotes);

	UFUNCTION(BlueprintCallable)
	FString GetVerbName() const;
	UFUNCTION(BlueprintCallable)
	TArray<FMusicalNote> GetVerbNotes() const;

private:
	UPROPERTY()
	FString VerbName;
	UPROPERTY()
	TArray<FMusicalNote> VerbNotes;
	const int32 MaxNotes{ 2 };
};
