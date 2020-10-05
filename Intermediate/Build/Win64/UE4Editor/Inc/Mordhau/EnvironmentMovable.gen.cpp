// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/EnvironmentMovable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnvironmentMovable() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AEnvironmentMovable_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AEnvironmentMovable();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_ESwayMethod();
// End Cross Module References
	void AEnvironmentMovable::StaticRegisterNativesAEnvironmentMovable()
	{
		UClass* Class = AEnvironmentMovable::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "InitializeMovable", &AEnvironmentMovable::execInitializeMovable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics
	{
		struct EnvironmentMovable_eventInitializeMovable_Parms
		{
			USceneComponent* InSwayingComponent;
			FVector InRollPitchYawFrequency;
			FVector InRollPitchYawMagnitude;
			FVector InRollPitchYawSpeed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRollPitchYawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRollPitchYawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRollPitchYawMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRollPitchYawMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InRollPitchYawFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InRollPitchYawFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InSwayingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InSwayingComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawSpeed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawSpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "InRollPitchYawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EnvironmentMovable_eventInitializeMovable_Parms, InRollPitchYawSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawMagnitude_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawMagnitude = { UE4CodeGen_Private::EPropertyClass::Struct, "InRollPitchYawMagnitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EnvironmentMovable_eventInitializeMovable_Parms, InRollPitchYawMagnitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawFrequency_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawFrequency = { UE4CodeGen_Private::EPropertyClass::Struct, "InRollPitchYawFrequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EnvironmentMovable_eventInitializeMovable_Parms, InRollPitchYawFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawFrequency_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InSwayingComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InSwayingComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InSwayingComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(EnvironmentMovable_eventInitializeMovable_Parms, InSwayingComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InSwayingComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InSwayingComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InRollPitchYawFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::NewProp_InSwayingComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::Function_MetaDataParams[] = {
		{ "Category", "EnvironmentMoveFn" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AEnvironmentMovable, "InitializeMovable", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(EnvironmentMovable_eventInitializeMovable_Parms), Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AEnvironmentMovable_NoRegister()
	{
		return AEnvironmentMovable::StaticClass();
	}
	struct Z_Construct_UClass_AEnvironmentMovable_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollPitchYawSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollPitchYawSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollPitchYawMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollPitchYawMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RollPitchYawFrequency_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RollPitchYawFrequency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwayingComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_SwayingComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwayMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SwayMethod;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SwayMethod_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEnvironmentMovable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AEnvironmentMovable_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AEnvironmentMovable_InitializeMovable, "InitializeMovable" }, // 1542271725
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentMovable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EnvironmentMovable.h" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawSpeed_MetaData[] = {
		{ "Category", "EnvironmentMovable" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawSpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "RollPitchYawSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AEnvironmentMovable, RollPitchYawSpeed), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawMagnitude_MetaData[] = {
		{ "Category", "EnvironmentMovable" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawMagnitude = { UE4CodeGen_Private::EPropertyClass::Struct, "RollPitchYawMagnitude", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AEnvironmentMovable, RollPitchYawMagnitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawMagnitude_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawFrequency_MetaData[] = {
		{ "Category", "EnvironmentMovable" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawFrequency = { UE4CodeGen_Private::EPropertyClass::Struct, "RollPitchYawFrequency", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AEnvironmentMovable, RollPitchYawFrequency), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawFrequency_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawFrequency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayingComponent_MetaData[] = {
		{ "Category", "EnvironmentMovable" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayingComponent = { UE4CodeGen_Private::EPropertyClass::WeakObject, "SwayingComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008000d, 1, nullptr, STRUCT_OFFSET(AEnvironmentMovable, SwayingComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayingComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayingComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod_MetaData[] = {
		{ "Category", "EnvironmentMovable" },
		{ "ModuleRelativePath", "EnvironmentMovable.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod = { UE4CodeGen_Private::EPropertyClass::Enum, "SwayMethod", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AEnvironmentMovable, SwayMethod), Z_Construct_UEnum_Mordhau_ESwayMethod, METADATA_PARAMS(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod_MetaData, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AEnvironmentMovable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_RollPitchYawFrequency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayingComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AEnvironmentMovable_Statics::NewProp_SwayMethod_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEnvironmentMovable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEnvironmentMovable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEnvironmentMovable_Statics::ClassParams = {
		&AEnvironmentMovable::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AEnvironmentMovable_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AEnvironmentMovable_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AEnvironmentMovable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEnvironmentMovable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEnvironmentMovable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnvironmentMovable, 3411335075);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnvironmentMovable(Z_Construct_UClass_AEnvironmentMovable, &AEnvironmentMovable::StaticClass, TEXT("/Script/Mordhau"), TEXT("AEnvironmentMovable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnvironmentMovable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
