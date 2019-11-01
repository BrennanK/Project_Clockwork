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
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStarting_Point_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStarting_Point>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStarting_Point_Statics::ClassParams = {
		&AStarting_Point::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
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
	IMPLEMENT_CLASS(AStarting_Point, 4066422133);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStarting_Point(Z_Construct_UClass_AStarting_Point, &AStarting_Point::StaticClass, TEXT("/Script/Book_Project"), TEXT("AStarting_Point"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStarting_Point);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
