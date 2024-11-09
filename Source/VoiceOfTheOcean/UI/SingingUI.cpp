// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/SingingUI.h"
#include "UI/RadialMenuUI.h"
#include "UI/MelodyUI.h"
#include "UI/CurrentNoteUI.h"
#include "Components/CanvasPanel.h"
#include "Components/CanvasPanelSlot.h"
#include "Components/ScaleBox.h"
#include "Components/ScaleBoxSlot.h"
#include "Core/VOTOStatics.h"
#include "Characters/Player/SingingMelodyCP.h"
#include "Characters/Player/FPCharacter.h"
#include "InputActionValue.h"
#include "Kismet/GameplayStatics.h"


void USingingUI::NativeConstruct()
{
	// Create and set up sub widgets 
	CreateRadialMenuFromClass();
	CreateMelodyPreviewFromClass();

}

void USingingUI::CreateMelodyPreviewFromClass()
{
	if (MelodyUIClass)
	{
		MelodyUI = CreateWidget<UMelodyUI>(this, MelodyUIClass);
		if (MelodyUICanvas)
		{
			auto canvasPanelSlot = MelodyUICanvas->AddChildToCanvas(MelodyUI);
			canvasPanelSlot->SetAnchors(FAnchors(0, 0, 1, 1));
		}
	}
}

void USingingUI::CreateRadialMenuFromClass()
{
	if (RadialMenuClass)
	{
		RadialMenu = CreateWidget<URadialMenu>(this, RadialMenuClass);
		if (RadialMenu)
		{
			// AddChild returns a generic PanelSlot, we need to cast to the correct type of panel slot
			if (UPanelSlot* panelSlot = RadialMenuScaleBox->AddChild(RadialMenu))
			{
				if (UScaleBoxSlot* scaleBoxSlot = Cast<UScaleBoxSlot>(panelSlot))
				{
					scaleBoxSlot->SetHorizontalAlignment(HAlign_Center);
					scaleBoxSlot->SetVerticalAlignment(VAlign_Center);
				}
			}
		}
		RadialMenu->SetRenderTransformPivot({ 0.0f,1.0f });
	}
}

void USingingUI::RadialNotesUINavigation(const FInputActionValue& Value, bool IsCompleted)
{
	FVector2D InputVector = Value.Get<FVector2D>();

	if (!RadialMenu)
		return;

	if (IsCompleted)
	{
		// If player stopped pointing with the joystick
		RadialMenu->FinishArrowNavigation();
		return;
	}

	if (!InputVector.IsNearlyZero())
	{
		RadialMenu->HandleRadialNavigation(InputVector);
	}

}

void USingingUI::SelectNote()
{
	if (!SingingMelodyCP)
		GetMelodyCP();

	if (RadialMenu)
	{
		FMusicalNote selectedNote{ RadialMenu->GetNote() };
		if (selectedNote.NoteName != MusicalNoteName::None)
		{
			// CHECK IF NOTE CAN BE ADDED TO THE MELODY
			if (SingingMelodyCP->AddNote(selectedNote))
			{
				// ADD NOTE TO THE UI
				MelodyUI->AddNote(selectedNote);
			}
			
		}
		else
		{
			// No note was selected -> Means player wants to confirm
			SingingMelodyCP->CheckIfMelodyIsValid();
		}
	}
}

void USingingUI::RemoveNote()
{
	if (!SingingMelodyCP)
		GetMelodyCP();

	if(MelodyUI)
	{
		if(SingingMelodyCP->RemoveLastNote())
			MelodyUI->RemoveLastNote();
	}
}


void USingingUI::GetMelodyCP()
{
	if (SingingMelodyCP)
		return;			// Already have the component

	AFPCharacter* player = Cast<AFPCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	if (player)
	{
		SingingMelodyCP = player->FindComponentByClass<USingingMelodyCP>();
	}
	
}

void USingingUI::UpdateMelodyNote(int melodyStep, float noteProgress)
{
	MelodyUI->UpdateNote(melodyStep, noteProgress);
}

void USingingUI::ResetMelodyUI()
{
	MelodyUI->ResetNotes();
}

void USingingUI::SetCurrentNote(const FMusicalNote& musicalNote)
{
	CurrentNoteUI->SetCurrentNote(musicalNote);
}
