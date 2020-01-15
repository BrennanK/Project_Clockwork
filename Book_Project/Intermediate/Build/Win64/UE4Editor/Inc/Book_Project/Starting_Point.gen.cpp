// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Starting_Point.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarting_Point() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AStarting_Point_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AStarting_Point();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
// End Cross Module References
	void AStarting_Point::StaticRegisterNativesAStarting_Point()
	{
	}
	UClass* Z_Construct_UClass_AStarting_Point_NoRegister()
	{
		return AStarting_Point::StaticClass();
	}
	struct Z_Construct_UClass_AStarting_Point_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialLookRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_initialLookRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStarting_Point_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarting_Point_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Starting_Point.h" },
		{ "ModuleRelativePath", "Starting_Point.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarting_Point_Statics::NewProp_initialLookRate_MetaData[] = {
		{ "Category", "Initial Camera Setup" },
		{ "ModuleRelativePath", "Starting_Point.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStarting_Point_Statics::NewProp_initialLookRate = { UE4CodeGen_Private::EPropertyClass::Float, "initialLookRate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000001, 1, nullptr, STRUCT_OFFSET(AStarting_Point, initialLookRate), METADATA_PARAMS(Z_Construct_UClass_AStarting_Point_Statics::NewProp_initialLookRate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStarting_Point_Statics::NewProp_initialLookRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStarting_Point_Statics::NewProp_PController_MetaData[] = {
		{ "ModuleRelativePath", "Starting_Point.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AStarting_Point_Statics::NewProp_PController = { UE4CodeGen_Private::EPropertyClass::Object, "PController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(AStarting_Point, PController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AStarting_Point_Statics::NewProp_PController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStarting_Point_Statics::NewProp_PController_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStarting_Point_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarting_Point_Statics::NewProp_initialLookRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStarting_Point_Statics::NewProp_PController,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarting_Point_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarting_Point>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarting_Point_Statics::ClassParams = {
		&AStarting_Point::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AStarting_Point_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AStarting_Point_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AStarting_Point_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStarting_Point_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStarting_Point()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStarting_Point_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStarting_Point, 4228344616);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarting_Point(Z_Construct_UClass_AStarting_Point, &AStarting_Point::StaticClass, TEXT("/Script/Book_Project"), TEXT("AStarting_Point"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarting_Point);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
