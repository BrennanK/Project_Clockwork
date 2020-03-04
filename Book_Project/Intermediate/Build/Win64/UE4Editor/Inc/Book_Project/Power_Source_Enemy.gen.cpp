// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Power_Source_Enemy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePower_Source_Enemy() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APower_Source_Enemy_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_APower_Source_Enemy();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AEnemyCharacter();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_APower_Source_Enemy_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void APower_Source_Enemy::StaticRegisterNativesAPower_Source_Enemy()
	{
		UClass* Class = APower_Source_Enemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &APower_Source_Enemy::execCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics
	{
		struct Power_Source_Enemy_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Power_Source_Enemy_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Power_Source_Enemy_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Power_Source_Enemy_eventCollision_Parms), &Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Power_Source_Enemy_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Power_Source_Enemy_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Power_Source_Enemy_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Power_Source_Enemy_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Power_Source_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APower_Source_Enemy, nullptr, "Collision", nullptr, nullptr, sizeof(Power_Source_Enemy_eventCollision_Parms), Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_APower_Source_Enemy_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_APower_Source_Enemy_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APower_Source_Enemy_NoRegister()
	{
		return APower_Source_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_APower_Source_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_damageToPlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_damageToPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APower_Source_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AEnemyCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_APower_Source_Enemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_APower_Source_Enemy_Collision, "Collision" }, // 581249855
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Source_Enemy_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Power_Source_Enemy.h" },
		{ "ModuleRelativePath", "Power_Source_Enemy.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APower_Source_Enemy_Statics::NewProp_damageToPlayer_MetaData[] = {
		{ "Category", "Power_Source_Enemy" },
		{ "ModuleRelativePath", "Power_Source_Enemy.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APower_Source_Enemy_Statics::NewProp_damageToPlayer = { "damageToPlayer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APower_Source_Enemy, damageToPlayer), METADATA_PARAMS(Z_Construct_UClass_APower_Source_Enemy_Statics::NewProp_damageToPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_APower_Source_Enemy_Statics::NewProp_damageToPlayer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APower_Source_Enemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APower_Source_Enemy_Statics::NewProp_damageToPlayer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APower_Source_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APower_Source_Enemy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APower_Source_Enemy_Statics::ClassParams = {
		&APower_Source_Enemy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_APower_Source_Enemy_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_APower_Source_Enemy_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APower_Source_Enemy_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APower_Source_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APower_Source_Enemy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APower_Source_Enemy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APower_Source_Enemy, 673774386);
	template<> BOOK_PROJECT_API UClass* StaticClass<APower_Source_Enemy>()
	{
		return APower_Source_Enemy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APower_Source_Enemy(Z_Construct_UClass_APower_Source_Enemy, &APower_Source_Enemy::StaticClass, TEXT("/Script/Book_Project"), TEXT("APower_Source_Enemy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APower_Source_Enemy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
