// Fill out your copyright notice in the Description page of Project Settings.


#include "EnemyAI.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BehaviorTree/Blackboard/BlackboardKeyAllTypes.h"
#include "BehaviorTree/BehaviorTree.h"
#include "EnemyCharacter.h"
#include "BehaviorTree/BehaviorTreeComponent.h"

AEnemyAI::AEnemyAI()
{
	BlackboardComp = CreateDefaultSubobject<UBlackboardComponent>(TEXT("BlackboardComp"));

	BehaviorComp = CreateDefaultSubobject<UBehaviorTreeComponent>(TEXT("BehaviorComp"));
}

void AEnemyAI::OnPossess(APawn * InPawn)
{
	Super::OnPossess(InPawn);

	AEnemyCharacter *Char = Cast<AEnemyCharacter>(InPawn);

	if (Char && Char->BotBehavior)
	{
		BlackboardComp->InitializeBlackboard(*Char->BotBehavior->BlackboardAsset);

		EnemyKeyID = BlackboardComp->GetKeyID("Target");

		PawnKeyID = BlackboardComp->GetKeyID("Pawn_Ref");

		BehaviorComp->StartTree(*Char->BotBehavior);

		BehaviorComp->GetBlackboardComponent()->SetValue<UBlackboardKeyType_Object>(PawnKeyID, Char);
	}
}
