// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PipePoison.generated.h"

class UBoxComponent;
class AFPCharacter;
class UNiagaraComponent;
class UNiagaraSystem;
class UArrowComponent;
UCLASS()
class VOICEOFTHEOCEAN_API APipePoison : public AActor
{
	GENERATED_BODY()


protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poison | Collision")
	UBoxComponent* PoisonCollisionBox;

	AFPCharacter* Player;

	// The Niagara Component for this actor
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Poison |Effects")
	UNiagaraComponent* PoisonNiagaraCP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Poison | Direction")
	UArrowComponent* PoisonDirection;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poison | Parameters | Damage")
	float DamageRate{ 1.f };

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poison | Parameters | Damage")
	float DamageValue{ 1.f };

	//** If true it will begin activated **
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Poison | Parameters | Niagara")
	bool IsActive{ true };

private:
	bool IsPlayerInPoison{ false };	
	float LastDamageTime{ 0.f };

	void DoDamageToPlayer(float DeltaTime);

public:	
	// Sets default values for this actor's properties
	APipePoison();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UFUNCTION()
	void OnPoisonOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
		int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
	UFUNCTION()
	void OnPoisonOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
