// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Core/VOTOStatics.h"
#include "MelodyCueCP.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API UMelodyCueCP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UMelodyCueCP();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void StartCue(const TArray<FMusicalNote>& notes);

private:
	TArray<FMusicalNote> PhraseNotes;
	int PhraseStep;
	const float TimerRate{ 1.0f };
	FTimerHandle CueTimerHandle;

	void PlayCue();
		
};
