// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameInstance.h"
#include "LeaderBoardSave.h"
#include "Engine.h"

void UMyGameInstance::SaveGame(TArray<FLeaderboardSlot> boardToSave)
{
	ULeaderBoardSave* myLeaderBoard = Cast<ULeaderBoardSave>(UGameplayStatics::CreateSaveGameObject(ULeaderBoardSave::StaticClass()));

	//myLeaderBoard->numberForTesting = number;
	myLeaderBoard->leaderboardToSave = boardToSave;

	UGameplayStatics::SaveGameToSlot(myLeaderBoard, TEXT("MyLeaderBoard"), 0);
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Orange, "Save has been acomplished");
}

void UMyGameInstance::LoadGame()
{
	ULeaderBoardSave* myLeaderBoard = Cast<ULeaderBoardSave>(UGameplayStatics::CreateSaveGameObject(ULeaderBoardSave::StaticClass()));

	if (Cast<ULeaderBoardSave>(UGameplayStatics::LoadGameFromSlot("MyLeaderBoard", 0)) == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Orange, "Failed to load because there was no file to load");
		GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Orange, "Creating New Leaderboard");
		createASampleBoard();
	}

	myLeaderBoard = Cast<ULeaderBoardSave>(UGameplayStatics::LoadGameFromSlot("MyLeaderBoard", 0));
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Orange, "Load has been acomplished");
}

void UMyGameInstance::createASampleBoard()
{
	FLeaderboardSlot emptySlot;
	emptySlot.name = "Bill";
	emptySlot.timeTakenToCompleteLevel =0.f;
	emptySlot.playerScore = 0;
	for (int i = 0; i < 5; i++)
	{
		leaderboardToPresent.Add(emptySlot);
	}
	SaveGame(leaderboardToPresent);
}
