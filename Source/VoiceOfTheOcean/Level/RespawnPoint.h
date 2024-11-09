// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RespawnPoint.generated.h"

class UArrowComponent;
UCLASS()
class VOICEOFTHEOCEAN_API ARespawnPoint : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(VisibleAnywhere, Category = "Components")
	UArrowComponent* RespawnDirection;

public:	
	// Sets default values for this actor's properties
	ARespawnPoint();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	FVector GetRespawnDirection() const;

};
