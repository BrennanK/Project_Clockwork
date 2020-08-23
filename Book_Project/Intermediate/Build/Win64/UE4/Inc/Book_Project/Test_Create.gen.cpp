// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Test_Create.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_Create() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATest_Create_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATest_Create();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void ATest_Create::StaticRegisterNativesATest_Create()
	{
	}
	UClass* Z_Construct_UClass_ATest_Create_NoRegister()
	{
		return ATest_Create::StaticClass();
	}
	struct Z_Construct_UClass_ATest_Create_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATest_Create_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATest_Create_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Test_Create.h" },
		{ "ModuleRelativePath", "Test_Create.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATest_Create_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_Create>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATest_Create_Statics::ClassParams = {
		&ATest_Create::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATest_Create_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATest_Create_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATest_Create()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATest_Create_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATest_Create, 592381514);
	template<> BOOK_PROJECT_API UClass* StaticClass<ATest_Create>()
	{
		return ATest_Create::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATest_Create(Z_Construct_UClass_ATest_Create, &ATest_Create::StaticClass, TEXT("/Script/Book_Project"), TEXT("ATest_Create"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_Create);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
