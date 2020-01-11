// Fill out your copyright notice in the Description page of Project Settings.

#include "Avatar.h"
#include "Components/InputComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/Controller.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Components/SphereComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/Engine.h"
#include "PickupItem.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Particles/ParticleSystemComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SplineComponent.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"

// Sets default values
AAvatar::AAvatar()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AAvatar::AAvatar(const FObjectInitializer& ObjectInitializer)
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAvatar::BeginPlay()
{
	Super::BeginPlay();
	BaseTurnRate = 45.f;	
	teleportationParticle->DeactivateSystem();
	BaseLookRate = 45.f;
	distance = 0;
	numberOfJumps = 0;
	numberOfAlternateJumps=0;
	isCrouching = false;
	isPunching = false;
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, "The duration of our spline in seconds is " + FString::SanitizeFloat(ourSpline->Duration));
}



void AAvatar::Landed(const FHitResult & Hit)
{
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is an on screen message!"));
	numberOfJumps = 0;
	numberOfAlternateJumps = 0;
}

// Called every frame
void AAvatar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


}

// Called to bind functionality to input
void AAvatar::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) //Sets up player inputs by creating key binds
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	//Axis To Be Bound
	PlayerInputComponent->BindAxis("Forward", this, &AAvatar::MoveForward);
	PlayerInputComponent->BindAxis("Right", this, &AAvatar::MoveRight);
	PlayerInputComponent->BindAxis("Turn", this, &APawn::AddControllerYawInput);
	PlayerInputComponent->BindAxis("LookUp", this, &APawn::AddControllerPitchInput);
	PlayerInputComponent->BindAxis("LookupRate", this, &AAvatar::LookUpAtRate);
	PlayerInputComponent->BindAxis("TurnRate", this, &AAvatar::TurnAtRate);

	// Actions to be bound
	PlayerInputComponent->BindAction("Inventory", IE_Pressed, this, &AAvatar::ToggleInventory);
	PlayerInputComponent->BindAction("Jump", IE_Pressed, this, &AAvatar::Jump);
	PlayerInputComponent->BindAction("Punch", IE_Pressed, this, &AAvatar::startPunching);
	PlayerInputComponent->BindAction("Punch", IE_Released, this, &AAvatar::stopPunching);
	PlayerInputComponent->BindAction("Crouch", IE_Pressed, this, &AAvatar::startCrouching);
	PlayerInputComponent->BindAction("Crouch", IE_Released, this, &AAvatar::stopCrouching);
	//PlayerInputComponent->BindAction("Crouch", IE_Repeat, this, &AAvatar::repeatCrouching);
	//Touch Control bound
	PlayerInputComponent->BindTouch(IE_Pressed, this, &AAvatar::TouchStarted);
}

#pragma region Character_Actions
void AAvatar::MoveForward(float amount)      // detemines which direction is forward and moves actor in that direction by a specified amount
{
	if (Controller && amount!=0)
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
		// add movement in that direction
		AddMovementInput(Direction, amount);
	}
}

void AAvatar::MoveRight(float amount)  // determines which directions is right and moves actor in that direction by a specified amount
{
	if (Controller && amount != 0)
	{
		// find out which way is right
		const FRotator Rotation = Controller->GetControlRotation();
		const FRotator YawRotation(0, Rotation.Yaw, 0);

		// get right vector 
		const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);
		// add movement in that direction
		AddMovementInput(Direction, amount);
	}
}

void AAvatar::Pickup(APickupItem * item) // method called by pickup cable item and adds it to inventory
{
	if (Backpack.Find(item->Name))  //Searches to see if Backpack already contains that item and adds it to inventory
	{
		Backpack[item->Name] += item->Quantity;
	}

	else							// If item not found then add it to backpack
	{
		Backpack.Add(item->Name, item->Quantity);
		Icons.Add(item->Name, item->Icon);
	}
}

void AAvatar::ToggleInventory() // Used to open inventory will have additional functionality once inventroy UI is fully implemented
{
	/*FRotator cameraRotation = playerCamera->GetComponentRotation();
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(0, 6.0f, FColor::Blue,  FString::Printf());
	}*/
	/*distance += 1;
	if (distance == 10.f)
	{
		GetWorldTimerManager().ClearTimer(testTimer);
	}*/
}

void AAvatar::TurnAtRate(float Rate)  // Method for camera rotation on Z-axis
{
	if(isGrinding==false)
	{ 
		AddControllerYawInput(Rate * BaseTurnRate * GetWorld()->GetDeltaSeconds());
	}
}

void AAvatar::LookUpAtRate(float Rate) // Method for camera rotation on Y-axis
{
	if (isGrinding == false)
	{
		AddControllerPitchInput(Rate * BaseLookRate * GetWorld()->GetDeltaSeconds());
	}
}

void AAvatar::printContentsOfBackpackOnScreen() // debug method of printing packpack contents
{
	int count = 0;
	for (TMap<FString, int>::TIterator it = Backpack.CreateIterator(); it; ++it)  // Iterator to print backpack contents
	{
		GEngine->AddOnScreenDebugMessage(count++, 5.f, FColor::Green, it->Key + ": " + FString::FromInt(it->Value));
	}
}

void AAvatar::TouchStarted(ETouchIndex::Type FingerIndex, FVector Location)  // method for allowing player character jump for touch screen
{
	if (FingerIndex == ETouchIndex::Touch1) // Checks to see if only one finger is used to jump
	{
		Jump();
	}
}

void AAvatar::startPunching()  // sets the controller varaible for our punching animation to true and enables fist collision
{
	isPunching = true;
	enableAndDisableCollision();
}

void AAvatar::stopPunching() // sets the controller variable for our punching animation to false and disabales fist collision
{
	isPunching = false;
	enableAndDisableCollision();
}

void AAvatar::startCrouching()
{
	if (GetCharacterMovement()->IsMovingOnGround())
	{
		isCrouching = true;
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("We are crouching"));
	}
	
}

void AAvatar::stopCrouching()
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("We are NOT crouching"));
	isCrouching = false;
}

//void AAvatar::repeatCrouching()
//{
//	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("We are repeat crouching"));
//}

#pragma endregion Charect_Actions

#pragma region MovingTeleport
void AAvatar::lerpToDestination(FVector teleporterEndpoint)
{
	GetCharacterMovement()->GravityScale = 0;
	skeleton->SetVisibility(false);
	teleportationParticle->ActivateSystem();
	//teleportationParticle->Activate(true);
	locationToGoTo = teleporterEndpoint;
	GetWorldTimerManager().SetTimer(testTimer, this, &AAvatar::transition, transitionSpeedCap * GetWorld()->GetDeltaSeconds(), true, 0.0f);
}

void AAvatar::transition()
{
	distance += GetWorld()->GetDeltaSeconds();
	distance=FMath::Clamp(distance, 0.f, 1.f);
	FVector newLocation=FMath::Lerp(GetActorLocation(), locationToGoTo, distance);
	SetActorLocation(newLocation);
	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, "The value of distance is " + FString::SanitizeFloat(distance));
	if (distance >= 1.f || GetActorLocation().Equals(locationToGoTo,0.0f))
	{
		
		GetWorldTimerManager().ClearTimer(testTimer);
		GetCharacterMovement()->GravityScale = 1;
		teleportationParticle->DeactivateSystem();
		skeleton->SetVisibility(true);
		distance = 0;
	}
}
#pragma endregion MovingTeleport

#pragma region Character_Grinding
void AAvatar::beginGrind() // method to start the timer and begin rail grinding
{
	GetCharacterMovement()->GravityScale = 0;

	// Disables Pawn Control Rotator such that the camera will auto-align behind the player
	cameraBoom->bUsePawnControlRotation = false;
	
	// Returns and stores the distance along the spline in a 0 to Max count number of Spline minus 1 
	float distanceOnContact=ourSpline->FindInputKeyClosestToWorldLocation(GetActorLocation());
	
	// Calculates and sets distance for moving along the spline
	float splineDenominator = ourSpline->GetNumberOfSplinePoints() - 1;
	distance = distanceOnContact / splineDenominator;

	// Finds the location along spline based on contact point and aligns our character
	FVector grindPointStartLocation = ourSpline->GetLocationAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World);
	SetActorLocation(grindPointStartLocation);

	// Start timer to begin grinding
	GetWorldTimerManager().SetTimer(railTimer, this, &AAvatar::grind, GetWorld()->GetDeltaSeconds(), true, 0.0f);
	//GetCharacterMovement()->GravityScale = 0;
}

void AAvatar::grind() // method for grinding along the rail
{
	// Adds a value between 0 and 1 to a float in order to assist calculating how far along the spline we should be
	// Also clamps the value so we do not go over 1 for our linear interpolation
	distance += percentOfMovement/100;
	distance = FMath::Clamp(distance, 0.f, 1.f);

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Orange, "The value of distance is " + FString::SanitizeFloat(distance));

	// Obtains full length of spline
	float fullLength = ourSpline->GetSplineLength();

	// Obtains a calculated value of how far along the spline from 0 to max spline length our character should be
	float calculatedLerp = FMath::Lerp(0.f, fullLength, distance);

	//Calculates two vectors to represent the vector for character position and character rotation along spline 
	FVector newestLocation = ourSpline->GetLocationAtDistanceAlongSpline(calculatedLerp, ESplineCoordinateSpace::World);
	FRotator newestRotation = ourSpline->GetRotationAtDistanceAlongSpline(calculatedLerp, ESplineCoordinateSpace::World);
	
	// Method used to set location and rotation of actor along spline, offset of 100 is used for distance of skeleton center from rail
	SetActorLocationAndRotation(FVector(newestLocation.X,newestLocation.Y,newestLocation.Z+75.f), newestRotation);
	
	// Clears the timer in order stop grinding and adds a hop off for our character
	if (distance >= 1.f)
	{
		// Get reference to plyer controller to reset rotation
		AController* controller = GetController();
		controller->SetControlRotation(ourSpline->GetRotationAtDistanceAlongSpline(distance, ESplineCoordinateSpace::World));
		
		
		// Reset Gravity Scale before Jump Off
		GetCharacterMovement()->GravityScale = 1;
		
		// Clear Timer Handle and Reset distance along spline scaled to 0 to 1 float 
		GetWorldTimerManager().ClearTimer(railTimer);
		distance = 0;
		
		// Launch Character in Air ,reset usage Pawn Controller, and Grind Boolean
		ACharacter::LaunchCharacter(FVector(0, 0, JumpHeight), false, true);
		cameraBoom->bUsePawnControlRotation = true;
		isGrinding = false;
	}
}
#pragma endregion CHaracter_Grinding

#pragma region Jump


void AAvatar::Jump() // method used to allow the player character to jump
{
	if (isCrouching == true && numberOfAlternateJumps==0)
	{
		if (FMath::Abs(GetCharacterMovement()->Velocity.X)>400 || FMath::Abs(GetCharacterMovement()->Velocity.Y) > 400)
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is a  long jump"));
			const FRotator Rotation = capsuleA->GetComponentRotation();//Controller->GetControlRotation();
			const FRotator YawRotation(0, Rotation.Yaw, 0);

			// get right vector 
			const FVector Direction = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
			
			ACharacter::LaunchCharacter(FVector(Direction.X*longJumpVelocityXY,Direction.Y*longJumpVelocityXY,longJumpHeight), false, true);
			numberOfAlternateJumps++;
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is a High Jump"));
			ACharacter::LaunchCharacter(FVector(0, 0, highJumpHeight), false, true);
			numberOfAlternateJumps++;
		}
		
	}

	//GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is a jump"));
	if (numberOfJumps < 2 && numberOfAlternateJumps==0)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("This is a jump"));
		ACharacter::LaunchCharacter(FVector(0, 0, JumpHeight), false, true);
		numberOfJumps++;
	}
	
}

#pragma endregion Jump

