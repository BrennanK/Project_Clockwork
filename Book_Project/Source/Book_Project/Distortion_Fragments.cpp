// Fill out your copyright notice in the Description page of Project Settings.

#include "Distortion_Fragments.h"
#include "Engine/Engine.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Avatar.h"
// Sets default values
ADistortion_Fragments::ADistortion_Fragments()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

ADistortion_Fragments::ADistortion_Fragments(const FObjectInitializer& ObjectInitializer) :Super(ObjectInitializer)
{
	PrimaryActorTick.bCanEverTick = true;
	sphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Detection Sphere"));
	Mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh Model"));
	Mesh->AttachTo(RootComponent);
	sphereCollider->AttachTo(Mesh);
	sphereCollider->OnComponentBeginOverlap.AddDynamic(this, &ADistortion_Fragments::Collision);
}

// Called when the game starts or when spawned
void ADistortion_Fragments::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ADistortion_Fragments::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ADistortion_Fragments::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	GEngine->AddOnScreenDebugMessage(-1, 2.f, FColor::Green, "You collected a distortion");

	if (Cast<AAvatar>(OtherActor) == nullptr)
	{
		return;
	}

	Destroy();
}

