// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
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
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_beginGrind();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_enableAndDisableCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AAvatar_Landed();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
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
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_beginGrind_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, "beginGrind", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_beginGrind_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_beginGrind_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAvatar_beginGrind()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAvatar_beginGrind_Statics::FuncParams);
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
		{ "ModuleRelativePath", "Avatar.h" },
		{ "ToolTip", "making use of macro for implementing a method in Blueprints" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, "enableAndDisableCollision", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_enableAndDisableCollision_Statics::Function_MetaDataParams)) };
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(Avatar_eventLanded_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AAvatar_Landed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AAvatar_Landed_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAvatar_Landed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAvatar_Landed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAvatar, "Landed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04480401, sizeof(Avatar_eventLanded_Parms), Z_Construct_UFunction_AAvatar_Landed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Landed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAvatar_Landed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AAvatar_Landed_Statics::Function_MetaDataParams)) };
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
		{ &Z_Construct_UFunction_AAvatar_beginGrind, "beginGrind" }, // 2693528111
		{ &Z_Construct_UFunction_AAvatar_enableAndDisableCollision, "enableAndDisableCollision" }, // 3668430907
		{ &Z_Construct_UFunction_AAvatar_Landed, "Landed" }, // 3700440757
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement = { UE4CodeGen_Private::EPropertyClass::Float, "percentOfMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AAvatar, percentOfMovement), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding = { UE4CodeGen_Private::EPropertyClass::Bool, "isGrinding", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAvatar), &Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline_MetaData[] = {
		{ "Category", "Spline declaration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline = { UE4CodeGen_Private::EPropertyClass::Object, "ourSpline", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAvatar, ourSpline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle_MetaData[] = {
		{ "Category", "Teleportation effects" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle = { UE4CodeGen_Private::EPropertyClass::Object, "teleportationParticle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAvatar, teleportationParticle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap_MetaData[] = {
		{ "Category", "Warp variable" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap = { UE4CodeGen_Private::EPropertyClass::Float, "transitionSpeedCap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, transitionSpeedCap), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "cameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAvatar, cameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera_MetaData[] = {
		{ "Category", "Grind Variables" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera = { UE4CodeGen_Private::EPropertyClass::Object, "playerCamera", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AAvatar, playerCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton_MetaData[] = {
		{ "Category", "Alternate Skeleton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton = { UE4CodeGen_Private::EPropertyClass::Object, "skeleton", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AAvatar, skeleton), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton_MetaData)) };
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
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching = { UE4CodeGen_Private::EPropertyClass::Bool, "isPunching", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AAvatar), &Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY = { UE4CodeGen_Private::EPropertyClass::Float, "longJumpVelocityXY", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, longJumpVelocityXY), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpVelocityXY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight = { UE4CodeGen_Private::EPropertyClass::Float, "longJumpHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, longJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_longJumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight = { UE4CodeGen_Private::EPropertyClass::Float, "highJumpHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, highJumpHeight), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_highJumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight = { UE4CodeGen_Private::EPropertyClass::Float, "JumpHeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseTurnRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, BaseTurnRate), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseTurnRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate_MetaData[] = {
		{ "Category", "Avatar Control Variables" },
		{ "ModuleRelativePath", "Avatar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate = { UE4CodeGen_Private::EPropertyClass::Float, "BaseLookRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AAvatar, BaseLookRate), METADATA_PARAMS(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::NewProp_BaseLookRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAvatar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_percentOfMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_isGrinding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_ourSpline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_teleportationParticle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_transitionSpeedCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_cameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_playerCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_skeleton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAvatar_Statics::NewProp_isPunching,
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
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AAvatar_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AAvatar_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AAvatar, 237248558);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAvatar(Z_Construct_UClass_AAvatar, &AAvatar::StaticClass, TEXT("/Script/Book_Project"), TEXT("AAvatar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAvatar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
