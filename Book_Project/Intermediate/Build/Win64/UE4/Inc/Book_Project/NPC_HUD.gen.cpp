// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/NPC_HUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNPC_HUD() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ANPC_HUD_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ANPC_HUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	ENGINE_API UClass* Z_Construct_UClass_UFont_NoRegister();
// End Cross Module References
	void ANPC_HUD::StaticRegisterNativesANPC_HUD()
	{
	}
	UClass* Z_Construct_UClass_ANPC_HUD_NoRegister()
	{
		return ANPC_HUD::StaticClass();
	}
	struct Z_Construct_UClass_ANPC_HUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hudFont_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hudFont;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANPC_HUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_HUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "NPC_HUD.h" },
		{ "ModuleRelativePath", "NPC_HUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANPC_HUD_Statics::NewProp_hudFont_MetaData[] = {
		{ "Category", "HUDFont" },
		{ "Comment", "//UPROPERTY()\n//TArray<struct Widget> piss;\n" },
		{ "ModuleRelativePath", "NPC_HUD.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<struct Widget> piss;" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANPC_HUD_Statics::NewProp_hudFont = { "hudFont", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANPC_HUD, hudFont), Z_Construct_UClass_UFont_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANPC_HUD_Statics::NewProp_hudFont_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANPC_HUD_Statics::NewProp_hudFont_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANPC_HUD_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANPC_HUD_Statics::NewProp_hudFont,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANPC_HUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANPC_HUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANPC_HUD_Statics::ClassParams = {
		&ANPC_HUD::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANPC_HUD_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ANPC_HUD_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANPC_HUD_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANPC_HUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANPC_HUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANPC_HUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANPC_HUD, 1335861762);
	template<> BOOK_PROJECT_API UClass* StaticClass<ANPC_HUD>()
	{
		return ANPC_HUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANPC_HUD(Z_Construct_UClass_ANPC_HUD, &ANPC_HUD::StaticClass, TEXT("/Script/Book_Project"), TEXT("ANPC_HUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANPC_HUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
