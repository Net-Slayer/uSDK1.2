// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/OneDimensionalMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOneDimensionalMovementComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UOneDimensionalMovementComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UOneDimensionalMovementComponent();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvancedCharacterMovement();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void UOneDimensionalMovementComponent::StaticRegisterNativesUOneDimensionalMovementComponent()
	{
		UClass* Class = UOneDimensionalMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SetMovementLine", &UOneDimensionalMovementComponent::execSetMovementLine },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics
	{
		struct OneDimensionalMovementComponent_eventSetMovementLine_Parms
		{
			FVector NewLineStart;
			FVector NewLineEnd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLineEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewLineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewLineStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLineEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OneDimensionalMovementComponent_eventSetMovementLine_Parms, NewLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineEnd_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineStart = { UE4CodeGen_Private::EPropertyClass::Struct, "NewLineStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(OneDimensionalMovementComponent_eventSetMovementLine_Parms, NewLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineStart_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::NewProp_NewLineStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::Function_MetaDataParams[] = {
		{ "Category", "1DMovementCompFns" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOneDimensionalMovementComponent, "SetMovementLine", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(OneDimensionalMovementComponent_eventSetMovementLine_Parms), Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOneDimensionalMovementComponent_NoRegister()
	{
		return UOneDimensionalMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOneDimensionalMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LineStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentStep_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentStep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasInitializedLine_MetaData[];
#endif
		static void NewProp_bHasInitializedLine_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasInitializedLine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalSteps_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TotalSteps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StepSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StepSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAdvancedCharacterMovement,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOneDimensionalMovementComponent_SetMovementLine, "SetMovementLine" }, // 448595501
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "OneDimensionalMovementComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_MovementDirection_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_MovementDirection = { UE4CodeGen_Private::EPropertyClass::Struct, "MovementDirection", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UOneDimensionalMovementComponent, MovementDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_MovementDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_MovementDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineEnd_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineEnd = { UE4CodeGen_Private::EPropertyClass::Struct, "LineEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UOneDimensionalMovementComponent, LineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineStart_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineStart = { UE4CodeGen_Private::EPropertyClass::Struct, "LineStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UOneDimensionalMovementComponent, LineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_CurrentStep_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_CurrentStep = { UE4CodeGen_Private::EPropertyClass::Int, "CurrentStep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UOneDimensionalMovementComponent, CurrentStep), METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_CurrentStep_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_CurrentStep_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine_SetBit(void* Obj)
	{
		((UOneDimensionalMovementComponent*)Obj)->bHasInitializedLine = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasInitializedLine", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UOneDimensionalMovementComponent), &Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine_SetBit, METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_TotalSteps_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_TotalSteps = { UE4CodeGen_Private::EPropertyClass::Int, "TotalSteps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UOneDimensionalMovementComponent, TotalSteps), METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_TotalSteps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_TotalSteps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_StepSize_MetaData[] = {
		{ "Category", "OneDimensionalMovementComponent" },
		{ "ModuleRelativePath", "OneDimensionalMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_StepSize = { UE4CodeGen_Private::EPropertyClass::Float, "StepSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UOneDimensionalMovementComponent, StepSize), METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_StepSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_StepSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_MovementDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_LineStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_CurrentStep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_bHasInitializedLine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_TotalSteps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::NewProp_StepSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOneDimensionalMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::ClassParams = {
		&UOneDimensionalMovementComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B000A4u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::PropPointers),
		"Engine",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOneDimensionalMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOneDimensionalMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOneDimensionalMovementComponent, 2654395282);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOneDimensionalMovementComponent(Z_Construct_UClass_UOneDimensionalMovementComponent, &UOneDimensionalMovementComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UOneDimensionalMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOneDimensionalMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
