// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "RadialMenuUI.generated.h"


class URadialMenu_Segment;
class UImage;
class UOverlay;
struct FMusicalNote;
/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API URadialMenu : public UUserWidget
{
	GENERATED_BODY()
protected:
	virtual void NativeConstruct() override;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<UImage> ArrowImage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Segments")
	UTexture2D* UnselectedSegmentImage;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Segments")
	UTexture2D* SelectedSegmentImage;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	float Radius{ 500.0f };
	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TObjectPtr<UOverlay> SegmentsOverlay;

	UPROPERTY(BlueprintReadOnly, meta = (BindWidget))
	TArray<TObjectPtr<URadialMenu_Segment>> Segments;

	// The BP class we create during init
	// Allows for customization in the UMG editor of the segments
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Radial Menu Segment Class")
	TSubclassOf<URadialMenu_Segment> RadialMenuSegmentClass;

	const int NumSegments{12};
	// Arrow Visibility
	bool IsSinging;
	bool IsInteractingWithUI;
	TObjectPtr<URadialMenu_Segment> CurrentlyHighlightedSegment;

public:
	TObjectPtr<UImage> GetArrowImage();
	void HandleRadialNavigation(FVector2D InputVector);
	void FinishArrowNavigation();
	FMusicalNote GetNote();

private:
	// Creating the Radial Menu out of Segments
	void InitSegments();
	URadialMenu_Segment* CreateSegment();
	void PlaceSegment(URadialMenu_Segment* segment, int segmentIdx);
	void ColorSegment(URadialMenu_Segment* segment, int segmentIdx);
	void SetSegmentText(URadialMenu_Segment* segment, int segmentIdx);
	void ResetAllSegments();
	void HighlightSegment(URadialMenu_Segment* segment);

	void ShowArrow();

	FVector2D CalculateCircleCoords(float angle, float radius);
};
