// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Characters/Player/InputEventRelayCP.h"

// Sets default values for this component's properties
UInputEventRelayCP::UInputEventRelayCP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInputEventRelayCP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UInputEventRelayCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}

void UInputEventRelayCP::HandleSing()
{
	OnSing.Broadcast();
}

void UInputEventRelayCP::HandleInteractUI()
{
	OnInteractUI.Broadcast();
}

void UInputEventRelayCP::HandleAddNote()
{
	OnAddNote.Broadcast();
}

void UInputEventRelayCP::HandleRemoveNote()
{
	OnRemoveNote.Broadcast();
}

