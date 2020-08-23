// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Teleporter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTeleporter() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATeleporter_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATeleporter();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void ATeleporter::StaticRegisterNativesATeleporter()
	{
	}
	UClass* Z_Construct_UClass_ATeleporter_NoRegister()
	{
		return ATeleporter::StaticClass();
	}
	struct Z_Construct_UClass_ATeleporter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_collider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_locationtoGoTo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_locationtoGoTo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATeleporter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Teleporter.h" },
		{ "ModuleRelativePath", "Teleporter.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_Statics::NewProp_collider_MetaData[] = {
		{ "Category", "Teleporter Collider" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_collider = { "collider", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter, collider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATeleporter_Statics::NewProp_collider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::NewProp_collider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATeleporter_Statics::NewProp_locationtoGoTo_MetaData[] = {
		{ "Category", "Destination" },
		{ "ModuleRelativePath", "Teleporter.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATeleporter_Statics::NewProp_locationtoGoTo = { "locationtoGoTo", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATeleporter, locationtoGoTo), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ATeleporter_Statics::NewProp_locationtoGoTo_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::NewProp_locationtoGoTo_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATeleporter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_collider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATeleporter_Statics::NewProp_locationtoGoTo,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATeleporter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATeleporter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATeleporter_Statics::ClassParams = {
		&ATeleporter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ATeleporter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATeleporter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATeleporter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATeleporter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATeleporter, 601300569);
	template<> BOOK_PROJECT_API UClass* StaticClass<ATeleporter>()
	{
		return ATeleporter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATeleporter(Z_Construct_UClass_ATeleporter, &ATeleporter::StaticClass, TEXT("/Script/Book_Project"), TEXT("ATeleporter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATeleporter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
