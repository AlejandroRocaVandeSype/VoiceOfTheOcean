// Fill out your copyright notice in the Description page of Project Settings.


#include "Level/Mural/Mural.h"

// Sets default values
AMural::AMural()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MuralMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuralMesh"));
	MuralMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AMural::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMural::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

TMap<EMuralPiecesIDs, UStaticMesh*> AMural::GetMuralPiecesMeshLibray() const
{
	return MuralPiecesMeshLibrary;
}

UStaticMesh* AMural::SearchMeshByID(EMuralPiecesIDs meshToFindID)
{
	return *MuralPiecesMeshLibrary.Find(meshToFindID);
}


