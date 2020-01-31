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
#ifdef BOOK_PROJECT_Working_Bouncepad_generated_h
#error "Working_Bouncepad.generated.h already included, missing '#pragma once' in Working_Bouncepad.h"
#endif
#define BOOK_PROJECT_Working_Bouncepad_generated_h

#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_RPC_WRAPPERS \
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
	} \
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


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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
	} \
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


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_EVENT_PARMS
#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_CALLBACK_WRAPPERS
#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWorking_Bouncepad(); \
	friend struct Z_Construct_UClass_AWorking_Bouncepad_Statics; \
public: \
	DECLARE_CLASS(AWorking_Bouncepad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AWorking_Bouncepad)


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAWorking_Bouncepad(); \
	friend struct Z_Construct_UClass_AWorking_Bouncepad_Statics; \
public: \
	DECLARE_CLASS(AWorking_Bouncepad, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AWorking_Bouncepad)


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWorking_Bouncepad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorking_Bouncepad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorking_Bouncepad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorking_Bouncepad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorking_Bouncepad(AWorking_Bouncepad&&); \
	NO_API AWorking_Bouncepad(const AWorking_Bouncepad&); \
public:


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWorking_Bouncepad(AWorking_Bouncepad&&); \
	NO_API AWorking_Bouncepad(const AWorking_Bouncepad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWorking_Bouncepad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWorking_Bouncepad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWorking_Bouncepad)


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Working_Bouncepad_h_9_PROLOG \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_EVENT_PARMS


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_INCLASS \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Working_Bouncepad_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Working_Bouncepad_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AWorking_Bouncepad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Working_Bouncepad_h


#define FOREACH_ENUM_EBOUNCE_TYPE(op) \
	op(EBOUNCE_TYPE::Single) \
	op(EBOUNCE_TYPE::Build_Up) 

enum class EBOUNCE_TYPE : uint8;
template<> BOOK_PROJECT_API UEnum* StaticEnum<EBOUNCE_TYPE>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
