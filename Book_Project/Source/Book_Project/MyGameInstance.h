// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class BOOK_PROJECT_API UMyGameInstance : public UGameInstance
{
	GENERATED_BODY()

	public:
		UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="Game Instance Variables for DeathBox")
			FVector Location;
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Instance Variables for DeathBox")
			FRotator Rotation;
};
