// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
//#include "../Core/SubjectCP.h"
#include "Core/SubjectCP.h"
#include "DonNavigatorInterface.h"
#include "Engine/TargetPoint.h"
#include "Shark.generated.h"

class UVerb;
class UBoxComponent;
class USharkMovementCP;
UCLASS()
class VOICEOFTHEOCEAN_API AShark : public APawn, public IDonNavigator
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USubjectCP* SubjectCP = nullptr;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SharkMesh;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
	UBoxComponent* BoxCollision;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Components")
	USharkMovementCP* SharkMovement{nullptr};

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "AI")
	ATargetPoint* AIPatrolCenter;

private:

	UFUNCTION()
	void DoVerbAction(UVerb* verbAction);
	UFUNCTION()
	void ChangeMaterialColor();

	UFUNCTION()
	void ToggleHighlightMaterial();
	
	UPROPERTY()
	class AFPCharacter* PlayerCharacter{ nullptr };
public:
	// Sets default values for this pawn's properties
	AShark();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	virtual void AddMovementInputCustom_Implementation(FVector WorldDirection, float ScaleValue) override;

};
