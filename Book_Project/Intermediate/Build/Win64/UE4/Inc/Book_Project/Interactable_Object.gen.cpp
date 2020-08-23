// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Book_Project/Interactable_Object.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractable_Object() {}
// Cross Module References
	BOOK_PROJECT_API UEnum* Z_Construct_UEnum_Book_Project_EInteractionType();
	UPackage* Z_Construct_UPackage__Script_Book_Project();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AInteractable_Object_NoRegister();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AInteractable_Object();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AInteractable_Object_Collision();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AInteractable_Object_EndCollision();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AInteractable_Object_inheritanceExample();
	BOOK_PROJECT_API UFunction* Z_Construct_UFunction_AInteractable_Object_interactionAction();
	BOOK_PROJECT_API UClass* Z_Construct_UClass_AAvatar_NoRegister();
// End Cross Module References
	static UEnum* EInteractionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Book_Project_EInteractionType, Z_Construct_UPackage__Script_Book_Project(), TEXT("EInteractionType"));
		}
		return Singleton;
	}
	template<> BOOK_PROJECT_API UEnum* StaticEnum<EInteractionType>()
	{
		return EInteractionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EInteractionType(EInteractionType_StaticEnum, TEXT("/Script/Book_Project"), TEXT("EInteractionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Book_Project_EInteractionType_Hash() { return 3971786622U; }
	UEnum* Z_Construct_UEnum_Book_Project_EInteractionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Book_Project();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EInteractionType"), 0, Get_Z_Construct_UEnum_Book_Project_EInteractionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EInteractionType::ANIMATION", (int64)EInteractionType::ANIMATION },
				{ "EInteractionType::SPAWN", (int64)EInteractionType::SPAWN },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ANIMATION.Name", "EInteractionType::ANIMATION" },
				{ "ModuleRelativePath", "Interactable_Object.h" },
				{ "SPAWN.Name", "EInteractionType::SPAWN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Book_Project,
				nullptr,
				"EInteractionType",
				"EInteractionType",
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
	static FName NAME_AInteractable_Object_displayInteractionIcon = FName(TEXT("displayInteractionIcon"));
	void AInteractable_Object::displayInteractionIcon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_Object_displayInteractionIcon),NULL);
	}
	static FName NAME_AInteractable_Object_hideInteractionIcon = FName(TEXT("hideInteractionIcon"));
	void AInteractable_Object::hideInteractionIcon()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractable_Object_hideInteractionIcon),NULL);
	}
	void AInteractable_Object::StaticRegisterNativesAInteractable_Object()
	{
		UClass* Class = AInteractable_Object::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Collision", &AInteractable_Object::execCollision },
			{ "EndCollision", &AInteractable_Object::execEndCollision },
			{ "inheritanceExample", &AInteractable_Object::execinheritanceExample },
			{ "interactionAction", &AInteractable_Object::execinteractionAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AInteractable_Object_Collision_Statics
	{
		struct Interactable_Object_eventCollision_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventCollision_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((Interactable_Object_eventCollision_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Interactable_Object_eventCollision_Parms), &Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Object_Collision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_Collision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_Collision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Object_Collision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable_Object, nullptr, "Collision", nullptr, nullptr, sizeof(Interactable_Object_eventCollision_Parms), Z_Construct_UFunction_AInteractable_Object_Collision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_Collision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Object_Collision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Object_Collision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable_Object, nullptr, "displayInteractionIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics
	{
		struct Interactable_Object_eventEndCollision_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventEndCollision_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventEndCollision_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventEndCollision_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventEndCollision_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable_Object, nullptr, "EndCollision", nullptr, nullptr, sizeof(Interactable_Object_eventEndCollision_Parms), Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Object_EndCollision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Object_EndCollision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable_Object, nullptr, "hideInteractionIcon", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Object_inheritanceExample_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_inheritanceExample_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Object_inheritanceExample_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable_Object, nullptr, "inheritanceExample", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_inheritanceExample_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_inheritanceExample_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Object_inheritanceExample()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Object_inheritanceExample_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics
	{
		struct Interactable_Object_eventinteractionAction_Parms
		{
			AAvatar* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Interactable_Object_eventinteractionAction_Parms, player), Z_Construct_UClass_AAvatar_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractable_Object, nullptr, "interactionAction", nullptr, nullptr, sizeof(Interactable_Object_eventinteractionAction_Parms), Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractable_Object_interactionAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractable_Object_interactionAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractable_Object_NoRegister()
	{
		return AInteractable_Object::StaticClass();
	}
	struct Z_Construct_UClass_AInteractable_Object_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToInfluence_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActorToInfluence;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorToInfluence_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractable_Object_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Book_Project,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractable_Object_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractable_Object_Collision, "Collision" }, // 1651659371
		{ &Z_Construct_UFunction_AInteractable_Object_displayInteractionIcon, "displayInteractionIcon" }, // 2690558493
		{ &Z_Construct_UFunction_AInteractable_Object_EndCollision, "EndCollision" }, // 1157729316
		{ &Z_Construct_UFunction_AInteractable_Object_hideInteractionIcon, "hideInteractionIcon" }, // 3649786819
		{ &Z_Construct_UFunction_AInteractable_Object_inheritanceExample, "inheritanceExample" }, // 3124875737
		{ &Z_Construct_UFunction_AInteractable_Object_interactionAction, "interactionAction" }, // 1668015609
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Object_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Interactable_Object.h" },
		{ "ModuleRelativePath", "Interactable_Object.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence_MetaData[] = {
		{ "Category", "Actor to Spawn" },
		{ "ModuleRelativePath", "Interactable_Object.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence = { "ActorToInfluence", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractable_Object, ActorToInfluence), METADATA_PARAMS(Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence_Inner = { "ActorToInfluence", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractable_Object_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractable_Object_Statics::NewProp_ActorToInfluence_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractable_Object_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractable_Object>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractable_Object_Statics::ClassParams = {
		&AInteractable_Object::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractable_Object_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AInteractable_Object_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractable_Object_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AInteractable_Object_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractable_Object()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractable_Object_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractable_Object, 1811319602);
	template<> BOOK_PROJECT_API UClass* StaticClass<AInteractable_Object>()
	{
		return AInteractable_Object::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractable_Object(Z_Construct_UClass_AInteractable_Object, &AInteractable_Object::StaticClass, TEXT("/Script/Book_Project"), TEXT("AInteractable_Object"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractable_Object);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
