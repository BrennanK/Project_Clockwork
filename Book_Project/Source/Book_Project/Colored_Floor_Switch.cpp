// Fill out your copyright notice in the Description page of Project Settings.

#include "Colored_Floor_Switch.h"
#include "Components/BoxComponent.h"
#include "Engine/Engine.h"
#include "Components/StaticMeshComponent.h"
#include "Avatar.h"



AColored_Floor_Switch::AColored_Floor_Switch(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;

	floorBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Floor_Switch_Collider"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Item Mesh Component"));
	Mesh->AttachTo(RootComponent);
	floorBox->AttachTo(Mesh);
	floorBox->OnComponentBeginOverlap.AddDynamic(this, &AColored_Floor_Switch::Collision);

}
// Sets default values


// Called when the game starts or when spawned
void AColored_Floor_Switch::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AColored_Floor_Switch::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AColored_Floor_Switch::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Red, TEXT("Floor Pad is colliding with something"));

	if (Cast <AAvatar>(OtherActor) == nullptr)
	{
		return;
	}

	changePanelColorToGreen();
}

