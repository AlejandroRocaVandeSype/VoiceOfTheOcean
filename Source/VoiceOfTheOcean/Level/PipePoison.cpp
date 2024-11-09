// Fill out your copyright notice in the Description page of Project Settings.


#include "Level/PipePoison.h"
#include "Components/BoxComponent.h"
#include "Characters\Player\FPCharacter.h"
#include "Characters\Player\HealthCP.h"
#include "Kismet\GameplayStatics.h"
#include "NiagaraFunctionLibrary.h"
#include "NiagaraComponent.h"
#include "NiagaraSystem.h"
#include "Components/ArrowComponent.h"



// Sets default values
APipePoison::APipePoison()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PoisonNiagaraCP = CreateDefaultSubobject<UNiagaraComponent>(TEXT("PoisonNiagaraComponent"));
	RootComponent = PoisonNiagaraCP;

	PoisonCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("PoisonCollisionBox"));
	PoisonCollisionBox->SetupAttachment(RootComponent);

	PoisonDirection = CreateDefaultSubobject<UArrowComponent>(TEXT("PoisonArrowCP"));
	PoisonDirection->SetupAttachment(RootComponent);
	
}

// Called when the game starts or when spawned
void APipePoison::BeginPlay()
{
	Super::BeginPlay();
	
	PoisonCollisionBox->OnComponentBeginOverlap.AddDynamic(this, &APipePoison::OnPoisonOverlapBegin);
	PoisonCollisionBox->OnComponentEndOverlap.AddDynamic(this, &APipePoison::OnPoisonOverlapEnd);

	Player = Cast<AFPCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (PoisonNiagaraCP)
	{
		if (IsActive)
		{
			PoisonNiagaraCP->Activate(true);
			PoisonNiagaraCP->ActivateSystem();
		}
	}

	LastDamageTime = DamageRate;

}

void APipePoison::OnPoisonOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp,
	int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!IsActive)
		return;		// Not activated so dont check

	if (Cast<AFPCharacter>(OtherActor))
		IsPlayerInPoison = true;
	
}

void APipePoison::OnPoisonOverlapEnd(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, 
	int32 OtherBodyIndex)
{
	if (!IsActive)
		return;		

	if (IsPlayerInPoison && Cast<AFPCharacter>(OtherActor))
	{
		IsPlayerInPoison = false;
		LastDamageTime = DamageRate;
	}

}


void APipePoison::DoDamageToPlayer(float DeltaTime)
{

	LastDamageTime += DeltaTime;
	if (LastDamageTime >= DamageRate)
	{
		LastDamageTime = 0.f;
		UHealthCP* healthCP{ Player->FindComponentByClass<UHealthCP>() };
		if (healthCP)
		{
			healthCP->TakeDamage(DamageValue);
		}
	}
}

// Called every frame
void APipePoison::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsActive)
		LastDamageTime = 0.f;

	if (!Player)
		return;

	if (IsPlayerInPoison)
	{
		DoDamageToPlayer(DeltaTime);
	}
	

}

