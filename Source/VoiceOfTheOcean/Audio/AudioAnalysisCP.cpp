// Fill out your copyright notice in the Description page of Project Settings.


#include "AudioAnalysisCP.h"
#include "Sound/SoundSubmix.h"
#include "Sound/SoundSubmixSend.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values for this component's properties
UAudioAnalysisComponent::UAudioAnalysisComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UAudioAnalysisComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	OnSubmixAnalysis.BindDynamic(this, &UAudioAnalysisComponent::DeterminePitch);
	float updateRate{ 30.0f };
	bool doAutoRange{ true }, doNormalize{ true };
	SubmixToAnalyse->AddSpectralAnalysisDelegate(GetWorld(), BandSettings, OnSubmixAnalysis, updateRate, DecibelNoiseFloor, doNormalize, doAutoRange);
	OnEnvelopeValueChange.BindDynamic(this, &UAudioAnalysisComponent::UpdateEnvelopeData);
	SubmixToAnalyse->AddEnvelopeFollowerDelegate(GetWorld(), OnEnvelopeValueChange);
}


// Called every frame
void UAudioAnalysisComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UAudioAnalysisComponent::DeterminePitch(const TArray<float>& Magnitudes)
{
	int noteIndex;
	float noteMagnitude;
	UKismetMathLibrary::MaxOfFloatArray(Magnitudes, noteIndex, noteMagnitude);

	if (noteMagnitude > MagnitudeThreshold)
	{
		UpdatePitchData(noteIndex % 12);
	}
	else
	{
		UpdatePitchData(12);
	}
}

void UAudioAnalysisComponent::StartPitchDetection()
{
	float hopSize{0.0f};
	SubmixToAnalyse->StartSpectralAnalysis(GetWorld(), EFFTSize::Max,
													   EFFTPeakInterpolationMethod::Quadratic,
													   EFFTWindowType::Hann,
													   hopSize,
													   EAudioSpectrumType::Decibel);
}
void UAudioAnalysisComponent::StopPitchDetection()
{
	SubmixToAnalyse->StopSpectralAnalysis(GetWorld());
	UpdatePitchData(12);
}

void UAudioAnalysisComponent::GetPitchData(TEnumAsByte<MusicalNoteName>& noteName, FLinearColor& noteColor, int& noteNumber)
{
	noteName = CurrentNoteName;
	noteColor = CurrentNoteColor;
	noteNumber = CurrentNoteNumber;
}

void UAudioAnalysisComponent::UpdatePitchData(int noteNumber)
{
	CurrentNoteNumber = noteNumber;
	CurrentNoteName = UVOTOStatics::FindNoteByIndex(CurrentNoteNumber).NoteName;
	CurrentNoteColor = UVOTOStatics::FindNoteByName(CurrentNoteName).NoteColor;

	OnPitchUpdate.Broadcast(CurrentNoteName, CurrentNoteColor, CurrentNoteNumber);
}

void UAudioAnalysisComponent::GetVolumeData(const TArray<float>& EnvelopeData)
{

}

void UAudioAnalysisComponent::UpdateEnvelopeData(const TArray<float>& EnvelopeData)
{
	int noteIndex{};
	float envelopeValue{};
	UKismetMathLibrary::MaxOfFloatArray(EnvelopeData, noteIndex, envelopeValue);
	OnEnvelopeUpdate.Broadcast(envelopeValue);
}

void UAudioAnalysisComponent::StartEnvelopeFollowing()
{
	SubmixToAnalyse->StartEnvelopeFollowing(GetWorld());
}

void UAudioAnalysisComponent::StopEnvelopeFollowing()
{
	SubmixToAnalyse->StopEnvelopeFollowing(GetWorld());
}
