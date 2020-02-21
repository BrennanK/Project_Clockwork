// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FLeaderboardSlot;
#ifdef BOOK_PROJECT_MyGameInstance_generated_h
#error "MyGameInstance.generated.h already included, missing '#pragma once' in MyGameInstance.h"
#endif
#define BOOK_PROJECT_MyGameInstance_generated_h

#define Book_Project_Source_Book_Project_MyGameInstance_h_10_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FLeaderboardSlot_Statics; \
	BOOK_PROJECT_API static class UScriptStruct* StaticStruct();


template<> BOOK_PROJECT_API UScriptStruct* StaticStruct<struct FLeaderboardSlot>();

#define Book_Project_Source_Book_Project_MyGameInstance_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execupdateLeaderboard) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_indexOfNewScore); \
		P_GET_PROPERTY(UStrProperty,Z_Param_playerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_playerTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_newHighscore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->updateLeaderboard(Z_Param_indexOfNewScore,Z_Param_playerName,Z_Param_playerTime,Z_Param_newHighscore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisNewScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_scoreToEvaluate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->isNewScore(Z_Param_scoreToEvaluate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcreateASampleBoard) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->createASampleBoard(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_GET_TARRAY(FLeaderboardSlot,Z_Param_boardToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(Z_Param_boardToSave); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execupdateLeaderboard) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_indexOfNewScore); \
		P_GET_PROPERTY(UStrProperty,Z_Param_playerName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_playerTime); \
		P_GET_PROPERTY(UIntProperty,Z_Param_newHighscore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->updateLeaderboard(Z_Param_indexOfNewScore,Z_Param_playerName,Z_Param_playerTime,Z_Param_newHighscore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execisNewScore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_scoreToEvaluate); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->isNewScore(Z_Param_scoreToEvaluate); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execcreateASampleBoard) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->createASampleBoard(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadGame) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadGame(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveGame) \
	{ \
		P_GET_TARRAY(FLeaderboardSlot,Z_Param_boardToSave); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveGame(Z_Param_boardToSave); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMyGameInstance(); \
	friend struct Z_Construct_UClass_UMyGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(UMyGameInstance)


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public:


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMyGameInstance(UMyGameInstance&&); \
	NO_API UMyGameInstance(const UMyGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyGameInstance); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyGameInstance)


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_MyGameInstance_h_12_PROLOG
#define Book_Project_Source_Book_Project_MyGameInstance_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_INCLASS \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_MyGameInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_MyGameInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class UMyGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_MyGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
