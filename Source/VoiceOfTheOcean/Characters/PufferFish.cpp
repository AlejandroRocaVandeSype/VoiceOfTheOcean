// Fill out your copyright notice in the Description page of Project Settings.


#include "../Characters/PufferFish.h"
#include "Components/BoxComponent.h"
#include "../Core/Verb.h"
#include "PufferFish.h"


// Sets default values
APufferFish::APufferFish()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	SubjectCP = CreateDefaultSubobject<USubjectCP>(TEXT("SubjectCP"));

	PufferFishMesh = CreateDefaultSubobject<USkeletalMeshComponent>((TEXT("PufferFishMesh")));
	PufferFishMesh->SetupAttachment(RootComponent);

	BoxCollision = CreateDefaultSubobject<UBoxComponent>(TEXT("CollisionBox"));
	BoxCollision->SetupAttachment(PufferFishMesh);

}

// Called when the game starts or when spawned
void APufferFish::BeginPlay()
{
	Super::BeginPlay();
	
	// Bind the Verb Action from the Subject CP to this Actor
	SubjectCP->OnDoVerbActionDelegate.AddDynamic(this, &APufferFish::DoVerbAction);
	SubjectCP->OnChangedSubjectNote.AddDynamic(this, &APufferFish::ChangeMaterialColor);
	SubjectCP->OnSubjectTargetChanged.AddDynamic(this, &APufferFish::ToggleHighlightMaterial);

	/** Custom channel just for the Subjects. This allows the Raycasting only detect Subjects **/
	BoxCollision->SetCollisionObjectType(ECC_GameTraceChannel1);
	BoxCollision->SetCollisionResponseToChannel(ECC_GameTraceChannel1, ECollisionResponse::ECR_Block);


}

// Called every frame
void APufferFish::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APufferFish::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void APufferFish::DoVerbAction(UVerb* verbAction)
{
	GEngine->AddOnScreenDebugMessage(10, 15.0f, FColor::Yellow,
		FString::Printf(TEXT("Action: %s"), *verbAction->GetVerbName()));
}

void APufferFish::ChangeMaterialColor()
{
	if (!SubjectCP)
		return;

	FMusicalNote subjectNote{ SubjectCP->GetMusicalNote() };
	UMaterialInstanceDynamic* DynamicColorMaterial = PufferFishMesh->CreateAndSetMaterialInstanceDynamic(0);

	if (DynamicColorMaterial)
	{
		// Set the color on the material 
		FLinearColor NewColor = subjectNote.NoteColor;
		DynamicColorMaterial->SetVectorParameterValue(FName("Color"), NewColor);
	}
}

void APufferFish::ToggleHighlightMaterial()
{
	if (SubjectCP->GetIsSubjetTarget())
	{
		// Enable highlighting
		PufferFishMesh->SetOverlayMaterial(SubjectCP->GetHighlightMaterial());
	}
	else
	{
		// Disable highlighting
		PufferFishMesh->SetOverlayMaterial(nullptr);
	}

}

