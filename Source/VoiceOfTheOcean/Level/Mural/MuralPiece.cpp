// Fill out your copyright notice in the Description page of Project Settings.


#include "Level/Mural/MuralPiece.h"
#include "Kismet/GameplayStatics.h"
#include "Components/BoxComponent.h"

// Sets default values
AMuralPiece::AMuralPiece()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MuralPieceMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MuralPieceMesh"));
	MuralPieceMesh->SetupAttachment(RootComponent);
	MuralCollisionBox = CreateDefaultSubobject<UBoxComponent>(TEXT("MuralCollisionBox"));
	MuralCollisionBox->SetupAttachment(MuralPieceMesh);


}

// Called when the game starts or when spawned
void AMuralPiece::BeginPlay()
{
	Super::BeginPlay();
	
	AMural* foundMural{ Cast<AMural>(UGameplayStatics::GetActorOfClass(GetWorld(), AMural::StaticClass())) };
	if (foundMural)
	{
		MuralPieceMesh->SetStaticMesh(foundMural->SearchMeshByID(SelectedPieceMesh));
	}

	InitNotesMaterial();
}


// Called every frame
void AMuralPiece::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AMuralPiece::PickUpPiece()
{
	Destroy();
}

void AMuralPiece::InitNotesMaterial()
{
	if (!MuralPieceMesh)
		return;

	// We only care about the materials from the notes, so ignore first material that it is from the mural base
	TArray<UMaterialInterface*> meshMaterials{ MuralPieceMesh->GetMaterials()};
	for (int32 materialIdx{ 1 }; materialIdx < meshMaterials.Num(); ++materialIdx)
	{	
		UMaterialInstanceDynamic* dynamicMaterial = UMaterialInstanceDynamic::Create(meshMaterials[materialIdx], this);
		dynamicMaterial->SetScalarParameterValue("Intensity", 0.f);		// At start the note will be inactive
		MuralPieceMesh->SetMaterial(materialIdx, dynamicMaterial);
		NotesMaterials.Emplace(dynamicMaterial);
		
	}

}

short AMuralPiece::GetMuralID() const
{
	return 1;
}

