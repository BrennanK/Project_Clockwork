// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/LeaderBoardSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLeaderBoardSave() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ULeaderBoardSave_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ULeaderBoardSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardSlot();
// End Cross Module References
	void ULeaderBoardSave::StaticRegisterNativesULeaderBoardSave()
	{
	}
	UClass* Z_Construct_UClass_ULeaderBoardSave_NoRegister()
	{
		return ULeaderBoardSave::StaticClass();
	}
	struct Z_Construct_UClass_ULeaderBoardSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardToSave_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_leaderboardToSave;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leaderboardToSave_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberForTesting_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numberForTesting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULeaderBoardSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderBoardSave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "LeaderBoardSave.h" },
		{ "ModuleRelativePath", "LeaderBoardSave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave_MetaData[] = {
		{ "Category", "LeaderBoardSave" },
		{ "ModuleRelativePath", "LeaderBoardSave.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave = { "leaderboardToSave", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeaderBoardSave, leaderboardToSave), METADATA_PARAMS(Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave_Inner = { "leaderboardToSave", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLeaderboardSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_numberForTesting_MetaData[] = {
		{ "Category", "LeaderBoardSave" },
		{ "ModuleRelativePath", "LeaderBoardSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_numberForTesting = { "numberForTesting", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULeaderBoardSave, numberForTesting), METADATA_PARAMS(Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_numberForTesting_MetaData, ARRAY_COUNT(Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_numberForTesting_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULeaderBoardSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_leaderboardToSave_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULeaderBoardSave_Statics::NewProp_numberForTesting,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULeaderBoardSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULeaderBoardSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULeaderBoardSave_Statics::ClassParams = {
		&ULeaderBoardSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULeaderBoardSave_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ULeaderBoardSave_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ULeaderBoardSave_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ULeaderBoardSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULeaderBoardSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULeaderBoardSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULeaderBoardSave, 2969104999);
	template<> BOOK_PROJECT_API UClass* StaticClass<ULeaderBoardSave>()
	{
		return ULeaderBoardSave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULeaderBoardSave(Z_Construct_UClass_ULeaderBoardSave, &ULeaderBoardSave::StaticClass, TEXT("/Script/Book_Project"), TEXT("ULeaderBoardSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULeaderBoardSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
