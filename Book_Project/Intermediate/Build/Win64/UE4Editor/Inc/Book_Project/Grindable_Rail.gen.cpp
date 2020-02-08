// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Grindable_Rail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGrindable_Rail() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AGrindable_Rail_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AGrindable_Rail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void AGrindable_Rail::StaticRegisterNativesAGrindable_Rail()
	{
	}
	UClass* Z_Construct_UClass_AGrindable_Rail_NoRegister()
	{
		return AGrindable_Rail::StaticClass();
	}
	struct Z_Construct_UClass_AGrindable_Rail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondsToSpendOnRail_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secondsToSpendOnRail;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGrindable_Rail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrindable_Rail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Grindable_Rail.h" },
		{ "ModuleRelativePath", "Grindable_Rail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGrindable_Rail_Statics::NewProp_secondsToSpendOnRail_MetaData[] = {
		{ "Category", "Rail Variables" },
		{ "ModuleRelativePath", "Grindable_Rail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGrindable_Rail_Statics::NewProp_secondsToSpendOnRail = { "secondsToSpendOnRail", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGrindable_Rail, secondsToSpendOnRail), METADATA_PARAMS(Z_Construct_UClass_AGrindable_Rail_Statics::NewProp_secondsToSpendOnRail_MetaData, ARRAY_COUNT(Z_Construct_UClass_AGrindable_Rail_Statics::NewProp_secondsToSpendOnRail_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGrindable_Rail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGrindable_Rail_Statics::NewProp_secondsToSpendOnRail,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGrindable_Rail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGrindable_Rail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGrindable_Rail_Statics::ClassParams = {
		&AGrindable_Rail::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGrindable_Rail_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AGrindable_Rail_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AGrindable_Rail_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AGrindable_Rail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGrindable_Rail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGrindable_Rail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGrindable_Rail, 40021888);
	template<> BOOK_PROJECT_API UClass* StaticClass<AGrindable_Rail>()
	{
		return AGrindable_Rail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGrindable_Rail(Z_Construct_UClass_AGrindable_Rail, &AGrindable_Rail::StaticClass, TEXT("/Script/Book_Project"), TEXT("AGrindable_Rail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGrindable_Rail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
