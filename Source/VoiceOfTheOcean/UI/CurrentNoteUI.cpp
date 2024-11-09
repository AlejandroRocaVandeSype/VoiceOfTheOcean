// Fill out your copyright notice in the Description page of Project Settings.


#include "CurrentNoteUI.h"
#include "NoteUI.h"
#include "Components/CanvasPanel.h"
#include "Components/VerticalBox.h"
#include "Components/CanvasPanelSlot.h"

#include "../Core/VOTOStatics.h"
#include "Kismet/KismetMathLibrary.h"

void UCurrentNoteUI::NativeConstruct()
{
	Super::NativeConstruct();

	LastNotes.SetNumZeroed(NrOfNotes, EAllowShrinking::Yes);
	CurrentNote->SetNoteProgress(1.0f);
}

void UCurrentNoteUI::SetCurrentNote(const FMusicalNote& MusicalNote)
{
	if (MusicalNote.NoteName != MusicalNoteName::None)
	{
		AddNewNoteToArray(MusicalNote);
		Note = GetAverageNote();

		CurrentNote->SetNote(Note);
		SetCurrentNoteTargetPosition(Note.NoteName);
	}
	CurrentNote->SetNoteProgress(1.0f);
}

void UCurrentNoteUI::ResetCurrentNote()
{
	FMusicalNote MusicalNote(MusicalNoteName::C, 0, UVOTOStatics::FindNoteByName(MusicalNoteName::None).NoteColor);
	CurrentNote->SetNote(MusicalNote);
	SetCurrentNoteTargetPosition(MusicalNote.NoteName);
}

void UCurrentNoteUI::SetCurrentNoteTargetPosition(TEnumAsByte<MusicalNoteName> NoteName)
{
	UCanvasPanelSlot* canvasSlot{ Cast<UCanvasPanelSlot>(NoteContainer->Slot) };
	float canvasHeight = canvasSlot->GetSize().Y;
	FString str = FString::SanitizeFloat(canvasHeight);
	GEngine->AddOnScreenDebugMessage(6, 15.0f, FColor::Red, str);
	UCanvasPanelSlot* currentNoteSlot{ Cast<UCanvasPanelSlot>(CurrentNote->Slot) };

	// Updating target position of note
	TargetYPosition = (((NoteName.GetIntValue() + 1.0f) / 12.0f) * ((canvasHeight - TopOffset) * -1)) - (NoteName.GetIntValue() / 12.0f);

	//noteSlot->SetAnchors(noteSlot->GetAnchors())
	float newPositionY = FMath::FInterpTo(currentNoteSlot->GetPosition().Y, TargetYPosition, GetWorld()->DeltaTimeSeconds, 50.0f);
	currentNoteSlot->SetPosition(FVector2D(0.0f, newPositionY));

}

void UCurrentNoteUI::UpdateCurrentNotePosition()
{
	//float newPositionY = FMath::FInterpTo(CurrentNote->GetRenderTransform().Translation.Y, TargetYPosition, GetWorld()->DeltaTimeSeconds, 1.0f);
	
}

void UCurrentNoteUI::AddNewNoteToArray(const FMusicalNote& musicalNote)
{
	if (LastNotes.Num() == NrOfNotes)
	{
		LastNotes[CurrentNoteIndex] = musicalNote;
		CurrentNoteIndex++;
		CurrentNoteIndex %= NrOfNotes;
	}
}

FMusicalNote UCurrentNoteUI::GetAverageNote()
{
	TArray<int> notes;
	notes.SetNumZeroed(12);

	for (const FMusicalNote& note : LastNotes)
	{
		notes[note.NoteName.GetIntValue()]++;
	}

	int maxNote;
	int maxValue;

	UKismetMathLibrary::MaxOfIntArray(notes, maxNote, maxValue);

	return UVOTOStatics::FindNoteByIndex(maxNote);
}