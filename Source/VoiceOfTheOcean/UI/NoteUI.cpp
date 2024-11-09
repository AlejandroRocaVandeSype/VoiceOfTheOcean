// Fill out your copyright notice in the Description page of Project Settings.


#include "NoteUI.h"
#include "Components/Image.h"
#include "Components/Textblock.h"

#include "Materials/MaterialInstanceDynamic.h"

#include "Kismet/KismetTextLibrary.h"

void UNoteUI::NativeConstruct()
{
	Super::NativeConstruct();

}

void UNoteUI::SetNote(const FMusicalNote& musicalNote)
{
	SetNoteVisuals(musicalNote);
	ResetNoteProgress();
}

void UNoteUI::SetNoteProgress(float progress)
{
	NoteFill->GetDynamicMaterial()->SetScalarParameterValue(NoteFillRadiusParamName, progress * 0.5f);
}

void UNoteUI::ResetNoteProgress()
{
	NoteFill->GetDynamicMaterial()->SetScalarParameterValue(NoteFillRadiusParamName, 0.0f);
}

void UNoteUI::SetNoteName(TEnumAsByte<MusicalNoteName> noteName)
{
	if (noteName.GetValue() == MusicalNoteName::None)
	{
		FString Empty{ " " };
		NoteText->SetText(FText::FromString(Empty));
	}
	else
	{
		NoteText->SetText(UKismetTextLibrary::TextToLower(UEnum::GetDisplayValueAsText(noteName)));
	}
}

void UNoteUI::SetNoteColor(FLinearColor noteColor)
{
	NoteFill->GetDynamicMaterial()->SetVectorParameterValue(NoteColorParamName, noteColor);
	NoteFront->GetDynamicMaterial()->SetVectorParameterValue(NoteColorParamName, noteColor);
}

void UNoteUI::SetNoteVisuals(const FMusicalNote& musicalNote)
{
	SetNoteColor(musicalNote.NoteColor);
	SetNoteName(musicalNote.NoteName);
}