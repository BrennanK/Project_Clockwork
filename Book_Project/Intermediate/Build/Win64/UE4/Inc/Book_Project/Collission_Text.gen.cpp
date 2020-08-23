// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Collission_Text.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCollission_Text() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_ETextType();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ACollission_Text_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_ACollission_Text();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ACollission_Text_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ACollission_Text_EndCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ACollission_Text_HideTutorialText();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_ACollission_Text_ShowTutorialText();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static UEnum* ETextType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_ETextType, Z_Construct_UPackage__Script_Book_Project(), TEXT("ETextType"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<ETextType>()
	{
		return ETextType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ETextType(ETextType_StaticEnum, TEXT("/Script/Book_Project"), TEXT("ETextType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_ETextType_Hash() { return 77601133U; }
	UEnum* Z_Construct_UEnum_Book_Project_ETextType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ETextType"), 0, Get_Z_Construct_UEnum_Book_Project_ETextType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ETextType::oneText", (int64)ETextType::oneText },
				{ "ETextType::MultiText", (int64)ETextType::MultiText },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Collission_Text.h" },
				{ "MultiText.Name", "ETextType::MultiText" },
				{ "oneText.Name", "ETextType::oneText" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"ETextType",
				"ETextType",
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
	static FName NAME_ACollission_Text_HideTutorialText = FName(TEXT("HideTutorialText"));
	void ACollission_Text::HideTutorialText()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollission_Text_HideTutorialText),NULL);
	}
	static FName NAME_ACollission_Text_ShowTutorialText = FName(TEXT("ShowTutorialText"));
	void ACollission_Text::ShowTutorialText()
	{
		ProcessEvent(FindFunctionChecked(NAME_ACollission_Text_ShowTutorialText),NULL);
	}
	void ACollission_Text::StaticRegisterNativesACollission_Text()
	{
		UClass* Class = ACollission_Text::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &ACollission_Text::execCollision },
			{ "EndCollision", &ACollission_Text::execEndCollision },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACollission_Text_Collision_Statics
	{
		struct Collission_Text_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Collission_Text_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Collission_Text_eventCollision_Parms), &Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollission_Text_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollission_Text_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollission_Text, nullptr, "Collision", nullptr, nullptr, sizeof(Collission_Text_eventCollision_Parms), Z_Construct_UFunction_ACollission_Text_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollission_Text_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollission_Text_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollission_Text_EndCollision_Statics
	{
		struct Collission_Text_eventEndCollision_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
		};
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventEndCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventEndCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventEndCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Collission_Text_eventEndCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollission_Text, nullptr, "EndCollision", nullptr, nullptr, sizeof(Collission_Text_eventEndCollision_Parms), Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollission_Text_EndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollission_Text_EndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollission_Text_HideTutorialText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_HideTutorialText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollission_Text_HideTutorialText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollission_Text, nullptr, "HideTutorialText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_HideTutorialText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_HideTutorialText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollission_Text_HideTutorialText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollission_Text_HideTutorialText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACollission_Text_ShowTutorialText_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACollission_Text_ShowTutorialText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ACollission_Text_ShowTutorialText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACollission_Text, nullptr, "ShowTutorialText", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACollission_Text_ShowTutorialText_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ACollission_Text_ShowTutorialText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACollission_Text_ShowTutorialText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ACollission_Text_ShowTutorialText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ACollission_Text_NoRegister()
	{
		return ACollission_Text::StaticClass();
	}
	struct Z_Construct_UClass_ACollission_Text_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_typeOfText_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_typeOfText;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_typeOfText_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_lastIndexToSee_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_lastIndexToSee;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexOfDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexOfDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_indexOfDataTableReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_indexOfDataTableReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_triggerBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACollission_Text_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACollission_Text_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACollission_Text_Collision, "Collision" }, // 3709259652
		{ &Z_Construct_UFunction_ACollission_Text_EndCollision, "EndCollision" }, // 3838107340
		{ &Z_Construct_UFunction_ACollission_Text_HideTutorialText, "HideTutorialText" }, // 4204526073
		{ &Z_Construct_UFunction_ACollission_Text_ShowTutorialText, "ShowTutorialText" }, // 4243484767
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Collission_Text.h" },
		{ "ModuleRelativePath", "Collission_Text.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText_MetaData[] = {
		{ "Category", "Type of Text Trigger" },
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText = { "typeOfText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollission_Text, typeOfText), Z_Construct_UEnum_Book_Project_ETextType, METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::NewProp_player_MetaData[] = {
		{ "Category", "Text Variables" },
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollission_Text, player), Z_Construct_UClass_AAvatar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::NewProp_player_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::NewProp_player_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::NewProp_lastIndexToSee_MetaData[] = {
		{ "Category", "Text Variables" },
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_lastIndexToSee = { "lastIndexToSee", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollission_Text, lastIndexToSee), METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::NewProp_lastIndexToSee_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::NewProp_lastIndexToSee_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTable_MetaData[] = {
		{ "Category", "Text Variables" },
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTable = { "indexOfDataTable", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollission_Text, indexOfDataTable), METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTable_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTableReference_MetaData[] = {
		{ "Category", "Text Variables" },
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTableReference = { "indexOfDataTableReference", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollission_Text, indexOfDataTableReference), METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTableReference_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTableReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACollission_Text_Statics::NewProp_triggerBox_MetaData[] = {
		{ "Category", "Text Detector" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Collission_Text.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACollission_Text_Statics::NewProp_triggerBox = { "triggerBox", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACollission_Text, triggerBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::NewProp_triggerBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::NewProp_triggerBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACollission_Text_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_typeOfText_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_player,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_lastIndexToSee,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_indexOfDataTableReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACollission_Text_Statics::NewProp_triggerBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACollission_Text_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACollission_Text>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACollission_Text_Statics::ClassParams = {
		&ACollission_Text::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACollission_Text_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACollission_Text_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACollission_Text_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACollission_Text()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACollission_Text_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACollission_Text, 683169048);
	template<> BOOK_PROJECT_API UClass* StaticClass<ACollission_Text>()
	{
		return ACollission_Text::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACollission_Text(Z_Construct_UClass_ACollission_Text, &ACollission_Text::StaticClass, TEXT("/Script/Book_Project"), TEXT("ACollission_Text"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACollission_Text);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
