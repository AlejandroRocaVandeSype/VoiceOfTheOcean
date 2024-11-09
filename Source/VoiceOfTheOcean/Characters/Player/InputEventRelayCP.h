// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "InputEventRelayCP.generated.h"

// Declare Delegates for relevant input actions
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAddNote);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDiveDown);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDiveUp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnFastSwim);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnInteractUI);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnLook);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMove);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPause);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPickUp);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRemoveNote);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSing);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API UInputEventRelayCP : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInputEventRelayCP();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Singing
	UPROPERTY(BlueprintAssignable, Category = "InputEvents|Singing")
    FOnSing OnSing;
    void HandleSing();

	UPROPERTY(BlueprintAssignable, Category = "InputEvents|Singing")
    FOnInteractUI OnInteractUI;
    void HandleInteractUI();

    UPROPERTY(BlueprintAssignable, Category = "InputEvents|Singing")
    FOnAddNote OnAddNote;
    void HandleAddNote();

	UPROPERTY(BlueprintAssignable, Category = "InputEvents|Singing")
    FOnRemoveNote OnRemoveNote;
    void HandleRemoveNote();





		
};
