// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Block_Switch_Controller_01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlock_Switch_Controller_01() {}
// Cross Module References
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ABlock_Switch_Controller_01_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ABlock_Switch_Controller_01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AColored_Floor_Switch_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ABlock_Switch_Controller_01_changeCameraPerspective = FName(TEXT("changeCameraPerspective"));
	void ABlock_Switch_Controller_01::changeCameraPerspective()
	{
		ProcessEvent(FindFunctionChecked(NAME_ABlock_Switch_Controller_01_changeCameraPerspective),NULL);
	}
	void ABlock_Switch_Controller_01::StaticRegisterNativesABlock_Switch_Controller_01()
	{
		UClass* Class = ABlock_Switch_Controller_01::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "beginLerpingProcess", &ABlock_Switch_Controller_01::execbeginLerpingProcess },
			{ "lerpTheDoor", &ABlock_Switch_Controller_01::execlerpTheDoor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock_Switch_Controller_01, nullptr, "beginLerpingProcess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock_Switch_Controller_01, nullptr, "changeCameraPerspective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlock_Switch_Controller_01, nullptr, "lerpTheDoor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ABlock_Switch_Controller_01_NoRegister()
	{
		return ABlock_Switch_Controller_01::StaticClass();
	}
	struct Z_Construct_UClass_ABlock_Switch_Controller_01_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraMan_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraMan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondsToTransition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_secondsToTransition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_numberOfGreenSwitches_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_numberOfGreenSwitches;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_switches_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_switches;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_switches_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_door_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_door;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlock_Switch_Controller_01_beginLerpingProcess, "beginLerpingProcess" }, // 3575911759
		{ &Z_Construct_UFunction_ABlock_Switch_Controller_01_changeCameraPerspective, "changeCameraPerspective" }, // 502574433
		{ &Z_Construct_UFunction_ABlock_Switch_Controller_01_lerpTheDoor, "lerpTheDoor" }, // 588491028
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Block_Switch_Controller_01.h" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_cameraMan_MetaData[] = {
		{ "Category", "Camera for View" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_cameraMan = { "cameraMan", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_Switch_Controller_01, cameraMan), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_cameraMan_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_cameraMan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_secondsToTransition_MetaData[] = {
		{ "Category", "Time For Door to Transition" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_secondsToTransition = { "secondsToTransition", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_Switch_Controller_01, secondsToTransition), METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_secondsToTransition_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_secondsToTransition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_Destination_MetaData[] = {
		{ "Category", "Door Destination" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_Destination = { "Destination", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_Switch_Controller_01, Destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_Destination_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_Destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_numberOfGreenSwitches_MetaData[] = {
		{ "Category", "Debug" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_numberOfGreenSwitches = { "numberOfGreenSwitches", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_Switch_Controller_01, numberOfGreenSwitches), METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_numberOfGreenSwitches_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_numberOfGreenSwitches_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches_MetaData[] = {
		{ "Category", "Array of switches" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches = { "switches", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_Switch_Controller_01, switches), METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches_Inner = { "switches", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AColored_Floor_Switch_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_door_MetaData[] = {
		{ "Category", "Animated Door" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Block_Switch_Controller_01.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_door = { "door", nullptr, (EPropertyFlags)0x0010000000080009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABlock_Switch_Controller_01, door), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_door_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_door_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_cameraMan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_secondsToTransition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_Destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_numberOfGreenSwitches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_switches_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::NewProp_door,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlock_Switch_Controller_01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::ClassParams = {
		&ABlock_Switch_Controller_01::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABlock_Switch_Controller_01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABlock_Switch_Controller_01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABlock_Switch_Controller_01, 3346899611);
	template<> BOOK_PROJECT_API UClass* StaticClass<ABlock_Switch_Controller_01>()
	{
		return ABlock_Switch_Controller_01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABlock_Switch_Controller_01(Z_Construct_UClass_ABlock_Switch_Controller_01, &ABlock_Switch_Controller_01::StaticClass, TEXT("/Script/Book_Project"), TEXT("ABlock_Switch_Controller_01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABlock_Switch_Controller_01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
