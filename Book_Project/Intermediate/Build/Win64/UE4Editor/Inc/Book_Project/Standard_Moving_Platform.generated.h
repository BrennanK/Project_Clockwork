// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef BOOK_PROJECT_Standard_Moving_Platform_generated_h
#error "Standard_Moving_Platform.generated.h already included, missing '#pragma once' in Standard_Moving_Platform.h"
#endif
#define BOOK_PROJECT_Standard_Moving_Platform_generated_h

#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_RPC_WRAPPERS
#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAStandard_Moving_Platform(); \
	friend struct Z_Construct_UClass_AStandard_Moving_Platform_Statics; \
public: \
	DECLARE_CLASS(AStandard_Moving_Platform, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AStandard_Moving_Platform)


#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAStandard_Moving_Platform(); \
	friend struct Z_Construct_UClass_AStandard_Moving_Platform_Statics; \
public: \
	DECLARE_CLASS(AStandard_Moving_Platform, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AStandard_Moving_Platform)


#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AStandard_Moving_Platform(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AStandard_Moving_Platform) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStandard_Moving_Platform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStandard_Moving_Platform); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStandard_Moving_Platform(AStandard_Moving_Platform&&); \
	NO_API AStandard_Moving_Platform(const AStandard_Moving_Platform&); \
public:


#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AStandard_Moving_Platform(AStandard_Moving_Platform&&); \
	NO_API AStandard_Moving_Platform(const AStandard_Moving_Platform&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AStandard_Moving_Platform); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AStandard_Moving_Platform); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AStandard_Moving_Platform)


#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_9_PROLOG
#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_INCLASS \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Standard_Moving_Platform_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AStandard_Moving_Platform>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Standard_Moving_Platform_h


#define FOREACH_ENUM_EDIRECTIONOFMOVEMENT(op) \
	op(EDIRECTIONOFMOVEMENT::X) \
	op(EDIRECTIONOFMOVEMENT::Y) \
	op(EDIRECTIONOFMOVEMENT::Z) 

enum class EDIRECTIONOFMOVEMENT : uint8;
template<> BOOK_PROJECT_API UEnum* StaticEnum<EDIRECTIONOFMOVEMENT>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
