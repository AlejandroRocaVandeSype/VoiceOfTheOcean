// Fill out your copyright notice in the Description page of Project Settings.


#include "../Core/VerbManager.h"
#include "Verb.h"

UVerbManager::UVerbManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UVerbManager::InitializeVerbs()
{
	// FOLLOW 
	UVerb* FollowVerb{ NewObject<UVerb>(this) };
	TArray<FMusicalNote> followNotes;
	followNotes.Add(UVOTOStatics::FindNoteByName(MusicalNoteName::B));
	followNotes.Add(UVOTOStatics::FindNoteByName(MusicalNoteName::D));
	FString verbName1{ "Follow " };
	FollowVerb->InitializeVerb(verbName1, followNotes);

	// GO
	UVerb* GoVerb{ NewObject<UVerb>(this) };
	TArray<FMusicalNote> goNotes;
	goNotes.Add(UVOTOStatics::FindNoteByName(MusicalNoteName::D));
	goNotes.Add(UVOTOStatics::FindNoteByName(MusicalNoteName::B));
	FString verbName2{ "Go " };
	GoVerb->InitializeVerb(verbName2, goNotes);

	Verbs.AddUnique(FollowVerb);
	Verbs.AddUnique(GoVerb);

}

UVerb* UVerbManager::GetVerbByName(FString verbName) const
{
	for (UVerb* verb : Verbs)
	{
		if (verb->GetName() == verbName)
		{
			return verb;
		}
	}

	return nullptr;
}

TArray<UVerb*> UVerbManager::GetVerbs() const
{
	return Verbs;
}
