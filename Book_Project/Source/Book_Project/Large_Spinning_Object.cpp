// Fill out your copyright notice in the Description page of Project Settings.


#include "Large_Spinning_Object.h"
#include "TimerManager.h"
#include "Engine/Engine.h"

ALarge_Spinning_Object::ALarge_Spinning_Object()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ALarge_Spinning_Object::BeginPlay()
{
	Super::BeginPlay();
	//BeginSpin();
}

void ALarge_Spinning_Object::BeginSpin()
{
	GetWorldTimerManager().SetTimer(movementTimer, this, &ALarge_Spinning_Object::Spinning, rateOfRotation, true, 0.0f);
}

void ALarge_Spinning_Object::Spinning()
{
	FQuat QuatRotation = FQuat(FRotator(0, 0, amountToRotate));

	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}


void ALarge_Spinning_Object::interActionCommand()
{
	GEngine->AddOnScreenDebugMessage(-1, 6.f, FColor::Red, "The fan should be slowing down");
	amountToRotate = slowedRotationAmount;
}


