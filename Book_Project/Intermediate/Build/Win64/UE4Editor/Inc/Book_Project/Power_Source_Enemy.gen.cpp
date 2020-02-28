// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Power_Source_Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePower_Source_Enemy() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APower_Source_Enemy_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APower_Source_Enemy();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void APower_Source_Enemy::StaticRegisterNativesAPower_Source_Enemy()
	{
	}
	UClass* Z_Construct_UClass_APower_Source_Enemy_NoRegister()
	{
		return APower_Source_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_APower_Source_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APower_Source_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Source_Enemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Power_Source_Enemy.h" },
		{ "ModuleRelativePath", "Power_Source_Enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APower_Source_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APower_Source_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APower_Source_Enemy_Statics::ClassParams = {
		&APower_Source_Enemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APower_Source_Enemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APower_Source_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APower_Source_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APower_Source_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APower_Source_Enemy, 951974504);
	template<> BOOK_PROJECT_API UClass* StaticClass<APower_Source_Enemy>()
	{
		return APower_Source_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APower_Source_Enemy(Z_Construct_UClass_APower_Source_Enemy, &APower_Source_Enemy::StaticClass, TEXT("/Script/Book_Project"), TEXT("APower_Source_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APower_Source_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
