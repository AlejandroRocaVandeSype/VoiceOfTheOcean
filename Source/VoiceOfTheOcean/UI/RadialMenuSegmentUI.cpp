// Fill out your copyright notice in the Description page of Project Settings.


#include "../UI/RadialMenuSegmentUI.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"

void URadialMenu_Segment::NativeConstruct()
{
	Super::NativeConstruct();

}

void URadialMenu_Segment::SetColor(const FSlateColor& color)
{
	SegmentImage->SetBrushTintColor(color);
}

void URadialMenu_Segment::SetText(const FText& text)
{
	SegmentText->SetText(text);
}

void URadialMenu_Segment::SetImage(UTexture2D* image)
{
	// Get current brush
	FSlateBrush brush = SegmentImage->GetBrush();
	// Change the Image
	brush.SetResourceObject(image);
	// Set the new brush
	SegmentImage->SetBrushResourceObject(image);

}

FSlateColor URadialMenu_Segment::GetColor() const
{
	return SegmentImage->GetBrush().TintColor;
}

UTextBlock* URadialMenu_Segment::GetTextWidget()
{
	return SegmentText;
}
