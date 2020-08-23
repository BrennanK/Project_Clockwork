// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Large_Spinning_Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLarge_Spinning_Object() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ALarge_Spinning_Object_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ALarge_Spinning_Object();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AManipulable_Object();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void ALarge_Spinning_Object::StaticRegisterNativesALarge_Spinning_Object()
	{
	}
	UClass* Z_Construct_UClass_ALarge_Spinning_Object_NoRegister()
	{
		return ALarge_Spinning_Object::StaticClass();
	}
	struct Z_Construct_UClass_ALarge_Spinning_Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_slowedRotationAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_slowedRotationAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountToRotate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amountToRotate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rateOfRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALarge_Spinning_Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManipulable_Object,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALarge_Spinning_Object_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Large_Spinning_Object.h" },
		{ "ModuleRelativePath", "Large_Spinning_Object.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_slowedRotationAmount_MetaData[] = {
		{ "Category", "Rotation Properties" },
		{ "ModuleRelativePath", "Large_Spinning_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_slowedRotationAmount = { "slowedRotationAmount", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALarge_Spinning_Object, slowedRotationAmount), METADATA_PARAMS(Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_slowedRotationAmount_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_slowedRotationAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_amountToRotate_MetaData[] = {
		{ "Category", "Rotation Properties" },
		{ "ModuleRelativePath", "Large_Spinning_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_amountToRotate = { "amountToRotate", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALarge_Spinning_Object, amountToRotate), METADATA_PARAMS(Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_amountToRotate_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_amountToRotate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_rateOfRotation_MetaData[] = {
		{ "Category", "Rotation Properties" },
		{ "ModuleRelativePath", "Large_Spinning_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_rateOfRotation = { "rateOfRotation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALarge_Spinning_Object, rateOfRotation), METADATA_PARAMS(Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_rateOfRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_rateOfRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALarge_Spinning_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_slowedRotationAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_amountToRotate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALarge_Spinning_Object_Statics::NewProp_rateOfRotation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALarge_Spinning_Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALarge_Spinning_Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALarge_Spinning_Object_Statics::ClassParams = {
		&ALarge_Spinning_Object::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALarge_Spinning_Object_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ALarge_Spinning_Object_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ALarge_Spinning_Object_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ALarge_Spinning_Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALarge_Spinning_Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALarge_Spinning_Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALarge_Spinning_Object, 1018133772);
	template<> BOOK_PROJECT_API UClass* StaticClass<ALarge_Spinning_Object>()
	{
		return ALarge_Spinning_Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALarge_Spinning_Object(Z_Construct_UClass_ALarge_Spinning_Object, &ALarge_Spinning_Object::StaticClass, TEXT("/Script/Book_Project"), TEXT("ALarge_Spinning_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALarge_Spinning_Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
