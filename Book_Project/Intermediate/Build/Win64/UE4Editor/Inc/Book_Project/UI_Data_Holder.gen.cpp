// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/UI_Data_Holder.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUI_Data_Holder() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AUI_Data_Holder_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AUI_Data_Holder();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount();
// End Cross Module References
	static FName NAME_AUI_Data_Holder_decrementLifeCount = FName(TEXT("decrementLifeCount"));
	void AUI_Data_Holder::decrementLifeCount()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUI_Data_Holder_decrementLifeCount),NULL);
	}
	static FName NAME_AUI_Data_Holder_updateAbilityShardCount = FName(TEXT("updateAbilityShardCount"));
	void AUI_Data_Holder::updateAbilityShardCount()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUI_Data_Holder_updateAbilityShardCount),NULL);
	}
	static FName NAME_AUI_Data_Holder_updateFragmentCount = FName(TEXT("updateFragmentCount"));
	void AUI_Data_Holder::updateFragmentCount(int32 shardWorth)
	{
		UI_Data_Holder_eventupdateFragmentCount_Parms Parms;
		Parms.shardWorth=shardWorth;
		ProcessEvent(FindFunctionChecked(NAME_AUI_Data_Holder_updateFragmentCount),&Parms);
	}
	static FName NAME_AUI_Data_Holder_updateLifeCount = FName(TEXT("updateLifeCount"));
	void AUI_Data_Holder::updateLifeCount()
	{
		ProcessEvent(FindFunctionChecked(NAME_AUI_Data_Holder_updateLifeCount),NULL);
	}
	void AUI_Data_Holder::StaticRegisterNativesAUI_Data_Holder()
	{
	}
	struct Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Data_Holder, nullptr, "decrementLifeCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Data_Holder, nullptr, "updateAbilityShardCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_shardWorth;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::NewProp_shardWorth = { "shardWorth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UI_Data_Holder_eventupdateFragmentCount_Parms, shardWorth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::NewProp_shardWorth,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Data_Holder, nullptr, "updateFragmentCount", nullptr, nullptr, sizeof(UI_Data_Holder_eventupdateFragmentCount_Parms), Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AUI_Data_Holder, nullptr, "updateLifeCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AUI_Data_Holder_NoRegister()
	{
		return AUI_Data_Holder::StaticClass();
	}
	struct Z_Construct_UClass_AUI_Data_Holder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Lives_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Lives_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TA_Frag_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TA_Frag_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_Frag_MaxValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_D_Frag_MaxValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Life_Obtained_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Life_Obtained_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TA_Frag_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TA_Frag_Count;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_D_Frag_Count_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_D_Frag_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUI_Data_Holder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AUI_Data_Holder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AUI_Data_Holder_decrementLifeCount, "decrementLifeCount" }, // 1126584224
		{ &Z_Construct_UFunction_AUI_Data_Holder_updateAbilityShardCount, "updateAbilityShardCount" }, // 3481528861
		{ &Z_Construct_UFunction_AUI_Data_Holder_updateFragmentCount, "updateFragmentCount" }, // 2797364582
		{ &Z_Construct_UFunction_AUI_Data_Holder_updateLifeCount, "updateLifeCount" }, // 3957342567
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UI_Data_Holder.h" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Lives_MaxValue_MetaData[] = {
		{ "Category", "Player UI variables" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Lives_MaxValue = { "Lives_MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_Data_Holder, Lives_MaxValue), METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Lives_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Lives_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_MaxValue_MetaData[] = {
		{ "Category", "Player UI variables" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_MaxValue = { "TA_Frag_MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_Data_Holder, TA_Frag_MaxValue), METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_MaxValue_MetaData[] = {
		{ "Category", "Player UI variables" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_MaxValue = { "D_Frag_MaxValue", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_Data_Holder, D_Frag_MaxValue), METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_MaxValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_MaxValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Life_Obtained_Count_MetaData[] = {
		{ "Category", "Player UI variables" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Life_Obtained_Count = { "Life_Obtained_Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_Data_Holder, Life_Obtained_Count), METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Life_Obtained_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Life_Obtained_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_Count_MetaData[] = {
		{ "Category", "Player UI variables" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_Count = { "TA_Frag_Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_Data_Holder, TA_Frag_Count), METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_Count_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_Count_MetaData[] = {
		{ "Category", "Player UI variables" },
		{ "ModuleRelativePath", "UI_Data_Holder.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_Count = { "D_Frag_Count", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUI_Data_Holder, D_Frag_Count), METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_Count_MetaData, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_Count_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUI_Data_Holder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Lives_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_MaxValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_Life_Obtained_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_TA_Frag_Count,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUI_Data_Holder_Statics::NewProp_D_Frag_Count,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUI_Data_Holder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUI_Data_Holder>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUI_Data_Holder_Statics::ClassParams = {
		&AUI_Data_Holder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AUI_Data_Holder_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AUI_Data_Holder_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUI_Data_Holder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUI_Data_Holder()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUI_Data_Holder_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUI_Data_Holder, 3197166146);
	template<> BOOK_PROJECT_API UClass* StaticClass<AUI_Data_Holder>()
	{
		return AUI_Data_Holder::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUI_Data_Holder(Z_Construct_UClass_AUI_Data_Holder, &AUI_Data_Holder::StaticClass, TEXT("/Script/Book_Project"), TEXT("AUI_Data_Holder"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUI_Data_Holder);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
