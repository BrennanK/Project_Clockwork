// Fill out your copyright notice in the Description page of Project Settings.


#include "Second_Interactable_Object.h"
#include "Engine/Engine.h"

ASecond_Interactable_Object::ASecond_Interactable_Object()
{

}

void ASecond_Interactable_Object::BeginPlay()
{
	inheritanceExample();
}

void ASecond_Interactable_Object::inheritanceExample()
{
	GEngine->AddOnScreenDebugMessage(-1,5.f,FColor::Orange,"THE CHILD OVERRIDE WAS SUCCESSFUL");
}
