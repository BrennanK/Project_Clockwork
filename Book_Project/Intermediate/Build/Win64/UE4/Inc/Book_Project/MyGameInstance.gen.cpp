// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/MyGameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyGameInstance() {}
// Cross Module References
	BOOK_PROJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardSlot();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_UMyGameInstance_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_UMyGameInstance();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_createASampleBoard();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_isFasterTime();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_isNewScore();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_LoadGame();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_SaveGame();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_UMyGameInstance_updateLeaderboard();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FLeaderboardSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern BOOK_PROJECT_API uint32 Get_Z_Construct_UScriptStruct_FLeaderboardSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLeaderboardSlot, Z_Construct_UPackage__Script_Book_Project(), TEXT("LeaderboardSlot"), sizeof(FLeaderboardSlot), Get_Z_Construct_UScriptStruct_FLeaderboardSlot_Hash());
	}
	return Singleton;
}
template<> BOOK_PROJECT_API UScriptStruct* StaticStruct<FLeaderboardSlot>()
{
	return FLeaderboardSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLeaderboardSlot(FLeaderboardSlot::StaticStruct, TEXT("/Script/Book_Project"), TEXT("LeaderboardSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Book_Project_StaticRegisterNativesFLeaderboardSlot
{
	FScriptStruct_Book_Project_StaticRegisterNativesFLeaderboardSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LeaderboardSlot")),new UScriptStruct::TCppStructOps<FLeaderboardSlot>);
	}
} ScriptStruct_Book_Project_StaticRegisterNativesFLeaderboardSlot;
	struct Z_Construct_UScriptStruct_FLeaderboardSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_playerScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_timeTakenToCompleteLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_timeTakenToCompleteLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLeaderboardSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_playerScore_MetaData[] = {
		{ "Category", "Leaderboard Struct" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_playerScore = { "playerScore", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardSlot, playerScore), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_playerScore_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_playerScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_timeTakenToCompleteLevel_MetaData[] = {
		{ "Category", "Leaderboard Struct" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_timeTakenToCompleteLevel = { "timeTakenToCompleteLevel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardSlot, timeTakenToCompleteLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_timeTakenToCompleteLevel_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_timeTakenToCompleteLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_name_MetaData[] = {
		{ "Category", "Leaderboard Struct" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLeaderboardSlot, name), METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_name_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_playerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_timeTakenToCompleteLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::NewProp_name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
		nullptr,
		&NewStructOps,
		"LeaderboardSlot",
		sizeof(FLeaderboardSlot),
		alignof(FLeaderboardSlot),
		Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLeaderboardSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLeaderboardSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LeaderboardSlot"), sizeof(FLeaderboardSlot), Get_Z_Construct_UScriptStruct_FLeaderboardSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLeaderboardSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLeaderboardSlot_Hash() { return 408306309U; }
	void UMyGameInstance::StaticRegisterNativesUMyGameInstance()
	{
		UClass* Class = UMyGameInstance::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "calculateBonusAmount", &UMyGameInstance::execcalculateBonusAmount },
			{ "createASampleBoard", &UMyGameInstance::execcreateASampleBoard },
			{ "deserveDeathBonus", &UMyGameInstance::execdeserveDeathBonus },
			{ "deserveObjectiveBonus", &UMyGameInstance::execdeserveObjectiveBonus },
			{ "incrementDeathNumber", &UMyGameInstance::execincrementDeathNumber },
			{ "isFasterTime", &UMyGameInstance::execisFasterTime },
			{ "isNewScore", &UMyGameInstance::execisNewScore },
			{ "LoadGame", &UMyGameInstance::execLoadGame },
			{ "saveCompletionOfTutorial", &UMyGameInstance::execsaveCompletionOfTutorial },
			{ "SaveGame", &UMyGameInstance::execSaveGame },
			{ "updateLeaderboard", &UMyGameInstance::execupdateLeaderboard },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics
	{
		struct MyGameInstance_eventcalculateBonusAmount_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventcalculateBonusAmount_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "calculateBonusAmount", nullptr, nullptr, sizeof(MyGameInstance_eventcalculateBonusAmount_Parms), Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_createASampleBoard_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_createASampleBoard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_createASampleBoard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "createASampleBoard", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_createASampleBoard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_createASampleBoard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_createASampleBoard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_createASampleBoard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "deserveDeathBonus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "deserveObjectiveBonus", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "incrementDeathNumber", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics
	{
		struct MyGameInstance_eventisFasterTime_Parms
		{
			float playerTimeAsAFloat;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerTimeAsAFloat;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventisFasterTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::NewProp_playerTimeAsAFloat = { "playerTimeAsAFloat", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventisFasterTime_Parms, playerTimeAsAFloat), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::NewProp_playerTimeAsAFloat,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "isFasterTime", nullptr, nullptr, sizeof(MyGameInstance_eventisFasterTime_Parms), Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_isFasterTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_isFasterTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics
	{
		struct MyGameInstance_eventisNewScore_Parms
		{
			int32 scoreToEvaluate;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_scoreToEvaluate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventisNewScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::NewProp_scoreToEvaluate = { "scoreToEvaluate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventisNewScore_Parms, scoreToEvaluate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::NewProp_scoreToEvaluate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "isNewScore", nullptr, nullptr, sizeof(MyGameInstance_eventisNewScore_Parms), Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_isNewScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_isNewScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "LoadGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_LoadGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_LoadGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "saveCompletionOfTutorial", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics
	{
		struct MyGameInstance_eventSaveGame_Parms
		{
			TArray<FLeaderboardSlot> boardToSave;
			bool tutorialCompletionVar;
		};
		static void NewProp_tutorialCompletionVar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_tutorialCompletionVar;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_boardToSave;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_boardToSave_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_tutorialCompletionVar_SetBit(void* Obj)
	{
		((MyGameInstance_eventSaveGame_Parms*)Obj)->tutorialCompletionVar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_tutorialCompletionVar = { "tutorialCompletionVar", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(MyGameInstance_eventSaveGame_Parms), &Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_tutorialCompletionVar_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_boardToSave = { "boardToSave", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventSaveGame_Parms, boardToSave), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_boardToSave_Inner = { "boardToSave", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLeaderboardSlot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_tutorialCompletionVar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_boardToSave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::NewProp_boardToSave_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "SaveGame", nullptr, nullptr, sizeof(MyGameInstance_eventSaveGame_Parms), Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_SaveGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_SaveGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics
	{
		struct MyGameInstance_eventupdateLeaderboard_Parms
		{
			int32 indexOfNewScore;
			FString playerName;
			float playerTime;
			int32 newHighscore;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_newHighscore;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_playerTime;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerName;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexOfNewScore;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_newHighscore = { "newHighscore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventupdateLeaderboard_Parms, newHighscore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_playerTime = { "playerTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventupdateLeaderboard_Parms, playerTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_playerName = { "playerName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventupdateLeaderboard_Parms, playerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_indexOfNewScore = { "indexOfNewScore", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MyGameInstance_eventupdateLeaderboard_Parms, indexOfNewScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_newHighscore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_playerTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_playerName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::NewProp_indexOfNewScore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMyGameInstance, nullptr, "updateLeaderboard", nullptr, nullptr, sizeof(MyGameInstance_eventupdateLeaderboard_Parms), Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMyGameInstance_updateLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMyGameInstance_updateLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMyGameInstance_NoRegister()
	{
		return UMyGameInstance::StaticClass();
	}
	struct Z_Construct_UClass_UMyGameInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_effectSliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_effectSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_musicSliderValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_musicSliderValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_leaderboardToPresent_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_leaderboardToPresent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_leaderboardToPresent_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_completionHolder_MetaData[];
#endif
		static void NewProp_completionHolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_completionHolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonusForObjectives_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bonusForObjectives;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonusForDeaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bonusForDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_allObjectivesComplete_MetaData[];
#endif
		static void NewProp_allObjectivesComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_allObjectivesComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfDeaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_numberOfDeaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bonusAccumulated_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bonusAccumulated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMyGameInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMyGameInstance_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMyGameInstance_calculateBonusAmount, "calculateBonusAmount" }, // 2134413993
		{ &Z_Construct_UFunction_UMyGameInstance_createASampleBoard, "createASampleBoard" }, // 2325904907
		{ &Z_Construct_UFunction_UMyGameInstance_deserveDeathBonus, "deserveDeathBonus" }, // 1922756629
		{ &Z_Construct_UFunction_UMyGameInstance_deserveObjectiveBonus, "deserveObjectiveBonus" }, // 3797682198
		{ &Z_Construct_UFunction_UMyGameInstance_incrementDeathNumber, "incrementDeathNumber" }, // 2730239818
		{ &Z_Construct_UFunction_UMyGameInstance_isFasterTime, "isFasterTime" }, // 3585887358
		{ &Z_Construct_UFunction_UMyGameInstance_isNewScore, "isNewScore" }, // 3050386131
		{ &Z_Construct_UFunction_UMyGameInstance_LoadGame, "LoadGame" }, // 2088876940
		{ &Z_Construct_UFunction_UMyGameInstance_saveCompletionOfTutorial, "saveCompletionOfTutorial" }, // 2846452254
		{ &Z_Construct_UFunction_UMyGameInstance_SaveGame, "SaveGame" }, // 3617558724
		{ &Z_Construct_UFunction_UMyGameInstance_updateLeaderboard, "updateLeaderboard" }, // 395599873
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MyGameInstance.h" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_effectSliderValue_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_effectSliderValue = { "effectSliderValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, effectSliderValue), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_effectSliderValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_effectSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_musicSliderValue_MetaData[] = {
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_musicSliderValue = { "musicSliderValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, musicSliderValue), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_musicSliderValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_musicSliderValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent_MetaData[] = {
		{ "Category", "Array of LeaderboardSlot Structs" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent = { "leaderboardToPresent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, leaderboardToPresent), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent_Inner = { "leaderboardToPresent", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLeaderboardSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder_MetaData[] = {
		{ "Category", "Tutuorial Decider" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->completionHolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder = { "completionHolder", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForObjectives_MetaData[] = {
		{ "Category", "Game Instance Variables for Bonus Attributes" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForObjectives = { "bonusForObjectives", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, bonusForObjectives), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForObjectives_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForObjectives_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForDeaths_MetaData[] = {
		{ "Category", "Game Instance Variables for Bonus Attributes" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForDeaths = { "bonusForDeaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, bonusForDeaths), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForDeaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete_MetaData[] = {
		{ "Category", "Game Instance Variables for Bonus Attributes" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	void Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete_SetBit(void* Obj)
	{
		((UMyGameInstance*)Obj)->allObjectivesComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete = { "allObjectivesComplete", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMyGameInstance), &Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_numberOfDeaths_MetaData[] = {
		{ "Category", "Game Instance Variables for Bonus Attributes" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_numberOfDeaths = { "numberOfDeaths", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, numberOfDeaths), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_numberOfDeaths_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_numberOfDeaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusAccumulated_MetaData[] = {
		{ "Category", "Game Instance Variables for Bonus Attributes" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusAccumulated = { "bonusAccumulated", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, bonusAccumulated), METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusAccumulated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusAccumulated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Rotation_MetaData[] = {
		{ "Category", "Game Instance Variables for DeathBox" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "Game Instance Variables for DeathBox" },
		{ "ModuleRelativePath", "MyGameInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMyGameInstance, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMyGameInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_effectSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_musicSliderValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_leaderboardToPresent_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_completionHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForObjectives,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusForDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_allObjectivesComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_numberOfDeaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_bonusAccumulated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMyGameInstance_Statics::NewProp_Location,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMyGameInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMyGameInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMyGameInstance_Statics::ClassParams = {
		&UMyGameInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMyGameInstance_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::PropPointers),
		0,
		0x001000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMyGameInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMyGameInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMyGameInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMyGameInstance, 2192161278);
	template<> BOOK_PROJECT_API UClass* StaticClass<UMyGameInstance>()
	{
		return UMyGameInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMyGameInstance(Z_Construct_UClass_UMyGameInstance, &UMyGameInstance::StaticClass, TEXT("/Script/Book_Project"), TEXT("UMyGameInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMyGameInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
