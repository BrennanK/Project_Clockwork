// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Particle_Played_On_Destruction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParticle_Played_On_Destruction() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AParticle_Played_On_Destruction_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AParticle_Played_On_Destruction();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
// End Cross Module References
	void AParticle_Played_On_Destruction::StaticRegisterNativesAParticle_Played_On_Destruction()
	{
	}
	UClass* Z_Construct_UClass_AParticle_Played_On_Destruction_NoRegister()
	{
		return AParticle_Played_On_Destruction::StaticClass();
	}
	struct Z_Construct_UClass_AParticle_Played_On_Destruction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lifeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_particle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_particle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Particle_Played_On_Destruction.h" },
		{ "ModuleRelativePath", "Particle_Played_On_Destruction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_lifeTime_MetaData[] = {
		{ "Category", "Lifetime Of Particle" },
		{ "ModuleRelativePath", "Particle_Played_On_Destruction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_lifeTime = { "lifeTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle_Played_On_Destruction, lifeTime), METADATA_PARAMS(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_lifeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_lifeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_particle_MetaData[] = {
		{ "Category", "Particle To Be Played On Actor Destruction" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Particle_Played_On_Destruction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_particle = { "particle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParticle_Played_On_Destruction, particle), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_particle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_particle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_lifeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::NewProp_particle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParticle_Played_On_Destruction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::ClassParams = {
		&AParticle_Played_On_Destruction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParticle_Played_On_Destruction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParticle_Played_On_Destruction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParticle_Played_On_Destruction, 3626483720);
	template<> BOOK_PROJECT_API UClass* StaticClass<AParticle_Played_On_Destruction>()
	{
		return AParticle_Played_On_Destruction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParticle_Played_On_Destruction(Z_Construct_UClass_AParticle_Played_On_Destruction, &AParticle_Played_On_Destruction::StaticClass, TEXT("/Script/Book_Project"), TEXT("AParticle_Played_On_Destruction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParticle_Played_On_Destruction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
