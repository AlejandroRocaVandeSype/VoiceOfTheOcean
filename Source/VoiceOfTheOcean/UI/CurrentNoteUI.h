// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Core/VOTOStatics.h"
#include "Blueprint/UserWidget.h"
#include "CurrentNoteUI.generated.h"

class UNoteUI;
class UCanvasPanel;
class UVerticalBox;

/**
 * 
 */
UCLASS()
class VOICEOFTHEOCEAN_API UCurrentNoteUI : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;

	UFUNCTION(BlueprintCallable)
	void SetCurrentNote(const FMusicalNote& MusicalNote);
	UFUNCTION(BlueprintCallable)
	void ResetCurrentNote();

	UFUNCTION(BlueprintCallable)
	void SetCurrentNoteTargetPosition(TEnumAsByte<MusicalNoteName> NoteName);
	UFUNCTION(BlueprintCallable)
	void UpdateCurrentNotePosition();

private:
	// Components
	UPROPERTY(meta = (BindWidget))
	UNoteUI* CurrentNote;
	UPROPERTY(meta = (BindWidget))
	UCanvasPanel* NoteCanvas;
	UPROPERTY(meta = (BindWidget))
	UVerticalBox* NoteContainer;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CurrentNote", meta = (AllowPrivateAccess = "true"))
	float TargetYPosition{ 0 };
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CurrentNote", meta = (AllowPrivateAccess = "true"))
	float CurrentYPostion{ 0 };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CurrentNote", meta = (AllowPrivateAccess = "true"))
	float TopOffset{ 340 };

	FMusicalNote Note;

	TArray<FMusicalNote> LastNotes;
	const int NrOfNotes{ 5 };
	int CurrentNoteIndex{ 0 };

	void AddNewNoteToArray(const FMusicalNote& musicalNote);
	FMusicalNote GetAverageNote();
};
