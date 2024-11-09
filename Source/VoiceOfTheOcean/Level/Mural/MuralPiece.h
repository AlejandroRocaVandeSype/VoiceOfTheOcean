// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Level/Mural/Mural.h"
#include "MuralPiece.generated.h"

class UBoxComponent; 
UCLASS()
class VOICEOFTHEOCEAN_API AMuralPiece : public AActor
{
	GENERATED_BODY()

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Mesh")
	UStaticMeshComponent* MuralPieceMesh;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Collision")
	UBoxComponent* MuralCollisionBox;

	/* This is used to determine which Mesh is gonna be used in the MuralPieceMesh component
	. This is because every piece is gonna have an ID associated for the mural */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "SelectedMesh")
	EMuralPiecesIDs SelectedPieceMesh;

private:
	/* Store the material from the notes so later can be set/remove for the mural */
	TArray<UMaterialInstanceDynamic*> NotesMaterials;
public:	
	// Sets default values for this actor's properties
	AMuralPiece();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void PickUpPiece();
	short GetMuralID() const;

private:

	void InitNotesMaterial();

};
