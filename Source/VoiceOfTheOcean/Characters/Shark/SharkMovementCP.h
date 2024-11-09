#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SharkMovementCP.generated.h"


USTRUCT()
struct FSharkDebugInfo
{
	GENERATED_BODY()
	FVector StartPos;
	FVector TargetPos;
	FVector CircleCenterPos;
	FVector ForwardVector;
	float TotalAngle;
	float Direction;
	float PathRadius;

	FSharkDebugInfo()
	{
		Reset();
	}

	void Reset()
	{
		StartPos = FVector::ZeroVector;
		TargetPos = FVector::ZeroVector;
		CircleCenterPos = FVector::ZeroVector;
		ForwardVector = FVector::ZeroVector;
		TotalAngle = 0.0f;
		Direction = 0.0f;
		PathRadius = 0.0f;
	}
};

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class VOICEOFTHEOCEAN_API USharkMovementCP : public UActorComponent
{
	GENERATED_BODY()

public:
	USharkMovementCP();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType,
	                           FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetTargetActor(AActor* actor);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void SetTargetLocation(const FVector& newLocation);

	UFUNCTION(BlueprintCallable, Category = "Movement")
	void CalculateArcPath();
	void DrawDebugPath() const;
	FVector GetArcPoint(float angleInRadians) const;

public:
	// The actor that the shark targets (should only be the player)
	UPROPERTY(EditAnywhere, Category = "Movement")
	TObjectPtr<AActor> TargetActor;
	// The location the shark is going towards when not attacking the player
	UPROPERTY(EditAnywhere, Category = "Movement")
	FVector TargetLocation;

	UPROPERTY(EditAnywhere, Category = "Movement")
	float MovementSpeed = 2.5f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float CurrentVelocity = 0.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float Drag = 5.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float MaxVelocity = 10.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	float CruiseSpeed = 100.0f;
	UPROPERTY(EditAnywhere, Category = "Movement")
	bool ShouldCruise{true};

	UPROPERTY(EditAnywhere, Category = "Movement")
	float AcceptableDistanceRadius = 10.0f;

	UPROPERTY()
	FSharkDebugInfo DebugInfo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite ,Category = "Debug")
	bool ShowDebug{true};
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly ,Category = "Movement")
	bool HasReachedTarget{false};
protected:
	virtual void BeginPlay() override;

private:
	
	bool IsMovingAlongArc{false};
	bool HasTarget{false};

	FVector CircleCenter{};
	float Radius{};
	FVector StartLocation{};
	float TotalArcLength{};
	float CurrentArcDistance{};
	FVector LastMovementDirection{};
};
