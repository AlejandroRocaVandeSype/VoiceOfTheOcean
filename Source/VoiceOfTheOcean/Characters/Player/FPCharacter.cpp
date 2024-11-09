// Fill out your copyright notice in the Description page of Project Settings.


#include "Characters/Player/FPCharacter.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Characters/Player/HealthCP.h"

// INPUT
#include "EnhancedInputComponent.h"

#include "Characters/Player/CameraRaycastingCP.h"

// AUDIO
#include "AudioCaptureComponent.h"
#include "AudioDevice.h"
#include "AudioMixerDevice.h"
#include "AudioDeviceManager.h"
#include "Audio/AudioAnalysisCP.h"

#include "SingingMelodyCP.h"

#include "Level\Mural\MuralPiece.h"

#include "Kismet/GameplayStatics.h"
#include "Core/FPGameMode.h"


// Sets default values
AFPCharacter::AFPCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	// Set size for collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);

	// Create a CameraComponent	
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCameraComponent->SetupAttachment(GetCapsuleComponent());
	FirstPersonCameraComponent->SetRelativeLocation(CameraStartPosition); // Position the camera
	FirstPersonCameraComponent->bUsePawnControlRotation = true;

	// Create an AudioCaptureComponent
	AudioCaptureComponent = CreateDefaultSubobject<UAudioCaptureComponent>(TEXT("AudioCapture"));
	AudioCaptureComponent->SetupAttachment(RootComponent);
	AudioCaptureComponent->bAutoActivate = false;

	// Create AudioAnalysisComponent
	AudioAnalysisComponent = CreateDefaultSubobject<UAudioAnalysisComponent>(TEXT("AudioAnalysis"));

	CameraRaycastingCP = CreateDefaultSubobject<UCameraRaycastingCP>(TEXT("CameraRaycastingCP"));

	SingingMelodyCP = CreateDefaultSubobject<USingingMelodyCP>(TEXT("SingingMelodyCP"));

	HealthCP = CreateDefaultSubobject<UHealthCP>(TEXT("HealthCP"));

}

// Called when the game starts or when spawned
void AFPCharacter::BeginPlay()
{
	Super::BeginPlay();

	SetupPlayerMovement();

	FPPlayerController = Cast<AFPPlayerController>(GetController());

	HealthCP->OnPlayerDeath.AddDynamic(this, &AFPCharacter::PlayerDeath);

	if (SingingMelodyCP)
	{
		SingingMelodyCP->OnMelodyConfirmed.AddDynamic(this, &AFPCharacter::MelodyConfirmed);
		SingingMelodyCP->OnMelodyUnconfirmed.AddDynamic(this, &AFPCharacter::MelodyUnconfirmed);
	}
}

// Called every frame
void AFPCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (!IsPlayerDead)
	{
		UpdateDeceleration(DeltaTime);
		UpdateCameraRoll(DeltaTime);
		UpdateCameraSwimmingEffect(DeltaTime);

	}
	else
	{
		AddMovementInput(FVector(0.0f, 0.0f, -1.0f), 10.f * DeltaTime);
	}
	
}

// Called to bind functionality to input
void AFPCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Set up action bindings
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		// Looking around
		EnhancedInputComponent->BindAction(LookAction, ETriggerEvent::Triggered, this, &AFPCharacter::RotateCamera);

		//UI 
		EnhancedInputComponent->BindAction(UINavigation, ETriggerEvent::Triggered, this, &AFPCharacter::RadialNotesUINavigation);
		EnhancedInputComponent->BindAction(UINavigation, ETriggerEvent::Completed, this, &AFPCharacter::FinishRadialNotesUINavigation);
		EnhancedInputComponent->BindAction(SelectNoteAction, ETriggerEvent::Completed, this, &AFPCharacter::SelectNote);
		EnhancedInputComponent->BindAction(RemoveNoteAction, ETriggerEvent::Completed, this, &AFPCharacter::RemoveNote);

		// MOVEMENT
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AFPCharacter::Move);

		EnhancedInputComponent->BindAction(DiveUpAction, ETriggerEvent::Ongoing, this, &AFPCharacter::DiveUp);
		EnhancedInputComponent->BindAction(DiveDownAction, ETriggerEvent::Ongoing, this, &AFPCharacter::DiveDown);

		EnhancedInputComponent->BindAction(FasterSwimmingAction, ETriggerEvent::Started, this, &AFPCharacter::StartFastMove);
		EnhancedInputComponent->BindAction(FasterSwimmingAction, ETriggerEvent::Completed, this, &AFPCharacter::StopFastMove);

		// SINGING
		EnhancedInputComponent->BindAction(SingAction, ETriggerEvent::Started, this, &AFPCharacter::StartSinging);
		EnhancedInputComponent->BindAction(SingAction, ETriggerEvent::Completed, this, &AFPCharacter::StopSinging);

		// DEBUG MODE
		EnhancedInputComponent->BindAction(DebugModeAction, ETriggerEvent::Completed, this, &AFPCharacter::ToggleDebugMode);

		// PICK UP
		EnhancedInputComponent->BindAction(PickUpAction, ETriggerEvent::Started, this, &AFPCharacter::PickUp);
	}

}

void AFPCharacter::SetupPlayerMovement()
{
	// SWIMMING MODE
	auto characterMovement{ GetCharacterMovement() };
	characterMovement->SetMovementMode(EMovementMode::MOVE_Swimming);

	characterMovement->MaxSwimSpeed = NormalSpeed;
	characterMovement->BrakingDecelerationSwimming = NormalDecelerationSpeed;

}


void AFPCharacter::Move(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();

	if (Controller != nullptr)
	{
		// add movement 
		AddMovementInput(FirstPersonCameraComponent->GetRightVector(), MovementVector.X);
		AddMovementInput(FirstPersonCameraComponent->GetForwardVector(), MovementVector.Y);

	}
}

void AFPCharacter::UpdateDeceleration(float DeltaTime)
{
	FVector Velocity = GetCharacterMovement()->Velocity;
	float CurrentSpeed = Velocity.Size();
	auto characterMovement{ GetCharacterMovement() };
	// Correct conversion using FString::Printf for the speed

	if (CurrentSpeed > NormalSpeed)
	{
		characterMovement->BrakingDecelerationSwimming = FastDecelerationSpeed;
		IsFastDecelerating = true;
	}
	else
	{
		if (CurrentSpeed == NormalSpeed  && IsFastDecelerating)
		{
			// In case player go from fast to normal speed without completely stopping
			TimeInNormalSpeed += DeltaTime;
			if (TimeInNormalSpeed > 0.5f)
			{
				IsFastDecelerating = false;
				TimeInNormalSpeed = 0.f;
			}
		}

		if(IsFastDecelerating == false)
			characterMovement->BrakingDecelerationSwimming = NormalDecelerationSpeed;
	}

	if (IsFastDecelerating)
	{
		if (CurrentSpeed <= 0)
			IsFastDecelerating = false;
	}

}

void AFPCharacter::UpdateCameraRoll(float DeltaTime)
{
	FVector velocity = GetCharacterMovement()->Velocity;	
	FVector rightVector{ FirstPersonCameraComponent->GetRightVector()};
	FRotator cameraCurrentRotation{ FirstPersonCameraComponent->GetComponentRotation() };
	float maxRollAngle{ 5.f };
	float rotationSpeed{ 2.f };
		
	// Lateral speed and in which direction ( left or right )
	// Postive = right direction / Negative = left direction
	double lateralSpeed{ FVector::DotProduct(velocity, rightVector) };

	float targetRoll = FMath::Clamp((lateralSpeed/GetCharacterMovement()->MaxSwimSpeed) * maxRollAngle, -maxRollAngle, maxRollAngle);

	float interpolatedRoll = FMath::FInterpTo(cameraCurrentRotation.Roll, targetRoll, DeltaTime, rotationSpeed);


	// Set the new camera rotation with the updated roll
	FRotator newRotation = FRotator(cameraCurrentRotation.Pitch, cameraCurrentRotation.Yaw, interpolatedRoll);
	FirstPersonCameraComponent->SetWorldRotation(newRotation);

}

void AFPCharacter::UpdateCameraSwimmingEffect(float DeltaTime)
{
	if (GetCharacterMovement()->Velocity.Size() < KINDA_SMALL_NUMBER)
	{
		// Player not moving --> Swimming effect
		
		float Amplitude{ 0.8f };		// Distance the camera will move
		float Frequency{ 4.f };			

		TimeAccumulator += DeltaTime;

		float ZOffset{ Amplitude * FMath::Sin(Frequency * TimeAccumulator) };

		//GEngine->AddOnScreenDebugMessage(4, 15.0f, FColor::Yellow, FString::Printf(TEXT("Offset: %f"), ZOffset));
	
		FVector CameraRelativeLocation = FirstPersonCameraComponent->GetRelativeLocation();

		// Apply the Z offset
		CameraRelativeLocation.Z += ZOffset;

		// Set the new camera location
		FirstPersonCameraComponent->SetRelativeLocation(CameraRelativeLocation);
	}
	else
	{
		TimeAccumulator = 0.f;

		FVector newPos = FMath::VInterpTo(FirstPersonCameraComponent->GetRelativeLocation(), CameraStartPosition, DeltaTime, 1.f);
		FirstPersonCameraComponent->SetRelativeLocation(newPos);
	}

}

void AFPCharacter::StartFastMove()
{
	GetCharacterMovement()->MaxSwimSpeed = FastSpeed;
}

void AFPCharacter::StopFastMove()
{
	GetCharacterMovement()->MaxSwimSpeed = NormalSpeed;
}

void AFPCharacter::RotateCamera(const FInputActionValue& Value)
{
	FVector2D LookAxisVector = Value.Get<FVector2D>();

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	FRotator cameraCurrentRotation = FirstPersonCameraComponent->GetComponentRotation();

	// Adjust pitch and yaw based on player input
	float NewPitch = cameraCurrentRotation.Pitch + (LookAxisVector.Y * CameraSensitivity * DeltaTime);
	float NewYaw = cameraCurrentRotation.Yaw + (LookAxisVector.X * CameraSensitivity * DeltaTime);

	// Clamp pitch to prevent excessive up/down rotation
	NewPitch = FMath::Clamp(NewPitch, -89.f, 89.f);  

	FirstPersonCameraComponent->SetWorldRotation(FRotator(NewPitch, NewYaw, cameraCurrentRotation.Roll));
}

void AFPCharacter::DiveUp()
{
	AddMovementInput(GetActorUpVector());
}

void AFPCharacter::DiveDown()
{
	AddMovementInput(-GetActorUpVector());
}

void AFPCharacter::StartSinging()
{
	ToggleSingingUI(EInputMappingContextMode::Singing);
	ToggleSlowMotion(true);
}

void AFPCharacter::StopSinging()
{
	MelodyUnconfirmed();
	if (FPPlayerController)
	{
		FPPlayerController->HideSingingUI();
		FPPlayerController->ChangeInputMappingContext(EInputMappingContextMode::Default);
		ToggleSlowMotion(false);
	}

}

void AFPCharacter::ToggleSingingUI(EInputMappingContextMode mode)
{
	if (FPPlayerController != nullptr)
	{
		FPPlayerController->ToggleSingingUIVisibility();
		FPPlayerController->ChangeInputMappingContext(mode);
	}
}

void AFPCharacter::ToggleSlowMotion(bool isOn)
{
	AFPGameMode* gameMode{ Cast<AFPGameMode>(UGameplayStatics::GetGameMode(GetWorld()))};
	if (gameMode)
	{
		if (isOn)
		{
			gameMode->StartSlowMotion();
		}
		else
		{
			gameMode->StopSlowMotion();
		}
	}
}

void AFPCharacter::PickUp()
{
	OnPlayerPickUp.Broadcast(this);

	// Look for any object that can be picked up.
	// Only MuralPieces for now.
	TArray<AActor*> overlappingActors;
	GetCapsuleComponent()->GetOverlappingActors(overlappingActors);
	for (AActor* actor : overlappingActors)
	{
		AMuralPiece* muralPiece{ Cast<AMuralPiece>(actor) };
		if (muralPiece)
		{
			// Make a copy of the piece since the original will be destroyed when picked up	
			MuralPiecesCarrying.Emplace(DuplicateObject<AMuralPiece>(muralPiece, this));
			muralPiece->PickUpPiece();
			// Don't check for more actors
			break;
		}
	}
}

void AFPCharacter::MelodyConfirmed()
{
	PlayMelodySoundCue(); // placeholder, will do callback on fmod event stop
	
	if (SingingMelodyCP->GetMelodyNotes().IsEmpty())
		return;

	PhraseLength = SingingMelodyCP->GetMelodyNotes().Num();
	ResetNoteParameters();
	InitialiseSingingMode();
}

void AFPCharacter::MelodyUnconfirmed()
{
	EndSingingMode();
}

void AFPCharacter::PlayMelodySoundCue()
{
}

void AFPCharacter::ResetNoteParameters()
{
	MelodyStep = 0;
	NoteProgress = 0;
	TimeHeld = 0;

	FPPlayerController->GetSingingUI().ResetMelodyUI();
}

void AFPCharacter::InitialiseSingingMode()
{
	if (AudioAnalysisComponent->SubmixToAnalyse)
	{
		AudioCaptureComponent->Start();
		Audio::FMixerDevice* MixerDevice = FAudioDeviceManager::GetAudioMixerDeviceFromWorldContext(GetWorld());
		MixerDevice->RegisterSoundSubmix(AudioAnalysisComponent->SubmixToAnalyse);
		MixerDevice->StartRecording(AudioAnalysisComponent->SubmixToAnalyse, 0);

		AudioAnalysisComponent->StartPitchDetection();

		GetWorldTimerManager().SetTimer(SingingTimerHandle, this, &AFPCharacter::CheckIfPitchIsCorrect, TimerRate, true);
	}
}

void AFPCharacter::EndSingingMode()
{
	GetWorldTimerManager().ClearTimer(SingingTimerHandle);
	AudioAnalysisComponent->StopPitchDetection();
	AudioCaptureComponent->Stop();
}

void AFPCharacter::CheckIfPitchIsCorrect()
{
	FMusicalNote targetNote{ SingingMelodyCP->GetMelodyNotes()[MelodyStep] };
	
	TEnumAsByte<MusicalNoteName> currentNoteName;
	FLinearColor currentNoteColor;
	int currentNoteNumber;
	AudioAnalysisComponent->GetPitchData(currentNoteName, currentNoteColor, currentNoteNumber);

	FPPlayerController->GetSingingUI().SetCurrentNote(FMusicalNote(currentNoteName, 0, currentNoteColor));

	if ((currentNoteNumber == targetNote.NoteName.GetIntValue() or
		currentNoteNumber == targetNote.NoteName.GetIntValue() + 1 or
		currentNoteNumber == targetNote.NoteName.GetIntValue() - 1) and
		currentNoteName != MusicalNoteName::None)
	{
		if (MelodyStep == PhraseLength - 1 and NoteProgress >= 1.0f)
		{
			// melody complete
			ResetNoteParameters();

			if(SingingMelodyCP)
				SingingMelodyCP->SendVerbActionToTarget();	// Try to send the verb action ( if any) to the target

			OnMelodyComplete.Broadcast();
			StopSinging();			// Stop showing the UI and the slow motion

			return;
		}
		else
		{
			if (NoteProgress >= 1.0f) // check if note is full
			{
				MelodyStep++;
				NoteProgress = 0;
				TimeHeld = 0;
			}
			else
			{
				// increase note progress
				TimeHeld += TimerRate;
				NoteProgress = TimeHeld / HoldTime;
				FPPlayerController->GetSingingUI().UpdateMelodyNote(MelodyStep, NoteProgress);
			}
		}
	}
}

void AFPCharacter::RadialNotesUINavigation(const FInputActionValue& Value)
{
	if (FPPlayerController)
	{
		FPPlayerController->RadialNotesUINavigation(Value, false);
	}
}

void AFPCharacter::FinishRadialNotesUINavigation(const FInputActionValue& Value)
{
	if (FPPlayerController)
	{
		FPPlayerController->RadialNotesUINavigation(Value, true);
	}
}

void AFPCharacter::SelectNote()
{
	if (FPPlayerController)
	{
		FPPlayerController->SelectNote();
	}
}
void AFPCharacter::RemoveNote()
{
	if (FPPlayerController)
	{
		FPPlayerController->RemoveNote();
	}
}

void AFPCharacter::ToggleDebugMode()
{
	OnDebugModeTriggered.Broadcast();
}

void AFPCharacter::PlayerDeath()
{
	IsPlayerDead = true;
	DisableInput(FPPlayerController);

	// CAMERA FADE IN FOR 3 SEC
	float fadeTime{ 3.f };
	bool dofadeIn{ true };
	FPPlayerController->StartCameraFade(dofadeIn, fadeTime);
	
	AFPGameMode* gameMode{ Cast<AFPGameMode>(UGameplayStatics::GetGameMode(GetWorld())) };

	GetWorld()->GetTimerManager().SetTimer(
		TimerHandle_Respawn,				 // Timer handle to manage the timer
		gameMode,							// Object to call function on
		&AFPGameMode::RespawnPlayer,		// Function to call
		fadeTime + 1.f,						// Delay in seconds (matching the fade duration)
		false								// Single-shot timer (won't loop)
	);


}

void AFPCharacter::RespawnPlayer(FVector newLocation)
{
	IsPlayerDead = false;
	EnableInput(FPPlayerController);
	HealthCP->ResetHealth();

	// Change player position to a new one
	SetActorLocation(newLocation);

	// CAMERA FADE OUT
	bool dofadeIn{ false };
	FPPlayerController->StartCameraFade(dofadeIn, 4.f);

}

UHealthCP* AFPCharacter::GetHealthCP()
{
	return HealthCP;
}

