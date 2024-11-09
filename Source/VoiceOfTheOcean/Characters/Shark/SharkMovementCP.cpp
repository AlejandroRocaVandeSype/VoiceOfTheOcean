#include "Characters/Shark/SharkMovementCP.h"
#include "GameFramework/Actor.h"
#include "CollisionQueryParams.h"
#include "DrawDebugHelpers.h"

USharkMovementCP::USharkMovementCP()
{
	PrimaryComponentTick.bCanEverTick = true;
}

void USharkMovementCP::BeginPlay()
{
	Super::BeginPlay();
}

void USharkMovementCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    AActor* owner = GetOwner();
    if (!owner)
        return;

    // First, check if we should be at a target
    if (!HasTarget || HasReachedTarget || !IsMovingAlongArc)
    {
        // Apply drag to reduce velocity if not moving to a target
        CurrentVelocity -= Drag * DeltaTime;
        CurrentVelocity = FMath::Clamp(CurrentVelocity, 0.0f, MaxVelocity);
        owner->SetActorLocation(owner->GetActorLocation() + owner->GetActorForwardVector().GetSafeNormal() * CurrentVelocity);
        return;
    }

    const FVector currentPos = owner->GetActorLocation();
    const FVector targetPos = TargetActor ? TargetActor->GetActorLocation() : TargetLocation;

    // Check if we're at the target before attempting any movement
    float distanceToTarget = FVector::Distance(currentPos, targetPos);
    if (distanceToTarget <= AcceptableDistanceRadius)
    {
        IsMovingAlongArc = false;
        HasReachedTarget = true;
        HasTarget = false;
        TargetActor = nullptr;
        return;
    }

	// // Assuming you have the necessary includes and your owner is valid
	// const FVector currentFw = owner->GetActorForwardVector();
	// const FVector sharkToTarget = (targetPos - currentPos).GetSafeNormal();
	// const float dotProd = FVector::DotProduct(sharkToTarget, currentFw);
	//
	// // Rotate the actor until the dot product is greater than 0.0f
	// if (dotProd < 0.0f)
	// {
	// 	// Define a rotation amount (angle in degrees) per tick
	// 	const float rotationAmount = 1.0f; // Adjust this value as needed
	//
	// 	// Create a rotation around the up axis (Z axis) based on the rotation amount
	// 	FRotator rotationDelta = FRotator(0.0f, rotationAmount, 0.0f); // Rotate only around the yaw axis
	//
	// 	// Apply the rotation to the actor
	// 	owner->AddActorLocalRotation(rotationDelta);
	// 	return;
	// }

    // If we get here, we need to move
    if (ShowDebug)
    {
        DrawDebugPath();
    }
	
    // Calculate and apply movement along the circular path
    FVector toCurrentPos = (currentPos - CircleCenter).GetSafeNormal();
    FVector toTarget = (targetPos - CircleCenter).GetSafeNormal();

    // Calculate rotation axis and direction for movement
    FVector rotationAxis = FVector::CrossProduct(toCurrentPos, toTarget).GetSafeNormal();
	DrawDebugDirectionalArrow(GetWorld(),CircleCenter,CircleCenter + rotationAxis * 100,5,FColor::Green);
    float direction = FMath::Sign(rotationAxis.Z);
	
    // Calculate movement this frame
    float moveSpeed = MovementSpeed * DeltaTime;
    CurrentVelocity += moveSpeed;
    CurrentVelocity = FMath::Clamp(CurrentVelocity, 0.0f, MaxVelocity);

    // Update current distance traveled
    CurrentArcDistance += CurrentVelocity;

    // Prevent overshooting
    if (CurrentArcDistance > TotalArcLength)
    {
        CurrentArcDistance = TotalArcLength;
    }

	// Change in angle per frame along the arc
    float angleChange = (CurrentVelocity / Radius) * direction;

    // Rotate around the circle center
    FQuat rotation = FQuat(FVector::UpVector, angleChange);
    FVector newPosition = CircleCenter + rotation.RotateVector(currentPos - CircleCenter);

    // Calculate new forward direction (tangent to arc)
    FVector newForward = rotation.RotateVector(owner->GetActorForwardVector());
    FRotator newRotation = newForward.Rotation();

    // Update position and rotation
    owner->SetActorLocation(newPosition);
    owner->SetActorRotation(newRotation);

    DebugInfo.Reset();
    DebugInfo.StartPos = owner->GetActorLocation();
    DebugInfo.TargetPos = targetPos;
    DebugInfo.CircleCenterPos = CircleCenter;
    DebugInfo.ForwardVector = newForward;
    DebugInfo.TotalAngle = FMath::Acos(FVector::DotProduct(toCurrentPos, toTarget));
    DebugInfo.Direction = direction;
    DebugInfo.PathRadius = Radius;
}

void USharkMovementCP::SetTargetActor(AActor* actor)
{
	if (!actor) return;

	TargetActor = actor;
	TargetLocation = actor->GetActorLocation();
	HasTarget = true;
	HasReachedTarget = false;
	IsMovingAlongArc = false;
	CalculateArcPath(); // Calculate the path immediately
	IsMovingAlongArc = true; // Start moving right away
}

void USharkMovementCP::SetTargetLocation(const FVector& newLocation)
{
	TargetLocation = newLocation;
	TargetActor = nullptr;
	HasTarget = true;
	HasReachedTarget = false;
	IsMovingAlongArc = false;
	CalculateArcPath(); // Calculate the path immediately
	IsMovingAlongArc = true; // Start moving right away
}

void USharkMovementCP::CalculateArcPath()
{
	auto owner = GetOwner();
	if (!owner)
		return;

	StartLocation = owner->GetActorLocation();
	const FVector targetPos = TargetActor ? TargetActor->GetActorLocation() : TargetLocation;
	// Tangent vector to Circle
	const FVector forwardVector = owner->GetActorForwardVector().GetSafeNormal();

	// Midpoint between current position & target position. (also forms the chord of the Circle)
	const FVector midpoint = (StartLocation + targetPos) * 0.5f;
	// Perpendicular vector (perpendicular to the chord created by currentPos & targetPos)
	const FVector perpendicularToChord = FVector(targetPos.Y - StartLocation.Y, -(targetPos.X - StartLocation.X),
	                                             StartLocation.Z).GetSafeNormal();

	// The Circle's center point: C = M + lambda * N
	// M: Midpoint of the chord (line between two points on the circumference of the circle) which is the vector toTarget
	// lambda: Scalar of the vector N.
	// N: The perpendicular/normal vector of the chord
	const float lambda = -FVector::DotProduct(midpoint - StartLocation, forwardVector) / FVector::DotProduct(
		perpendicularToChord, forwardVector);
	CircleCenter = midpoint + lambda * perpendicularToChord;
	CircleCenter.Z = StartLocation.Z;

	Radius = (StartLocation - CircleCenter).Size();

	// Calculate vectors from center to start and target positions
	FVector toStart = (StartLocation - CircleCenter).GetSafeNormal();
	FVector toTarget = (targetPos - CircleCenter).GetSafeNormal();

	// Calculate the angle between these vectors
	float totalAngle = FMath::Acos(FVector::DotProduct(toStart, toTarget));
	TotalArcLength = totalAngle * Radius;
	CurrentArcDistance = 0.0f;

	// Determine rotation direction
	FVector rotationAxis = FVector::CrossProduct(toStart, toTarget);
	float direction = FMath::Sign(FVector::DotProduct(rotationAxis, FVector::UpVector));

	DebugInfo.Reset();
	DebugInfo.StartPos = StartLocation;
	DebugInfo.TargetPos = targetPos;
	DebugInfo.CircleCenterPos = CircleCenter;
	DebugInfo.ForwardVector = forwardVector;
	DebugInfo.TotalAngle = totalAngle;
	DebugInfo.Direction = direction;
	DebugInfo.PathRadius = Radius;
}

void USharkMovementCP::DrawDebugPath() const
{
	// Early out if debug info is not valid
	if (DebugInfo.PathRadius <= 0.0f)
		return;

	constexpr int32 NumArcSegments = 50;

	// Draw the path points
	DrawDebugSphere(GetWorld(), DebugInfo.StartPos, 20.0f, 8, FColor::Green, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(GetWorld(), DebugInfo.TargetPos, 20.0f, 8, FColor::Red, false, -1.0f, 0, 2.0f);
	DrawDebugSphere(GetWorld(), DebugInfo.CircleCenterPos, 15.0f, 8, FColor::Yellow, false, -1.0f, 0, 2.0f);

	// Draw radii
	DrawDebugLine(GetWorld(), DebugInfo.CircleCenterPos, DebugInfo.StartPos, FColor::Yellow, false, -1.0f, 0, 2.0f);
	DrawDebugLine(GetWorld(), DebugInfo.CircleCenterPos, DebugInfo.TargetPos, FColor::Yellow, false, -1.0f, 0, 2.0f);

	// Draw the arc path
	const float AngleStep = DebugInfo.TotalAngle / float(NumArcSegments);
	FVector PrevPoint = DebugInfo.StartPos;

	for (int32 i = 1; i <= NumArcSegments; i++)
	{
		float CurrentAngle = AngleStep * i;
		FQuat Rotation = FQuat(FVector::UpVector, CurrentAngle * DebugInfo.Direction);
		FVector NewPoint = DebugInfo.CircleCenterPos + Rotation.RotateVector(
			DebugInfo.StartPos - DebugInfo.CircleCenterPos);

		DrawDebugLine(GetWorld(), PrevPoint, NewPoint, FColor::Blue, false, -1.0f, 0, 2.5f);
		PrevPoint = NewPoint;
	}

	// Draw forward vector
	DrawDebugDirectionalArrow(GetWorld(), DebugInfo.StartPos,
	                          DebugInfo.StartPos + DebugInfo.ForwardVector * 100.0f,
	                          100.0f, FColor::Green, false, -1.0f, 0, 5.0f);

	// Draw text info at current actor location (so it follows the shark)
	if (AActor* Owner = GetOwner())
	{
		FVector TextLocation = Owner->GetActorLocation() + FVector(0, 0, 100.0f);
		DrawDebugString(GetWorld(), TextLocation,
		                FString::Printf(TEXT("Radius: %.1f\nAngle: %.1f°"),
		                                DebugInfo.PathRadius,
		                                FMath::RadiansToDegrees(DebugInfo.TotalAngle)),
		                nullptr, FColor::White, 0.0f);
	}
}

FVector USharkMovementCP::GetArcPoint(float angleInRadians) const
{
	// Calculate the position on the arc using the center and radius
	FVector arcPoint;

	arcPoint.X = CircleCenter.X + Radius * FMath::Cos(angleInRadians);
	arcPoint.Y = CircleCenter.Y + Radius * FMath::Sin(angleInRadians);
	arcPoint.Z = CircleCenter.Z; 

	return arcPoint;
}