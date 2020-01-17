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
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_beginGrind();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_callWheelChange();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_enableAndDisableCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_Landed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
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
	uint32 Get_Z_Construct_UEnum_Book_Project_ECharacterState_Hash() { return 770872123U; }
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
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DEAD.Name", "ECharacterState::DEAD" },
				{ "INTERACTABLE.Name", "ECharacterState::INTERACTABLE" },
				{ "ModuleRelativePath", "Avatar.h" },
				{ "NORMAL.Name", "ECharacterState::NORMAL" },
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
	static FName NAME_AAvatar_callWheelChange = FName(TEXT("callWheelChange"));
	void AAvatar::callWheelChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_callWheelChange),NULL);
	}
	static FName NAME_AAvatar_enableAndDisableCollision = FName(TEXT("enableAndDisableCollision"));
	void AAvatar::enableAndDisableCollision()
	{
		ProcessEvent(FindFunctionChecked(NAME_AAvatar_enableAndDisableCollision),NULL);
	}
	void AAvatar::StaticRegisterNativesAAvatar()
	{
		UClass* Class = AAvatar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "beginGrind", &AAvatar::execbeginGrind },
			{ "Landed", &AAvatar::execLanded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_currentHealth;
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
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAvatar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAvatar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAvatar_beginGrind, "beginGrind" }, // 1691124014
		{ &Z_Construct_UFunction_AAvatar_callWheelChange, "callWheelChange" }, // 1327484095
		{ &Z_Construct_UFunction_AAvatar_enableAndDisableCollision, "enableAndDisableCollision" }, // 323744738
		{ &Z_Construct_UFunction_AAvatar_Landed, "Landed" }, // 2738603381
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
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_maxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_currentHealth,
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
	IMPLEMENT_CLASS(AAvatar, 3666613911);
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
