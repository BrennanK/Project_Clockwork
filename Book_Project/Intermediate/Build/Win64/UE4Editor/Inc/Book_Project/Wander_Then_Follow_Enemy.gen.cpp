// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Wander_Then_Follow_Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWander_Then_Follow_Enemy() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AWander_Then_Follow_Enemy_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AWander_Then_Follow_Enemy();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void AWander_Then_Follow_Enemy::StaticRegisterNativesAWander_Then_Follow_Enemy()
	{
	}
	UClass* Z_Construct_UClass_AWander_Then_Follow_Enemy_NoRegister()
	{
		return AWander_Then_Follow_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Wander_Then_Follow_Enemy.h" },
		{ "ModuleRelativePath", "Wander_Then_Follow_Enemy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWander_Then_Follow_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::ClassParams = {
		&AWander_Then_Follow_Enemy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWander_Then_Follow_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWander_Then_Follow_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWander_Then_Follow_Enemy, 2042440795);
	template<> BOOK_PROJECT_API UClass* StaticClass<AWander_Then_Follow_Enemy>()
	{
		return AWander_Then_Follow_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWander_Then_Follow_Enemy(Z_Construct_UClass_AWander_Then_Follow_Enemy, &AWander_Then_Follow_Enemy::StaticClass, TEXT("/Script/Book_Project"), TEXT("AWander_Then_Follow_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWander_Then_Follow_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
