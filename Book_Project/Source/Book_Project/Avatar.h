// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Avatar.generated.h"
class APickupItem;
UCLASS()
class BOOK_PROJECT_API AAvatar : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAvatar();
	AAvatar(const FObjectInitializer& ObjectInitializer);
	TMap<FString, int> Backpack;
	TMap<FString, UTexture2D*> Icons;
	bool inventoryShowing;
	
	/*Timer for Handling transport*/
	FTimerHandle testTimer;
	FTimerHandle railTimer;
	FVector locationToGoTo;
	float distance;
	UPROPERTY(EditAnywhere, Category="Avatar Control Variables")
	float BaseLookRate;
	
	UPROPERTY(EditAnywhere, Category = "Avatar Control Variables")
	float BaseTurnRate;

	UPROPERTY(EditAnywhere, Category = "Avatar Control Variables")
		float JumpHeight;
	
	UPROPERTY(VisibleAnywhere,BlueprintReadWrite,Category = "Avatar Animation Variables")
		bool isPunching=false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite ,Category = "Alternate Skeleton")
		class USkeletalMeshComponent* skeleton;
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grind Variables")
		class USpringArmComponent* cameraBoom;

	UPROPERTY(EditAnywhere, Category = "Warp variable")
		float transitionSpeedCap;

	UPROPERTY(EditAnywhere,BlueprintReadWrite ,Category = "Teleportation effects")
		class UParticleSystemComponent* teleportationParticle;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline declaration")
		class USplineComponent* ourSpline;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grind Variables")
		bool isGrinding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Grind Variables")
		float percentOfMovement;

	/*UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Punching Colliders")
		class USphereComponent* rightHandSphere;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Punching Colliders")
		class USphereComponent* leftHandSphere;*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MoveForward(float amount);
	
	void MoveRight(float amount);
	
	void Pickup(APickupItem *item);
	
	void ToggleInventory();
	
	void TurnAtRate(float Rate);
	
	void LookUpAtRate(float Rate);
	
	void Jump();
	
	void printContentsOfBackpackOnScreen();
	
	void TouchStarted(ETouchIndex::Type FingerIndex, FVector Location);
	
	void startPunching();
	
	void stopPunching();

	void resetTimer();

	UFUNCTION(BlueprintImplementableEvent)  // making use of macro for implementing a method in Blueprints
		void enableAndDisableCollision();

	void lerpToDestination(FVector teleporterEndpoint);
	void transition();

	UFUNCTION(BlueprintCallable)
	void beginGrind();
	void grind();
};
