// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Second_Interactable_Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecond_Interactable_Object() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ASecond_Interactable_Object_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ASecond_Interactable_Object();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AInteractable_Object();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void ASecond_Interactable_Object::StaticRegisterNativesASecond_Interactable_Object()
	{
	}
	UClass* Z_Construct_UClass_ASecond_Interactable_Object_NoRegister()
	{
		return ASecond_Interactable_Object::StaticClass();
	}
	struct Z_Construct_UClass_ASecond_Interactable_Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASecond_Interactable_Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AInteractable_Object,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASecond_Interactable_Object_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Second_Interactable_Object.h" },
		{ "ModuleRelativePath", "Second_Interactable_Object.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASecond_Interactable_Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASecond_Interactable_Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASecond_Interactable_Object_Statics::ClassParams = {
		&ASecond_Interactable_Object::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ASecond_Interactable_Object_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASecond_Interactable_Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASecond_Interactable_Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASecond_Interactable_Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASecond_Interactable_Object, 853616637);
	template<> BOOK_PROJECT_API UClass* StaticClass<ASecond_Interactable_Object>()
	{
		return ASecond_Interactable_Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASecond_Interactable_Object(Z_Construct_UClass_ASecond_Interactable_Object, &ASecond_Interactable_Object::StaticClass, TEXT("/Script/Book_Project"), TEXT("ASecond_Interactable_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASecond_Interactable_Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
