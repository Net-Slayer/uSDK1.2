// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CharacterProfileBPWrapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterProfileBPWrapper() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UCharacterProfileBPWrapper_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UCharacterProfileBPWrapper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentCustomization();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern();
	MORDHAU_API UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterProfile();
// End Cross Module References
	void UCharacterProfileBPWrapper::StaticRegisterNativesUCharacterProfileBPWrapper()
	{
		UClass* Class = UCharacterProfileBPWrapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ForceValidate", &UCharacterProfileBPWrapper::execForceValidate },
			{ "HasPerk", &UCharacterProfileBPWrapper::execHasPerk },
			{ "RemoveAllEquipment", &UCharacterProfileBPWrapper::execRemoveAllEquipment },
			{ "SetAge", &UCharacterProfileBPWrapper::execSetAge },
			{ "SetEmblem", &UCharacterProfileBPWrapper::execSetEmblem },
			{ "SetEmblemColor", &UCharacterProfileBPWrapper::execSetEmblemColor },
			{ "SetEquipmentColor", &UCharacterProfileBPWrapper::execSetEquipmentColor },
			{ "SetEquipmentCustomizationDirect", &UCharacterProfileBPWrapper::execSetEquipmentCustomizationDirect },
			{ "SetEquipmentId", &UCharacterProfileBPWrapper::execSetEquipmentId },
			{ "SetEquipmentPartId", &UCharacterProfileBPWrapper::execSetEquipmentPartId },
			{ "SetEquipmentPattern", &UCharacterProfileBPWrapper::execSetEquipmentPattern },
			{ "SetEquipmentSkin", &UCharacterProfileBPWrapper::execSetEquipmentSkin },
			{ "SetEyebrows", &UCharacterProfileBPWrapper::execSetEyebrows },
			{ "SetEyeColor", &UCharacterProfileBPWrapper::execSetEyeColor },
			{ "SetFace", &UCharacterProfileBPWrapper::execSetFace },
			{ "SetFacialHair", &UCharacterProfileBPWrapper::execSetFacialHair },
			{ "SetFat", &UCharacterProfileBPWrapper::execSetFat },
			{ "SetHair", &UCharacterProfileBPWrapper::execSetHair },
			{ "SetHairColor", &UCharacterProfileBPWrapper::execSetHairColor },
			{ "SetIsFemale", &UCharacterProfileBPWrapper::execSetIsFemale },
			{ "SetMetalRoughnessScale", &UCharacterProfileBPWrapper::execSetMetalRoughnessScale },
			{ "SetMetalTint", &UCharacterProfileBPWrapper::execSetMetalTint },
			{ "SetProfileName", &UCharacterProfileBPWrapper::execSetProfileName },
			{ "SetSkinColor", &UCharacterProfileBPWrapper::execSetSkinColor },
			{ "SetSkinny", &UCharacterProfileBPWrapper::execSetSkinny },
			{ "SetStrong", &UCharacterProfileBPWrapper::execSetStrong },
			{ "SetVoice", &UCharacterProfileBPWrapper::execSetVoice },
			{ "SetVoicePitch", &UCharacterProfileBPWrapper::execSetVoicePitch },
			{ "SetWearableColor", &UCharacterProfileBPWrapper::execSetWearableColor },
			{ "SetWearableId", &UCharacterProfileBPWrapper::execSetWearableId },
			{ "SetWearablePattern", &UCharacterProfileBPWrapper::execSetWearablePattern },
			{ "TogglePerk", &UCharacterProfileBPWrapper::execTogglePerk },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "ForceValidate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics
	{
		struct CharacterProfileBPWrapper_eventHasPerk_Parms
		{
			uint8 Perk;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Perk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((CharacterProfileBPWrapper_eventHasPerk_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CharacterProfileBPWrapper_eventHasPerk_Parms), &Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::NewProp_Perk = { UE4CodeGen_Private::EPropertyClass::Byte, "Perk", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventHasPerk_Parms, Perk), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::NewProp_Perk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "HasPerk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventHasPerk_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "RemoveAllEquipment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics
	{
		struct CharacterProfileBPWrapper_eventSetAge_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetAge_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetAge", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetAge_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEmblem_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEmblem_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEmblem", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEmblem_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEmblemColor_Parms
		{
			uint8 ColorIdx;
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorIdx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEmblemColor_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::NewProp_ColorIdx = { UE4CodeGen_Private::EPropertyClass::Byte, "ColorIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEmblemColor_Parms, ColorIdx), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::NewProp_NewValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::NewProp_ColorIdx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEmblemColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEmblemColor_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEquipmentColor_Parms
		{
			uint8 Slot;
			uint8 ColorIdx;
			uint8 NewColor;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorIdx;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Byte, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentColor_Parms, NewColor), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::NewProp_ColorIdx = { UE4CodeGen_Private::EPropertyClass::Byte, "ColorIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentColor_Parms, ColorIdx), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentColor_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::NewProp_NewColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::NewProp_ColorIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEquipmentColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEquipmentColor_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEquipmentCustomizationDirect_Parms
		{
			uint8 Slot;
			FEquipmentCustomization NewCustomization;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewCustomization;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_NewCustomization_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_NewCustomization = { UE4CodeGen_Private::EPropertyClass::Struct, "NewCustomization", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentCustomizationDirect_Parms, NewCustomization), Z_Construct_UScriptStruct_FEquipmentCustomization, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_NewCustomization_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_NewCustomization_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentCustomizationDirect_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_NewCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEquipmentCustomizationDirect", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CharacterProfileBPWrapper_eventSetEquipmentCustomizationDirect_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEquipmentId_Parms
		{
			uint8 Slot;
			uint8 NewId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::NewProp_NewId = { UE4CodeGen_Private::EPropertyClass::Byte, "NewId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentId_Parms, NewId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentId_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::NewProp_NewId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEquipmentId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEquipmentId_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEquipmentPartId_Parms
		{
			uint8 Slot;
			uint8 PartIdx;
			uint8 NewPartId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPartId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PartIdx;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::NewProp_NewPartId = { UE4CodeGen_Private::EPropertyClass::Byte, "NewPartId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentPartId_Parms, NewPartId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::NewProp_PartIdx = { UE4CodeGen_Private::EPropertyClass::Byte, "PartIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentPartId_Parms, PartIdx), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentPartId_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::NewProp_NewPartId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::NewProp_PartIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEquipmentPartId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEquipmentPartId_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEquipmentPattern_Parms
		{
			uint8 Slot;
			uint8 NewPattern;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::NewProp_NewPattern = { UE4CodeGen_Private::EPropertyClass::Byte, "NewPattern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentPattern_Parms, NewPattern), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentPattern_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::NewProp_NewPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEquipmentPattern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEquipmentPattern_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEquipmentSkin_Parms
		{
			uint8 Slot;
			uint8 NewSkin;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewSkin;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::NewProp_NewSkin = { UE4CodeGen_Private::EPropertyClass::Byte, "NewSkin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentSkin_Parms, NewSkin), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEquipmentSkin_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::NewProp_NewSkin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEquipmentSkin", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEquipmentSkin_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEyebrows_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEyebrows_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEyebrows", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEyebrows_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics
	{
		struct CharacterProfileBPWrapper_eventSetEyeColor_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetEyeColor_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetEyeColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetEyeColor_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics
	{
		struct CharacterProfileBPWrapper_eventSetFace_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetFace_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetFace", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetFace_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics
	{
		struct CharacterProfileBPWrapper_eventSetFacialHair_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetFacialHair_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetFacialHair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetFacialHair_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics
	{
		struct CharacterProfileBPWrapper_eventSetFat_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetFat_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetFat", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetFat_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics
	{
		struct CharacterProfileBPWrapper_eventSetHair_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetHair_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetHair", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetHair_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics
	{
		struct CharacterProfileBPWrapper_eventSetHairColor_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetHairColor_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetHairColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetHairColor_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics
	{
		struct CharacterProfileBPWrapper_eventSetIsFemale_Parms
		{
			bool bNewValue;
		};
		static void NewProp_bNewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::NewProp_bNewValue_SetBit(void* Obj)
	{
		((CharacterProfileBPWrapper_eventSetIsFemale_Parms*)Obj)->bNewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::NewProp_bNewValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bNewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(CharacterProfileBPWrapper_eventSetIsFemale_Parms), &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::NewProp_bNewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::NewProp_bNewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetIsFemale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetIsFemale_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics
	{
		struct CharacterProfileBPWrapper_eventSetMetalRoughnessScale_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetMetalRoughnessScale_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetMetalRoughnessScale", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetMetalRoughnessScale_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics
	{
		struct CharacterProfileBPWrapper_eventSetMetalTint_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetMetalTint_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetMetalTint", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetMetalTint_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics
	{
		struct CharacterProfileBPWrapper_eventSetProfileName_Parms
		{
			FText NewName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_NewName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::NewProp_NewName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::NewProp_NewName = { UE4CodeGen_Private::EPropertyClass::Text, "NewName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetProfileName_Parms, NewName), METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::NewProp_NewName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::NewProp_NewName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::NewProp_NewName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetProfileName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(CharacterProfileBPWrapper_eventSetProfileName_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics
	{
		struct CharacterProfileBPWrapper_eventSetSkinColor_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetSkinColor_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetSkinColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetSkinColor_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics
	{
		struct CharacterProfileBPWrapper_eventSetSkinny_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetSkinny_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetSkinny", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetSkinny_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics
	{
		struct CharacterProfileBPWrapper_eventSetStrong_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetStrong_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetStrong", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetStrong_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics
	{
		struct CharacterProfileBPWrapper_eventSetVoice_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetVoice_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetVoice", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetVoice_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics
	{
		struct CharacterProfileBPWrapper_eventSetVoicePitch_Parms
		{
			uint8 NewValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::NewProp_NewValue = { UE4CodeGen_Private::EPropertyClass::Byte, "NewValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetVoicePitch_Parms, NewValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetVoicePitch", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetVoicePitch_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics
	{
		struct CharacterProfileBPWrapper_eventSetWearableColor_Parms
		{
			uint8 Slot;
			uint8 ColorIdx;
			uint8 NewColor;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ColorIdx;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::NewProp_NewColor = { UE4CodeGen_Private::EPropertyClass::Byte, "NewColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearableColor_Parms, NewColor), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::NewProp_ColorIdx = { UE4CodeGen_Private::EPropertyClass::Byte, "ColorIdx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearableColor_Parms, ColorIdx), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearableColor_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::NewProp_NewColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::NewProp_ColorIdx,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetWearableColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetWearableColor_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics
	{
		struct CharacterProfileBPWrapper_eventSetWearableId_Parms
		{
			uint8 Slot;
			uint8 NewId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::NewProp_NewId = { UE4CodeGen_Private::EPropertyClass::Byte, "NewId", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearableId_Parms, NewId), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearableId_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::NewProp_NewId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetWearableId", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetWearableId_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics
	{
		struct CharacterProfileBPWrapper_eventSetWearablePattern_Parms
		{
			uint8 Slot;
			uint8 NewPattern;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewPattern;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Slot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::NewProp_NewPattern = { UE4CodeGen_Private::EPropertyClass::Byte, "NewPattern", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearablePattern_Parms, NewPattern), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::NewProp_Slot = { UE4CodeGen_Private::EPropertyClass::Byte, "Slot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventSetWearablePattern_Parms, Slot), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::NewProp_NewPattern,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::NewProp_Slot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "SetWearablePattern", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventSetWearablePattern_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics
	{
		struct CharacterProfileBPWrapper_eventTogglePerk_Parms
		{
			uint8 Perk;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Perk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::NewProp_Perk = { UE4CodeGen_Private::EPropertyClass::Byte, "Perk", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(CharacterProfileBPWrapper_eventTogglePerk_Parms, Perk), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::NewProp_Perk,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::Function_MetaDataParams[] = {
		{ "Category", "CharacterProfBPWrapFns" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCharacterProfileBPWrapper, "TogglePerk", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(CharacterProfileBPWrapper_eventTogglePerk_Parms), Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UCharacterProfileBPWrapper_NoRegister()
	{
		return UCharacterProfileBPWrapper::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterProfileBPWrapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Profile_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Profile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_ForceValidate, "ForceValidate" }, // 3450720034
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_HasPerk, "HasPerk" }, // 2621917840
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_RemoveAllEquipment, "RemoveAllEquipment" }, // 1369334056
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetAge, "SetAge" }, // 1250594854
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblem, "SetEmblem" }, // 2731204941
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEmblemColor, "SetEmblemColor" }, // 2761470381
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentColor, "SetEquipmentColor" }, // 4106842983
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentCustomizationDirect, "SetEquipmentCustomizationDirect" }, // 3521541514
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentId, "SetEquipmentId" }, // 1472653851
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPartId, "SetEquipmentPartId" }, // 2301389157
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentPattern, "SetEquipmentPattern" }, // 1055870380
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEquipmentSkin, "SetEquipmentSkin" }, // 2542975688
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyebrows, "SetEyebrows" }, // 2933707767
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetEyeColor, "SetEyeColor" }, // 1436774533
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFace, "SetFace" }, // 111942150
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFacialHair, "SetFacialHair" }, // 4161440123
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetFat, "SetFat" }, // 2554758486
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHair, "SetHair" }, // 2620319882
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetHairColor, "SetHairColor" }, // 3952594712
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetIsFemale, "SetIsFemale" }, // 1786255466
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalRoughnessScale, "SetMetalRoughnessScale" }, // 2316610955
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetMetalTint, "SetMetalTint" }, // 1411765381
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetProfileName, "SetProfileName" }, // 4210945586
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinColor, "SetSkinColor" }, // 1556410524
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetSkinny, "SetSkinny" }, // 4161786574
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetStrong, "SetStrong" }, // 1293263781
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoice, "SetVoice" }, // 241664065
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetVoicePitch, "SetVoicePitch" }, // 400303581
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableColor, "SetWearableColor" }, // 3681923203
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearableId, "SetWearableId" }, // 928409561
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_SetWearablePattern, "SetWearablePattern" }, // 3484347902
		{ &Z_Construct_UFunction_UCharacterProfileBPWrapper_TogglePerk, "TogglePerk" }, // 3432266338
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "CharacterProfileBPWrapper.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::NewProp_Profile_MetaData[] = {
		{ "Category", "CharacterProfileBPWrapper" },
		{ "ModuleRelativePath", "CharacterProfileBPWrapper.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::NewProp_Profile = { UE4CodeGen_Private::EPropertyClass::Struct, "Profile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterProfileBPWrapper, Profile), Z_Construct_UScriptStruct_FCharacterProfile, METADATA_PARAMS(Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::NewProp_Profile_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::NewProp_Profile_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::NewProp_Profile,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterProfileBPWrapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::ClassParams = {
		&UCharacterProfileBPWrapper::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterProfileBPWrapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterProfileBPWrapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterProfileBPWrapper, 330315902);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterProfileBPWrapper(Z_Construct_UClass_UCharacterProfileBPWrapper, &UCharacterProfileBPWrapper::StaticClass, TEXT("/Script/Mordhau"), TEXT("UCharacterProfileBPWrapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterProfileBPWrapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
