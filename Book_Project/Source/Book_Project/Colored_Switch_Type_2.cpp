// Fill out your copyright notice in the Description page of Project Settings.


#include "Colored_Switch_Type_2.h"
#include "Avatar.h"
#include "Block_Switch_Controller_01.h"

void AColored_Switch_Type_2::Collision(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

	if (Cast <AAvatar>(OtherActor) == nullptr)
	{
		return;
	}
	if (isGreen == false)
	{
		changeToBluePanel();
		playFloorSwitchSound();
		switchManager->incrementSwitchCounter();
		isGreen = true;
	}
	else
	{
		changeToOrangePanel();
		playFloorSwitchSound();
		switchManager->decrementSwitchCounter();
		isGreen = false;
	}
}