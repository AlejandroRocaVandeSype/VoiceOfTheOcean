// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "../UI/SingingUI.h" 
#include "FPPlayerController.generated.h"

/**
 * 
 */

UENUM(BlueprintType)
enum class EInputMappingContextMode : uint8
{
	Default UMETA(DisplayName = "Default Mode"),
	Singing UMETA(DisplayName = "Singing Mode"),
};

class UInputMappingContext;
struct FInputActionValue;
UCLASS()
class VOICEOFTHEOCEAN_API AFPPlayerController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "UI|Singing")
	TSubclassOf<UUserWidget> SingingUIClass; 

	//** INPUT MAPPING CONTEXTS **/
	// Keep track of the current mapping that is being used
	class UInputMappingContext* CurrentMappingContext;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|MappingContext")
	class UInputMappingContext* DefaultMappingContext;	// Player not singing

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Input|MappingContext")
	class UInputMappingContext* SingingMappingContext;  // Player is Singing

private:
	//** Contains everything related with the Singing UI **/
	USingingUI* SingingUI;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	AFPPlayerController();

	// INPUT 
	void ChangeInputMappingContext(EInputMappingContextMode newInputMappingMode);

	// UI
	void ToggleSingingUIVisibility();
	void HideSingingUI();
	void RadialNotesUINavigation(const FInputActionValue& Value, bool IsCompleted);
	void SelectNote();
	void RemoveNote();

	// CAMERA FADE
	void StartCameraFade(bool isFadeIn, float fadeTime);

	USingingUI& GetSingingUI();
	
};
