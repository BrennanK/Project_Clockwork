// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef BOOK_PROJECT_PickupItem_generated_h
#error "PickupItem.generated.h already included, missing '#pragma once' in PickupItem.h"
#endif
#define BOOK_PROJECT_PickupItem_generated_h

#define Book_Project_Source_Book_Project_PickupItem_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execProx) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Prox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_PickupItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execProx) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Prox(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_PickupItem_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(APickupItem)


#define Book_Project_Source_Book_Project_PickupItem_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPickupItem(); \
	friend struct Z_Construct_UClass_APickupItem_Statics; \
public: \
	DECLARE_CLASS(APickupItem, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(APickupItem)


#define Book_Project_Source_Book_Project_PickupItem_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickupItem(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupItem) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public:


#define Book_Project_Source_Book_Project_PickupItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickupItem(APickupItem&&); \
	NO_API APickupItem(const APickupItem&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickupItem); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickupItem); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickupItem)


#define Book_Project_Source_Book_Project_PickupItem_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_PickupItem_h_9_PROLOG
#define Book_Project_Source_Book_Project_PickupItem_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_PickupItem_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_PickupItem_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_PickupItem_h_12_INCLASS \
	Book_Project_Source_Book_Project_PickupItem_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_PickupItem_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_PickupItem_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_PickupItem_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_PickupItem_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_PickupItem_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_PickupItem_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
