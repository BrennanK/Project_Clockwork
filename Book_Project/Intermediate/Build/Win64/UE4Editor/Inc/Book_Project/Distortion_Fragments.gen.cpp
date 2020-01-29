// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Distortion_Fragments.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDistortion_Fragments() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_EPickupType();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ADistortion_Fragments_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ADistortion_Fragments();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ADistortion_Fragments_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AUI_Data_Holder_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
// End Cross Module References
	static UEnum* EPickupType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_EPickupType, Z_Construct_UPackage__Script_Book_Project(), TEXT("EPickupType"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<EPickupType>()
	{
		return EPickupType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPickupType(EPickupType_StaticEnum, TEXT("/Script/Book_Project"), TEXT("EPickupType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_EPickupType_Hash() { return 2938870045U; }
	UEnum* Z_Construct_UEnum_Book_Project_EPickupType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPickupType"), 0, Get_Z_Construct_UEnum_Book_Project_EPickupType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPickupType::DistortionFragments", (int64)EPickupType::DistortionFragments },
				{ "EPickupType::TimeAbilityShards", (int64)EPickupType::TimeAbilityShards },
				{ "EPickupType::Lives", (int64)EPickupType::Lives },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "DistortionFragments.Name", "EPickupType::DistortionFragments" },
				{ "Lives.Name", "EPickupType::Lives" },
				{ "ModuleRelativePath", "Distortion_Fragments.h" },
				{ "TimeAbilityShards.Name", "EPickupType::TimeAbilityShards" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"EPickupType",
				"EPickupType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void ADistortion_Fragments::StaticRegisterNativesADistortion_Fragments()
	{
		UClass* Class = ADistortion_Fragments::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &ADistortion_Fragments::execCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics
	{
		struct Distortion_Fragments_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Distortion_Fragments_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Distortion_Fragments_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Distortion_Fragments_eventCollision_Parms), &Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Distortion_Fragments_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Distortion_Fragments_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Distortion_Fragments_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Distortion_Fragments_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADistortion_Fragments, nullptr, "Collision", nullptr, nullptr, sizeof(Distortion_Fragments_eventCollision_Parms), Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADistortion_Fragments_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADistortion_Fragments_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADistortion_Fragments_NoRegister()
	{
		return ADistortion_Fragments::StaticClass();
	}
	struct Z_Construct_UClass_ADistortion_Fragments_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_typeOfPickUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_typeOfPickUp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_typeOfPickUp_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UI_Data_Container_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UI_Data_Container;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_fragmentValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_fragmentValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_sphereCollider_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_sphereCollider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADistortion_Fragments_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADistortion_Fragments_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADistortion_Fragments_Collision, "Collision" }, // 1936722684
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistortion_Fragments_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Distortion_Fragments.h" },
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp_MetaData[] = {
		{ "Category", "UI test" },
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp = { "typeOfPickUp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistortion_Fragments, typeOfPickUp), Z_Construct_UEnum_Book_Project_EPickupType, METADATA_PARAMS(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_UI_Data_Container_MetaData[] = {
		{ "Category", "Distortion_Fragments" },
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_UI_Data_Container = { "UI_Data_Container", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistortion_Fragments, UI_Data_Container), Z_Construct_UClass_AUI_Data_Holder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_UI_Data_Container_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_UI_Data_Container_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_fragmentValue_MetaData[] = {
		{ "Category", "Distortion Fragment Value" },
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_fragmentValue = { "fragmentValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistortion_Fragments, fragmentValue), METADATA_PARAMS(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_fragmentValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_fragmentValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Collectible Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistortion_Fragments, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_sphereCollider_MetaData[] = {
		{ "Category", "Collectible Properties" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Distortion_Fragments.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_sphereCollider = { "sphereCollider", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADistortion_Fragments, sphereCollider), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_sphereCollider_MetaData, ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_sphereCollider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADistortion_Fragments_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_typeOfPickUp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_UI_Data_Container,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_fragmentValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADistortion_Fragments_Statics::NewProp_sphereCollider,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADistortion_Fragments_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADistortion_Fragments>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADistortion_Fragments_Statics::ClassParams = {
		&ADistortion_Fragments::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADistortion_Fragments_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ADistortion_Fragments_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADistortion_Fragments_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADistortion_Fragments()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADistortion_Fragments_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADistortion_Fragments, 1755950523);
	template<> BOOK_PROJECT_API UClass* StaticClass<ADistortion_Fragments>()
	{
		return ADistortion_Fragments::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADistortion_Fragments(Z_Construct_UClass_ADistortion_Fragments, &ADistortion_Fragments::StaticClass, TEXT("/Script/Book_Project"), TEXT("ADistortion_Fragments"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADistortion_Fragments);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
