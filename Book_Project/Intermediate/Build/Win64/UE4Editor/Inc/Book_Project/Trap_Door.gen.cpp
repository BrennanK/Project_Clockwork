// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Trap_Door.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrap_Door() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATrap_Door_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATrap_Door();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AManipulable_Object();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ATrap_Door_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	void ATrap_Door::StaticRegisterNativesATrap_Door()
	{
		UClass* Class = ATrap_Door::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &ATrap_Door::execCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATrap_Door_Collision_Statics
	{
		struct Trap_Door_eventCollision_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Trap_Door_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Trap_Door_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Trap_Door_eventCollision_Parms), &Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Trap_Door_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Trap_Door_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Trap_Door_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Trap_Door_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATrap_Door_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATrap_Door_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATrap_Door_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATrap_Door_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATrap_Door, nullptr, "Collision", nullptr, nullptr, sizeof(Trap_Door_eventCollision_Parms), Z_Construct_UFunction_ATrap_Door_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ATrap_Door_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATrap_Door_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATrap_Door_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATrap_Door_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATrap_Door_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATrap_Door_NoRegister()
	{
		return ATrap_Door::StaticClass();
	}
	struct Z_Construct_UClass_ATrap_Door_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_activationBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_activationBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotatingMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_rotatingMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfReset_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rateOfReset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rateOfFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rateOfWarning_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rateOfWarning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotationAtZeroInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotationAtZeroInfluence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endRotationOfVisualDrop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endRotationOfVisualDrop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endRotationOfVisualWarning_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endRotationOfVisualWarning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATrap_Door_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AManipulable_Object,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATrap_Door_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATrap_Door_Collision, "Collision" }, // 351601473
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Trap_Door.h" },
		{ "ModuleRelativePath", "Trap_Door.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_activationBox_MetaData[] = {
		{ "Category", "Box Trigger For Fall" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_activationBox = { "activationBox", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, activationBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_activationBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_activationBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotatingMesh_MetaData[] = {
		{ "Category", "Mesh of The Rotating Platform" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotatingMesh = { "rotatingMesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, rotatingMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotatingMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotatingMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfReset_MetaData[] = {
		{ "Category", "Rates of Visuals" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfReset = { "rateOfReset", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, rateOfReset), METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfReset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfReset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfFalling_MetaData[] = {
		{ "Category", "Rates of Visuals" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfFalling = { "rateOfFalling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, rateOfFalling), METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfWarning_MetaData[] = {
		{ "Category", "Rates of Visuals" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfWarning = { "rateOfWarning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, rateOfWarning), METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfWarning_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfWarning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotationAtZeroInfluence_MetaData[] = {
		{ "Category", "Rotation Variances" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotationAtZeroInfluence = { "rotationAtZeroInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, rotationAtZeroInfluence), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotationAtZeroInfluence_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotationAtZeroInfluence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualDrop_MetaData[] = {
		{ "Category", "Rotation Variances" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualDrop = { "endRotationOfVisualDrop", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, endRotationOfVisualDrop), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualDrop_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualDrop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualWarning_MetaData[] = {
		{ "Category", "Rotation Variances" },
		{ "ModuleRelativePath", "Trap_Door.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualWarning = { "endRotationOfVisualWarning", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATrap_Door, endRotationOfVisualWarning), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualWarning_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualWarning_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATrap_Door_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_activationBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotatingMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfReset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_rateOfWarning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_rotationAtZeroInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualDrop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATrap_Door_Statics::NewProp_endRotationOfVisualWarning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATrap_Door_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATrap_Door>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATrap_Door_Statics::ClassParams = {
		&ATrap_Door::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATrap_Door_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATrap_Door_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATrap_Door_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATrap_Door()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATrap_Door_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATrap_Door, 761161260);
	template<> BOOK_PROJECT_API UClass* StaticClass<ATrap_Door>()
	{
		return ATrap_Door::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATrap_Door(Z_Construct_UClass_ATrap_Door, &ATrap_Door::StaticClass, TEXT("/Script/Book_Project"), TEXT("ATrap_Door"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATrap_Door);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
