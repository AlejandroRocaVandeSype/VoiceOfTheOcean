// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthCP.generated.h"

class UPostProcessComponent;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API UHealthCP : public UActorComponent
{
	GENERATED_BODY()

public:
	//** EVENTS **/
	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerDeath);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerDeath OnPlayerDeath;

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPlayerLoseDamage);
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnPlayerLoseDamage OnPlayerLoseDamage;

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamagePostProcessing")
	UPostProcessComponent* DamagePostProcessingCP;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "DamagePostProcessing")
	UMaterialInterface* DamagePostProcessMaterial;

	// Dynamic material for the Damage material
	UMaterialInstanceDynamic* DynamicDamageMaterial;

	int CurrentHealth;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	int MaxHealth{ 3 };
	float DamageEffectInc{ 0.35f };

	// HEALING
	float LastTimeDamaged{ 0.f };
	float CurrentHealTime{ 0.f };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float TimeToHeal{ 6.f };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float TimeToStartHeal{ 6.f };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Health")
	float HealRate{ 0.2f };

public:	
	// Sets default values for this component's properties
	UHealthCP();
	UFUNCTION(BlueprintCallable)
	void TakeDamage(int damageValue = 1);

	void ResetHealth();
	void UpdateLifes(float currentDamageValue);

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:
	void UpdateDamageEffect();
	void UpdateHeal(float DeltaTime);
};
