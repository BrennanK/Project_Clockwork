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
#ifdef BOOK_PROJECT_Distortion_Fragments_generated_h
#error "Distortion_Fragments.generated.h already included, missing '#pragma once' in Distortion_Fragments.h"
#endif
#define BOOK_PROJECT_Distortion_Fragments_generated_h

#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_RPC_WRAPPERS \
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


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADistortion_Fragments(); \
	friend struct Z_Construct_UClass_ADistortion_Fragments_Statics; \
public: \
	DECLARE_CLASS(ADistortion_Fragments, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(ADistortion_Fragments)


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADistortion_Fragments(); \
	friend struct Z_Construct_UClass_ADistortion_Fragments_Statics; \
public: \
	DECLARE_CLASS(ADistortion_Fragments, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(ADistortion_Fragments)


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADistortion_Fragments(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADistortion_Fragments) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADistortion_Fragments); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADistortion_Fragments); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADistortion_Fragments(ADistortion_Fragments&&); \
	NO_API ADistortion_Fragments(const ADistortion_Fragments&); \
public:


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADistortion_Fragments(ADistortion_Fragments&&); \
	NO_API ADistortion_Fragments(const ADistortion_Fragments&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADistortion_Fragments); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADistortion_Fragments); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADistortion_Fragments)


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Distortion_Fragments_h_9_PROLOG
#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_INCLASS \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Distortion_Fragments_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Distortion_Fragments_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class ADistortion_Fragments>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Distortion_Fragments_h


#define FOREACH_ENUM_EPICKUPTYPE(op) \
	op(EPickupType::DistortionFragments) \
	op(EPickupType::TimeAbilityShards) \
	op(EPickupType::Lives) 

enum class EPickupType : uint8;
template<> BOOK_PROJECT_API UEnum* StaticEnum<EPickupType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
