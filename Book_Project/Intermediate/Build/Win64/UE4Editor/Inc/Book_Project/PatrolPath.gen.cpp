// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/PatrolPath.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePatrolPath() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APatrolPath_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APatrolPath();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void APatrolPath::StaticRegisterNativesAPatrolPath()
	{
	}
	UClass* Z_Construct_UClass_APatrolPath_NoRegister()
	{
		return APatrolPath::StaticClass();
	}
	struct Z_Construct_UClass_APatrolPath_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_pointsOnPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_pointsOnPath;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_pointsOnPath_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APatrolPath_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PatrolPath.h" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath_MetaData[] = {
		{ "Category", "Patrol Points" },
		{ "ModuleRelativePath", "PatrolPath.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath = { "pointsOnPath", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APatrolPath, pointsOnPath), METADATA_PARAMS(Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath_MetaData, ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath_Inner = { "pointsOnPath", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APatrolPath_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APatrolPath_Statics::NewProp_pointsOnPath_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APatrolPath_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APatrolPath>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APatrolPath_Statics::ClassParams = {
		&APatrolPath::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APatrolPath_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APatrolPath_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APatrolPath()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APatrolPath_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APatrolPath, 4246598540);
	template<> BOOK_PROJECT_API UClass* StaticClass<APatrolPath>()
	{
		return APatrolPath::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APatrolPath(Z_Construct_UClass_APatrolPath, &APatrolPath::StaticClass, TEXT("/Script/Book_Project"), TEXT("APatrolPath"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APatrolPath);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
