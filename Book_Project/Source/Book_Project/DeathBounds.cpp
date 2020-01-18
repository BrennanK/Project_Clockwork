// Fill out your copyright notice in the Description page of Project Settings.


#include "DeathBounds.h"
#include "Components/BoxComponent.h"
#include "Avatar.h"
#include "Kismet/GameplayStatics.h"
#include "MyGameInstance.h"
#include "Engine/Engine.h"

// Sets default values
ADeathBounds::ADeathBounds()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ADeathBounds::ADeathBounds(const FObjectInitializer &ObjectInitializer) :Super(ObjectInitializer)
{
	deathBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Death Box Collider"));
	deathBox->AttachTo(RootComponent);
	deathBox->OnComponentBeginOverlap.AddDynamic(this, &ADeathBounds::Collision);
}
// Called when the game starts or when spawned
void ADeathBounds::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADeathBounds::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADeathBounds::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "DIEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEEE");
	if (Cast<AAvatar>(OtherActor)==nullptr)
	{
		return;
	}

	
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "2222222222222222222222222222222222222");
	gameInstance = Cast<UMyGameInstance>(GetWorld()->GetGameInstance());
	
	if (gameInstance==nullptr)
	{
		return;
	}
	//GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "3333333333333333333333333333333333");
	AAvatar* player=Cast<AAvatar>(OtherActor);

	player->SetActorLocation(gameInstance->Location);

	player->SetActorRotation(gameInstance->Rotation);

	APlayerController* PController = GetWorld()->GetFirstPlayerController();

	if (PController == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Could not find controller."));
		return;
	}
	PController->SetControlRotation(gameInstance->Rotation);
}
