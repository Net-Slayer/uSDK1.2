// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/SeparatedBodyPart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSeparatedBodyPart() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ASeparatedBodyPart_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ASeparatedBodyPart();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMordhauDamageType();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicsAsset_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsConstraintActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ULODSkeletalMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASeparatedBodyPart_InitializeDismemberment = FName(TEXT("InitializeDismemberment"));
	void ASeparatedBodyPart::InitializeDismemberment(AMordhauCharacter* Source, FName const& bone, FTransform const& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce)
	{
		SeparatedBodyPart_eventInitializeDismemberment_Parms Parms;
		Parms.Source=Source;
		Parms.bone=bone;
		Parms.SourceBoneTransform=SourceBoneTransform;
		Parms.bIsPartial=bIsPartial ? true : false;
		Parms.bIsBluntForce=bIsBluntForce ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASeparatedBodyPart_InitializeDismemberment),&Parms);
	}
	static FName NAME_ASeparatedBodyPart_OnCosmeticHit = FName(TEXT("OnCosmeticHit"));
	void ASeparatedBodyPart::OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, FHitResult const& Hit, AActor* Agent)
	{
		SeparatedBodyPart_eventOnCosmeticHit_Parms Parms;
		Parms.DamageType=DamageType;
		Parms.SubType=SubType;
		Parms.Hit=Hit;
		Parms.Agent=Agent;
		ProcessEvent(FindFunctionChecked(NAME_ASeparatedBodyPart_OnCosmeticHit),&Parms);
	}
	void ASeparatedBodyPart::StaticRegisterNativesASeparatedBodyPart()
	{
		UClass* Class = ASeparatedBodyPart::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IsDismembered", &ASeparatedBodyPart::execIsDismembered },
			{ "IsPartiallyDismembered", &ASeparatedBodyPart::execIsPartiallyDismembered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics
	{
		static void NewProp_bIsBluntForce_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBluntForce;
		static void NewProp_bIsPartial_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPartial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceBoneTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SourceBoneTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsBluntForce_SetBit(void* Obj)
	{
		((SeparatedBodyPart_eventInitializeDismemberment_Parms*)Obj)->bIsBluntForce = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsBluntForce = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsBluntForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SeparatedBodyPart_eventInitializeDismemberment_Parms), &Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsBluntForce_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsPartial_SetBit(void* Obj)
	{
		((SeparatedBodyPart_eventInitializeDismemberment_Parms*)Obj)->bIsPartial = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsPartial = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPartial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SeparatedBodyPart_eventInitializeDismemberment_Parms), &Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsPartial_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_SourceBoneTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_SourceBoneTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "SourceBoneTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventInitializeDismemberment_Parms, SourceBoneTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_SourceBoneTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_SourceBoneTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventInitializeDismemberment_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bone_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventInitializeDismemberment_Parms, Source), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsBluntForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bIsPartial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_SourceBoneTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::Function_MetaDataParams[] = {
		{ "Category", "SeparatedBodyPartEvents" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeparatedBodyPart, "InitializeDismemberment", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20800, sizeof(SeparatedBodyPart_eventInitializeDismemberment_Parms), Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics
	{
		struct SeparatedBodyPart_eventIsDismembered_Parms
		{
			FName bone;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SeparatedBodyPart_eventIsDismembered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SeparatedBodyPart_eventIsDismembered_Parms), &Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventIsDismembered_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::NewProp_bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::Function_MetaDataParams[] = {
		{ "Category", "SeparatedBodyPartFns" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeparatedBodyPart, "IsDismembered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(SeparatedBodyPart_eventIsDismembered_Parms), Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics
	{
		struct SeparatedBodyPart_eventIsPartiallyDismembered_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SeparatedBodyPart_eventIsPartiallyDismembered_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SeparatedBodyPart_eventIsPartiallyDismembered_Parms), &Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::Function_MetaDataParams[] = {
		{ "Category", "SeparatedBodyPartFns" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeparatedBodyPart, "IsPartiallyDismembered", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SeparatedBodyPart_eventIsPartiallyDismembered_Parms), Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DamageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Agent = { UE4CodeGen_Private::EPropertyClass::Object, "Agent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventOnCosmeticHit_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventOnCosmeticHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_SubType = { UE4CodeGen_Private::EPropertyClass::Byte, "SubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventOnCosmeticHit_Parms, SubType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Enum, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SeparatedBodyPart_eventOnCosmeticHit_Parms, DamageType), Z_Construct_UEnum_Mordhau_EMordhauDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_DamageType_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_SubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::NewProp_DamageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "SeparatedBodyPartEvents" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASeparatedBodyPart, "OnCosmeticHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(SeparatedBodyPart_eventOnCosmeticHit_Parms), Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASeparatedBodyPart_NoRegister()
	{
		return ASeparatedBodyPart::StaticClass();
	}
	struct Z_Construct_UClass_ASeparatedBodyPart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedGoreMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedGoreMeshes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedGoreMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FakeRootBone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_FakeRootBone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGoreMeshHead_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InGoreMeshHead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGoreMeshBlunt_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InGoreMeshBlunt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGoreMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InGoreMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightFootPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightLegPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightLegPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightUpLegPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightUpLegPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftFootPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftLegPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftLegPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftUpLegPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftUpLegPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightHandPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightForearmPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightForearmPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightArmPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightArmPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftHandPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftForearmPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftForearmPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftArmPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftArmPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadPhysicsAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HeadPhysicsAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SourceCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PhysicsConstraintActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_PhysicsConstraintActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASeparatedBodyPart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASeparatedBodyPart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASeparatedBodyPart_InitializeDismemberment, "InitializeDismemberment" }, // 2596387819
		{ &Z_Construct_UFunction_ASeparatedBodyPart_IsDismembered, "IsDismembered" }, // 3643752955
		{ &Z_Construct_UFunction_ASeparatedBodyPart_IsPartiallyDismembered, "IsPartiallyDismembered" }, // 2004956797
		{ &Z_Construct_UFunction_ASeparatedBodyPart_OnCosmeticHit, "OnCosmeticHit" }, // 3402869857
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SeparatedBodyPart.h" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes = { UE4CodeGen_Private::EPropertyClass::Array, "InstancedGoreMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, InstancedGoreMeshes), METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "InstancedGoreMeshes", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_FakeRootBone_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_FakeRootBone = { UE4CodeGen_Private::EPropertyClass::Name, "FakeRootBone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, FakeRootBone), METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_FakeRootBone_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_FakeRootBone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshHead_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshHead = { UE4CodeGen_Private::EPropertyClass::Class, "InGoreMeshHead", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, InGoreMeshHead), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshHead_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshHead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshBlunt_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshBlunt = { UE4CodeGen_Private::EPropertyClass::Class, "InGoreMeshBlunt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, InGoreMeshBlunt), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshBlunt_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshBlunt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMesh_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMesh = { UE4CodeGen_Private::EPropertyClass::Class, "InGoreMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, InGoreMesh), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightFootPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightFootPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "RightFootPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, RightFootPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightFootPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightFootPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightLegPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightLegPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "RightLegPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, RightLegPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightLegPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightLegPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightUpLegPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightUpLegPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "RightUpLegPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, RightUpLegPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightUpLegPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightUpLegPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftFootPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftFootPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "LeftFootPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, LeftFootPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftFootPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftFootPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftLegPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftLegPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "LeftLegPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, LeftLegPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftLegPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftLegPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftUpLegPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftUpLegPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "LeftUpLegPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, LeftUpLegPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftUpLegPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftUpLegPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightHandPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightHandPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "RightHandPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, RightHandPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightHandPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightHandPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightForearmPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightForearmPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "RightForearmPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, RightForearmPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightForearmPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightForearmPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightArmPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightArmPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "RightArmPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, RightArmPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightArmPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightArmPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftHandPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftHandPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "LeftHandPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, LeftHandPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftHandPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftHandPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftForearmPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftForearmPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "LeftForearmPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, LeftForearmPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftForearmPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftForearmPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftArmPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftArmPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "LeftArmPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, LeftArmPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftArmPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftArmPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_HeadPhysicsAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_HeadPhysicsAsset = { UE4CodeGen_Private::EPropertyClass::Object, "HeadPhysicsAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, HeadPhysicsAsset), Z_Construct_UClass_UPhysicsAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_HeadPhysicsAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_HeadPhysicsAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SourceCharacter_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SourceCharacter = { UE4CodeGen_Private::EPropertyClass::WeakObject, "SourceCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, SourceCharacter), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SourceCharacter_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SourceCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_PhysicsConstraintActor_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_PhysicsConstraintActor = { UE4CodeGen_Private::EPropertyClass::WeakObject, "PhysicsConstraintActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, PhysicsConstraintActor), Z_Construct_UClass_APhysicsConstraintActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_PhysicsConstraintActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_PhysicsConstraintActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SkeletalMeshAsset_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SkeletalMeshAsset = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshAsset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, SkeletalMeshAsset), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SkeletalMeshAsset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SkeletalMeshAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_Mesh_MetaData[] = {
		{ "Category", "SeparatedBodyPart" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SeparatedBodyPart.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ASeparatedBodyPart, Mesh), Z_Construct_UClass_ULODSkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_Mesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_Mesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASeparatedBodyPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InstancedGoreMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_FakeRootBone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshHead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMeshBlunt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_InGoreMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightFootPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightLegPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightUpLegPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftFootPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftLegPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftUpLegPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightHandPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightForearmPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_RightArmPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftHandPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftForearmPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_LeftArmPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_HeadPhysicsAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SourceCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_PhysicsConstraintActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_SkeletalMeshAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASeparatedBodyPart_Statics::NewProp_Mesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASeparatedBodyPart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASeparatedBodyPart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASeparatedBodyPart_Statics::ClassParams = {
		&ASeparatedBodyPart::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASeparatedBodyPart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASeparatedBodyPart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASeparatedBodyPart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASeparatedBodyPart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASeparatedBodyPart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASeparatedBodyPart, 224671666);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASeparatedBodyPart(Z_Construct_UClass_ASeparatedBodyPart, &ASeparatedBodyPart::StaticClass, TEXT("/Script/Mordhau"), TEXT("ASeparatedBodyPart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASeparatedBodyPart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
