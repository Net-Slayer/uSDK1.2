// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/InteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_CanInteract();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_Highlight();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_InteractionEnd();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_InteractionStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_OnHighlightStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_OnInteractionStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_UInteractionComponent_UnHighlight();
	ENGINE_API UClass* Z_Construct_UClass_UMeshComponent_NoRegister();
// End Cross Module References
	static FName NAME_UInteractionComponent_OnHighlightEnd = FName(TEXT("OnHighlightEnd"));
	void UInteractionComponent::OnHighlightEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_OnHighlightEnd),NULL);
	}
	static FName NAME_UInteractionComponent_OnHighlightStart = FName(TEXT("OnHighlightStart"));
	void UInteractionComponent::OnHighlightStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_OnHighlightStart),NULL);
	}
	static FName NAME_UInteractionComponent_OnInteractionEnd = FName(TEXT("OnInteractionEnd"));
	void UInteractionComponent::OnInteractionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_OnInteractionEnd),NULL);
	}
	static FName NAME_UInteractionComponent_OnInteractionStart = FName(TEXT("OnInteractionStart"));
	void UInteractionComponent::OnInteractionStart(AAdvancedCharacter* Character)
	{
		InteractionComponent_eventOnInteractionStart_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_UInteractionComponent_OnInteractionStart),&Parms);
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &UInteractionComponent::execCanInteract },
			{ "Highlight", &UInteractionComponent::execHighlight },
			{ "InteractionEnd", &UInteractionComponent::execInteractionEnd },
			{ "InteractionStart", &UInteractionComponent::execInteractionStart },
			{ "UnHighlight", &UInteractionComponent::execUnHighlight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics
	{
		struct InteractionComponent_eventCanInteract_Parms
		{
			AAdvancedCharacter* Character;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(InteractionComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractionComponent_eventCanInteract_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentFns" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "CanInteract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InteractionComponent_eventCanInteract_Parms), Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_Highlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_Highlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentFns" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_Highlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "Highlight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_Highlight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_Highlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_Highlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_Highlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_InteractionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_InteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentFns" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_InteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "InteractionEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_InteractionEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_InteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_InteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_InteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics
	{
		struct InteractionComponent_eventInteractionStart_Parms
		{
			AAdvancedCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractionComponent_eventInteractionStart_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentFns" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "InteractionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(InteractionComponent_eventInteractionStart_Parms), Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_InteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_InteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentEvents" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "OnHighlightEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_OnHighlightStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_OnHighlightStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentEvents" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_OnHighlightStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "OnHighlightStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_OnHighlightStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_OnHighlightStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_OnHighlightStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_OnHighlightStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentEvents" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "OnInteractionEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(InteractionComponent_eventOnInteractionStart_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentEvents" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "OnInteractionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(InteractionComponent_eventOnInteractionStart_Parms), Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_OnInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_OnInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_UnHighlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_UnHighlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "InteractionComponentFns" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_UnHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, "UnHighlight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_UnHighlight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_UnHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_UnHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_UnHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHighlighted_MetaData[];
#endif
		static void NewProp_bIsHighlighted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHighlighted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInteractable_MetaData[];
#endif
		static void NewProp_bIsInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VisualMeshComponents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_VisualMeshComponents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VisualMeshComponents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoxComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_CanInteract, "CanInteract" }, // 1559931482
		{ &Z_Construct_UFunction_UInteractionComponent_Highlight, "Highlight" }, // 947114098
		{ &Z_Construct_UFunction_UInteractionComponent_InteractionEnd, "InteractionEnd" }, // 3539882058
		{ &Z_Construct_UFunction_UInteractionComponent_InteractionStart, "InteractionStart" }, // 2157959972
		{ &Z_Construct_UFunction_UInteractionComponent_OnHighlightEnd, "OnHighlightEnd" }, // 2296855523
		{ &Z_Construct_UFunction_UInteractionComponent_OnHighlightStart, "OnHighlightStart" }, // 3978684346
		{ &Z_Construct_UFunction_UInteractionComponent_OnInteractionEnd, "OnInteractionEnd" }, // 2084868749
		{ &Z_Construct_UFunction_UInteractionComponent_OnInteractionStart, "OnInteractionStart" }, // 3932005758
		{ &Z_Construct_UFunction_UInteractionComponent_UnHighlight, "UnHighlight" }, // 3391807197
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "HideCategories", "Object LOD Lighting TextureStreaming Object LOD Lighting TextureStreaming Activation Components|Activation Trigger" },
		{ "IncludePath", "InteractionComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted_MetaData[] = {
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted_SetBit(void* Obj)
	{
		((UInteractionComponent*)Obj)->bIsHighlighted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHighlighted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable_MetaData[] = {
		{ "Category", "InteractionComponent" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	void Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable_SetBit(void* Obj)
	{
		((UInteractionComponent*)Obj)->bIsInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInteractable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UInteractionComponent), &Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents_MetaData[] = {
		{ "Category", "InteractionComponent" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "InteractionComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents = { UE4CodeGen_Private::EPropertyClass::Array, "VisualMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000800000000d, 1, nullptr, STRUCT_OFFSET(UInteractionComponent, VisualMeshComponents), METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents_MetaData, ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "VisualMeshComponents", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000080008, 1, nullptr, 0, Z_Construct_UClass_UMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsHighlighted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_bIsInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_VisualMeshComponents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x00B010A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionComponent, 3440886336);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionComponent(Z_Construct_UClass_UInteractionComponent, &UInteractionComponent::StaticClass, TEXT("/Script/Mordhau"), TEXT("UInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
