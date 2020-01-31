// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Working_Bouncepad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWorking_Bouncepad() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_EBOUNCE_TYPE();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AWorking_Bouncepad_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AWorking_Bouncepad();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AWorking_Bouncepad_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AWorking_Bouncepad_EndCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AWorking_Bouncepad_Move();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	static UEnum* EBOUNCE_TYPE_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_EBOUNCE_TYPE, Z_Construct_UPackage__Script_Book_Project(), TEXT("EBOUNCE_TYPE"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<EBOUNCE_TYPE>()
	{
		return EBOUNCE_TYPE_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EBOUNCE_TYPE(EBOUNCE_TYPE_StaticEnum, TEXT("/Script/Book_Project"), TEXT("EBOUNCE_TYPE"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_EBOUNCE_TYPE_Hash() { return 1608829318U; }
	UEnum* Z_Construct_UEnum_Book_Project_EBOUNCE_TYPE()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EBOUNCE_TYPE"), 0, Get_Z_Construct_UEnum_Book_Project_EBOUNCE_TYPE_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EBOUNCE_TYPE::Single", (int64)EBOUNCE_TYPE::Single },
				{ "EBOUNCE_TYPE::Build_Up", (int64)EBOUNCE_TYPE::Build_Up },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Build_Up.Name", "EBOUNCE_TYPE::Build_Up" },
				{ "ModuleRelativePath", "Working_Bouncepad.h" },
				{ "Single.Name", "EBOUNCE_TYPE::Single" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"EBOUNCE_TYPE",
				"EBOUNCE_TYPE",
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
	static FName NAME_AWorking_Bouncepad_changeCameraPerspective = FName(TEXT("changeCameraPerspective"));
	void AWorking_Bouncepad::changeCameraPerspective()
	{
		ProcessEvent(FindFunctionChecked(NAME_AWorking_Bouncepad_changeCameraPerspective),NULL);
	}
	void AWorking_Bouncepad::StaticRegisterNativesAWorking_Bouncepad()
	{
		UClass* Class = AWorking_Bouncepad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &AWorking_Bouncepad::execCollision },
			{ "EndCollision", &AWorking_Bouncepad::execEndCollision },
			{ "interActionCommand", &AWorking_Bouncepad::execinterActionCommand },
			{ "Move", &AWorking_Bouncepad::execMove },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorking_Bouncepad, nullptr, "changeCameraPerspective", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics
	{
		struct Working_Bouncepad_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Working_Bouncepad_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Working_Bouncepad_eventCollision_Parms), &Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorking_Bouncepad, nullptr, "Collision", nullptr, nullptr, sizeof(Working_Bouncepad_eventCollision_Parms), Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorking_Bouncepad_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorking_Bouncepad_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics
	{
		struct Working_Bouncepad_eventEndCollision_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventEndCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventEndCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventEndCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Working_Bouncepad_eventEndCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorking_Bouncepad, nullptr, "EndCollision", nullptr, nullptr, sizeof(Working_Bouncepad_eventEndCollision_Parms), Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorking_Bouncepad_EndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorking_Bouncepad_EndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorking_Bouncepad, nullptr, "interActionCommand", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AWorking_Bouncepad_Move_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWorking_Bouncepad_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWorking_Bouncepad_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWorking_Bouncepad, nullptr, "Move", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWorking_Bouncepad_Move_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AWorking_Bouncepad_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWorking_Bouncepad_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWorking_Bouncepad_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWorking_Bouncepad_NoRegister()
	{
		return AWorking_Bouncepad::StaticClass();
	}
	struct Z_Construct_UClass_AWorking_Bouncepad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_destination_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_destination;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originalLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_originalLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_padType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_padType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_padType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bounceHeightPerSecondFalling_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_bounceHeightPerSecondFalling;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxBounceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxBounceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minBounceHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minBounceHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bounceBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_bounceBox;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWorking_Bouncepad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWorking_Bouncepad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWorking_Bouncepad_changeCameraPerspective, "changeCameraPerspective" }, // 2371839183
		{ &Z_Construct_UFunction_AWorking_Bouncepad_Collision, "Collision" }, // 1225327848
		{ &Z_Construct_UFunction_AWorking_Bouncepad_EndCollision, "EndCollision" }, // 4022386431
		{ &Z_Construct_UFunction_AWorking_Bouncepad_interActionCommand, "interActionCommand" }, // 2109214806
		{ &Z_Construct_UFunction_AWorking_Bouncepad_Move, "Move" }, // 635300545
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Working_Bouncepad.h" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination_MetaData[] = {
		{ "Category", "Working_Bouncepad" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, destination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation_MetaData[] = {
		{ "Category", "Bouncepad starting point" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation = { "originalLocation", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, originalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType_MetaData[] = {
		{ "Category", "Type of Bounce_Pad" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType = { "padType", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, padType), Z_Construct_UEnum_Book_Project_EBOUNCE_TYPE, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling_MetaData[] = {
		{ "Category", "Bounce Variables" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling = { "bounceHeightPerSecondFalling", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, bounceHeightPerSecondFalling), METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight_MetaData[] = {
		{ "Category", "Bounce Variables" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight = { "maxBounceHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, maxBounceHeight), METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight_MetaData[] = {
		{ "Category", "Bounce Variables" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight = { "minBounceHeight", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, minBounceHeight), METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, Mesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Working_Bouncepad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox = { "bounceBox", nullptr, (EPropertyFlags)0x001000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWorking_Bouncepad, bounceBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox_MetaData, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWorking_Bouncepad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_destination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_originalLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_padType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceHeightPerSecondFalling,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_maxBounceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_minBounceHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWorking_Bouncepad_Statics::NewProp_bounceBox,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWorking_Bouncepad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWorking_Bouncepad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWorking_Bouncepad_Statics::ClassParams = {
		&AWorking_Bouncepad::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWorking_Bouncepad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AWorking_Bouncepad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWorking_Bouncepad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWorking_Bouncepad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWorking_Bouncepad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWorking_Bouncepad, 3542486898);
	template<> BOOK_PROJECT_API UClass* StaticClass<AWorking_Bouncepad>()
	{
		return AWorking_Bouncepad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWorking_Bouncepad(Z_Construct_UClass_AWorking_Bouncepad, &AWorking_Bouncepad::StaticClass, TEXT("/Script/Book_Project"), TEXT("AWorking_Bouncepad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWorking_Bouncepad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
