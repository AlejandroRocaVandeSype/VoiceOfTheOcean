// Fill out your copyright notice in the Description page of Project Settings.


#include "../Core/FPPlayerController.h"
#include "../UI/SingingUI.h"
#include "InputActionValue.h"
#include "EnhancedInputSubsystems.h"


AFPPlayerController::AFPPlayerController()
	:Super()
{

}

void AFPPlayerController::BeginPlay()
{
	if (SingingUIClass)
	{
		SingingUI = CreateWidget<USingingUI>(this, SingingUIClass);
	}

	if (SingingUI)
	{
		// Add it to the viewport and hide it 
		SingingUI->AddToViewport();
		SingingUI->SetVisibility(ESlateVisibility::Hidden);
	}

	if (DefaultMappingContext)
	{
		ChangeInputMappingContext(EInputMappingContextMode::Default);
	}
	
}

// Add a new Mapping Context and remove the old one
void AFPPlayerController::ChangeInputMappingContext(EInputMappingContextMode newInputMappingMode)
{
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(this->GetLocalPlayer()))
	{
		if (CurrentMappingContext)
		{
			// If there was a mapping Context already -> Remove it
			Subsystem->RemoveMappingContext(CurrentMappingContext);
		}

		switch (newInputMappingMode)
		{
			case EInputMappingContextMode::Default:
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
				CurrentMappingContext = DefaultMappingContext;
				break;
			case EInputMappingContextMode::Singing:
				Subsystem->AddMappingContext(SingingMappingContext, 0);
				CurrentMappingContext = SingingMappingContext;
				break;
			default:
				Subsystem->AddMappingContext(DefaultMappingContext, 0);
				CurrentMappingContext = DefaultMappingContext;
				break;
		}

		
	}
}

void AFPPlayerController::ToggleSingingUIVisibility()
{
	if (SingingUI->GetVisibility() == ESlateVisibility::Visible)
	{
		SingingUI->SetVisibility(ESlateVisibility::Hidden);
	}
	else
	{
		SingingUI->SetVisibility(ESlateVisibility::Visible);
	}
}

void AFPPlayerController::HideSingingUI()
{
	if (SingingUI->GetVisibility() == ESlateVisibility::Visible)
			SingingUI->SetVisibility(ESlateVisibility::Hidden);
}

void AFPPlayerController::RadialNotesUINavigation(const FInputActionValue& Value, bool IsCompleted)
{
	if (SingingUI)
	{
		SingingUI->RadialNotesUINavigation(Value, IsCompleted);
	}

}

void AFPPlayerController::SelectNote()
{
	if (SingingUI)
	{
		SingingUI->SelectNote();
	}

}

void AFPPlayerController::RemoveNote()
{
	if (SingingUI)
	{
		SingingUI->RemoveNote();
	}

}

// Camera Fade In/Out with the specified time
void AFPPlayerController::StartCameraFade(bool isFadeIn, float fadeTime)
{
	float fromAlpha{ 1.f };
	float targetAlpha{ 0.f };

	if (isFadeIn)
	{
		fromAlpha = 0.f;
		targetAlpha = 1.f;
	}

	PlayerCameraManager->StartCameraFade(fromAlpha, targetAlpha, fadeTime, FLinearColor::Black, true, true);
}

USingingUI& AFPPlayerController::GetSingingUI()
{
	return *SingingUI;
}