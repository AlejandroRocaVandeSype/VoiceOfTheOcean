// Fill out your copyright notice in the Description page of Project Settings.


#include "MelodyCueCP.h"

// Sets default values for this component's properties
UMelodyCueCP::UMelodyCueCP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UMelodyCueCP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UMelodyCueCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UMelodyCueCP::StartCue(const TArray<FMusicalNote>& notes)
{
	PhraseNotes = notes;

	GetOwner()->GetWorldTimerManager().SetTimer(
		CueTimerHandle, 
		this, 
		&UMelodyCueCP::PlayCue, 
		TimerRate, 
		true);


}

void UMelodyCueCP::PlayCue()
{
	PhraseNotes[PhraseStep].NoteName.GetIntValue();
}

