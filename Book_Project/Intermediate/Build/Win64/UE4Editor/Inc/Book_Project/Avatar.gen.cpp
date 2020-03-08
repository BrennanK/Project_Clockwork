// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Avatar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAvatar() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_ECharacterState();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_ETimeAbility();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_activateGrindSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_activateLockOnFunction();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_activatePlayerActionSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_beginGrind();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_callEnergyBarChange();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_callWheelChange();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_changeTimePowers();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_changeToEnergyMaterial();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_changeToNormalMaterial();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_changeToWarpMaterial();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_deactivateGrindSound();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_enableAndDisableCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_Falling();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_Landed();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_LeftTimePower();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_lockCameraToTarget();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_removeLockOnTarget();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_RightTimePower();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_setLockOnTarget();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ALock_On_Actor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_showCollectables();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_spawnPunchingProjectile();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_useTimePower();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AInteractable_Object_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ACollission_Text_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
// End Cross Module References
	static UEnum* ECharacterState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_ECharacterState, Z_Construct_UPackage__Script_Book_Project(), TEXT("ECharacterState"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<ECharacterState>()
	{
		return ECharacterState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECharacterState(ECharacterState_StaticEnum, TEXT("/Script/Book_Project"), TEXT("ECharacterState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_ECharacterState_Hash() { return 3376156291U; }
	UEnum* Z_Construct_UEnum_Book_Project_ECharacterState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECharacterState"), 0, Get_Z_Construct_UEnum_Book_Project_ECharacterState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECharacterState::NORMAL", (int64)ECharacterState::NORMAL },
				{ "ECharacterState::STUNNED", (int64)ECharacterState::STUNNED },
				{ "ECharacterState::DEAD", (int64)ECharacterState::DEAD },
				{ "ECharacterState::INTERACTABLE", (int64)ECharacterState::INTERACTABLE },
				{ "ECharacterState::READTEXT", (int64)ECharacterState::READTEXT },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DEAD.Name", "ECharacterState::DEAD" },
				{ "INTERACTABLE.Name", "ECharacterState::INTERACTABLE" },
				{ "ModuleRelativePath", "Avatar.h" },
				{ "NORMAL.Name", "ECharacterState::NORMAL" },
				{ "READTEXT.Name", "ECharacterState::READTEXT" },
				{ "STUNNED.Name", "ECharacterState::STUNNED" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"ECharacterState",
				"ECharacterState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ETimeAbility_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_ETimeAbility, Z_Construct_UPackage__Script_Book_Project(), TEXT("ETimeAbility"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<ETimeAbility>()
	{
		return ETimeAbility_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETimeAbility(ETimeAbility_StaticEnum, TEXT("/Script/Book_Project"), TEXT("ETimeAbility"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_ETimeAbility_Hash() { return 3819345487U; }
	UEnum* Z_Construct_UEnum_Book_Project_ETimeAbility()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETimeAbility"), 0, Get_Z_Construct_UEnum_Book_Project_ETimeAbility_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETimeAbility::None", (int64)ETimeAbility::None },
				{ "ETimeAbility::Water", (int64)ETimeAbility::Water },
				{ "ETimeAbility::Warp", (int64)ETimeAbility::Warp },
				{ "ETimeAbility::Barrier", (int64)ETimeAbility::Barrier },
				{ "ETimeAbility::Mold", (int64)ETimeAbility::Mold },
				{ "ETimeAbility::Repair", (int64)ETimeAbility::Repair },
				{ "ETimeAbility::Stasis", (int64)ETimeAbility::Stasis },
				{ "ETimeAbility::Acceleration", (int64)ETimeAbility::Acceleration },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Acceleration.Name", "ETimeAbility::Acceleration" },
				{ "Barrier.Name", "ETimeAbility::Barrier" },
				{ "ModuleRelativePath", "Avatar.h" },
				{ "Mold.Name", "ETimeAbility::Mold" },
				{ "None.Name", "ETimeAbility::None" },
				{ "Repair.Name", "ETimeAbility::Repair" },
				{ "Stasis.Name", "ETimeAbility::Stasis" },
				{ "Warp.Name", "ETimeAbility::Warp" },
				{ "Water.Name", "ETimeAbility::Water" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"ETimeAbility",
				"ETimeAbility",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static FName NAME_AAvatar_activateGrindSound = FName(TEXT("activateGrindSound"));
	void AAvatar::activateGrindSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_activateGrindSound),NULL);
	}
	static FName NAME_AAvatar_activatePlayerActionSound = FName(TEXT("activatePlayerActionSound"));
	void AAvatar::activatePlayerActionSound(int32 indexOfSound)
	{
		Avatar_eventactivatePlayerActionSound_Parms Parms;
		Parms.indexOfSound=indexOfSound;
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_activatePlayerActionSound),&Parms);
	}
	static FName NAME_AAvatar_callEnergyBarChange = FName(TEXT("callEnergyBarChange"));
	void AAvatar::callEnergyBarChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_callEnergyBarChange),NULL);
	}
	static FName NAME_AAvatar_callWheelChange = FName(TEXT("callWheelChange"));
	void AAvatar::callWheelChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_callWheelChange),NULL);
	}
	static FName NAME_AAvatar_changeTimePowers = FName(TEXT("changeTimePowers"));
	void AAvatar::changeTimePowers()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_changeTimePowers),NULL);
	}
	static FName NAME_AAvatar_changeToEnergyMaterial = FName(TEXT("changeToEnergyMaterial"));
	void AAvatar::changeToEnergyMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_changeToEnergyMaterial),NULL);
	}
	static FName NAME_AAvatar_changeToNormalMaterial = FName(TEXT("changeToNormalMaterial"));
	void AAvatar::changeToNormalMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_changeToNormalMaterial),NULL);
	}
	static FName NAME_AAvatar_changeToWarpMaterial = FName(TEXT("changeToWarpMaterial"));
	void AAvatar::changeToWarpMaterial()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_changeToWarpMaterial),NULL);
	}
	static FName NAME_AAvatar_deactivateGrindSound = FName(TEXT("deactivateGrindSound"));
	void AAvatar::deactivateGrindSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_deactivateGrindSound),NULL);
	}
	static FName NAME_AAvatar_enableAndDisableCollision = FName(TEXT("enableAndDisableCollision"));
	void AAvatar::enableAndDisableCollision()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_enableAndDisableCollision),NULL);
	}
	static FName NAME_AAvatar_showCollectables = FName(TEXT("showCollectables"));
	void AAvatar::showCollectables()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_showCollectables),NULL);
	}
	void AAvatar::StaticRegisterNativesAAvatar()
	{
		UClass* Class = AAvatar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "activateLockOnFunction", &AAvatar::execactivateLockOnFunction },
			{ "beginGrind", &AAvatar::execbeginGrind },
			{ "Collision", &AAvatar::execCollision },
			{ "Falling", &AAvatar::execFalling },
			{ "Landed", &AAvatar::execLanded },
			{ "LeftTimePower", &AAvatar::execLeftTimePower },
			{ "lockCameraToTarget", &AAvatar::execlockCameraToTarget },
			{ "removeLockOnTarget", &AAvatar::execremoveLockOnTarget },
			{ "RightTimePower", &AAvatar::execRightTimePower },
			{ "setLockOnTarget", &AAvatar::execsetLockOnTarget },
			{ "spawnPunchingProjectile", &AAvatar::execspawnPunchingProjectile },
			{ "useTimePower", &AAvatar::execuseTimePower },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAvatar_activateGrindSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_activateGrindSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_activateGrindSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "activateGrindSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_activateGrindSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_activateGrindSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_activateGrindSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_activateGrindSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_activateLockOnFunction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_activateLockOnFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_activateLockOnFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "activateLockOnFunction", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_activateLockOnFunction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_activateLockOnFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_activateLockOnFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_activateLockOnFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexOfSound;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::NewProp_indexOfSound = { "indexOfSound", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventactivatePlayerActionSound_Parms, indexOfSound), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::NewProp_indexOfSound,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "activatePlayerActionSound", nullptr, nullptr, sizeof(Avatar_eventactivatePlayerActionSound_Parms), Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_activatePlayerActionSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_activatePlayerActionSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_beginGrind_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_beginGrind_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_beginGrind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "beginGrind", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_beginGrind_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_beginGrind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_beginGrind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_beginGrind_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_callEnergyBarChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_callEnergyBarChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_callEnergyBarChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "callEnergyBarChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_callEnergyBarChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_callEnergyBarChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_callEnergyBarChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_callEnergyBarChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_callWheelChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_callWheelChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_callWheelChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "callWheelChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_callWheelChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_callWheelChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_callWheelChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_callWheelChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_changeTimePowers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_changeTimePowers_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// making use of macro for implementing a method in Blueprints\n" },
		{ "ModuleRelativePath", "Avatar.h" },
		{ "ToolTip", "making use of macro for implementing a method in Blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_changeTimePowers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "changeTimePowers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_changeTimePowers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_changeTimePowers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_changeTimePowers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_changeTimePowers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_changeToEnergyMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_changeToEnergyMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_changeToEnergyMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "changeToEnergyMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_changeToEnergyMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_changeToEnergyMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_changeToEnergyMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_changeToEnergyMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_changeToNormalMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_changeToNormalMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_changeToNormalMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "changeToNormalMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_changeToNormalMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_changeToNormalMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_changeToNormalMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_changeToNormalMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_changeToWarpMaterial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_changeToWarpMaterial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_changeToWarpMaterial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "changeToWarpMaterial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_changeToWarpMaterial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_changeToWarpMaterial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_changeToWarpMaterial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_changeToWarpMaterial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_Collision_Statics
	{
		struct Avatar_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Avatar_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Avatar_eventCollision_Parms), &Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAvatar_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "Collision", nullptr, nullptr, sizeof(Avatar_eventCollision_Parms), Z_Construct_UFunction_AAvatar_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_deactivateGrindSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_deactivateGrindSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_deactivateGrindSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "deactivateGrindSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_deactivateGrindSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_deactivateGrindSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_deactivateGrindSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_deactivateGrindSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// making use of macro for implementing a method in Blueprints\n" },
		{ "ModuleRelativePath", "Avatar.h" },
		{ "ToolTip", "making use of macro for implementing a method in Blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "enableAndDisableCollision", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_enableAndDisableCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_Falling_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Falling_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_Falling_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "Falling", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Falling_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Falling_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_Falling()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_Falling_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_Landed_Statics
	{
		struct Avatar_eventLanded_Parms
		{
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAvatar_Landed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "Landed", nullptr, nullptr, sizeof(Avatar_eventLanded_Parms), Z_Construct_UFunction_AAvatar_Landed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Landed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Landed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Landed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_Landed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_Landed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_LeftTimePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_LeftTimePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_LeftTimePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "LeftTimePower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_LeftTimePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_LeftTimePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_LeftTimePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_LeftTimePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_lockCameraToTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_lockCameraToTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_lockCameraToTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "lockCameraToTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_lockCameraToTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_lockCameraToTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_lockCameraToTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_lockCameraToTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_removeLockOnTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_removeLockOnTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_removeLockOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "removeLockOnTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_removeLockOnTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_removeLockOnTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_removeLockOnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_removeLockOnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_RightTimePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_RightTimePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_RightTimePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "RightTimePower", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_RightTimePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_RightTimePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_RightTimePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_RightTimePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics
	{
		struct Avatar_eventsetLockOnTarget_Parms
		{
			ALock_On_Actor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventsetLockOnTarget_Parms, target), Z_Construct_UClass_ALock_On_Actor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "setLockOnTarget", nullptr, nullptr, sizeof(Avatar_eventsetLockOnTarget_Parms), Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_setLockOnTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_setLockOnTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_showCollectables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_showCollectables_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// making use of macro for implementing a method in Blueprints\n" },
		{ "ModuleRelativePath", "Avatar.h" },
		{ "ToolTip", "making use of macro for implementing a method in Blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_showCollectables_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "showCollectables", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_showCollectables_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_showCollectables_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_showCollectables()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_showCollectables_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_spawnPunchingProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_spawnPunchingProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_spawnPunchingProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "spawnPunchingProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_spawnPunchingProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_spawnPunchingProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_spawnPunchingProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_spawnPunchingProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAvatar_useTimePower_Statics
	{
		struct Avatar_eventuseTimePower_Parms
		{
			ETimeAbility ability;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ability_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AAvatar_useTimePower_Statics::NewProp_ability = { "ability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Avatar_eventuseTimePower_Parms, ability), Z_Construct_UEnum_Book_Project_ETimeAbility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AAvatar_useTimePower_Statics::NewProp_ability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAvatar_useTimePower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_useTimePower_Statics::NewProp_ability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_useTimePower_Statics::NewProp_ability_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_useTimePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_useTimePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, nullptr, "useTimePower", nullptr, nullptr, sizeof(Avatar_eventuseTimePower_Parms), Z_Construct_UFunction_AAvatar_useTimePower_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_useTimePower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_useTimePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_useTimePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_useTimePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_useTimePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAvatar_NoRegister()
	{
		return AAvatar::StaticClass();
	}
	struct Z_Construct_UClass_AAvatar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ZKnockback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ZKnockback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XYKnockback_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_XYKnockback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackProjectiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttackProjectiles;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_AttackProjectiles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentClosestWarpOnScaleFromZeroToOne_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentClosestWarpOnScaleFromZeroToOne;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interactable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_textCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_textCollider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_warpTimeInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_warpTimeInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPaused_MetaData[];
#endif
		static void NewProp_isPaused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPaused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isLockedOn_MetaData[];
#endif
		static void NewProp_isLockedOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isLockedOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentEnergy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentEnergy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeToGrind_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeToGrind;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_percentOfMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentOfMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isGrinding_MetaData[];
#endif
		static void NewProp_isGrinding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isGrinding;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ourSpline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ourSpline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_teleportationParticle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_teleportationParticle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transitionSpeedCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_transitionSpeedCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_playerCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_skeleton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_skeleton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPunching_MetaData[];
#endif
		static void NewProp_isPunching_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPunching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_capsuleA_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_capsuleA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_longJumpVelocityXY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_longJumpVelocityXY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_longJumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_longJumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_highJumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_highJumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseTurnRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseTurnRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseLookRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseLookRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_secondPower;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_secondPower_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_firstPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_firstPower;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_firstPower_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currentState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currentState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAvatar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAvatar_activateGrindSound, "activateGrindSound" }, // 894333807
		{ &Z_Construct_UFunction_AAvatar_activateLockOnFunction, "activateLockOnFunction" }, // 1490460370
		{ &Z_Construct_UFunction_AAvatar_activatePlayerActionSound, "activatePlayerActionSound" }, // 2608231305
		{ &Z_Construct_UFunction_AAvatar_beginGrind, "beginGrind" }, // 1691124014
		{ &Z_Construct_UFunction_AAvatar_callEnergyBarChange, "callEnergyBarChange" }, // 4154856328
		{ &Z_Construct_UFunction_AAvatar_callWheelChange, "callWheelChange" }, // 1327484095
		{ &Z_Construct_UFunction_AAvatar_changeTimePowers, "changeTimePowers" }, // 500874639
		{ &Z_Construct_UFunction_AAvatar_changeToEnergyMaterial, "changeToEnergyMaterial" }, // 1428613946
		{ &Z_Construct_UFunction_AAvatar_changeToNormalMaterial, "changeToNormalMaterial" }, // 4204553965
		{ &Z_Construct_UFunction_AAvatar_changeToWarpMaterial, "changeToWarpMaterial" }, // 141364775
		{ &Z_Construct_UFunction_AAvatar_Collision, "Collision" }, // 2207561626
		{ &Z_Construct_UFunction_AAvatar_deactivateGrindSound, "deactivateGrindSound" }, // 2313964055
		{ &Z_Construct_UFunction_AAvatar_enableAndDisableCollision, "enableAndDisableCollision" }, // 323744738
		{ &Z_Construct_UFunction_AAvatar_Falling, "Falling" }, // 2666488954
		{ &Z_Construct_UFunction_AAvatar_Landed, "Landed" }, // 2738603381
		{ &Z_Construct_UFunction_AAvatar_LeftTimePower, "LeftTimePower" }, // 438080966
		{ &Z_Construct_UFunction_AAvatar_lockCameraToTarget, "lockCameraToTarget" }, // 514597717
		{ &Z_Construct_UFunction_AAvatar_removeLockOnTarget, "removeLockOnTarget" }, // 3285503318
		{ &Z_Construct_UFunction_AAvatar_RightTimePower, "RightTimePower" }, // 2393503033
		{ &Z_Construct_UFunction_AAvatar_setLockOnTarget, "setLockOnTarget" }, // 1295108670
		{ &Z_Construct_UFunction_AAvatar_showCollectables, "showCollectables" }, // 1815958859
		{ &Z_Construct_UFunction_AAvatar_spawnPunchingProjectile, "spawnPunchingProjectile" }, // 1523779490
		{ &Z_Construct_UFunction_AAvatar_useTimePower, "useTimePower" }, // 2278580059
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Avatar.h" },
		{ "ModuleRelativePath", "Avatar.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_ZKnockback_MetaData[] = {
		{ "Category", "Knockback from Damage" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_ZKnockback = { "ZKnockback", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, ZKnockback), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_ZKnockback_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_ZKnockback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_XYKnockback_MetaData[] = {
		{ "Category", "Knockback from Damage" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_XYKnockback = { "XYKnockback", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, XYKnockback), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_XYKnockback_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_XYKnockback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles_MetaData[] = {
		{ "Category", "Actor to Spawn" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles = { "AttackProjectiles", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, AttackProjectiles), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles_Inner = { "AttackProjectiles", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_timeFalling_MetaData[] = {
		{ "Category", "Falling Time" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_timeFalling = { "timeFalling", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, timeFalling), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_timeFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_timeFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_currentClosestWarpOnScaleFromZeroToOne_MetaData[] = {
		{ "Category", "Debug Testing Category" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_currentClosestWarpOnScaleFromZeroToOne = { "currentClosestWarpOnScaleFromZeroToOne", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, currentClosestWarpOnScaleFromZeroToOne), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_currentClosestWarpOnScaleFromZeroToOne_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_currentClosestWarpOnScaleFromZeroToOne_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_interactable_MetaData[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_interactable = { "interactable", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, interactable), Z_Construct_UClass_AInteractable_Object_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_interactable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_interactable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_textCollider_MetaData[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_textCollider = { "textCollider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, textCollider), Z_Construct_UClass_ACollission_Text_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_textCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_textCollider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_warpTimeInSeconds_MetaData[] = {
		{ "Category", "Warp Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_warpTimeInSeconds = { "warpTimeInSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, warpTimeInSeconds), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_warpTimeInSeconds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_warpTimeInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_playTime_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_playTime = { "playTime", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, playTime), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_playTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_playTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	void Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused_SetBit(void* Obj)
	{
		((AAvatar*)Obj)->isPaused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused = { "isPaused", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAvatar), &Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn_MetaData[] = {
		{ "Category", "Lock-On properties" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	void Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn_SetBit(void* Obj)
	{
		((AAvatar*)Obj)->isLockedOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn = { "isLockedOn", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAvatar), &Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_playerTarget_MetaData[] = {
		{ "Category", "Target for Lock On" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_playerTarget = { "playerTarget", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, playerTarget), Z_Construct_UClass_ALock_On_Actor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_playerTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_playerTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_maxEnergy_MetaData[] = {
		{ "Category", "Avatar Energy Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_maxEnergy = { "maxEnergy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, maxEnergy), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_maxEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_maxEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_currentEnergy_MetaData[] = {
		{ "Category", "Avatar Energy Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_currentEnergy = { "currentEnergy", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, currentEnergy), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_currentEnergy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_currentEnergy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_maxHealth_MetaData[] = {
		{ "Category", "Avatar Health Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_maxHealth = { "maxHealth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, maxHealth), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_maxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_maxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_currentHealth_MetaData[] = {
		{ "Category", "Avatar Health Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_currentHealth = { "currentHealth", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, currentHealth), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_currentHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_currentHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_timeToGrind_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_timeToGrind = { "timeToGrind", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, timeToGrind), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_timeToGrind_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_timeToGrind_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement = { "percentOfMovement", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, percentOfMovement), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	void Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_SetBit(void* Obj)
	{
		((AAvatar*)Obj)->isGrinding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding = { "isGrinding", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAvatar), &Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline_MetaData[] = {
		{ "Category", "Spline declaration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline = { "ourSpline", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, ourSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle_MetaData[] = {
		{ "Category", "Teleportation effects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle = { "teleportationParticle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, teleportationParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap_MetaData[] = {
		{ "Category", "Warp variable" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap = { "transitionSpeedCap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, transitionSpeedCap), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom = { "cameraBoom", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera = { "playerCamera", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton_MetaData[] = {
		{ "Category", "Alternate Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton = { "skeleton", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, skeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_MetaData[] = {
		{ "Category", "Avatar Animation Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	void Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_SetBit(void* Obj)
	{
		((AAvatar*)Obj)->isPunching = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching = { "isPunching", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAvatar), &Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_capsuleA_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_capsuleA = { "capsuleA", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, capsuleA), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_capsuleA_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_capsuleA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY = { "longJumpVelocityXY", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, longJumpVelocityXY), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight = { "longJumpHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, longJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight = { "highJumpHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, highJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate = { "BaseTurnRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate = { "BaseLookRate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, BaseLookRate), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower = { "secondPower", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, secondPower), Z_Construct_UEnum_Book_Project_ETimeAbility, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower = { "firstPower", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, firstPower), Z_Construct_UEnum_Book_Project_ETimeAbility, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_currentState_MetaData[] = {
		{ "Category", "Avatar" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_currentState = { "currentState", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAvatar, currentState), Z_Construct_UEnum_Book_Project_ECharacterState, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_currentState_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_currentState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_ZKnockback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_XYKnockback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_AttackProjectiles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_timeFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_currentClosestWarpOnScaleFromZeroToOne,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_interactable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_textCollider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_warpTimeInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_playTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_isPaused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_isLockedOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_playerTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_maxEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_currentEnergy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_currentHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_timeToGrind,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_capsuleA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_secondPower_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_firstPower_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_currentState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_currentState_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAvatar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAvatar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAvatar_Statics::ClassParams = {
		&AAvatar::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAvatar_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAvatar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAvatar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAvatar, 3974699652);
	template<> BOOK_PROJECT_API UClass* StaticClass<AAvatar>()
	{
		return AAvatar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAvatar(Z_Construct_UClass_AAvatar, &AAvatar::StaticClass, TEXT("/Script/Book_Project"), TEXT("AAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvatar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
