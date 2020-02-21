// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_EnemyAI_generated_h
#error "EnemyAI.generated.h already included, missing '#pragma once' in EnemyAI.h"
#endif
#define BOOK_PROJECT_EnemyAI_generated_h

#define Book_Project_Source_Book_Project_EnemyAI_h_15_RPC_WRAPPERS
#define Book_Project_Source_Book_Project_EnemyAI_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Book_Project_Source_Book_Project_EnemyAI_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEnemyAI(); \
	friend struct Z_Construct_UClass_AEnemyAI_Statics; \
public: \
	DECLARE_CLASS(AEnemyAI, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAI)


#define Book_Project_Source_Book_Project_EnemyAI_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAEnemyAI(); \
	friend struct Z_Construct_UClass_AEnemyAI_Statics; \
public: \
	DECLARE_CLASS(AEnemyAI, AAIController, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AEnemyAI)


#define Book_Project_Source_Book_Project_EnemyAI_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEnemyAI(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEnemyAI) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAI); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAI(AEnemyAI&&); \
	NO_API AEnemyAI(const AEnemyAI&); \
public:


#define Book_Project_Source_Book_Project_EnemyAI_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEnemyAI(AEnemyAI&&); \
	NO_API AEnemyAI(const AEnemyAI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEnemyAI); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEnemyAI); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEnemyAI)


#define Book_Project_Source_Book_Project_EnemyAI_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__BlackboardComp() { return STRUCT_OFFSET(AEnemyAI, BlackboardComp); } \
	FORCEINLINE static uint32 __PPO__BehaviorComp() { return STRUCT_OFFSET(AEnemyAI, BehaviorComp); }


#define Book_Project_Source_Book_Project_EnemyAI_h_12_PROLOG
#define Book_Project_Source_Book_Project_EnemyAI_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_EnemyAI_h_15_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_EnemyAI_h_15_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_EnemyAI_h_15_INCLASS \
	Book_Project_Source_Book_Project_EnemyAI_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_EnemyAI_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_EnemyAI_h_15_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_EnemyAI_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_EnemyAI_h_15_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_EnemyAI_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AEnemyAI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_EnemyAI_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
