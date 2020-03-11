// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Patrolling_Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolling_Enemy() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APatrolling_Enemy_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APatrolling_Enemy();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_EndCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static FName NAME_APatrolling_Enemy_changeSpeedOfBlink = FName(TEXT("changeSpeedOfBlink"));
	void APatrolling_Enemy::changeSpeedOfBlink()
	{
		ProcessEvent(FindFunctionChecked(NAME_APatrolling_Enemy_changeSpeedOfBlink),NULL);
	}
	static FName NAME_APatrolling_Enemy_changeToSelfDestructMaterial = FName(TEXT("changeToSelfDestructMaterial"));
	void APatrolling_Enemy::changeToSelfDestructMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_APatrolling_Enemy_changeToSelfDestructMaterial),NULL);
	}
	static FName NAME_APatrolling_Enemy_playExplosionSound = FName(TEXT("playExplosionSound"));
	void APatrolling_Enemy::playExplosionSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APatrolling_Enemy_playExplosionSound),NULL);
	}
	static FName NAME_APatrolling_Enemy_playFuseLightSound = FName(TEXT("playFuseLightSound"));
	void APatrolling_Enemy::playFuseLightSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APatrolling_Enemy_playFuseLightSound),NULL);
	}
	static FName NAME_APatrolling_Enemy_playPunchImpactSound = FName(TEXT("playPunchImpactSound"));
	void APatrolling_Enemy::playPunchImpactSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APatrolling_Enemy_playPunchImpactSound),NULL);
	}
	static FName NAME_APatrolling_Enemy_stopFuseLightSound = FName(TEXT("stopFuseLightSound"));
	void APatrolling_Enemy::stopFuseLightSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APatrolling_Enemy_stopFuseLightSound),NULL);
	}
	void APatrolling_Enemy::StaticRegisterNativesAPatrolling_Enemy()
	{
		UClass* Class = APatrolling_Enemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &APatrolling_Enemy::execCollision },
			{ "EndCollision", &APatrolling_Enemy::execEndCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "changeSpeedOfBlink", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "changeToSelfDestructMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics
	{
		struct Patrolling_Enemy_eventCollision_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Patrolling_Enemy_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Patrolling_Enemy_eventCollision_Parms), &Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "Collision", nullptr, nullptr, sizeof(Patrolling_Enemy_eventCollision_Parms), Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics
	{
		struct Patrolling_Enemy_eventEndCollision_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventEndCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventEndCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventEndCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Patrolling_Enemy_eventEndCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "EndCollision", nullptr, nullptr, sizeof(Patrolling_Enemy_eventEndCollision_Parms), Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_EndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_EndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "playExplosionSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "playFuseLightSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "playPunchImpactSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APatrolling_Enemy, nullptr, "stopFuseLightSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APatrolling_Enemy_NoRegister()
	{
		return APatrolling_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_APatrolling_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slowBlinkDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_slowBlinkDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondsBetweenFastBlinkAndBlowUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secondsBetweenFastBlinkAndBlowUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slowBlinkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_slowBlinkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fastBlinkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fastBlinkSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageToDeal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageToDeal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_explosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_explosionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrolling_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APatrolling_Enemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APatrolling_Enemy_changeSpeedOfBlink, "changeSpeedOfBlink" }, // 406606244
		{ &Z_Construct_UFunction_APatrolling_Enemy_changeToSelfDestructMaterial, "changeToSelfDestructMaterial" }, // 4291817722
		{ &Z_Construct_UFunction_APatrolling_Enemy_Collision, "Collision" }, // 3464143351
		{ &Z_Construct_UFunction_APatrolling_Enemy_EndCollision, "EndCollision" }, // 320192238
		{ &Z_Construct_UFunction_APatrolling_Enemy_playExplosionSound, "playExplosionSound" }, // 3281970479
		{ &Z_Construct_UFunction_APatrolling_Enemy_playFuseLightSound, "playFuseLightSound" }, // 1429024927
		{ &Z_Construct_UFunction_APatrolling_Enemy_playPunchImpactSound, "playPunchImpactSound" }, // 3811006536
		{ &Z_Construct_UFunction_APatrolling_Enemy_stopFuseLightSound, "stopFuseLightSound" }, // 3045009761
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Patrolling_Enemy.h" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkDelay_MetaData[] = {
		{ "Category", "Speed of Blinking Detonation" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkDelay = { "slowBlinkDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolling_Enemy, slowBlinkDelay), METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_secondsBetweenFastBlinkAndBlowUp_MetaData[] = {
		{ "Category", "Speed of Blinking Detonation" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_secondsBetweenFastBlinkAndBlowUp = { "secondsBetweenFastBlinkAndBlowUp", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolling_Enemy, secondsBetweenFastBlinkAndBlowUp), METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_secondsBetweenFastBlinkAndBlowUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_secondsBetweenFastBlinkAndBlowUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkSpeed_MetaData[] = {
		{ "Category", "Speed of Blinking Detonation" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkSpeed = { "slowBlinkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolling_Enemy, slowBlinkSpeed), METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_fastBlinkSpeed_MetaData[] = {
		{ "Category", "Speed of Blinking Detonation" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_fastBlinkSpeed = { "fastBlinkSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolling_Enemy, fastBlinkSpeed), METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_fastBlinkSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_fastBlinkSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_damageToDeal_MetaData[] = {
		{ "Category", "Damage Done to Player" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_damageToDeal = { "damageToDeal", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolling_Enemy, damageToDeal), METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_damageToDeal_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_damageToDeal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_explosionRadius_MetaData[] = {
		{ "Category", "Blast Zone" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Patrolling_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_explosionRadius = { "explosionRadius", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolling_Enemy, explosionRadius), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_explosionRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_explosionRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrolling_Enemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_secondsBetweenFastBlinkAndBlowUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_slowBlinkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_fastBlinkSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_damageToDeal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolling_Enemy_Statics::NewProp_explosionRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrolling_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolling_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrolling_Enemy_Statics::ClassParams = {
		&APatrolling_Enemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APatrolling_Enemy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APatrolling_Enemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APatrolling_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrolling_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrolling_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrolling_Enemy, 3337659621);
	template<> BOOK_PROJECT_API UClass* StaticClass<APatrolling_Enemy>()
	{
		return APatrolling_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrolling_Enemy(Z_Construct_UClass_APatrolling_Enemy, &APatrolling_Enemy::StaticClass, TEXT("/Script/Book_Project"), TEXT("APatrolling_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolling_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
