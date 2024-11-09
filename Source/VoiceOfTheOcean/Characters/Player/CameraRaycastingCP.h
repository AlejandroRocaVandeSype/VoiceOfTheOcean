// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CameraRaycastingCP.generated.h"

class UCameraComponent;
class USubjectCP;
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API UCameraRaycastingCP : public UActorComponent
{
	GENERATED_BODY()

private:

	UCameraComponent* PlayerCamera;

	/** Custom channel just for the Subjects **/
	TEnumAsByte<ECollisionChannel> TraceChannelProperty = ECC_GameTraceChannel1;

	USubjectCP* SubjectTarget;

	float RayDistance{ 5000 };
	bool IsDebugModeActive{ false };

public:	
	// Sets default values for this component's properties
	UCameraRaycastingCP();
	UFUNCTION()
	void ToggleDebugMode();

	bool HasATarget() const;
	USubjectCP* GetTarget() const;

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

private:

	void RaycastFromCamera();
};
