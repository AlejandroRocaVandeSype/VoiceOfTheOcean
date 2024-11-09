// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mural.generated.h"


UENUM(BlueprintType)
enum class EMuralPiecesIDs : uint8
{
	MeshID_01 UMETA(DisplayName = "Piece1"),
	MeshID_02 UMETA(DisplayName = "Piece2"),
	MeshID_03 UMETA(DisplayName = "Piece3"),
	MeshID_04 UMETA(DisplayName = "Piece4"),
	MeshID_05 UMETA(DisplayName = "Piece5"),
	MeshID_06 UMETA(DisplayName = "Piece6"),
	MeshID_07 UMETA(DisplayName = "Piece7"),
	MeshID_08 UMETA(DisplayName = "Piece8"),
	MeshID_09 UMETA(DisplayName = "Piece9"),
	MeshID_10 UMETA(DisplayName = "Piece10"),
	MeshID_11 UMETA(DisplayName = "Piece11"),
	MeshID_12 UMETA(DisplayName = "Piece12")
};

UCLASS()
class VOICEOFTHEOCEAN_API AMural : public AActor
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* MuralMesh;

	/* Each Mural Piece is gonna have an "ID" associated. 
	This will be used so pieces are placed in the correct position in the mural */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "MuralPiecesMeshes")
	TMap<EMuralPiecesIDs, UStaticMesh*> MuralPiecesMeshLibrary;
public:	
	// Sets default values for this actor's properties
	AMural();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	TMap<EMuralPiecesIDs, UStaticMesh*> GetMuralPiecesMeshLibray() const;

	UStaticMesh* SearchMeshByID(EMuralPiecesIDs meshToFindID);

};
