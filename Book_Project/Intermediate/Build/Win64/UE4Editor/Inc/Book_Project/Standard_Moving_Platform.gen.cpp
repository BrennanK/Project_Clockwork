// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Standard_Moving_Platform.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStandard_Moving_Platform() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_EDIRECTIONOFMOVEMENT();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AStandard_Moving_Platform_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AStandard_Moving_Platform();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
	static UEnum* EDIRECTIONOFMOVEMENT_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_EDIRECTIONOFMOVEMENT, Z_Construct_UPackage__Script_Book_Project(), TEXT("EDIRECTIONOFMOVEMENT"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<EDIRECTIONOFMOVEMENT>()
	{
		return EDIRECTIONOFMOVEMENT_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDIRECTIONOFMOVEMENT(EDIRECTIONOFMOVEMENT_StaticEnum, TEXT("/Script/Book_Project"), TEXT("EDIRECTIONOFMOVEMENT"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_EDIRECTIONOFMOVEMENT_Hash() { return 979772663U; }
	UEnum* Z_Construct_UEnum_Book_Project_EDIRECTIONOFMOVEMENT()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDIRECTIONOFMOVEMENT"), 0, Get_Z_Construct_UEnum_Book_Project_EDIRECTIONOFMOVEMENT_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDIRECTIONOFMOVEMENT::X", (int64)EDIRECTIONOFMOVEMENT::X },
				{ "EDIRECTIONOFMOVEMENT::Y", (int64)EDIRECTIONOFMOVEMENT::Y },
				{ "EDIRECTIONOFMOVEMENT::Z", (int64)EDIRECTIONOFMOVEMENT::Z },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Standard_Moving_Platform.h" },
				{ "X.Name", "EDIRECTIONOFMOVEMENT::X" },
				{ "Y.Name", "EDIRECTIONOFMOVEMENT::Y" },
				{ "Z.Name", "EDIRECTIONOFMOVEMENT::Z" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"EDIRECTIONOFMOVEMENT",
				"EDIRECTIONOFMOVEMENT",
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
	void AStandard_Moving_Platform::StaticRegisterNativesAStandard_Moving_Platform()
	{
	}
	UClass* Z_Construct_UClass_AStandard_Moving_Platform_NoRegister()
	{
		return AStandard_Moving_Platform::StaticClass();
	}
	struct Z_Construct_UClass_AStandard_Moving_Platform_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rangeOfMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_rangeOfMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_amountToMove_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amountToMove;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_direction;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_direction_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AStandard_Moving_Platform_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandard_Moving_Platform_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Standard_Moving_Platform.h" },
		{ "ModuleRelativePath", "Standard_Moving_Platform.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_rangeOfMovement_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Standard_Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_rangeOfMovement = { "rangeOfMovement", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStandard_Moving_Platform, rangeOfMovement), METADATA_PARAMS(Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_rangeOfMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_rangeOfMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_amountToMove_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Standard_Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_amountToMove = { "amountToMove", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStandard_Moving_Platform, amountToMove), METADATA_PARAMS(Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_amountToMove_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_amountToMove_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Standard_Moving_Platform.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction = { "direction", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AStandard_Moving_Platform, direction), Z_Construct_UEnum_Book_Project_EDIRECTIONOFMOVEMENT, METADATA_PARAMS(Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AStandard_Moving_Platform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_rangeOfMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_amountToMove,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AStandard_Moving_Platform_Statics::NewProp_direction_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AStandard_Moving_Platform_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AStandard_Moving_Platform>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AStandard_Moving_Platform_Statics::ClassParams = {
		&AStandard_Moving_Platform::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AStandard_Moving_Platform_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AStandard_Moving_Platform_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AStandard_Moving_Platform_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AStandard_Moving_Platform_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AStandard_Moving_Platform()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AStandard_Moving_Platform_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AStandard_Moving_Platform, 2615343869);
	template<> BOOK_PROJECT_API UClass* StaticClass<AStandard_Moving_Platform>()
	{
		return AStandard_Moving_Platform::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AStandard_Moving_Platform(Z_Construct_UClass_AStandard_Moving_Platform, &AStandard_Moving_Platform::StaticClass, TEXT("/Script/Book_Project"), TEXT("AStandard_Moving_Platform"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AStandard_Moving_Platform);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
