// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Turret.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTurret() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_ETurretType();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATurret_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ATurret();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ATurret_SpawnObject();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ATurret_stopFiring();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	static UEnum* ETurretType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_ETurretType, Z_Construct_UPackage__Script_Book_Project(), TEXT("ETurretType"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<ETurretType>()
	{
		return ETurretType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETurretType(ETurretType_StaticEnum, TEXT("/Script/Book_Project"), TEXT("ETurretType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_ETurretType_Hash() { return 4290359U; }
	UEnum* Z_Construct_UEnum_Book_Project_ETurretType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETurretType"), 0, Get_Z_Construct_UEnum_Book_Project_ETurretType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETurretType::Standard", (int64)ETurretType::Standard },
				{ "ETurretType::Tracking", (int64)ETurretType::Tracking },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Turret.h" },
				{ "Standard.Name", "ETurretType::Standard" },
				{ "Tracking.Name", "ETurretType::Tracking" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"ETurretType",
				"ETurretType",
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
	void ATurret::StaticRegisterNativesATurret()
	{
		UClass* Class = ATurret::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnObject", &ATurret::execSpawnObject },
			{ "stopFiring", &ATurret::execstopFiring },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ATurret_SpawnObject_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_SpawnObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_SpawnObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "SpawnObject", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurret_SpawnObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATurret_SpawnObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurret_SpawnObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurret_SpawnObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ATurret_stopFiring_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ATurret_stopFiring_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ATurret_stopFiring_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATurret, nullptr, "stopFiring", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ATurret_stopFiring_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ATurret_stopFiring_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ATurret_stopFiring()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ATurret_stopFiring_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ATurret_NoRegister()
	{
		return ATurret::StaticClass();
	}
	struct Z_Construct_UClass_ATurret_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_delayOfFire_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_delayOfFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_typeOfTurret_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_typeOfTurret;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_typeOfTurret_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorToSpawn;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ATurret_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ATurret_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ATurret_SpawnObject, "SpawnObject" }, // 1132505968
		{ &Z_Construct_UFunction_ATurret_stopFiring, "stopFiring" }, // 3176503088
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Turret.h" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_delayOfFire_MetaData[] = {
		{ "Category", "Properties of Spawn" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_delayOfFire = { "delayOfFire", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, delayOfFire), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_delayOfFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_delayOfFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret_MetaData[] = {
		{ "Category", "Properties of Spawn" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret = { "typeOfTurret", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, typeOfTurret), Z_Construct_UEnum_Book_Project_ETurretType, METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "Category", "Actor to Spawn" },
		{ "ModuleRelativePath", "Turret.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ATurret, ActorToSpawn), METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn_Inner = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATurret_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_delayOfFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_typeOfTurret_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATurret_Statics::NewProp_ActorToSpawn_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ATurret_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATurret>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ATurret_Statics::ClassParams = {
		&ATurret::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ATurret_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ATurret_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ATurret()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ATurret_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ATurret, 2969037269);
	template<> BOOK_PROJECT_API UClass* StaticClass<ATurret>()
	{
		return ATurret::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ATurret(Z_Construct_UClass_ATurret, &ATurret::StaticClass, TEXT("/Script/Book_Project"), TEXT("ATurret"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ATurret);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
