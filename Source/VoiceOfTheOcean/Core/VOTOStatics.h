// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "VerbManager.h"
#include "VOTOStatics.generated.h"

//** ENUMERATORS ** /
UENUM(BlueprintType)
enum MusicalNoteName
{
	C	UMETA(DisplayName = "C"),
	Db	UMETA(DisplayName = "Db"),
	D	UMETA(DisplayName = "D"),
	Eb	UMETA(DisplayName = "Eb"),
	E	UMETA(DisplayName = "E"),
	F	UMETA(DisplayName = "F"),
	Gb	UMETA(DisplayName = "Gb"),
	G	UMETA(DisplayName = "G"),
	Ab	UMETA(DisplayName = "Ab"),
	A	UMETA(DisplayName = "A"),
	Bb	UMETA(DisplayName = "Bb"),
	B	UMETA(DisplayName = "B"),
	None UMETA(DisplayName = "None")
};

// ** STRUCTS ** /
USTRUCT(BlueprintType)
struct FMusicalNote
{
	GENERATED_BODY()

	FMusicalNote() : NoteName(MusicalNoteName::C), NoteOctave(0), NoteColor(FColor::Red) {};
	FMusicalNote(MusicalNoteName noteName, int noteOctave, FLinearColor noteColor = FLinearColor::Blue) :
		NoteName(noteName),
		NoteOctave(noteOctave),
		NoteColor(noteColor)
	{
	}

	// Equality operator need to be implemented in order for the struct 
	// to be used as a key in the TMap
	bool operator==(const FMusicalNote& Other) const
	{
		return NoteName == Other.NoteName && NoteColor.Equals(Other.NoteColor);
	}

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	TEnumAsByte<MusicalNoteName> NoteName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int NoteOctave;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FLinearColor NoteColor;
};

// Hash function for FMusicalNote ( neeeded to use the struct as key in the TMap)
FORCEINLINE uint32 GetTypeHash(const FMusicalNote& Note)
{
	// Combine the hash of each property in the struct
	uint32 Hash = GetTypeHash(static_cast<uint8>(Note.NoteName));  // Hash enum value
	Hash = HashCombine(Hash, GetTypeHash(Note.NoteOctave));       // Hash integer value
	Hash = HashCombine(Hash, GetTypeHash(Note.NoteColor));        // Hash FLinearColor
	return Hash;
}

/**
 *
 */
UCLASS()
class VOICEOFTHEOCEAN_API UVOTOStatics : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	// Notes color info
	inline static TArray<FMusicalNote> NotesData
	{
		FMusicalNote(MusicalNoteName::C, 0, FLinearColor{ 0.701102f, 0.f, 0.124772f}),
		FMusicalNote(MusicalNoteName::Db, 0, FLinearColor{ 1.0f, 0.332452f, 0.006049f}),
		FMusicalNote(MusicalNoteName::D, 0, FLinearColor{ 0.991102f, 0.904661f, 0.059511f}),
		FMusicalNote(MusicalNoteName::Eb, 0, FLinearColor{ 0.274677f, 0.637597f, 0.078187f}),
		FMusicalNote(MusicalNoteName::E, 0, FLinearColor{ 0.006049f, 0.610496f, 0.658375f}),
		FMusicalNote(MusicalNoteName::F, 0, FLinearColor{ 0.026241f, 0.327778f, 0.871367f}),
		FMusicalNote(MusicalNoteName::Gb, 0, FLinearColor{ 0.135633f, 0.116971f, 0.462077f}),
		FMusicalNote(MusicalNoteName::G, 0, FLinearColor{ 0.278894f, 0.f, 1.0f}),
		FMusicalNote(MusicalNoteName::Ab, 0, FLinearColor{ 0.496933f, 0.177888f, 0.973446f}),
		FMusicalNote(MusicalNoteName::A, 0, FLinearColor{ 0.47932f, 0.061246f, 1.0f}),
		FMusicalNote(MusicalNoteName::Bb, 0, FLinearColor{ 0.309469f, 0.0865f, 0.0865f}),
		FMusicalNote(MusicalNoteName::B, 0, FLinearColor{ 0.391573f, 0.002428f, 0.002428f}),
		FMusicalNote(MusicalNoteName::None, 0, FLinearColor{ .5f, .5f, .5f}),
	};

public:
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FMusicalNote FindNoteByName(MusicalNoteName targetNoteName)
	{
		// Use FindByPredicate to search for the note with the matching name
		return *NotesData.FindByPredicate([&](const FMusicalNote& Note)
			{
				return Note.NoteName == targetNoteName;
			});
	}
	UFUNCTION(BlueprintCallable, BlueprintPure)
	static FMusicalNote FindNoteByIndex(int targetNoteNumber)
	{
		// Use FindByPredicate to search for the note with the matching name
		FMusicalNote* foundNote = NotesData.FindByPredicate([&](const FMusicalNote& Note)
			{
				return Note.NoteName == targetNoteNumber;
			});

		// Check if the note was found
		if (foundNote != nullptr)
		{
			return *foundNote;
		}

		// Handle the case where the note was not found (return a default note or throw a warning)
		UE_LOG(LogTemp, Warning, TEXT("Note with index %d not found! Returning a default note."), targetNoteNumber);
		return FMusicalNote{};  // Assuming FMusicalNote has a default constructor
	}

};
