// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/SubField.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubField() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_ASubField_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ASubField();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASubField_DeactivateSubField();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASubField_GetMaster();
	MORDHAU_API UClass* Z_Construct_UClass_AMasterField_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_ASubField_SetSubFieldHidden();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	static FName NAME_ASubField_BeginSubFieldDeactivation = FName(TEXT("BeginSubFieldDeactivation"));
	void ASubField::BeginSubFieldDeactivation()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASubField_BeginSubFieldDeactivation),NULL);
	}
	static FName NAME_ASubField_DeactivateSubField = FName(TEXT("DeactivateSubField"));
	void ASubField::DeactivateSubField()
	{
		ProcessEvent(FindFunctionChecked(NAME_ASubField_DeactivateSubField),NULL);
	}
	static FName NAME_ASubField_SetSubFieldHidden = FName(TEXT("SetSubFieldHidden"));
	void ASubField::SetSubFieldHidden(bool bValue)
	{
		SubField_eventSetSubFieldHidden_Parms Parms;
		Parms.bValue=bValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ASubField_SetSubFieldHidden),&Parms);
	}
	void ASubField::StaticRegisterNativesASubField()
	{
		UClass* Class = ASubField::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetMaster", &ASubField::execGetMaster },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubFieldEvents" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubField, "BeginSubFieldDeactivation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubField_DeactivateSubField_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubField_DeactivateSubField_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubFieldEvents" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubField_DeactivateSubField_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubField, "DeactivateSubField", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubField_DeactivateSubField_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASubField_DeactivateSubField_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubField_DeactivateSubField()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubField_DeactivateSubField_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubField_GetMaster_Statics
	{
		struct SubField_eventGetMaster_Parms
		{
			AMasterField* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASubField_GetMaster_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(SubField_eventGetMaster_Parms, ReturnValue), Z_Construct_UClass_AMasterField_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubField_GetMaster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubField_GetMaster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubField_GetMaster_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubFieldFns" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubField_GetMaster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubField, "GetMaster", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(SubField_eventGetMaster_Parms), Z_Construct_UFunction_ASubField_GetMaster_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASubField_GetMaster_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubField_GetMaster_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASubField_GetMaster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubField_GetMaster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubField_GetMaster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics
	{
		static void NewProp_bValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::NewProp_bValue_SetBit(void* Obj)
	{
		((SubField_eventSetSubFieldHidden_Parms*)Obj)->bValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::NewProp_bValue = { UE4CodeGen_Private::EPropertyClass::Bool, "bValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(SubField_eventSetSubFieldHidden_Parms), &Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::NewProp_bValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::NewProp_bValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubFieldEvents" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASubField, "SetSubFieldHidden", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(SubField_eventSetSubFieldHidden_Parms), Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASubField_SetSubFieldHidden()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASubField_SetSubFieldHidden_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASubField_NoRegister()
	{
		return ASubField::StaticClass();
	}
	struct Z_Construct_UClass_ASubField_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Master_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Master;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSubFieldHidden_MetaData[];
#endif
		static void NewProp_bIsSubFieldHidden_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSubFieldHidden;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSubFieldDeactivated_MetaData[];
#endif
		static void NewProp_bIsSubFieldDeactivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSubFieldDeactivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Area_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Area;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASubField_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASubField_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASubField_BeginSubFieldDeactivation, "BeginSubFieldDeactivation" }, // 741230937
		{ &Z_Construct_UFunction_ASubField_DeactivateSubField, "DeactivateSubField" }, // 1246281251
		{ &Z_Construct_UFunction_ASubField_GetMaster, "GetMaster" }, // 4263588694
		{ &Z_Construct_UFunction_ASubField_SetSubFieldHidden, "SetSubFieldHidden" }, // 2956858260
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubField_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SubField.h" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubField_Statics::NewProp_Master_MetaData[] = {
		{ "Category", "SubField" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_ASubField_Statics::NewProp_Master = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Master", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(ASubField, Master), Z_Construct_UClass_AMasterField_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubField_Statics::NewProp_Master_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASubField_Statics::NewProp_Master_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden_MetaData[] = {
		{ "Category", "SubField" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	void Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden_SetBit(void* Obj)
	{
		((ASubField*)Obj)->bIsSubFieldHidden = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSubFieldHidden", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASubField), &Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated_MetaData[] = {
		{ "Category", "SubField" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	void Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated_SetBit(void* Obj)
	{
		((ASubField*)Obj)->bIsSubFieldDeactivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSubFieldDeactivated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASubField), &Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASubField_Statics::NewProp_Area_MetaData[] = {
		{ "Category", "SubField" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "SubField.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASubField_Statics::NewProp_Area = { UE4CodeGen_Private::EPropertyClass::Object, "Area", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(ASubField, Area), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASubField_Statics::NewProp_Area_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASubField_Statics::NewProp_Area_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASubField_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubField_Statics::NewProp_Master,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldHidden,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubField_Statics::NewProp_bIsSubFieldDeactivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASubField_Statics::NewProp_Area,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASubField_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASubField>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASubField_Statics::ClassParams = {
		&ASubField::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASubField_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASubField_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASubField_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASubField_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASubField()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASubField_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASubField, 3392173761);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASubField(Z_Construct_UClass_ASubField, &ASubField::StaticClass, TEXT("/Script/Mordhau"), TEXT("ASubField"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASubField);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
