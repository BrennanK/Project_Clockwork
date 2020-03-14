// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Power_Floor_Switch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePower_Floor_Switch() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APower_Floor_Switch_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APower_Floor_Switch();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AColored_Floor_Switch();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound();
// End Cross Module References
	static FName NAME_APower_Floor_Switch_changeToGreenPanel = FName(TEXT("changeToGreenPanel"));
	void APower_Floor_Switch::changeToGreenPanel()
	{
		ProcessEvent(FindFunctionChecked(NAME_APower_Floor_Switch_changeToGreenPanel),NULL);
	}
	static FName NAME_APower_Floor_Switch_playElectricFloorSwitchSound = FName(TEXT("playElectricFloorSwitchSound"));
	void APower_Floor_Switch::playElectricFloorSwitchSound()
	{
		ProcessEvent(FindFunctionChecked(NAME_APower_Floor_Switch_playElectricFloorSwitchSound),NULL);
	}
	void APower_Floor_Switch::StaticRegisterNativesAPower_Floor_Switch()
	{
	}
	struct Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Power_Floor_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APower_Floor_Switch, nullptr, "changeToGreenPanel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Power_Floor_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APower_Floor_Switch, nullptr, "playElectricFloorSwitchSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APower_Floor_Switch_NoRegister()
	{
		return APower_Floor_Switch::StaticClass();
	}
	struct Z_Construct_UClass_APower_Floor_Switch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APower_Floor_Switch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AColored_Floor_Switch,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APower_Floor_Switch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APower_Floor_Switch_changeToGreenPanel, "changeToGreenPanel" }, // 3584067557
		{ &Z_Construct_UFunction_APower_Floor_Switch_playElectricFloorSwitchSound, "playElectricFloorSwitchSound" }, // 329162265
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Floor_Switch_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Power_Floor_Switch.h" },
		{ "ModuleRelativePath", "Power_Floor_Switch.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APower_Floor_Switch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APower_Floor_Switch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APower_Floor_Switch_Statics::ClassParams = {
		&APower_Floor_Switch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APower_Floor_Switch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APower_Floor_Switch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APower_Floor_Switch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APower_Floor_Switch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APower_Floor_Switch, 3429561281);
	template<> BOOK_PROJECT_API UClass* StaticClass<APower_Floor_Switch>()
	{
		return APower_Floor_Switch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APower_Floor_Switch(Z_Construct_UClass_APower_Floor_Switch, &APower_Floor_Switch::StaticClass, TEXT("/Script/Book_Project"), TEXT("APower_Floor_Switch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APower_Floor_Switch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
