// Fill out your copyright notice in the Description page of Project Settings.


#include "../../Characters/Player/CameraRaycastingCP.h"
#include "../../Core/SubjectCP.h"
#include "../../Characters/Player/FPCharacter.h"
#include "Camera/CameraComponent.h"


// Sets default values for this component's properties
UCameraRaycastingCP::UCameraRaycastingCP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...

}

void UCameraRaycastingCP::ToggleDebugMode()
{
	IsDebugModeActive = !IsDebugModeActive;
}

bool UCameraRaycastingCP::HasATarget() const
{
	return SubjectTarget != nullptr;
}

USubjectCP* UCameraRaycastingCP::GetTarget() const
{
	return SubjectTarget;
}


// Called when the game starts
void UCameraRaycastingCP::BeginPlay()
{
	Super::BeginPlay();

	// ...
	PlayerCamera = GetOwner()->FindComponentByClass<UCameraComponent>();

	AFPCharacter* player{ Cast<AFPCharacter>(GetOwner()) };
	if (player)
	{
		player->OnDebugModeTriggered.AddDynamic(this, &UCameraRaycastingCP::ToggleDebugMode);
	}

}


// Called every frame
void UCameraRaycastingCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...

	RaycastFromCamera();
}

void UCameraRaycastingCP::RaycastFromCamera()
{
	if (!PlayerCamera)
		return;			// No Player Camera Found

	if (SubjectTarget != nullptr)
	{
		SubjectTarget->SetIsSubjectATarget(false);
		SubjectTarget = nullptr;
	}

	// Create a grid Area for the rays to raycast
	const int32 gridWidth = 8;  // Number of horizontal rays
	const int32 gridHeight = 8; // Number of vertical rays
	const float gridSpacing = 30.0f; // Spacing between rays 

	TArray<FHitResult> hitResults;
	hitResults.Reserve(gridWidth * gridHeight);

	FVector cameraLocation = PlayerCamera->GetComponentLocation();
	FVector cameraForward = PlayerCamera->GetForwardVector();
	FVector cameraRight = PlayerCamera->GetRightVector();
	FVector cameraUp = PlayerCamera->GetUpVector();

	FCollisionQueryParams queryParams;
	queryParams.AddIgnoredActor(GetOwner());	// Ignore Player Character

	// Calculate the top-left corner of our grid
	FVector gridStart = cameraLocation + cameraForward * 100.0f // Start grid 100 units in front of camera
		- cameraRight * (gridSpacing * (gridWidth - 1) / 2.0f)
		+ cameraUp * (gridSpacing * (gridHeight - 1) / 2.0f);

	// Cast rays in a grid pattern
	for (int32 y = 0; y < gridHeight; ++y)
	{
		for (int32 x = 0; x < gridWidth; ++x)
		{
			FVector rayStart = gridStart + cameraRight * (x * gridSpacing) - cameraUp * (y * gridSpacing);
			FVector rayEnd = rayStart + cameraForward * RayDistance;

			FHitResult hit;
			GetWorld()->LineTraceSingleByChannel(hit, rayStart, rayEnd, TraceChannelProperty, queryParams);

			if (hit.bBlockingHit)
			{
				hitResults.Add(hit);

				if (IsDebugModeActive)
				{
					// Hit
					DrawDebugLine(GetWorld(), rayStart, hit.Location, FColor::Green, false, 0.03f, 0, 0.3f);
					DrawDebugPoint(GetWorld(), hit.Location, 5.0f, FColor::Red, false, 0.03f);
				}
			}
			else
			{
				if (IsDebugModeActive)
				{
					// No hit
					DrawDebugLine(GetWorld(), rayStart, rayEnd, FColor::Red, false, 0.03f, 0, 0.3f);
				}
			}
		}
	}

	// Find the closest hit
	FHitResult ClosestHit;
	float ClosestDistance = MAX_flt;
	bool bFoundValidHit = false;

	for (const FHitResult& Hit : hitResults)
	{
		AActor* ActorHit = Hit.GetActor();
		if (IsValid(ActorHit))
		{
			USubjectCP* closestSubjectTarget = ActorHit->FindComponentByClass<USubjectCP>() ;
			if (closestSubjectTarget)
			{
				float Distance = (Hit.Location - cameraLocation).Size();
				if (Distance < ClosestDistance)
				{
					// Found a closest hit
					ClosestHit = Hit;
					ClosestDistance = Distance;
					bFoundValidHit = true;
					SubjectTarget = closestSubjectTarget;
				}
			}
		}
	}

	// If a valid closest hit was found -> Check if it is a subject actor
	if (bFoundValidHit)
	{
		if(SubjectTarget)
			SubjectTarget->SetIsSubjectATarget(true);

		if (IsDebugModeActive)
		{
			// Draw a Sphere where the closest hit was
			DrawDebugSphere(GetWorld(), ClosestHit.Location, 10.0f, 12, FColor::Yellow, false, 0.03f);
			GEngine->AddOnScreenDebugMessage(9, 15.0f, FColor::Yellow, FString::Printf(TEXT("Closest Hit: %s"), *ClosestHit.GetActor()->GetName()));
		}
	}

}

