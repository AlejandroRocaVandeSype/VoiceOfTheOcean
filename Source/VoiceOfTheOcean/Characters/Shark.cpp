// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Shark.h"
#include "Components/BoxComponent.h"
#include "Characters/Shark/SharkMovementCP.h"
#include "Core/Verb.h"
#include <Kismet/GameplayStatics.h>
#include "Characters/Player/FPCharacter.h"
#include "DrawDebugHelpers.h"

// Sets default values
AShark::AShark()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SubjectCP = CreateDefaultSubobject<USubjectCP>(TEXT("SubjectCP"));

	SharkMesh = CreateDefaultSubobject<USkeletalMeshComponent>((TEXT("SharkMesh")));
	SharkMesh->SetupAttachment(RootComponent);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	BoxCollision->SetupAttachment(SharkMesh);

	SharkMovement = CreateDefaultSubobject<USharkMovementCP>(TEXT("SharkMovement"));

	

}

// Called when the game starts or when spawned
void AShark::BeginPlay()
{
	Super::BeginPlay();

	// Bind the Verb Action from the Subject CP to this Actor
	SubjectCP->OnDoVerbActionDelegate.AddDynamic(this, &AShark::DoVerbAction);
	SubjectCP->OnChangedSubjectNote.AddDynamic(this, &AShark::ChangeMaterialColor);
	SubjectCP->OnSubjectTargetChanged.AddDynamic(this, &AShark::ToggleHighlightMaterial);

	/** Custom channel just for the Subjects. This allows the Raycasting only detect Subjects **/
	BoxCollision->SetCollisionObjectType(ECC_GameTraceChannel1);
	BoxCollision->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECollisionResponse::ECR_Block);

	PlayerCharacter = Cast<AFPCharacter>(UGameplayStatics::GetActorOfClass(GetWorld(), AFPCharacter::StaticClass()));

	

}

// Called every frame
void AShark::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AShark::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AShark::AddMovementInputCustom_Implementation(FVector WorldDirection, float ScaleValue)
{
	// WorldDirection: the vector toward the next PathPoint
	FVector normalizedWorldDirection = WorldDirection.GetSafeNormal();
	GEngine->AddOnScreenDebugMessage
	(
		123,
		1.0f,
		FColor::Emerald,
		FString::Printf(TEXT("Normalized World Direction: %f %f %f \n ScaleValue: %f"), WorldDirection.X, WorldDirection.Y, WorldDirection.Z, ScaleValue)
	);

}

// Called when a Verb Action has been applied to this Pawn
void AShark::DoVerbAction(UVerb* verbAction)
{


}


// Called when the note of the subject has been changed
void AShark::ChangeMaterialColor()
{
	if (!SubjectCP)
		return;

	FMusicalNote subjectNote{ SubjectCP->GetMusicalNote() };
	UMaterialInstanceDynamic* DynamicColorMaterial = SharkMesh->CreateAndSetMaterialInstanceDynamic(0);

	if (DynamicColorMaterial)
	{
		// Set the color on the material 
		FLinearColor NewColor = subjectNote.NoteColor;
		DynamicColorMaterial->SetVectorParameterValue(FName("Color"), NewColor);
	}
}

void AShark::ToggleHighlightMaterial()
{
	/*if (SubjectCP)
		return;*/

	if (SubjectCP->GetIsSubjetTarget())
	{
		// Enable highlighting
		SharkMesh->SetOverlayMaterial(SubjectCP->GetHighlightMaterial());
	}
	else
	{
		// Disable highlighting
		SharkMesh->SetOverlayMaterial(nullptr);
	}


}


