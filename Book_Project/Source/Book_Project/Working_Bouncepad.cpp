// Fill out your copyright notice in the Description page of Project Settings.

#include "Working_Bouncepad.h"
#include "Engine/Engine.h"
#include "Avatar.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
AWorking_Bouncepad::AWorking_Bouncepad()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

AWorking_Bouncepad::AWorking_Bouncepad(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	bounceBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Collision Box"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Static Mesh Component"));
	Mesh->AttachTo(RootComponent);
	bounceBox->AttachTo(Mesh);
	bounceBox->OnComponentBeginOverlap.AddDynamic(this, &AWorking_Bouncepad::Collision);
	bounceBox->OnComponentEndOverlap.AddDynamic(this, &AWorking_Bouncepad::EndCollision);
}

// Called when the game starts or when spawned
void AWorking_Bouncepad::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWorking_Bouncepad::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AWorking_Bouncepad::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("We are bouncing"));

	if (Cast <AAvatar>(OtherActor) == nullptr)
	{
		return;
	}

	AAvatar* player= Cast<AAvatar>(OtherActor);
	if (player->timeFalling*bounceHeightPerSecondFalling < minBounceHeight)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Min Case"));
		player->LaunchCharacter(FVector(0, 0, minBounceHeight), true, true);
		player->isFalling = false;
		player->timeFalling = 0.0f;
	}
	else if (player->timeFalling*bounceHeightPerSecondFalling > maxBounceHeight)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Max Case"));
		player->LaunchCharacter(FVector(0, 0, maxBounceHeight), true, true);
		player->isFalling = false;
		player->timeFalling = 0.0f;
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Mid Case"));
		player->LaunchCharacter(FVector(0, 0, player->timeFalling*bounceHeightPerSecondFalling), true, true);
		player->isFalling = false;
		player->timeFalling = 0.0f;
	}
}

void AWorking_Bouncepad::EndCollision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("BOUNCE END"));
	if (Cast <AAvatar>(OtherActor) == nullptr)
	{
		return;
	}
	AAvatar* player = Cast<AAvatar>(OtherActor);
	player->isFalling = true;
}

