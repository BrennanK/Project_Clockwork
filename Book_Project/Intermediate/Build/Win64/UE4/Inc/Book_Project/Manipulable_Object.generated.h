// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_Manipulable_Object_generated_h
#error "Manipulable_Object.generated.h already included, missing '#pragma once' in Manipulable_Object.h"
#endif
#define BOOK_PROJECT_Manipulable_Object_generated_h

#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinterActionCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->interActionCommand(); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMove) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Move(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execinterActionCommand) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->interActionCommand(); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAManipulable_Object(); \
	friend struct Z_Construct_UClass_AManipulable_Object_Statics; \
public: \
	DECLARE_CLASS(AManipulable_Object, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AManipulable_Object)


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAManipulable_Object(); \
	friend struct Z_Construct_UClass_AManipulable_Object_Statics; \
public: \
	DECLARE_CLASS(AManipulable_Object, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AManipulable_Object)


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AManipulable_Object(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManipulable_Object) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManipulable_Object); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulable_Object); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManipulable_Object(AManipulable_Object&&); \
	NO_API AManipulable_Object(const AManipulable_Object&); \
public:


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AManipulable_Object(AManipulable_Object&&); \
	NO_API AManipulable_Object(const AManipulable_Object&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AManipulable_Object); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AManipulable_Object); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AManipulable_Object)


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Manipulable_Object_h_9_PROLOG
#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_INCLASS \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Manipulable_Object_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Manipulable_Object_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AManipulable_Object>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Manipulable_Object_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
