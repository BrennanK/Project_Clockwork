// Fill out your copyright notice in the Description page of Project Settings.


#include "Turret.h"
#include "Engine/World.h"
#include "TimerManager.h"

// Sets default values
ATurret::ATurret()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ATurret::BeginPlay()
{
	Super::BeginPlay();
	Loc = GetActorLocation();
	Rot = GetActorRotation();
	GetWorldTimerManager().SetTimer(fireTimer, this, &ATurret::SpawnObject, delayOfFire, true, 0.0f);
}

void ATurret::SpawnObject()
{
	FActorSpawnParameters SpawnParams;
	AActor* SpawnedActorRef;
	switch (typeOfTurret)
	{
		case ETurretType::Standard:
			SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn[0], Loc, Rot, SpawnParams);
			break;
		case ETurretType::Tracking:
			SpawnedActorRef = GetWorld()->SpawnActor<AActor>(ActorToSpawn[0], Loc, Rot, SpawnParams);
			break;
		default:
			break;
	}
}

void ATurret::stopFiring()
{
	GetWorldTimerManager().ClearTimer(fireTimer);
}

// Called every frame
void ATurret::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

