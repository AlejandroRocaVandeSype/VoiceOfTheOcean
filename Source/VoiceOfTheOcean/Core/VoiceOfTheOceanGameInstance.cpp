// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/VoiceOfTheOceanGameInstance.h"
#include "Core/VerbManager.h"


void UVoiceOfTheOceanGameInstance::Init()
{
	Super::Init();

	VerbManager = NewObject<UVerbManager>(this);
	VerbManager->InitializeVerbs();

}

UVerbManager* UVoiceOfTheOceanGameInstance::GetVerbManager()
{
	return VerbManager;
}
