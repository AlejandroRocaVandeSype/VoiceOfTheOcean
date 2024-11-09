// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Core/VOTOStatics.h"
#include "Blueprint/UserWidget.h"
#include "SingingUI.generated.h"


/**
 * 
 */
struct FInputActionValue;
class URadialMenu;
class UMelodyUI;
class USingingMelodyCP;
class UCurrentNoteUI;

UCLASS()
class VOICEOFTHEOCEAN_API USingingUI : public UUserWidget
{
	GENERATED_BODY()

private:
	URadialMenu* RadialMenu;
	UMelodyUI* MelodyUI;			            // UI FOR THE NOTES 
	USingingMelodyCP* SingingMelodyCP;			// LOGIC FOR THE NOTES

	void GetMelodyCP();

protected:
	virtual void NativeConstruct() override;
	void CreateMelodyPreviewFromClass();
	void CreateRadialMenuFromClass();

	// Classes to create and add to the widget
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radial Menu")
	TSubclassOf<class URadialMenu> RadialMenuClass;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Phrase Preview")
	TSubclassOf<UMelodyUI> MelodyUIClass;


	// The widgets to add to
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UImage> BackgroundImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UCanvasPanel> BackgroundCanvas;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UCanvasPanel> MelodyUICanvas;
	
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<class UScaleBox> RadialMenuScaleBox;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UCurrentNoteUI* CurrentNoteUI;

public:
	void RadialNotesUINavigation(const FInputActionValue& Value, bool IsCompleted);
	void SelectNote();
	void RemoveNote();
	void UpdateMelodyNote(int melodyStep, float noteProgress);
	void ResetMelodyUI();
	void SetCurrentNote(const FMusicalNote& musicalNote);

};
