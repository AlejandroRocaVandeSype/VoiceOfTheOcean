// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Core/VOTOStatics.h"
#include "Blueprint/UserWidget.h"
#include "NoteUI.generated.h"

class UTextBlock;
class UImage;

/**
 * 
 */
UCLASS()
class VOICEOFTHEOCEAN_API UNoteUI : public UUserWidget
{
	GENERATED_BODY()

public:
	void NativeConstruct() override;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Note")
	FName NoteColorParamName;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Note")
	FName NoteFillRadiusParamName;

	UFUNCTION(BlueprintCallable)
	void SetNote(const FMusicalNote& musicalNote);
	UFUNCTION(BlueprintCallable)
	void SetNoteProgress(float progress);
	UFUNCTION(BlueprintCallable)
	void ResetNoteProgress();

private:
	UPROPERTY(meta = (BindWidget))
	UTextBlock* NoteText;
	UPROPERTY(meta = (BindWidget))
	UImage* NoteFront;
	UPROPERTY(meta = (BindWidget))
	UImage* NoteFill;

	float NoteProgress;

	void SetNoteVisuals(const FMusicalNote& musicalNote);
	void SetNoteName(TEnumAsByte<MusicalNoteName> noteName);
	void SetNoteColor(FLinearColor noteColor);

};
