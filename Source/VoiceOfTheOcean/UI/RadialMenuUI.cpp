// Fill out your copyright notice in the Description page of Project Settings.


#include "../UI/RadialMenuUI.h"
#include "../UI/RadialMenuSegmentUI.h"
#include "Components/TextBlock.h"
#include "../Core/VOTOStatics.h"
#include <Kismet/KismetTextLibrary.h>
#include "Components/Overlay.h"
#include "Components/OverlaySlot.h"
#include "Components/Image.h"
#include "../Core/VOTOStatics.h"


void URadialMenu::NativeConstruct()
{
	Super::NativeConstruct();
	InitSegments();
	ShowArrow();

}

void URadialMenu::InitSegments()
{
	for (int i{}; i < NumSegments; ++i)
	{
		auto segment = CreateSegment();
		PlaceSegment(segment, i);
		ColorSegment(segment, i);
		SetSegmentText(segment, i);
	}
}

URadialMenu_Segment* URadialMenu::CreateSegment()
{
	URadialMenu_Segment* newSegment = CreateWidget<URadialMenu_Segment>(this, RadialMenuSegmentClass);
	if (newSegment)
	{
		Segments.Add(newSegment);
		auto slot = SegmentsOverlay->AddChildToOverlay(newSegment);
		slot->SetHorizontalAlignment(HAlign_Center);
		slot->SetVerticalAlignment(VAlign_Center);
	}
	return newSegment;
}

void URadialMenu::PlaceSegment(URadialMenu_Segment* segment, int segmentIdx)
{
	if (!segment)
	{
		UE_LOG(LogTemp, Warning, TEXT("Segment %d was NULL!"), segmentIdx);
		return;
	}

	const float anglePerSegment{360.0f / NumSegments};
	// Adjust starting angle to align first note to top of radial menu
	const float startingAngle = -90.0f;
	const float angle = startingAngle + (segmentIdx * anglePerSegment);

	// Calculate position on the circle
	FVector2D circleCoords = CalculateCircleCoords(angle, Radius);

	// Set Segment Render Transform 
	FWidgetTransform transform{};
	transform.Translation = FVector2D(circleCoords.X, circleCoords.Y);
	transform.Scale = FVector2D(1.0f, 1.0f);
	transform.Angle = angle;

	segment->SetRenderTransform(transform);

	// Correct SegmentText Render Transform 
	segment->GetTextWidget()->SetRenderTransformAngle(-angle);

}

FVector2D URadialMenu::CalculateCircleCoords(float angle, float radius)
{
	float x = radius * FMath::Cos(FMath::DegreesToRadians(angle));
	float y = radius * FMath::Sin(FMath::DegreesToRadians(angle));
	return FVector2D(x, y);
}

void URadialMenu::ColorSegment(URadialMenu_Segment* segment, int segmentIdx)
{
	FMusicalNote note = UVOTOStatics::FindNoteByIndex(segmentIdx);

	segment->SetColor(note.NoteColor);
}

void URadialMenu::SetSegmentText(URadialMenu_Segment* segment, int segmentIdx)
{
	// Get The Note Represented By This Segment
	FMusicalNote note = UVOTOStatics::FindNoteByIndex(segmentIdx);

	// Retrieve The Enum Value As Text
	auto enumPtr = StaticEnum<MusicalNoteName>();
	if (!enumPtr)
	{
		UE_LOG(LogTemp, Warning, TEXT("SetSegmentsText: ENUM VALUE WAS INVALID!"));
		return;
	}

	FName noteName = enumPtr->GetNameByValue(static_cast<int64>(note.NoteName));
	if (noteName == NAME_None)
	{
		UE_LOG(LogTemp, Warning, TEXT("SetSegmentsText: noteName VALUE WAS INVALID!"));
		return;
	}

	FText noteText = UKismetTextLibrary::Conv_NameToText(noteName);

	// Set The Segment's Text
	segment->SetText(noteText);

}

void URadialMenu::ResetAllSegments()
{
	if (!UnselectedSegmentImage)
		return;

	for (int32 segmentIdx{ 0 }; segmentIdx < Segments.Num(); ++segmentIdx)
	{
		Segments[segmentIdx]->SetRenderScale({1.0f, 1.0f});
		Segments[segmentIdx]->SetImage(UnselectedSegmentImage);
		Segments[segmentIdx]->SetColor(Segments[segmentIdx]->GetColor());
	}
}

void URadialMenu::HighlightSegment(URadialMenu_Segment* segment)
{
	if (!SelectedSegmentImage)
		return;

	segment->SetRenderScale({ 1.25f, 1.25f });
	segment->SetImage(SelectedSegmentImage);
	segment->SetColor(segment->GetColor());

	CurrentlyHighlightedSegment = segment;

}

void URadialMenu::ShowArrow()
{
	if (IsInteractingWithUI)
	{
		ArrowImage->SetVisibility(ESlateVisibility::Visible);
	}
	else
	{
		ArrowImage->SetVisibility(ESlateVisibility::Hidden);
		ResetAllSegments();
		CurrentlyHighlightedSegment = nullptr;
	}
}

TObjectPtr<UImage> URadialMenu::GetArrowImage()
{
	return ArrowImage;
}

void URadialMenu::HandleRadialNavigation(FVector2D inputVector)
{
	IsInteractingWithUI = true;

	int joystickAngle{ static_cast<int>(FMath::RadiansToDegrees(atan2(inputVector.Y, inputVector.X)) )};
	int fullAngle{ 360 };

	// Invert joystick input and reposition zero point to top of the circle
	int remappedAngle = (Radius - joystickAngle) ;
	remappedAngle %= fullAngle;

	// Get the selected segment from the array
	int32 segmentIdx = ((8 + remappedAngle) / 30) % NumSegments;
	auto selectedSegment{ Segments[segmentIdx] };
	ArrowImage->SetRenderTransformAngle(remappedAngle);

	ResetAllSegments();
	HighlightSegment(selectedSegment);

	ShowArrow();

}

void URadialMenu::FinishArrowNavigation()
{
	IsInteractingWithUI = false;
	ShowArrow();
}

FMusicalNote URadialMenu::GetNote()
{
	if (CurrentlyHighlightedSegment)
	{
		int32 segmentIdx{ Segments.Find(CurrentlyHighlightedSegment) };

		if (segmentIdx == INDEX_NONE) // No note found
			return FMusicalNote{ MusicalNoteName::None, 0, FLinearColor::Green };

		FMusicalNote selectedNote{ UVOTOStatics::FindNoteByIndex(segmentIdx) };
		return selectedNote;
	}

	return FMusicalNote{ MusicalNoteName::None, 0, FLinearColor::Green };
}
