// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EnemyCharacter.h"
#include "Patrolling_Enemy.generated.h"

/**
 * 
 */
UCLASS()
class BOOK_PROJECT_API APatrolling_Enemy : public AEnemyCharacter
{
	GENERATED_BODY()
	
	public:
		APatrolling_Enemy(const FObjectInitializer &ObjectInitializer);
		
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Blast Zone")
			class USphereComponent* explosionRadius;

		class AAvatar* playerCharacter;

		UPROPERTY(EditAnywhere, Category = "Damage Done to Player")
			float damageToDeal;
		
		FTimerHandle blinkHandle;
		
		FTimerHandle deathHandle;

		UFUNCTION(BlueprintImplementableEvent)
			void changeToSelfDestructMaterial();

		UFUNCTION(BlueprintImplementableEvent)
			void changeSpeedOfBlink();
		
		void initiateSpeedChange();

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed of Blinking Detonation")
			float fastBlinkSpeed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed of Blinking Detonation")
			float slowBlinkSpeed;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Speed of Blinking Detonation")
			float secondsBetweenFastBlinkAndBlowUp;

		void DestroyCaller();

		virtual void DestroyThisUnit() override;

		UFUNCTION()
			void Collision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

		UFUNCTION()
			void EndCollision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

		UFUNCTION(BlueprintImplementableEvent)
			void playPunchImpactSound();

		UFUNCTION(BlueprintImplementableEvent)
			void playFuseLightSound();

		UFUNCTION(BlueprintImplementableEvent)
			void playExplosionSound();
	protected:
		//virtual void BeginPlay() override;
};
