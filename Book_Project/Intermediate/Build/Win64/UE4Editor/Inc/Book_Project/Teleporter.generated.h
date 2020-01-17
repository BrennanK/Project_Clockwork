// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_Teleporter_generated_h
#error "Teleporter.generated.h already included, missing '#pragma once' in Teleporter.h"
#endif
#define BOOK_PROJECT_Teleporter_generated_h

#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_RPC_WRAPPERS
#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATeleporter(); \
	friend struct Z_Construct_UClass_ATeleporter_Statics; \
public: \
	DECLARE_CLASS(ATeleporter, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter)


#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATeleporter(); \
	friend struct Z_Construct_UClass_ATeleporter_Statics; \
public: \
	DECLARE_CLASS(ATeleporter, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(ATeleporter)


#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATeleporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporter(ATeleporter&&); \
	NO_API ATeleporter(const ATeleporter&); \
public:


#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATeleporter(ATeleporter&&); \
	NO_API ATeleporter(const ATeleporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATeleporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATeleporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATeleporter)


#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_4_23_Source_Book_Project_Teleporter_h_9_PROLOG
#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_RPC_WRAPPERS \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_INCLASS \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_4_23_Source_Book_Project_Teleporter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_4_23_Source_Book_Project_Teleporter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class ATeleporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_4_23_Source_Book_Project_Teleporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
