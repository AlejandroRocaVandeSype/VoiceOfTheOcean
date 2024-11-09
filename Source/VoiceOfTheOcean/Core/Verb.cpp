// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/Verb.h"


UVerb::UVerb(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{

	VerbNotes.Reserve(MaxNotes);
}

void UVerb::InitializeVerb(FString newVerbName, TArray<FMusicalNote> newVerbNotes)
{
	if (newVerbNotes.Num() == 2)
	{
		VerbName = newVerbName;
		VerbNotes.Append(newVerbNotes);
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("The Verb cannot be added. Number of notes are incorrect. Only 2 notes are possible"));
	}
}

FString UVerb::GetVerbName() const
{
	return VerbName;
}

TArray<FMusicalNote> UVerb::GetVerbNotes() const
{
	return VerbNotes;
}
