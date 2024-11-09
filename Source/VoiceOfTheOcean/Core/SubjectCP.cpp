// Fill out your copyright notice in the Description page of Project Settings.


#include "../Core/SubjectCP.h"


// Sets default values for this component's properties
USubjectCP::USubjectCP()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...


	static ConstructorHelpers::FObjectFinder<UMaterialInstance> Material(TEXT("MaterialInstance'/Game/ArtAssets/Characters/Shark/MI_Shark_Highlight'"));

	if (Material.Succeeded())
	{
		HighlightMaterial = Material.Object; 
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Highlight Material not found for the Subjects!"));
	}
}


// Called when the game starts
void USubjectCP::BeginPlay()
{
	Super::BeginPlay();

	// ...


}


// Called every frame
void USubjectCP::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (HasToChangeSubjectNote)
		SetSubjectNote(SubjectNote);
}

void USubjectCP::DoVerbAction(UVerb* verbAction)
{
	OnDoVerbActionDelegate.Broadcast(verbAction);
}

FMusicalNote USubjectCP::GetMusicalNote() const
{
	return SubjectNote;
}

bool USubjectCP::GetIsSubjetTarget() const
{
	return IsSubjectATarget;
}

void USubjectCP::SetSubjectNote(FMusicalNote newSubjectNote)
{
	// Set the correct color for the note
	newSubjectNote = UVOTOStatics::FindNoteByName(newSubjectNote.NoteName);
	SubjectNote = newSubjectNote;
	HasToChangeSubjectNote = false;

	DynamicHighlightMaterial = UMaterialInstanceDynamic::Create(HighlightMaterial, this);
	if (DynamicHighlightMaterial)
	{
		FLinearColor NewColor = SubjectNote.NoteColor;
		DynamicHighlightMaterial->SetVectorParameterValue(FName("Color"), NewColor);
	}
	
	OnChangedSubjectNote.Broadcast();
}

void USubjectCP::SetIsSubjectATarget(bool isTarget)
{
	if (isTarget != IsSubjectATarget)
	{
		// Avoid calling the event multiple times if we are setting the same bool value
		IsSubjectATarget = isTarget;
		OnSubjectTargetChanged.Broadcast();
	}
}

UMaterialInstance* USubjectCP::GetHighlightMaterial()
{

	return DynamicHighlightMaterial;
}

