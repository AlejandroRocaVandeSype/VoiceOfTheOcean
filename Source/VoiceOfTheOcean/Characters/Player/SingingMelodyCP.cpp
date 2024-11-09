// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Player/SingingMelodyCP.h"
#include "Characters/Player/FPCharacter.h"
#include "Characters/Player/CameraRaycastingCP.h"
#include "Core/VoiceOfTheOceanGameInstance.h"
#include "Core/SubjectCP.h"
#include "Core/Verb.h"



// Sets default values for this component's properties
USingingMelodyCP::USingingMelodyCP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	MelodyNotes.Reserve(MaxNotes);

}


// Called when the game starts
void USingingMelodyCP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	

	UVoiceOfTheOceanGameInstance* gameInstance = Cast<UVoiceOfTheOceanGameInstance>(GetWorld()->GetGameInstance());
	if (gameInstance)
	{
		UVerbManager* verbManager{ gameInstance->GetVerbManager() };
		if (IsValid(verbManager))
		{
			ValidVerbs = verbManager->GetVerbs();
		}
	}

}


// Called every frame
void USingingMelodyCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

bool USingingMelodyCP::AddNote(FMusicalNote newNote)
{
	if (newNote.NoteName == MusicalNoteName::None)
		return false;

	if (MelodyNotes.Num() >= MaxNotes)
		return false;


	OnMelodyUnconfirmed.Broadcast();
	MelodyNotes.Add(newNote);
	return true;
}

bool USingingMelodyCP::RemoveLastNote()
{
	if (MelodyNotes.IsEmpty())
		return false;

	OnMelodyUnconfirmed.Broadcast();

	// Remove last added note.
	MelodyNotes.RemoveAt(MelodyNotes.Num() - 1);
	return true;
}

void USingingMelodyCP::CheckIfMelodyIsValid()
{
	IsMelodyConfirmed = true;
	VerbAction = nullptr;
	IsMelodyCorrect = false;
	OnMelodyConfirmed.Broadcast();

	// ** CHECK IF THERE ARE NOTES ** 
	if (MelodyNotes.IsEmpty())
	{
		// NO NOTES ON THE MELODY
		OnMelodyIncorrect.Broadcast();
		GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Red, FString::Printf(TEXT("Melody Incorrect: No notes")));
		return;
	}

	//** CHECK THE AMOUNT OF NOTES **
	// a melody can only be 3 notes ( for now )
	if (MelodyNotes.Num() != 3)
	{
		OnMelodyIncorrect.Broadcast();
		GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Red, FString::Printf(TEXT("Melody Incorrect: Not a valid amount of notes")));
		return;
	}
	
	AFPCharacter* player{ Cast<AFPCharacter>(GetOwner()) };
	if (!player)
		return;

	UCameraRaycastingCP* cameraRaycastCP = player->FindComponentByClass<UCameraRaycastingCP>();
	if (!cameraRaycastCP)
		return;

	// ** CHECK IF PLAYER HAS A TARGET ** 
	if (!cameraRaycastCP->HasATarget())
	{
		// PLAYER DOESN'T HAVE A TARGET
		OnMelodyIncorrect.Broadcast();
		GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Red, FString::Printf(TEXT("Melody Incorrect: No target")));
		return;
	}

	USubjectCP* playerTarget{ cameraRaycastCP->GetTarget() };
	// ** CHECK IF PLAYER TARGET IS THE SAME AS THE MELODY SUBJECT NOTE **
	if (playerTarget->GetMusicalNote() != MelodyNotes[0])
	{
		// PLAYER TARGET IS NOT THE SAME AS THE SUBJECT OF THE MELODY
		OnMelodyIncorrect.Broadcast();
		GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Red, FString::Printf(TEXT("Melody Incorrect: Subject != Target")));
		return;
	}
	
	// ** LOOK FOR A VALID VERB **

	int32 verbNoteIdx1{ INDEX_NONE };
	int32 verbNoteIdx2{ INDEX_NONE };

	bool foundAValidVerb{ false };
	
	for (UVerb* verb : ValidVerbs)
	{
		// Notes from the verb have to be together	
		if (!IsValid(verb))
		{
			GEngine->AddOnScreenDebugMessage(7, 15.0f, FColor::Red, FString::Printf(TEXT("Invalid Verb found in ValidVerbs!")));
			continue;
		}

		verbNoteIdx1 = SearchForVerbNote(verb->GetVerbNotes()[0]);
		verbNoteIdx2 = SearchForVerbNote(verb->GetVerbNotes()[1]);

		if (verbNoteIdx1 == INDEX_NONE || verbNoteIdx2 == INDEX_NONE
			|| verbNoteIdx1 == 0) // Verb can't never be the first note
		{
			// NO VERB FOUND
			continue;
		}

		if ((verbNoteIdx1 < verbNoteIdx2) && (verbNoteIdx2 == verbNoteIdx1 + 1))
		{
			// FOUND A VALID VERB
			foundAValidVerb = true;
			VerbAction = verb;
			break;
		}

	}

	if (!foundAValidVerb)
	{
		OnMelodyIncorrect.Broadcast();
		GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Red, FString::Printf(TEXT("Melody Incorrect: Not a valid verb")));
	}
	else
	{

		// ** MELODY CORRECT **
		GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Green, FString::Printf(TEXT("Melody Correct")));
		OnMelodyCorrect.Broadcast();
		IsMelodyCorrect = true;
	}
		
}

bool USingingMelodyCP::GetIsMelodyConfirmed() const
{
	return IsMelodyConfirmed;
}


int32 USingingMelodyCP::SearchForVerbNote(FMusicalNote noteToFind) const
{
	int32 foundIdx{ INDEX_NONE };
	// Don't look the first note since of the array that is always going to be the subject
	for (int32 melodyIdx{ 1 }; melodyIdx < MelodyNotes.Num(); ++melodyIdx)
	{
		if (noteToFind == MelodyNotes[melodyIdx])
			return melodyIdx;
	}

	return foundIdx;
}

const TArray<FMusicalNote>& USingingMelodyCP::GetMelodyNotes() const
{
	return MelodyNotes;
}

void USingingMelodyCP::SendVerbActionToTarget()
{
	if (!VerbAction || !IsMelodyCorrect)
		return; // No verb or melody is not correct

	AFPCharacter* player{ Cast<AFPCharacter>(GetOwner()) };
	if (player)
	{
		UCameraRaycastingCP* cameraRaycastCP = player->FindComponentByClass<UCameraRaycastingCP>();
		if (cameraRaycastCP)
		{
			USubjectCP* playerTarget{ cameraRaycastCP->GetTarget() };

			// Send the Action Verb to target Subject
			playerTarget->DoVerbAction(VerbAction);
		}
	}
	
}
