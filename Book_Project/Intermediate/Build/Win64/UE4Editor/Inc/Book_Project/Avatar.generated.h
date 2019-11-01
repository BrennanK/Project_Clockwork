// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_Avatar_generated_h
#error "Avatar.generated.h already included, missing '#pragma once' in Avatar.h"
#endif
#define BOOK_PROJECT_Avatar_generated_h

#define Book_Project_Source_Book_Project_Avatar_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execbeginGrind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->beginGrind(); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Avatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execbeginGrind) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->beginGrind(); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Avatar_h_12_EVENT_PARMS
#define Book_Project_Source_Book_Project_Avatar_h_12_CALLBACK_WRAPPERS
#define Book_Project_Source_Book_Project_Avatar_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAvatar(); \
	friend struct Z_Construct_UClass_AAvatar_Statics; \
public: \
	DECLARE_CLASS(AAvatar, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AAvatar)


#define Book_Project_Source_Book_Project_Avatar_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAAvatar(); \
	friend struct Z_Construct_UClass_AAvatar_Statics; \
public: \
	DECLARE_CLASS(AAvatar, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AAvatar)


#define Book_Project_Source_Book_Project_Avatar_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAvatar(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAvatar) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvatar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvatar); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAvatar(AAvatar&&); \
	NO_API AAvatar(const AAvatar&); \
public:


#define Book_Project_Source_Book_Project_Avatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAvatar(AAvatar&&); \
	NO_API AAvatar(const AAvatar&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAvatar); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAvatar); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAvatar)


#define Book_Project_Source_Book_Project_Avatar_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Avatar_h_9_PROLOG \
	Book_Project_Source_Book_Project_Avatar_h_12_EVENT_PARMS


#define Book_Project_Source_Book_Project_Avatar_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Avatar_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Avatar_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Avatar_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Avatar_h_12_INCLASS \
	Book_Project_Source_Book_Project_Avatar_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Avatar_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Avatar_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Avatar_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Avatar_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Avatar_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Avatar_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Avatar_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
