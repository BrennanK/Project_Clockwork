// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Working_Bouncepad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorking_Bouncepad() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AWorking_Bouncepad_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AWorking_Bouncepad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_AWorking_Bouncepad_changeCameraPerspective = FName(TEXT("changeCameraPerspective"));
	void AWorking_Bouncepad::changeCameraPerspective()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWorking_Bouncepad_changeCameraPerspective),NULL);
	}
	void AWorking_Bouncepad::StaticRegisterNativesAWorking_Bouncepad()
	{
	}
	struct Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::Function_MetaDataParams[] = {
		{ "Comment", "////UFUNCTION()\n//\x09virtual void interActionCommand();\n//\n////UFUNCTION()\n//\x09virtual void Move();\n" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
		{ "ToolTip", "/UFUNCTION()\n       virtual void interActionCommand();\n\n/UFUNCTION()\n       virtual void Move();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorking_Bouncepad, nullptr, "changeCameraPerspective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorking_Bouncepad_NoRegister()
	{
		return AWorking_Bouncepad::StaticClass();
	}
	struct Z_Construct_UClass_AWorking_Bouncepad_Statics
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
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bounceHeightPerSecondFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bounceHeightPerSecondFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxBounceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxBounceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minBounceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minBounceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bounceBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bounceBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorking_Bouncepad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorking_Bouncepad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective, "changeCameraPerspective" }, // 3416501408
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::Class_MetaDataParams[] = {
		{ "Comment", "//UENUM() enum class EBOUNCE_TYPE:uint8 {Single,Build_Up};\n" },
		{ "IncludePath", "Working_Bouncepad.h" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UENUM() enum class EBOUNCE_TYPE:uint8 {Single,Build_Up};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination_MetaData[] = {
		{ "Category", "Working_Bouncepad" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation_MetaData[] = {
		{ "Category", "Bouncepad starting point" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation = { "originalLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, originalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling_MetaData[] = {
		{ "Category", "Bounce Variables" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling = { "bounceHeightPerSecondFalling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, bounceHeightPerSecondFalling), METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight_MetaData[] = {
		{ "Category", "Bounce Variables" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight = { "maxBounceHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, maxBounceHeight), METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight_MetaData[] = {
		{ "Category", "Bounce Variables" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight = { "minBounceHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, minBounceHeight), METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox = { "bounceBox", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, bounceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorking_Bouncepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorking_Bouncepad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorking_Bouncepad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorking_Bouncepad_Statics::ClassParams = {
		&AWorking_Bouncepad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorking_Bouncepad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorking_Bouncepad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorking_Bouncepad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorking_Bouncepad, 2018177488);
	template<> BOOK_PROJECT_API UClass* StaticClass<AWorking_Bouncepad>()
	{
		return AWorking_Bouncepad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorking_Bouncepad(Z_Construct_UClass_AWorking_Bouncepad, &AWorking_Bouncepad::StaticClass, TEXT("/Script/Book_Project"), TEXT("AWorking_Bouncepad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorking_Bouncepad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
