// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Internationalization/Culture.h"
#include "Internationalization/Internationalization.h"
#include "MenuUI.generated.h"

/**
 * 
 */

UCLASS()
class VOICEOFTHEOCEAN_API UMenu : public UUserWidget
{
	GENERATED_BODY()

private:
	FText LanguageText;
	FText SoundText;

	TArray<FString> SupportedLanguages;
	int32 CurrentLanguageIndex;

protected:
	virtual void NativeConstruct() override;

public:
	UFUNCTION(BlueprintCallable)
	void ChangeLanguage();
	
};
