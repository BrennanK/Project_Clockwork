// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Book_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBook_GameMode() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ABook_GameMode_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ABook_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void ABook_GameMode::StaticRegisterNativesABook_GameMode()
	{
	}
	UClass* Z_Construct_UClass_ABook_GameMode_NoRegister()
	{
		return ABook_GameMode::StaticClass();
	}
	struct Z_Construct_UClass_ABook_GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABook_GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABook_GameMode_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Book_GameMode.h" },
		{ "ModuleRelativePath", "Book_GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABook_GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABook_GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABook_GameMode_Statics::ClassParams = {
		&ABook_GameMode::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ABook_GameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABook_GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABook_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABook_GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABook_GameMode, 806512006);
	template<> BOOK_PROJECT_API UClass* StaticClass<ABook_GameMode>()
	{
		return ABook_GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABook_GameMode(Z_Construct_UClass_ABook_GameMode, &ABook_GameMode::StaticClass, TEXT("/Script/Book_Project"), TEXT("ABook_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABook_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
