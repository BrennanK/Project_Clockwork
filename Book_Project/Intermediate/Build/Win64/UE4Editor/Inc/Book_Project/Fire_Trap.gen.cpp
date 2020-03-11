// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Fire_Trap.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFire_Trap() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AFire_Trap_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AFire_Trap();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AManipulable_Object();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AFire_Trap_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AFire_Trap_turnOffFireSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AFire_Trap_turnOnFireSound();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_AFire_Trap_playWaterSoundEffect = FName(TEXT("playWaterSoundEffect"));
	void AFire_Trap::playWaterSoundEffect(int32 indexOfSound)
	{
		Fire_Trap_eventplayWaterSoundEffect_Parms Parms;
		Parms.indexOfSound=indexOfSound;
		ProcessEvent(FindFunctionChecked(NAME_AFire_Trap_playWaterSoundEffect),&Parms);
	}
	static FName NAME_AFire_Trap_turnOffFireSound = FName(TEXT("turnOffFireSound"));
	void AFire_Trap::turnOffFireSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_Trap_turnOffFireSound),NULL);
	}
	static FName NAME_AFire_Trap_turnOnFireSound = FName(TEXT("turnOnFireSound"));
	void AFire_Trap::turnOnFireSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AFire_Trap_turnOnFireSound),NULL);
	}
	void AFire_Trap::StaticRegisterNativesAFire_Trap()
	{
		UClass* Class = AFire_Trap::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &AFire_Trap::execCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFire_Trap_Collision_Statics
	{
		struct Fire_Trap_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fire_Trap_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Fire_Trap_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Fire_Trap_eventCollision_Parms), &Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fire_Trap_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fire_Trap_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fire_Trap_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fire_Trap_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_Trap_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_Trap_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_Trap, nullptr, "Collision", nullptr, nullptr, sizeof(Fire_Trap_eventCollision_Parms), Z_Construct_UFunction_AFire_Trap_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_Trap_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_Trap_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexOfSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::NewProp_indexOfSound = { "indexOfSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Fire_Trap_eventplayWaterSoundEffect_Parms, indexOfSound), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::NewProp_indexOfSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_Trap, nullptr, "playWaterSoundEffect", nullptr, nullptr, sizeof(Fire_Trap_eventplayWaterSoundEffect_Parms), Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_Trap_turnOffFireSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_turnOffFireSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_Trap_turnOffFireSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_Trap, nullptr, "turnOffFireSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_turnOffFireSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_turnOffFireSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_Trap_turnOffFireSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_Trap_turnOffFireSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFire_Trap_turnOnFireSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFire_Trap_turnOnFireSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFire_Trap_turnOnFireSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFire_Trap, nullptr, "turnOnFireSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFire_Trap_turnOnFireSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AFire_Trap_turnOnFireSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFire_Trap_turnOnFireSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFire_Trap_turnOnFireSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFire_Trap_NoRegister()
	{
		return AFire_Trap::StaticClass();
	}
	struct Z_Construct_UClass_AFire_Trap_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayToTurnFireOff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayToTurnFireOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayToTurnWaterOff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayToTurnWaterOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayToTurnWaterOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayToTurnWaterOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activateOnPlay_MetaData[];
#endif
		static void NewProp_activateOnPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_activateOnPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageToPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_waterParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_waterParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fireBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_fireBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFire_Trap_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManipulable_Object,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFire_Trap_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFire_Trap_Collision, "Collision" }, // 1589728121
		{ &Z_Construct_UFunction_AFire_Trap_playWaterSoundEffect, "playWaterSoundEffect" }, // 2470812484
		{ &Z_Construct_UFunction_AFire_Trap_turnOffFireSound, "turnOffFireSound" }, // 1068408468
		{ &Z_Construct_UFunction_AFire_Trap_turnOnFireSound, "turnOnFireSound" }, // 1044233526
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Fire_Trap.h" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnFireOff_MetaData[] = {
		{ "Category", "Delay For Water" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnFireOff = { "delayToTurnFireOff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, delayToTurnFireOff), METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnFireOff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnFireOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOff_MetaData[] = {
		{ "Category", "Delay For Water" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOff = { "delayToTurnWaterOff", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, delayToTurnWaterOff), METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOff_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOn_MetaData[] = {
		{ "Category", "Delay For Water" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOn = { "delayToTurnWaterOn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, delayToTurnWaterOn), METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay_MetaData[] = {
		{ "Category", "Start On?" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	void Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay_SetBit(void* Obj)
	{
		((AFire_Trap*)Obj)->activateOnPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay = { "activateOnPlay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFire_Trap), &Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_damageToPlayer_MetaData[] = {
		{ "Category", "Damage To Player" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_damageToPlayer = { "damageToPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, damageToPlayer), METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_damageToPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_damageToPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_waterParticle_MetaData[] = {
		{ "Category", "Components of Trap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_waterParticle = { "waterParticle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, waterParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_waterParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_waterParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireParticle_MetaData[] = {
		{ "Category", "Components of Trap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireParticle = { "fireParticle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, fireParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireBox_MetaData[] = {
		{ "Category", "Components of Trap" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Fire_Trap.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireBox = { "fireBox", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFire_Trap, fireBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFire_Trap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnFireOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_delayToTurnWaterOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_activateOnPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_damageToPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_waterParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFire_Trap_Statics::NewProp_fireBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFire_Trap_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFire_Trap>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFire_Trap_Statics::ClassParams = {
		&AFire_Trap::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFire_Trap_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AFire_Trap_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AFire_Trap_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFire_Trap()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFire_Trap_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFire_Trap, 2982107990);
	template<> BOOK_PROJECT_API UClass* StaticClass<AFire_Trap>()
	{
		return AFire_Trap::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFire_Trap(Z_Construct_UClass_AFire_Trap, &AFire_Trap::StaticClass, TEXT("/Script/Book_Project"), TEXT("AFire_Trap"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFire_Trap);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
