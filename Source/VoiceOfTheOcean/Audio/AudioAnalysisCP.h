// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "../Core/VOTOStatics.h"
#include "Components/ActorComponent.h"
#include "AudioAnalysisCP.generated.h"

class USoundSubmix;


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API UAudioAnalysisComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UAudioAnalysisComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// pitch detection properties
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AudioAnalysis|Parameters", meta=(AllowPrivateAccess = "true"))
	USoundSubmix* SubmixToAnalyse;
private:
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "AudioAnalysis|Parameters", meta = (AllowPrivateAccess = "true"))
	TArray<FSoundSubmixSpectralAnalysisBandSettings> BandSettings;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AudioAnalysis|Parameters", meta = (AllowPrivateAccess = "true", UIMin = "-96.0", UIMax = "0.0"))
	float DecibelNoiseFloor;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AudioAnalysis|Parameters", meta = (AllowPrivateAccess = "true"))
	float MagnitudeThreshold;

	// envelope following properties
	

	// current pitch values
	TEnumAsByte<MusicalNoteName> CurrentNoteName{ MusicalNoteName::None };
	FLinearColor CurrentNoteColor{ FLinearColor(0.5f, 0.5f, 0.5f) };
	int CurrentNoteNumber{ -1 };

	// FUNCTIONS
	// Pitch Detection
public:
	UFUNCTION(BlueprintCallable, Category = "AudioAnalysis")
	void StartPitchDetection();
	UFUNCTION(BlueprintCallable, Category = "AudioAnalysis")
	void StopPitchDetection();
private:
	UFUNCTION()
	void DeterminePitch(const TArray<float>& Magnitudes);
	void UpdatePitchData(int noteIndex);

	FOnSubmixSpectralAnalysisBP OnSubmixAnalysis;

	// Envelope Following
	UFUNCTION()
	void UpdateEnvelopeData(const TArray<float>& Envelope);
	UFUNCTION(BlueprintCallable, Category = "AudioAnalysis")
	void StartEnvelopeFollowing();
	UFUNCTION(BlueprintCallable, Category = "AudioAnalysis")
	void StopEnvelopeFollowing();

	FOnSubmixEnvelopeBP OnEnvelopeValueChange;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnPitchUpdate, MusicalNoteName, noteName, FLinearColor, noteColor, int, noteNumber);
	UPROPERTY(BlueprintAssignable, Category = "AudioAnalysis")
	FOnPitchUpdate OnPitchUpdate;
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnEnvelopeUpdate, float, EnvelopeData);
	UPROPERTY(BlueprintAssignable, Category = "AudioAnalysis")
	FOnEnvelopeUpdate OnEnvelopeUpdate;

	UFUNCTION(BlueprintCallable, Category = "AudioAnalysis")
	void GetVolumeData(const TArray<float>& EnvelopeData);

public:
	UFUNCTION(BlueprintCallable, Category = "AudioAnalysis")
	void GetPitchData(TEnumAsByte<MusicalNoteName>& noteName, FLinearColor& noteColor, int& noteNumber);
		
};
