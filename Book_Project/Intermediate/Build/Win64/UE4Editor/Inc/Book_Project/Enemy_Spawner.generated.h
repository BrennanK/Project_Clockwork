// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APatrolling_Enemy;
#ifdef BOOK_PROJECT_Enemy_Spawner_generated_h
#error "Enemy_Spawner.generated.h already included, missing '#pragma once' in Enemy_Spawner.h"
#endif
#define BOOK_PROJECT_Enemy_Spawner_generated_h

#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspawnEnemyAfterDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->spawnEnemyAfterDelay(Z_Param_delay); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnEnemy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnEnemy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execspawnEnemyAfterDelay) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_delay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->spawnEnemyAfterDelay(Z_Param_delay); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_EVENT_PARMS \
	struct Enemy_Spawner_eventsetPotentialPatrolPath_Parms \
	{ \
		APatrolling_Enemy* spawn; \
	};


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_CALLBACK_WRAPPERS
#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemy_Spawner(); \
	friend struct Z_Construct_UClass_AEnemy_Spawner_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Spawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Spawner)


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAEnemy_Spawner(); \
	friend struct Z_Construct_UClass_AEnemy_Spawner_Statics; \
public: \
	DECLARE_CLASS(AEnemy_Spawner, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AEnemy_Spawner)


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemy_Spawner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemy_Spawner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Spawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Spawner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Spawner(AEnemy_Spawner&&); \
	NO_API AEnemy_Spawner(const AEnemy_Spawner&); \
public:


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemy_Spawner(AEnemy_Spawner&&); \
	NO_API AEnemy_Spawner(const AEnemy_Spawner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemy_Spawner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemy_Spawner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemy_Spawner)


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Enemy_Spawner_h_9_PROLOG \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_EVENT_PARMS


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_INCLASS \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Enemy_Spawner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Enemy_Spawner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AEnemy_Spawner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Enemy_Spawner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
