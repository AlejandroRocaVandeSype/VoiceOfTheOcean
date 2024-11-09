// Fill out your copyright notice in the Description page of Project Settings.


#include "Core/FPGameMode.h"
#include "Characters/Player/FPCharacter.h"
#include "Core/FPPlayerController.h"
#include "UObject/ConstructorHelpers.h"
#include "GameFramework/PhysicsVolume.h"
#include "Kismet/GameplayStatics.h"
#include "Level\RespawnPoint.h"


AFPGameMode::AFPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Blueprints/Characters/BP_FPCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	static ConstructorHelpers::FClassFinder<AFPPlayerController> PlayerControllerClassFinder(TEXT("/Game/Blueprints/Core/BP_FPPlayerController"));
	PlayerControllerClass = PlayerControllerClassFinder.Class;
}

void AFPGameMode::BeginPlay()
{
	// Set the default World physics as Water Volume
	APhysicsVolume* DefaultWaterVolume = GetWorld()->GetDefaultPhysicsVolume();
	if (DefaultWaterVolume)
	{
		DefaultWaterVolume->bWaterVolume = true;
	}

	GetAllRespawnPointsFromWorld();

}

// Get all the respawn points from the world
void AFPGameMode::GetAllRespawnPointsFromWorld()
{	
	TArray<AActor*> respawnsFound;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), ARespawnPoint::StaticClass(), respawnsFound);

	for (AActor* actor : respawnsFound)
	{
		ARespawnPoint* respawnPoint{ Cast<ARespawnPoint>(actor) };
		if (respawnPoint)
		{
			RespawnPoints.Add(respawnPoint);

		}
	}
}

FVector AFPGameMode::GetClosestRespawPoint(FVector playerPosition) const
{
	float closestDistance{ MAX_flt };
	float newDistance{ 0.f };
	FVector closestRespawnPosition{};
	for (ARespawnPoint* respawnPoint : RespawnPoints)
	{
		FVector respawnPosition{ respawnPoint->GetActorLocation() };

		// Cheaper function that avoids taking the square root
		newDistance = FVector::DistSquared(respawnPosition, playerPosition);
		if (newDistance < closestDistance)
		{
			// Found a closer respawnPoint to respawn
			closestDistance = newDistance;
			closestRespawnPosition = respawnPosition;
		}
	}

	return closestRespawnPosition;
}

void AFPGameMode::ToggleSlowMotion()
{
	if (IsSlowMotionActive)
	{
		StopSlowMotion();
	}
	else
	{
		StartSlowMotion();
	}
}

void AFPGameMode::StopSlowMotion()
{
	if (IsSlowMotionActive)
	{
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), 1.f);
		IsSlowMotionActive = false;
	}
}

void AFPGameMode::StartSlowMotion()
{
	if (!IsSlowMotionActive)
	{
		UGameplayStatics::SetGlobalTimeDilation(GetWorld(), SlowMotionValue);
		IsSlowMotionActive = true;
	}
}

void AFPGameMode::RespawnPlayer()
{
	AActor* foundActor{ UGameplayStatics::GetActorOfClass(GetWorld(), AFPCharacter::StaticClass()) };
	if (!foundActor)
		return;

	AFPCharacter* player{ Cast<AFPCharacter>(foundActor) };
	if (!player)
		return;

	FVector closestRespawnPosition{ GetClosestRespawPoint(player->GetActorLocation()) };	
	player->RespawnPlayer(closestRespawnPosition);


	// EXTRA STUFF THAT NEEDS TO BE RESET SHOULD BE DONE HERE
		// RESET PUZZLES
		// ENEMIES 
		// ETC

}
