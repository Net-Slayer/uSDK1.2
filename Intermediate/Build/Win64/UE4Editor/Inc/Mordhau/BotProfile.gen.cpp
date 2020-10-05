// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/BotProfile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBotProfile() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UBotProfile_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UBotProfile();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UBotProfile_AssignToController();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauAIController_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterProfile();
// End Cross Module References
	void UBotProfile::StaticRegisterNativesUBotProfile()
	{
		UClass* Class = UBotProfile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AssignToController", &UBotProfile::execAssignToController },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBotProfile_AssignToController_Statics
	{
		struct BotProfile_eventAssignToController_Parms
		{
			AMordhauAIController* Controller;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBotProfile_AssignToController_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(BotProfile_eventAssignToController_Parms, Controller), Z_Construct_UClass_AMordhauAIController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBotProfile_AssignToController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBotProfile_AssignToController_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBotProfile_AssignToController_Statics::Function_MetaDataParams[] = {
		{ "Category", "BotProfileFns" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBotProfile_AssignToController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBotProfile, "AssignToController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(BotProfile_eventAssignToController_Parms), Z_Construct_UFunction_UBotProfile_AssignToController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UBotProfile_AssignToController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBotProfile_AssignToController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UBotProfile_AssignToController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBotProfile_AssignToController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBotProfile_AssignToController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBotProfile_NoRegister()
	{
		return UBotProfile::StaticClass();
	}
	struct Z_Construct_UClass_UBotProfile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeWearables_MetaData[];
#endif
		static void NewProp_bRandomizeWearables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeWearables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeEquipment_MetaData[];
#endif
		static void NewProp_bRandomizeEquipment_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeEquipment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeSkills_MetaData[];
#endif
		static void NewProp_bRandomizeSkills_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeSkills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeVoice_MetaData[];
#endif
		static void NewProp_bRandomizeVoice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeVoice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeFace_MetaData[];
#endif
		static void NewProp_bRandomizeFace_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeAppearance_MetaData[];
#endif
		static void NewProp_bRandomizeAppearance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeAppearance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeName_MetaData[];
#endif
		static void NewProp_bRandomizeName_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRandomizeBehavior_MetaData[];
#endif
		static void NewProp_bRandomizeBehavior_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRandomizeBehavior;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BehaviorProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseBotLoadoutProfileID_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_UseBotLoadoutProfileID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BotName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBotProfile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBotProfile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBotProfile_AssignToController, "AssignToController" }, // 3200240386
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "BotProfile.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeWearables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeWearables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeEquipment = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeSkills = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeSkills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeVoice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeVoice", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeFace = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeFace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeAppearance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeAppearance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeName = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	void Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior_SetBit(void* Obj)
	{
		((UBotProfile*)Obj)->bRandomizeBehavior = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior = { UE4CodeGen_Private::EPropertyClass::Bool, "bRandomizeBehavior", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UBotProfile), &Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_BehaviorProfile_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_BehaviorProfile = { UE4CodeGen_Private::EPropertyClass::Class, "BehaviorProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UBotProfile, BehaviorProfile), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_BehaviorProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_BehaviorProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_CharacterProfile_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_CharacterProfile = { UE4CodeGen_Private::EPropertyClass::Struct, "CharacterProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UBotProfile, CharacterProfile), Z_Construct_UScriptStruct_FCharacterProfile, METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_CharacterProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_CharacterProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_UseBotLoadoutProfileID_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_UseBotLoadoutProfileID = { UE4CodeGen_Private::EPropertyClass::Int, "UseBotLoadoutProfileID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UBotProfile, UseBotLoadoutProfileID), METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_UseBotLoadoutProfileID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_UseBotLoadoutProfileID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBotProfile_Statics::NewProp_BotName_MetaData[] = {
		{ "Category", "BotProfile" },
		{ "ModuleRelativePath", "BotProfile.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UBotProfile_Statics::NewProp_BotName = { UE4CodeGen_Private::EPropertyClass::Str, "BotName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(UBotProfile, BotName), METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::NewProp_BotName_MetaData, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::NewProp_BotName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBotProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeWearables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeSkills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeVoice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeAppearance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_bRandomizeBehavior,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_BehaviorProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_CharacterProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_UseBotLoadoutProfileID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBotProfile_Statics::NewProp_BotName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBotProfile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBotProfile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBotProfile_Statics::ClassParams = {
		&UBotProfile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UBotProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UBotProfile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBotProfile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBotProfile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBotProfile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBotProfile, 1561404602);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBotProfile(Z_Construct_UClass_UBotProfile, &UBotProfile::StaticClass, TEXT("/Script/Mordhau"), TEXT("UBotProfile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBotProfile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
