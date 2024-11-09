// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VOTOStatics.h"
#include "SubjectCP.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VOICEOFTHEOCEAN_API USubjectCP : public UActorComponent
{
	GENERATED_BODY()

public:
	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDoVerbAction, UVerb*, Verb);
	UPROPERTY(BlueprintAssignable, Category = "VerbAction")
	FOnDoVerbAction OnDoVerbActionDelegate;

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChangedSubjectNote);
	UPROPERTY(BlueprintAssignable, Category = "Note")
	FOnChangedSubjectNote OnChangedSubjectNote;

	UDELEGATE(BlueprintAuthorityOnly)
		DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSubjectTargetChanged);
	UPROPERTY(BlueprintAssignable, Category = "SubjectTarget")
	FOnSubjectTargetChanged OnSubjectTargetChanged;

protected:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Notes")
	FMusicalNote SubjectNote;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Notes")
	UMaterialInstance* HighlightMaterial;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Notes")
	UMaterialInstanceDynamic* DynamicHighlightMaterial;

private:

	bool HasToChangeSubjectNote{ true };
	bool IsSubjectATarget{ false  };

public:	
	// Sets default values for this component's properties
	USubjectCP();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;
		
public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION()
	void DoVerbAction(UVerb* verbAction);


	void SetSubjectNote(FMusicalNote subjectNote);
	void SetIsSubjectATarget(bool isTarget);

	UMaterialInstance* GetHighlightMaterial();
	FMusicalNote GetMusicalNote() const;
	bool GetIsSubjetTarget() const;
		
};
