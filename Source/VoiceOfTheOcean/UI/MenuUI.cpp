// Fill out your copyright notice in the Description page of Project Settings.


#include "../UI/MenuUI.h"

#define LOCTEXT_NAMESPACE "MenuTexts"

void UMenu::NativeConstruct()
{

	// Text that is gonna be localized
	LanguageText = LOCTEXT("LanguageKey", "Change Language");
	SoundText = LOCTEXT("SoundKey", "Sound");

	SupportedLanguages.Add(TEXT("en"));  // English
	SupportedLanguages.Add(TEXT("nl-NL"));  // Dutch
	SupportedLanguages.Add(TEXT("es"));  // Spanish
	

	FString currentCulture = FInternationalization::Get().GetCurrentCulture()->GetName();
	int languagedIdx{ SupportedLanguages.Find(currentCulture) };
	if (languagedIdx != INDEX_NONE)
	{
		CurrentLanguageIndex = languagedIdx;
	}


}

#undef LOCTEXT_NAMESPACE


void UMenu::ChangeLanguage()
{

	CurrentLanguageIndex++;
	if (CurrentLanguageIndex >= SupportedLanguages.Num())
	{
		CurrentLanguageIndex = 0;
	}

	FInternationalization::Get().SetCurrentCulture(SupportedLanguages[CurrentLanguageIndex]);
	
}