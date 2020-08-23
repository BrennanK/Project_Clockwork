// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Enemy_Spawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Spawner() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemy_Spawner_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemy_Spawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APatrolling_Enemy_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	static FName NAME_AEnemy_Spawner_setPotentialPatrolPath = FName(TEXT("setPotentialPatrolPath"));
	void AEnemy_Spawner::setPotentialPatrolPath(APatrolling_Enemy* spawn)
	{
		Enemy_Spawner_eventsetPotentialPatrolPath_Parms Parms;
		Parms.spawn=spawn;
		ProcessEvent(FindFunctionChecked(NAME_AEnemy_Spawner_setPotentialPatrolPath),&Parms);
	}
	void AEnemy_Spawner::StaticRegisterNativesAEnemy_Spawner()
	{
		UClass* Class = AEnemy_Spawner::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemy", &AEnemy_Spawner::execSpawnEnemy },
			{ "spawnEnemyAfterDelay", &AEnemy_Spawner::execspawnEnemyAfterDelay },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::NewProp_spawn = { "spawn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_Spawner_eventsetPotentialPatrolPath_Parms, spawn), Z_Construct_UClass_APatrolling_Enemy_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::NewProp_spawn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Spawner, nullptr, "setPotentialPatrolPath", nullptr, nullptr, sizeof(Enemy_Spawner_eventsetPotentialPatrolPath_Parms), Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Spawner, nullptr, "SpawnEnemy", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics
	{
		struct Enemy_Spawner_eventspawnEnemyAfterDelay_Parms
		{
			float delay;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::NewProp_delay = { "delay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Enemy_Spawner_eventspawnEnemyAfterDelay_Parms, delay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::NewProp_delay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnemy_Spawner, nullptr, "spawnEnemyAfterDelay", nullptr, nullptr, sizeof(Enemy_Spawner_eventspawnEnemyAfterDelay_Parms), Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnemy_Spawner_NoRegister()
	{
		return AEnemy_Spawner::StaticClass();
	}
	struct Z_Construct_UClass_AEnemy_Spawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedActorRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedActorRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialEnemySpawned_MetaData[];
#endif
		static void NewProp_initialEnemySpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_initialEnemySpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spawnPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_spawnPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyToSpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnemy_Spawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnemy_Spawner_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnemy_Spawner_setPotentialPatrolPath, "setPotentialPatrolPath" }, // 2243099610
		{ &Z_Construct_UFunction_AEnemy_Spawner_SpawnEnemy, "SpawnEnemy" }, // 4168225579
		{ &Z_Construct_UFunction_AEnemy_Spawner_spawnEnemyAfterDelay, "spawnEnemyAfterDelay" }, // 2528180994
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Spawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Enemy_Spawner.h" },
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_SpawnedActorRef_MetaData[] = {
		{ "Category", "Enemy_Spawner" },
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_SpawnedActorRef = { "SpawnedActorRef", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Spawner, SpawnedActorRef), Z_Construct_UClass_AEnemyCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_SpawnedActorRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_SpawnedActorRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned_MetaData[] = {
		{ "Category", "Enemy_Spawner" },
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	void Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned_SetBit(void* Obj)
	{
		((AEnemy_Spawner*)Obj)->initialEnemySpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned = { "initialEnemySpawned", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AEnemy_Spawner), &Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned_SetBit, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_spawnPoint_MetaData[] = {
		{ "Category", "Enemy_Spawner" },
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_spawnPoint = { "spawnPoint", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Spawner, spawnPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_spawnPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_spawnPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_EnemyToSpawn_MetaData[] = {
		{ "Category", "Enemy to Spawn" },
		{ "ModuleRelativePath", "Enemy_Spawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_EnemyToSpawn = { "EnemyToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AEnemy_Spawner, EnemyToSpawn), Z_Construct_UClass_AEnemyCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_EnemyToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_EnemyToSpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnemy_Spawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_SpawnedActorRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_initialEnemySpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_spawnPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnemy_Spawner_Statics::NewProp_EnemyToSpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnemy_Spawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnemy_Spawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnemy_Spawner_Statics::ClassParams = {
		&AEnemy_Spawner::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AEnemy_Spawner_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AEnemy_Spawner_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AEnemy_Spawner_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnemy_Spawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnemy_Spawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnemy_Spawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Spawner, 4056621073);
	template<> BOOK_PROJECT_API UClass* StaticClass<AEnemy_Spawner>()
	{
		return AEnemy_Spawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Spawner(Z_Construct_UClass_AEnemy_Spawner, &AEnemy_Spawner::StaticClass, TEXT("/Script/Book_Project"), TEXT("AEnemy_Spawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Spawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
