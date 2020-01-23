// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Colored_Floor_Switch.h"
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Block_Switch_Controller_01.generated.h"

UCLASS()
class BOOK_PROJECT_API ABlock_Switch_Controller_01 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABlock_Switch_Controller_01();
	ABlock_Switch_Controller_01(const FObjectInitializer &ObjectInitializer);
	
	UPROPERTY(EditAnywhere, Category = "Animated Door")
		class UStaticMeshComponent* door;

	UPROPERTY(EditAnywhere, Category = "Array of switches")
		TArray<AColored_Floor_Switch*> switches;

	UPROPERTY(VisibleAnywhere,Category="Debug")
		float numberOfGreenSwitches;

	
	UPROPERTY(EditAnywhere,Category="Door Destination")
		FVector Destination;

	FTimerHandle transitionTimer;

	UPROPERTY(EditAnywhere, Category = "Time For Door to Transition")
		float secondsToTransition;

	float distance;
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	void incrementSwitchCounter();
	void lerpTheDoor();
};
