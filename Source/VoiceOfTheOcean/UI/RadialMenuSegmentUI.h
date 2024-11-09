// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RadialMenuSegmentUI.generated.h"


class UImage;
class UTextBlock;


/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API URadialMenu_Segment : public UUserWidget
{
	GENERATED_BODY()
protected:
	// Better to use this for init
	virtual void NativeConstruct() override;

	// Binding widgets that we need access to in C++
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UImage> SegmentImage;
	UPROPERTY(BlueprintReadOnly, meta=(BindWidget))
	TObjectPtr<UTextBlock> SegmentText;

public:

	
	UFUNCTION(BlueprintCallable, Category = "Getters & Setters")
	void SetColor(const FSlateColor& color);

	UFUNCTION(BlueprintCallable, Category = "Getters & Setters")
	void SetText(const FText& text);

	UFUNCTION(BlueprintCallable, Category = "Getters & Setters")
	void SetImage(UTexture2D* image);

	UFUNCTION(BlueprintCallable, Category = "Getters & Setters")
	FSlateColor GetColor() const;

	UFUNCTION(BlueprintCallable, Category = "Getters & Setters")
	UTextBlock* GetTextWidget();
private:

};
