// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

USTRUCT(BlueprintType) struct FLeaderboardSlot
{GENERATED_BODY() UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Leaderboard Struct") FString name; UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Leaderboard Struct") float timeTakenToCompleteLevel; UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Leaderboard Struct") int playerScore;
};
UCLASS()
class BOOK_PROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Game Instance Variables for DeathBox")
			FVector Location;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Instance Variables for DeathBox")
			FRotator Rotation;

		UFUNCTION(BlueprintCallable)
		void SaveGame(TArray<FLeaderboardSlot> boardToSave);
		
		UFUNCTION(BlueprintCallable)
		void LoadGame();

		UFUNCTION()
			void createASampleBoard();

		UPROPERTY(EditAnywhere,BlueprintReadWrite,Category = "Array of LeaderboardSlot Structs")
			TArray<FLeaderboardSlot> leaderboardToPresent;
};
