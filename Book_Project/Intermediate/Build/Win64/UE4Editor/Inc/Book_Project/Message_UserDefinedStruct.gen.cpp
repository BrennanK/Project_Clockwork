// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Message_UserDefinedStruct.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMessage_UserDefinedStruct() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_UMessage_UserDefinedStruct_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_UMessage_UserDefinedStruct();
	ENGINE_API UClass* Z_Construct_UClass_UUserDefinedStruct();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
// End Cross Module References
	void UMessage_UserDefinedStruct::StaticRegisterNativesUMessage_UserDefinedStruct()
	{
	}
	UClass* Z_Construct_UClass_UMessage_UserDefinedStruct_NoRegister()
	{
		return UMessage_UserDefinedStruct::StaticClass();
	}
	struct Z_Construct_UClass_UMessage_UserDefinedStruct_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserDefinedStruct,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Message_UserDefinedStruct.h" },
		{ "ModuleRelativePath", "Message_UserDefinedStruct.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMessage_UserDefinedStruct>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::ClassParams = {
		&UMessage_UserDefinedStruct::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMessage_UserDefinedStruct()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMessage_UserDefinedStruct_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMessage_UserDefinedStruct, 908364079);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMessage_UserDefinedStruct(Z_Construct_UClass_UMessage_UserDefinedStruct, &UMessage_UserDefinedStruct::StaticClass, TEXT("/Script/Book_Project"), TEXT("UMessage_UserDefinedStruct"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMessage_UserDefinedStruct);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
