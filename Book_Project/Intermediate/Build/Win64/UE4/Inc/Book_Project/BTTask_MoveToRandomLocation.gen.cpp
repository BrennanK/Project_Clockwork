// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/BTTask_MoveToRandomLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveToRandomLocation() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_BlackboardBase();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void UBTTask_MoveToRandomLocation::StaticRegisterNativesUBTTask_MoveToRandomLocation()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation_NoRegister()
	{
		return UBTTask_MoveToRandomLocation::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_BlackboardBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BTTask_MoveToRandomLocation.h" },
		{ "ModuleRelativePath", "BTTask_MoveToRandomLocation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveToRandomLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::ClassParams = {
		&UBTTask_MoveToRandomLocation::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MoveToRandomLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_MoveToRandomLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveToRandomLocation, 60154556);
	template<> BOOK_PROJECT_API UClass* StaticClass<UBTTask_MoveToRandomLocation>()
	{
		return UBTTask_MoveToRandomLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveToRandomLocation(Z_Construct_UClass_UBTTask_MoveToRandomLocation, &UBTTask_MoveToRandomLocation::StaticClass, TEXT("/Script/Book_Project"), TEXT("UBTTask_MoveToRandomLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveToRandomLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
