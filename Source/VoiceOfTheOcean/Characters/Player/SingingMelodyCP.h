// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Core/VotoStatics.h"
#include "SingingMelodyCP.generated.h"

class UVerb;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API USingingMelodyCP : public UActorComponent
{
	GENERATED_BODY()

public:

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMelodyIncorrect);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnMelodyIncorrect OnMelodyIncorrect;

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMelodyCorrect);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnMelodyCorrect OnMelodyCorrect;

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMelodyConfirmed);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnMelodyConfirmed OnMelodyConfirmed;

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMelodyUnconfirmed);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnMelodyUnconfirmed OnMelodyUnconfirmed;

private:
	TArray<FMusicalNote> MelodyNotes;
	int32 MaxNotes{ 6 };
	TArray<UVerb*> ValidVerbs;
	bool IsMelodyConfirmed{ false };
	bool IsMelodyCorrect{ true };
	UVerb* VerbAction{ nullptr };

	int32 SearchForVerbNote(FMusicalNote noteToFind) const;

public:	
	// Sets default values for this component's properties
	USingingMelodyCP();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	bool AddNote(FMusicalNote newNote);
	bool RemoveLastNote();
	void CheckIfMelodyIsValid();

	bool GetIsMelodyConfirmed() const;

	const TArray<FMusicalNote>& GetMelodyNotes() const;

	void SendVerbActionToTarget();

private:
	int CurrentTargetNoteIdx{ 0 };
};
