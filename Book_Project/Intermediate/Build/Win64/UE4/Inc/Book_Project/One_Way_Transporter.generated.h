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
#ifdef BOOK_PROJECT_One_Way_Transporter_generated_h
#error "One_Way_Transporter.generated.h already included, missing '#pragma once' in One_Way_Transporter.h"
#endif
#define BOOK_PROJECT_One_Way_Transporter_generated_h

#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execEndCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndCollision(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execEndCollision) \
	{ \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp); \
		P_GET_PROPERTY(UIntProperty,Z_Param_OtherBodyIndex); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EndCollision(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex); \
		P_NATIVE_END; \
	} \
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


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAOne_Way_Transporter(); \
	friend struct Z_Construct_UClass_AOne_Way_Transporter_Statics; \
public: \
	DECLARE_CLASS(AOne_Way_Transporter, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AOne_Way_Transporter)


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAOne_Way_Transporter(); \
	friend struct Z_Construct_UClass_AOne_Way_Transporter_Statics; \
public: \
	DECLARE_CLASS(AOne_Way_Transporter, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AOne_Way_Transporter)


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AOne_Way_Transporter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOne_Way_Transporter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOne_Way_Transporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOne_Way_Transporter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOne_Way_Transporter(AOne_Way_Transporter&&); \
	NO_API AOne_Way_Transporter(const AOne_Way_Transporter&); \
public:


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AOne_Way_Transporter(AOne_Way_Transporter&&); \
	NO_API AOne_Way_Transporter(const AOne_Way_Transporter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AOne_Way_Transporter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AOne_Way_Transporter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AOne_Way_Transporter)


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_One_Way_Transporter_h_9_PROLOG
#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_INCLASS \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_One_Way_Transporter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_One_Way_Transporter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AOne_Way_Transporter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_One_Way_Transporter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
