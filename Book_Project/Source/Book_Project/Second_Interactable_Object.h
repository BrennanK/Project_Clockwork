// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Interactable_Object.h"
#include "Second_Interactable_Object.generated.h"

/**
 * 
 */
UCLASS()
class BOOK_PROJECT_API ASecond_Interactable_Object : public AInteractable_Object
{
	GENERATED_BODY()


public:
	ASecond_Interactable_Object();
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual void inheritanceExample() override;
};
