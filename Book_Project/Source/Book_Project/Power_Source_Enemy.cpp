// Fill out your copyright notice in the Description page of Project Settings.


#include "Power_Source_Enemy.h"
#include "Avatar.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/CapsuleComponent.h"

APower_Source_Enemy::APower_Source_Enemy()
{

}

APower_Source_Enemy::APower_Source_Enemy(const FObjectInitializer &ObjectInitializer) :Super(ObjectInitializer)
{
	//capsuleCollider->OnComponentBeginOverlap.AddDynamic(this, &APower_Source_Enemy::Collision);
}

void APower_Source_Enemy::Collision(UPrimitiveComponent * OverlappedComp, AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
	if (Cast<AAvatar>(OtherActor))
	{
		AAvatar* player = Cast<AAvatar>(OtherActor);

		player->MinusHealth(damageToPlayer);

		FRotator directionOfPlayer= UKismetMathLibrary::FindLookAtRotation(GetActorLocation(), player->GetActorLocation());
	}
}
