// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Player/HealthCP.h"
#include "Components/PostProcessComponent.h"

// Sets default values for this component's properties
UHealthCP::UHealthCP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

	CurrentHealth = MaxHealth;

	DamagePostProcessingCP = CreateDefaultSubobject<UPostProcessComponent>(TEXT("DamagePostProcessingCP"));
	DamagePostProcessingCP->bUnbound = true;
}



// Called when the game starts
void UHealthCP::BeginPlay()
{
	Super::BeginPlay();

	// ...

	if (DamagePostProcessingCP)
	{
		// Create dynamic material instance from the post-process material
		DynamicDamageMaterial = UMaterialInstanceDynamic::Create(DamagePostProcessMaterial, this);

		// Apply the dynamic material to the Post Process Component
		DamagePostProcessingCP->Settings.WeightedBlendables.Array.Add(FWeightedBlendable(1.0f, DynamicDamageMaterial));

	}
	
}


// Called every frame
void UHealthCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);


	GEngine->AddOnScreenDebugMessage(8, 15.0f, FColor::Green, FString::Printf(TEXT("Current Lifes: %d"), CurrentHealth));
	float currenDamageValue{};
	DynamicDamageMaterial->GetScalarParameterValue(FName("Damage"), currenDamageValue);
	GEngine->AddOnScreenDebugMessage(9, 15.0f, FColor::Green, FString::Printf(TEXT("Damage Amount: %f"), currenDamageValue));

	// ...
	if (CurrentHealth == 0 || CurrentHealth == MaxHealth)
		return;		// Don't heal if dead or at max health already

	UpdateHeal(DeltaTime);

}


void UHealthCP::TakeDamage(int damageValue)
{
	if (CurrentHealth == 0)
		return;

	CurrentHealth -= damageValue;
	CurrentHealth = FMath::Clamp(CurrentHealth, 0, MaxHealth);
	OnPlayerLoseDamage.Broadcast();

	// Reset last time it was hit to avoid being healed while being damaged
	LastTimeDamaged = 0.f;

	if (CurrentHealth == 0)
		OnPlayerDeath.Broadcast();

	UpdateDamageEffect();

}

void UHealthCP::ResetHealth()
{
	CurrentHealth = MaxHealth;
	DynamicDamageMaterial->SetScalarParameterValue(FName("Damage"), 0.f);
	LastTimeDamaged = 0.f;
}


void UHealthCP::UpdateDamageEffect()
{
	float currentDamageValue{};
	DynamicDamageMaterial->GetScalarParameterValue(FName("Damage"), currentDamageValue);

	currentDamageValue += DamageEffectInc;
	currentDamageValue = FMath::Clamp(currentDamageValue, 0.f, 1.f);
	DynamicDamageMaterial->SetScalarParameterValue(FName("Damage"), currentDamageValue);
	
}

void UHealthCP::UpdateHeal(float DeltaTime)
{
	LastTimeDamaged += DeltaTime;
	if (LastTimeDamaged > TimeToStartHeal)
	{
		float currenDamageValue{};
		DynamicDamageMaterial->GetScalarParameterValue(FName("Damage"), currenDamageValue);

		currenDamageValue -= DeltaTime * HealRate;
		currenDamageValue = FMath::Clamp(currenDamageValue, 0.f, 1.f);
		DynamicDamageMaterial->SetScalarParameterValue(FName("Damage"), currenDamageValue);

		UpdateLifes(currenDamageValue);
	}
}


void UHealthCP::UpdateLifes(float currentDamageValue)
{
	if (currentDamageValue >= DamageEffectInc && currentDamageValue <= 0.65f)
	{
		CurrentHealth = 2;
	}
	else if (currentDamageValue <= 0.f )
	{
		CurrentHealth = MaxHealth;
	}

}


