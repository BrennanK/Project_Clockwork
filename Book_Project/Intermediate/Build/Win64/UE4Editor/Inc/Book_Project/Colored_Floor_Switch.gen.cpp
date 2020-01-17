// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Colored_Floor_Switch.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeColored_Floor_Switch() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AColored_Floor_Switch_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AColored_Floor_Switch();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AColored_Floor_Switch_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static FName NAME_AColored_Floor_Switch_changePanelColorToGreen = FName(TEXT("changePanelColorToGreen"));
	void AColored_Floor_Switch::changePanelColorToGreen()
	{
		ProcessEvent(FindFunctionChecked(NAME_AColored_Floor_Switch_changePanelColorToGreen),NULL);
	}
	void AColored_Floor_Switch::StaticRegisterNativesAColored_Floor_Switch()
	{
		UClass* Class = AColored_Floor_Switch::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &AColored_Floor_Switch::execCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Colored_Floor_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColored_Floor_Switch, nullptr, "changePanelColorToGreen", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics
	{
		struct Colored_Floor_Switch_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Colored_Floor_Switch_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Colored_Floor_Switch_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Colored_Floor_Switch_eventCollision_Parms), &Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Colored_Floor_Switch_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Colored_Floor_Switch_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Colored_Floor_Switch_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Colored_Floor_Switch_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::Function_MetaDataParams[] = {
		{ "Category", "Collision" },
		{ "ModuleRelativePath", "Colored_Floor_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AColored_Floor_Switch, nullptr, "Collision", nullptr, nullptr, sizeof(Colored_Floor_Switch_eventCollision_Parms), Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AColored_Floor_Switch_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AColored_Floor_Switch_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AColored_Floor_Switch_NoRegister()
	{
		return AColored_Floor_Switch::StaticClass();
	}
	struct Z_Construct_UClass_AColored_Floor_Switch_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_floorBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_floorBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AColored_Floor_Switch_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AColored_Floor_Switch_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AColored_Floor_Switch_changePanelColorToGreen, "changePanelColorToGreen" }, // 3254249477
		{ &Z_Construct_UFunction_AColored_Floor_Switch_Collision, "Collision" }, // 2179249481
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColored_Floor_Switch_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Colored_Floor_Switch.h" },
		{ "ModuleRelativePath", "Colored_Floor_Switch.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Colored_Floor_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColored_Floor_Switch, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_floorBox_MetaData[] = {
		{ "Category", "Item" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Colored_Floor_Switch.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_floorBox = { "floorBox", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AColored_Floor_Switch, floorBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_floorBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_floorBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AColored_Floor_Switch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AColored_Floor_Switch_Statics::NewProp_floorBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AColored_Floor_Switch_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AColored_Floor_Switch>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AColored_Floor_Switch_Statics::ClassParams = {
		&AColored_Floor_Switch::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AColored_Floor_Switch_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AColored_Floor_Switch_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AColored_Floor_Switch_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AColored_Floor_Switch_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AColored_Floor_Switch()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AColored_Floor_Switch_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AColored_Floor_Switch, 3245967825);
	template<> BOOK_PROJECT_API UClass* StaticClass<AColored_Floor_Switch>()
	{
		return AColored_Floor_Switch::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AColored_Floor_Switch(Z_Construct_UClass_AColored_Floor_Switch, &AColored_Floor_Switch::StaticClass, TEXT("/Script/Book_Project"), TEXT("AColored_Floor_Switch"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AColored_Floor_Switch);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
