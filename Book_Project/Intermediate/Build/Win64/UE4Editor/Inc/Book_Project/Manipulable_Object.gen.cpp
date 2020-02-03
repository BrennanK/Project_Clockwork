// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Manipulable_Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManipulable_Object() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AManipulable_Object_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AManipulable_Object();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AManipulable_Object_interActionCommand();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AManipulable_Object_Move();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AManipulable_Object::StaticRegisterNativesAManipulable_Object()
	{
		UClass* Class = AManipulable_Object::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "interActionCommand", &AManipulable_Object::execinterActionCommand },
			{ "Move", &AManipulable_Object::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AManipulable_Object_interActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManipulable_Object_interActionCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manipulable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AManipulable_Object_interActionCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManipulable_Object, nullptr, "interActionCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AManipulable_Object_interActionCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AManipulable_Object_interActionCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AManipulable_Object_interActionCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AManipulable_Object_interActionCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AManipulable_Object_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AManipulable_Object_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Manipulable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AManipulable_Object_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AManipulable_Object, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AManipulable_Object_Move_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AManipulable_Object_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AManipulable_Object_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AManipulable_Object_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AManipulable_Object_NoRegister()
	{
		return AManipulable_Object::StaticClass();
	}
	struct Z_Construct_UClass_AManipulable_Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_originalLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AManipulable_Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AManipulable_Object_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AManipulable_Object_interActionCommand, "interActionCommand" }, // 2065156452
		{ &Z_Construct_UFunction_AManipulable_Object_Move, "Move" }, // 3805284464
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulable_Object_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UENUM() enum class EBOUNCE :uint8 { Single, Build_Up };\n" },
		{ "IncludePath", "Manipulable_Object.h" },
		{ "ModuleRelativePath", "Manipulable_Object.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UENUM() enum class EBOUNCE :uint8 { Single, Build_Up };" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulable_Object_Statics::NewProp_destination_MetaData[] = {
		{ "Category", "Manipulable_Object" },
		{ "ModuleRelativePath", "Manipulable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManipulable_Object_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManipulable_Object, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AManipulable_Object_Statics::NewProp_destination_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManipulable_Object_Statics::NewProp_destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AManipulable_Object_Statics::NewProp_originalLocation_MetaData[] = {
		{ "Category", "Bouncepad starting point" },
		{ "ModuleRelativePath", "Manipulable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AManipulable_Object_Statics::NewProp_originalLocation = { "originalLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AManipulable_Object, originalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AManipulable_Object_Statics::NewProp_originalLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AManipulable_Object_Statics::NewProp_originalLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AManipulable_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManipulable_Object_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AManipulable_Object_Statics::NewProp_originalLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AManipulable_Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AManipulable_Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AManipulable_Object_Statics::ClassParams = {
		&AManipulable_Object::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AManipulable_Object_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AManipulable_Object_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AManipulable_Object_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AManipulable_Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AManipulable_Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AManipulable_Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManipulable_Object, 2237834786);
	template<> BOOK_PROJECT_API UClass* StaticClass<AManipulable_Object>()
	{
		return AManipulable_Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManipulable_Object(Z_Construct_UClass_AManipulable_Object, &AManipulable_Object::StaticClass, TEXT("/Script/Book_Project"), TEXT("AManipulable_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManipulable_Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
