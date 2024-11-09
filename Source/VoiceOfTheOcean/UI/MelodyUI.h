// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "../Core/VOTOStatics.h"
#include "MelodyUI.generated.h"

class UCanvasPanel;
class UHorizontalBox;
class UVerticalBox;
class USizeBox;
class UNoteUI;

/**
 * 
 */
UCLASS()
class VOICEOFTHEOCEAN_API UMelodyUI : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<UCanvasPanel> MelodyCanvas;
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	UHorizontalBox* MelodyContainer;
	UPROPERTY(BlueprintReadOnly)
	TArray<UVerticalBox*> MelodyVerticalBoxes;
	UPROPERTY(BlueprintReadOnly)
	TArray<USizeBox*> MelodySizeBoxes;
	UPROPERTY(BlueprintReadOnly)
	TArray<UNoteUI*> Notes;

public:
	//void AddNote(int indexInPhrase, const FMusicalNote& note);
	void AddNote(const FMusicalNote& note);
	void RemoveLastNote();
	void RemoveAllNotes();
	void UpdateNote(int melodyStep, float noteProgress);
	void ResetNotes();

private:
	int CurrentNoteIdx{};
	const int MaxNrOfNotes{ 6 };

	UPROPERTY(EditAnywhere, Category = "Note|Positioning")
	double NoteYPositionRange{ 380 };

	void SetNotePosition(int noteNr);
};