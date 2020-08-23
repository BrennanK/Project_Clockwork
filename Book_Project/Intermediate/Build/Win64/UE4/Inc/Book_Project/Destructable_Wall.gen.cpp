// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Destructable_Wall.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDestructable_Wall() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ADestructable_Wall_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ADestructable_Wall();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ADestructable_Wall::StaticRegisterNativesADestructable_Wall()
	{
	}
	UClass* Z_Construct_UClass_ADestructable_Wall_NoRegister()
	{
		return ADestructable_Wall::StaticClass();
	}
	struct Z_Construct_UClass_ADestructable_Wall_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destructionBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_destructionBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADestructable_Wall_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Wall_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Destructable_Wall.h" },
		{ "ModuleRelativePath", "Destructable_Wall.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADestructable_Wall_Statics::NewProp_destructionBox_MetaData[] = {
		{ "Category", "Wall Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Destructable_Wall.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADestructable_Wall_Statics::NewProp_destructionBox = { "destructionBox", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADestructable_Wall, destructionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADestructable_Wall_Statics::NewProp_destructionBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADestructable_Wall_Statics::NewProp_destructionBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADestructable_Wall_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADestructable_Wall_Statics::NewProp_destructionBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADestructable_Wall_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADestructable_Wall>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADestructable_Wall_Statics::ClassParams = {
		&ADestructable_Wall::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADestructable_Wall_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ADestructable_Wall_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADestructable_Wall_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADestructable_Wall_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADestructable_Wall()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADestructable_Wall_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADestructable_Wall, 2229002482);
	template<> BOOK_PROJECT_API UClass* StaticClass<ADestructable_Wall>()
	{
		return ADestructable_Wall::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADestructable_Wall(Z_Construct_UClass_ADestructable_Wall, &ADestructable_Wall::StaticClass, TEXT("/Script/Book_Project"), TEXT("ADestructable_Wall"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADestructable_Wall);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
