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
#ifdef BOOK_PROJECT_Colored_Floor_Switch_generated_h
#error "Colored_Floor_Switch.generated.h already included, missing '#pragma once' in Colored_Floor_Switch.h"
#endif
#define BOOK_PROJECT_Colored_Floor_Switch_generated_h

#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_RPC_WRAPPERS \
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


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_EVENT_PARMS
#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_CALLBACK_WRAPPERS
#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAColored_Floor_Switch(); \
	friend struct Z_Construct_UClass_AColored_Floor_Switch_Statics; \
public: \
	DECLARE_CLASS(AColored_Floor_Switch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AColored_Floor_Switch)


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAColored_Floor_Switch(); \
	friend struct Z_Construct_UClass_AColored_Floor_Switch_Statics; \
public: \
	DECLARE_CLASS(AColored_Floor_Switch, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AColored_Floor_Switch)


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AColored_Floor_Switch(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColored_Floor_Switch) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColored_Floor_Switch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColored_Floor_Switch); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AColored_Floor_Switch(AColored_Floor_Switch&&); \
	NO_API AColored_Floor_Switch(const AColored_Floor_Switch&); \
public:


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AColored_Floor_Switch(AColored_Floor_Switch&&); \
	NO_API AColored_Floor_Switch(const AColored_Floor_Switch&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AColored_Floor_Switch); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AColored_Floor_Switch); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AColored_Floor_Switch)


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_9_PROLOG \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_EVENT_PARMS


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_RPC_WRAPPERS \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_CALLBACK_WRAPPERS \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_INCLASS \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_CALLBACK_WRAPPERS \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AColored_Floor_Switch>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_4_23_Source_Book_Project_Colored_Floor_Switch_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
