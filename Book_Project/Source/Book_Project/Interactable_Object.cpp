// Fill out your copyright notice in the Description page of Project Settings.


#include "Interactable_Object.h"
#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "Avatar.h"

// Sets default values
AInteractable_Object::AInteractable_Object()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AInteractable_Object::AInteractable_Object(const FObjectInitializer &ObjectInitializer): Super(ObjectInitializer)
{
	interBox = CreateDefaultSubobject<UBoxComponent>(TEXT("Interaction Box"));
	mesh= CreateDefaultSubobject<UStaticMeshComponent>(TEXT("mesh"));
	mesh->AttachTo(RootComponent);
	interBox->AttachTo(mesh);
	interBox->OnComponentBeginOverlap.AddDynamic(this, &AInteractable_Object::Collision);
	interBox->OnComponentEndOverlap.AddDynamic(this, &AInteractable_Object::EndCollision);
}
// Called when the game starts or when spawned
void AInteractable_Object::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AInteractable_Object::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AInteractable_Object::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Cast<AAvatar>(OtherActor) == nullptr)
	{
		return;
	}
	AAvatar* player = Cast<AAvatar>(OtherActor);
	player->currentState = ECharacterState::INTERACTABLE;
	displayInteractionIcon();
}

void AInteractable_Object::EndCollision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
	hideInteractionIcon();
	AAvatar* player = Cast<AAvatar>(OtherActor);
	player->currentState = ECharacterState::NORMAL;
}

void AInteractable_Object::interactionAction(AAvatar* player)
{
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Orange, "Congrats Our Interaction Works");
	player->currentState = ECharacterState::INTERACTABLE;
}

