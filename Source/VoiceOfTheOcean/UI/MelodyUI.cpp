// Fill out your copyright notice in the Description page of Project Settings.


#include "MelodyUI.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/HorizontalBox.h"
#include "Components/VerticalBox.h"
#include "Components/SizeBox.h"
#include "NoteUI.h"
#include "Components/Image.h"

void UMelodyUI::NativeConstruct()
{
	Super::NativeConstruct();
	

	for (UWidget* widget : MelodyContainer->GetAllChildren())
	{
		MelodyVerticalBoxes.Add(Cast<UVerticalBox>(widget));
	}

	for (UVerticalBox* verticalBox : MelodyVerticalBoxes)
	{
		MelodySizeBoxes.Add(Cast<USizeBox>(verticalBox->GetChildAt(0)));
	}

	for (USizeBox* sizeBox : MelodySizeBoxes)
	{
		sizeBox->SetVisibility(ESlateVisibility::Hidden);
		Notes.Add(Cast<UNoteUI>(sizeBox->GetChildAt(0)));
	}
}

void UMelodyUI::AddNote(const FMusicalNote& note)
{
	if (CurrentNoteIdx < MelodySizeBoxes.Num())
	{
		// setting note visuals and position
		Notes[CurrentNoteIdx]->SetNote(note);
		SetNotePosition(note.NoteName.GetIntValue());

		// making note visible
		MelodySizeBoxes[CurrentNoteIdx]->SetVisibility(ESlateVisibility::Visible);

		CurrentNoteIdx++;
	}

	CurrentNoteIdx = FMath::Clamp(CurrentNoteIdx, 0, MelodySizeBoxes.Num());
}

void UMelodyUI::SetNotePosition(int noteNr)
{
	noteNr -= 6; // shift down half octave

	float notePositionScalar{ (1.0f / 12.0f) * noteNr }; //
	float notePositionScaled{ (notePositionScalar * static_cast<float>(NoteYPositionRange)) * -1.0f };
	Notes[CurrentNoteIdx]->SetRenderTranslation(FVector2D(0, notePositionScaled));
}

void UMelodyUI::RemoveLastNote()
{
	if (CurrentNoteIdx >= 0)
	{
		CurrentNoteIdx--;

		// making note visible
		MelodySizeBoxes[CurrentNoteIdx]->SetVisibility(ESlateVisibility::Hidden);
	}

	CurrentNoteIdx = FMath::Clamp(CurrentNoteIdx, 0, MelodySizeBoxes.Num());
}

void UMelodyUI::RemoveAllNotes()
{
	for (USizeBox* sizeBox : MelodySizeBoxes)
	{
		sizeBox->SetVisibility(ESlateVisibility::Hidden);
	}
}

void UMelodyUI::UpdateNote(int melodyStep, float noteProgress)
{
	Notes[melodyStep]->SetNoteProgress(noteProgress);
}

void UMelodyUI::ResetNotes()
{
	for (auto note : Notes)
	{
		note->ResetNoteProgress();
	}
}
