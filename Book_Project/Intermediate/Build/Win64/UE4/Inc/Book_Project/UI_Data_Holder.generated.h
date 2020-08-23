// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_UI_Data_Holder_generated_h
#error "UI_Data_Holder.generated.h already included, missing '#pragma once' in UI_Data_Holder.h"
#endif
#define BOOK_PROJECT_UI_Data_Holder_generated_h

#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_RPC_WRAPPERS
#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_EVENT_PARMS \
	struct UI_Data_Holder_eventupdateFragmentCount_Parms \
	{ \
		int32 shardWorth; \
	};


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_CALLBACK_WRAPPERS
#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAUI_Data_Holder(); \
	friend struct Z_Construct_UClass_AUI_Data_Holder_Statics; \
public: \
	DECLARE_CLASS(AUI_Data_Holder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AUI_Data_Holder)


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAUI_Data_Holder(); \
	friend struct Z_Construct_UClass_AUI_Data_Holder_Statics; \
public: \
	DECLARE_CLASS(AUI_Data_Holder, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AUI_Data_Holder)


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AUI_Data_Holder(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AUI_Data_Holder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_Data_Holder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_Data_Holder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_Data_Holder(AUI_Data_Holder&&); \
	NO_API AUI_Data_Holder(const AUI_Data_Holder&); \
public:


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AUI_Data_Holder(AUI_Data_Holder&&); \
	NO_API AUI_Data_Holder(const AUI_Data_Holder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AUI_Data_Holder); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AUI_Data_Holder); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AUI_Data_Holder)


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_UI_Data_Holder_h_9_PROLOG \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_EVENT_PARMS


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_INCLASS \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_UI_Data_Holder_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_UI_Data_Holder_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AUI_Data_Holder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_UI_Data_Holder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
