// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Core/VerbManager.h"
#include "Core/FPPlayerController.h"
#include "FPCharacter.generated.h"

class UCameraComponent;
struct FInputActionValue;
class UAudioCaptureComponent;
class UAudioAnalysisComponent;
class UCameraRaycastingCP;
class AFPPlayerController;
class USingingMelodyCP;
class UHealthCP;
class AMuralPiece;

UCLASS()
class VOICEOFTHEOCEAN_API AFPCharacter : public ACharacter
{
	GENERATED_BODY()


public:
	//** EVENTS **/
	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDebugModeTriggered);
	UPROPERTY(BlueprintAssignable, Category = "Events|DebugMode")
	FOnDebugModeTriggered OnDebugModeTriggered;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPlayerPickUp, AFPCharacter*, player);
	UPROPERTY(BlueprintAssignable, Category = "Events|PlayerPickUp")
	FOnPlayerPickUp OnPlayerPickUp;

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMelodyComplete);
	UPROPERTY(BlueprintAssignable, Category = "Events|MelodyComplete")
	FOnMelodyComplete OnMelodyComplete;

protected:

	//** COMPONENTS **/
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components|Camera")
	UCameraComponent* FirstPersonCameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components|Camera")
	UCameraRaycastingCP* CameraRaycastingCP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components|AudioCapture")
	UAudioCaptureComponent* AudioCaptureComponent;
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components|AudioAnalysis")
	UAudioAnalysisComponent* AudioAnalysisComponent;

	//UPROPERTY(EditDefaultsOnly, Category = "Components|SingingMelody")
	USingingMelodyCP* SingingMelodyCP;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components|Health")
	UHealthCP* HealthCP;


	// ** INPUT ACTIONS ** //
	// MOVEMENT
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Movement")
	class UInputAction* MoveAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Movement")
	class UInputAction* DiveUpAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Movement")
	class UInputAction* DiveDownAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Movement")
	class UInputAction* FasterSwimmingAction;

	// CAMERA ROTATION
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|CameraRotation")
	class UInputAction* LookAction;

	// SINGING
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|Singing")
	class UInputAction* SingAction;

	// PICK UP
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|PickUp")
	class UInputAction* PickUpAction;

	// UI INPUT ACTIONS
	UPROPERTY(EditAnywhere,  Category = "Input|UI")
	class UInputAction* SelectNoteAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|UI")
	class UInputAction* RemoveNoteAction;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|UI")
	class UInputAction* UINavigation;

	// DEBUG MODE ACTION
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|DebugMode")
	class UInputAction* DebugModeAction;

	// MOVEMENT
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float NormalSpeed{ 1200.f };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float FastSpeed{ 2300.f };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float NormalDecelerationSpeed{ 1120.f };
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Movement")
	float FastDecelerationSpeed{ 2600.f };

	float TimeInNormalSpeed{ 0.f };

	bool IsFastDecelerating{ false };

	// CAMERA
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Camera")
	float CameraSensitivity{ 180.f };
	FVector CameraStartPosition{ -5.f, 0.f, 60.f };

	float TimeAccumulator{ 0.f };

private:

	// CAMERA FADE
	FTimerHandle TimerHandle_Respawn;

	AFPPlayerController* FPPlayerController;
	FTimerHandle SingingTimerHandle;

	/* MuralPieces that the player is carrying */
	TArray<AMuralPiece*> MuralPiecesCarrying;

	// INPUT
	void SetupPlayerMovement();

	// PLAYER MOVEMENT/ROTATON
	void Move(const FInputActionValue& Value);
	void UpdateDeceleration(float DeltaTime);
	void UpdateCameraRoll(float DeltaTime);
	void UpdateCameraSwimmingEffect(float DeltaTime);
	void StartFastMove();
	void StopFastMove();
	void RotateCamera(const FInputActionValue& Value);
	void DiveUp();
	void DiveDown();

	// SINGING
	void StartSinging();
	void StopSinging();
	void ToggleSingingUI(EInputMappingContextMode mode);
	void ToggleSlowMotion(bool isOn);

	// PICK UP
	void PickUp();

	UFUNCTION()
	void MelodyConfirmed();
	UFUNCTION()
	void MelodyUnconfirmed();
	void PlayMelodySoundCue();
	void ResetNoteParameters();
	void InitialiseSingingMode();
	void EndSingingMode();
	void CheckIfPitchIsCorrect();

	int MelodyStep{ 0 };
	int PhraseLength{ 0 };
	float NoteProgress{ 0.0f };
	float TimeHeld{ 0.0f };
	const float HoldTime{ 0.3f };
	const float TimerRate{ 0.01 };

	// UI
	void RadialNotesUINavigation(const FInputActionValue& Value);
	void FinishRadialNotesUINavigation(const FInputActionValue& Value);
	void SelectNote();
	void RemoveNote();


	// DEBUG
	void ToggleDebugMode();

	UFUNCTION()
	void PlayerDeath();

	bool IsPlayerDead{ false };

public:
	// Sets default values for this character's properties
	AFPCharacter();

	void RespawnPlayer(FVector newLocation);
	UHealthCP* GetHealthCP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
