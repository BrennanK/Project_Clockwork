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
#ifdef BOOK_PROJECT_Quick_Congrats_Screen_generated_h
#error "Quick_Congrats_Screen.generated.h already included, missing '#pragma once' in Quick_Congrats_Screen.h"
#endif
#define BOOK_PROJECT_Quick_Congrats_Screen_generated_h

#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_RPC_WRAPPERS \
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


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_EVENT_PARMS
#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_CALLBACK_WRAPPERS
#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAQuick_Congrats_Screen(); \
	friend struct Z_Construct_UClass_AQuick_Congrats_Screen_Statics; \
public: \
	DECLARE_CLASS(AQuick_Congrats_Screen, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AQuick_Congrats_Screen)


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAQuick_Congrats_Screen(); \
	friend struct Z_Construct_UClass_AQuick_Congrats_Screen_Statics; \
public: \
	DECLARE_CLASS(AQuick_Congrats_Screen, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Book_Project"), NO_API) \
	DECLARE_SERIALIZER(AQuick_Congrats_Screen)


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AQuick_Congrats_Screen(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuick_Congrats_Screen) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuick_Congrats_Screen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuick_Congrats_Screen); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuick_Congrats_Screen(AQuick_Congrats_Screen&&); \
	NO_API AQuick_Congrats_Screen(const AQuick_Congrats_Screen&); \
public:


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AQuick_Congrats_Screen(AQuick_Congrats_Screen&&); \
	NO_API AQuick_Congrats_Screen(const AQuick_Congrats_Screen&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AQuick_Congrats_Screen); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AQuick_Congrats_Screen); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AQuick_Congrats_Screen)


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_PRIVATE_PROPERTY_OFFSET
#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_9_PROLOG \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_EVENT_PARMS


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_RPC_WRAPPERS \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_INCLASS \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_PRIVATE_PROPERTY_OFFSET \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_CALLBACK_WRAPPERS \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_INCLASS_NO_PURE_DECLS \
	Book_Project_Source_Book_Project_Quick_Congrats_Screen_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> BOOK_PROJECT_API UClass* StaticClass<class AQuick_Congrats_Screen>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Book_Project_Source_Book_Project_Quick_Congrats_Screen_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
