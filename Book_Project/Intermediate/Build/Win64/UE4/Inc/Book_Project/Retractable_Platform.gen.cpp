// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Retractable_Platform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRetractable_Platform() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ARetractable_Platform_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ARetractable_Platform();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AManipulable_Object();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ARetractable_Platform_activatePlatformMovementSound = FName(TEXT("activatePlatformMovementSound"));
	void ARetractable_Platform::activatePlatformMovementSound(int32 indexForSoundCue)
	{
		Retractable_Platform_eventactivatePlatformMovementSound_Parms Parms;
		Parms.indexForSoundCue=indexForSoundCue;
		ProcessEvent(FindFunctionChecked(NAME_ARetractable_Platform_activatePlatformMovementSound),&Parms);
	}
	void ARetractable_Platform::StaticRegisterNativesARetractable_Platform()
	{
	}
	struct Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexForSoundCue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::NewProp_indexForSoundCue = { "indexForSoundCue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Retractable_Platform_eventactivatePlatformMovementSound_Parms, indexForSoundCue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::NewProp_indexForSoundCue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ARetractable_Platform, nullptr, "activatePlatformMovementSound", nullptr, nullptr, sizeof(Retractable_Platform_eventactivatePlatformMovementSound_Parms), Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ARetractable_Platform_NoRegister()
	{
		return ARetractable_Platform::StaticClass();
	}
	struct Z_Construct_UClass_ARetractable_Platform_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movementDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_movementDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_shouldChange_MetaData[];
#endif
		static void NewProp_shouldChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_autoActivate_MetaData[];
#endif
		static void NewProp_autoActivate_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_autoActivate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationWhenExtended_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LocationWhenExtended;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_locationWhenRetracted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_locationWhenRetracted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_movingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_movingMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARetractable_Platform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManipulable_Object,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ARetractable_Platform_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ARetractable_Platform_activatePlatformMovementSound, "activatePlatformMovementSound" }, // 1499100698
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Retractable_Platform.h" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movementDelay_MetaData[] = {
		{ "Category", "Delay until Next movement" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movementDelay = { "movementDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetractable_Platform, movementDelay), METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movementDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movementDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange_MetaData[] = {
		{ "Category", "Should the Direction Change" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	void Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange_SetBit(void* Obj)
	{
		((ARetractable_Platform*)Obj)->shouldChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange = { "shouldChange", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARetractable_Platform), &Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate_MetaData[] = {
		{ "Category", "Is this tied to a Panel?" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	void Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate_SetBit(void* Obj)
	{
		((ARetractable_Platform*)Obj)->autoActivate = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate = { "autoActivate", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ARetractable_Platform), &Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate_SetBit, METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_initialDelay_MetaData[] = {
		{ "Category", "Direction and Speed" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_initialDelay = { "initialDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetractable_Platform, initialDelay), METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_initialDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_initialDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "Direction and Speed" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetractable_Platform, direction), METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_LocationWhenExtended_MetaData[] = {
		{ "Category", "Locations of Extension and Retraction" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_LocationWhenExtended = { "LocationWhenExtended", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetractable_Platform, LocationWhenExtended), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_LocationWhenExtended_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_LocationWhenExtended_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_locationWhenRetracted_MetaData[] = {
		{ "Category", "Locations of Extension and Retraction" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_locationWhenRetracted = { "locationWhenRetracted", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetractable_Platform, locationWhenRetracted), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_locationWhenRetracted_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_locationWhenRetracted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movingMesh_MetaData[] = {
		{ "Category", "Mesh of The Moving Platform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Retractable_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movingMesh = { "movingMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ARetractable_Platform, movingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movingMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARetractable_Platform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movementDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_shouldChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_autoActivate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_initialDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_LocationWhenExtended,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_locationWhenRetracted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARetractable_Platform_Statics::NewProp_movingMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARetractable_Platform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARetractable_Platform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARetractable_Platform_Statics::ClassParams = {
		&ARetractable_Platform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ARetractable_Platform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ARetractable_Platform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ARetractable_Platform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARetractable_Platform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARetractable_Platform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARetractable_Platform, 1272213465);
	template<> BOOK_PROJECT_API UClass* StaticClass<ARetractable_Platform>()
	{
		return ARetractable_Platform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARetractable_Platform(Z_Construct_UClass_ARetractable_Platform, &ARetractable_Platform::StaticClass, TEXT("/Script/Book_Project"), TEXT("ARetractable_Platform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARetractable_Platform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
