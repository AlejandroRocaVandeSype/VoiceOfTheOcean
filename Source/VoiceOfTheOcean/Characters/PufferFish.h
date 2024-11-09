// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "../Core/SubjectCP.h"
#include "PufferFish.generated.h"

class UVerb;
class UBoxComponent;
UCLASS()
class VOICEOFTHEOCEAN_API APufferFish : public APawn
{
	GENERATED_BODY()


public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USubjectCP* SubjectCP = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* PufferFishMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BoxCollision;

private:

	UFUNCTION()
	void DoVerbAction(UVerb* verbAction);
	UFUNCTION()
	void ChangeMaterialColor();

	UFUNCTION()
	void ToggleHighlightMaterial();

public:
	// Sets default values for this pawn's properties
	APufferFish();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
