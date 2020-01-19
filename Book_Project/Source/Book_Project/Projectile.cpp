// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"
#include "Engine/Engine.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Avatar.h"
#include "Kismet/KismetMathLibrary.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AProjectile::AProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}
AProjectile::AProjectile(const FObjectInitializer &ObjectInitializer) : Super(ObjectInitializer)
{
	mesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Projectile Mesh"));
	projectileCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	mesh->AttachTo(RootComponent);
	projectileCollider->AttachTo(mesh);
	projectileCollider->OnComponentBeginOverlap.AddDynamic(this, &AProjectile::Collision);
}
// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
	player= Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	FVector forward = GetActorForwardVector();
	SetActorLocation(GetActorLocation() + forward);
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Emerald, "The forward vector for this actor is: " + FString("(") + FString::SanitizeFloat(forward.X) + FString(" , ") + FString::SanitizeFloat(forward.Y) + FString(" , ") + FString::SanitizeFloat(forward.Z) + FString(")"));
}

void AProjectile::moveForward()
{
}

void AProjectile::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Cast<AAvatar>(OtherActor) == nullptr)
	{
		return;
	}
	if (player == nullptr)
	{
		GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Emerald, "The forward vector for this actor is: " );
	}
	player->MinusHealth(damage);
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	FRotator lookAtPlayer = UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), player->GetActorLocation());
	//GEngine->AddOnScreenDebugMessage(-1, 10.f, FColor::Emerald, "The forward vector for this actor is: " + FString("(") + FString::SanitizeFloat(lookAtPlayer.Vector.X) + FString(" , ") + FString::SanitizeFloat(lookAtPlayer.Vector.Y) + FString(" , ") + FString::SanitizeFloat(lookAtPlayer.Vector.Z) + FString(")"));
	SetActorRotation(lookAtPlayer);
}

