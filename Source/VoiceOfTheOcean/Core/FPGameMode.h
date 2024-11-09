// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "FPGameMode.generated.h"

/**
 * 
 */
class ARespawnPoint;
UCLASS()
class VOICEOFTHEOCEAN_API AFPGameMode : public AGameModeBase
{
	GENERATED_BODY()

private:
	// SLOW MOTION
	float SlowMotionValue{ 0.2f };
	bool IsSlowMotionActive{ false };

	TArray<ARespawnPoint*> RespawnPoints;

public:
	AFPGameMode();

	// SLOW MOTION EFFECT 
	void ToggleSlowMotion();
	void StopSlowMotion();
	void StartSlowMotion();

	void RespawnPlayer();

protected:
	virtual void BeginPlay() override;

private:
	void GetAllRespawnPointsFromWorld();
	FVector GetClosestRespawPoint(FVector playerPosition) const;
	
};
