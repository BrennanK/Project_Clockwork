// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
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
#ifdef BOOK_PROJECT_Collsion_Actor_Component_generated_h
#error "Collsion_Actor_Component.generated.h already included, missing '#pragma once' in Collsion_Actor_Component.h"
#endif
#define BOOK_PROJECT_Collsion_Actor_Component_generated_h

#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collision(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_GET_UBOOL(Z_Param_bFromSweep); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Collision(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult); \
		P_NATIVE_END; \
	}


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCollsion_Actor_Component(); \
	friend struct Z_Construct_UClass_UCollsion_Actor_Component_Statics; \
public: \
	DECLARE_CLASS(UCollsion_Actor_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(UCollsion_Actor_Component)


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUCollsion_Actor_Component(); \
	friend struct Z_Construct_UClass_UCollsion_Actor_Component_Statics; \
public: \
	DECLARE_CLASS(UCollsion_Actor_Component, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(UCollsion_Actor_Component)


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCollsion_Actor_Component(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollsion_Actor_Component) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollsion_Actor_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollsion_Actor_Component); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollsion_Actor_Component(UCollsion_Actor_Component&&); \
	NO_API UCollsion_Actor_Component(const UCollsion_Actor_Component&); \
public:


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCollsion_Actor_Component(UCollsion_Actor_Component&&); \
	NO_API UCollsion_Actor_Component(const UCollsion_Actor_Component&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCollsion_Actor_Component); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCollsion_Actor_Component); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCollsion_Actor_Component)


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_10_PROLOG
#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_INCLASS \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Collsion_Actor_Component_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class UCollsion_Actor_Component>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Collsion_Actor_Component_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
