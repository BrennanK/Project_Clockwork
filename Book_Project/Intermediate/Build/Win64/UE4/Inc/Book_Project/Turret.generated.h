// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_Turret_generated_h
#error "Turret.generated.h already included, missing '#pragma once' in Turret.h"
#endif
#define BOOK_PROJECT_Turret_generated_h

#define Book_Project_Source_Book_Project_Turret_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execstopFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnObject(); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Turret_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execstopFiring) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->stopFiring(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnObject) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpawnObject(); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Turret_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define Book_Project_Source_Book_Project_Turret_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATurret(); \
	friend struct Z_Construct_UClass_ATurret_Statics; \
public: \
	DECLARE_CLASS(ATurret, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(ATurret)


#define Book_Project_Source_Book_Project_Turret_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATurret(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATurret) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public:


#define Book_Project_Source_Book_Project_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATurret(ATurret&&); \
	NO_API ATurret(const ATurret&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATurret); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATurret); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATurret)


#define Book_Project_Source_Book_Project_Turret_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Turret_h_9_PROLOG
#define Book_Project_Source_Book_Project_Turret_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Turret_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Turret_h_12_INCLASS \
	Book_Project_Source_Book_Project_Turret_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Turret_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Turret_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Turret_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Turret_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Turret_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class ATurret>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Turret_h


#define FOREACH_ENUM_ETURRETTYPE(op) \
	op(ETurretType::Standard) \
	op(ETurretType::Tracking) 

enum class ETurretType : uint8;
template<> BOOK_PROJECT_API UEnum* StaticEnum<ETurretType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
