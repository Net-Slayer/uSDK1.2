// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauActor() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_CanHeldInteract();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_CanInteract();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_CanInteractPassively();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_HeldInteractionStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_Highlight();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_InteractionEnd();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_InteractionStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_InteractPassively();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnHighlightEnd();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnHighlightStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnInteractionEnd();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnInteractionStart();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnInteractPassively();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EMordhauDamageType();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther();
	MORDHAU_API UClass* Z_Construct_UClass_ASeparatedBodyPart_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAttackMove();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnThud();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_UnHighlight();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWidgetComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FStatInt();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	static FName NAME_AMordhauActor_CanHeldInteract = FName(TEXT("CanHeldInteract"));
	bool AMordhauActor::CanHeldInteract(AMordhauCharacter* Character)
	{
		MordhauActor_eventCanHeldInteract_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_CanHeldInteract),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauActor_CanInteract = FName(TEXT("CanInteract"));
	bool AMordhauActor::CanInteract(AMordhauCharacter* Character)
	{
		MordhauActor_eventCanInteract_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_CanInteract),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauActor_CanInteractPassively = FName(TEXT("CanInteractPassively"));
	bool AMordhauActor::CanInteractPassively(AMordhauCharacter* Character)
	{
		MordhauActor_eventCanInteractPassively_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_CanInteractPassively),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauActor_OnHeldInteractionStart = FName(TEXT("OnHeldInteractionStart"));
	void AMordhauActor::OnHeldInteractionStart(AMordhauCharacter* Character)
	{
		MordhauActor_eventOnHeldInteractionStart_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnHeldInteractionStart),&Parms);
	}
	static FName NAME_AMordhauActor_OnHighlightEnd = FName(TEXT("OnHighlightEnd"));
	void AMordhauActor::OnHighlightEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnHighlightEnd),NULL);
	}
	static FName NAME_AMordhauActor_OnHighlightStart = FName(TEXT("OnHighlightStart"));
	void AMordhauActor::OnHighlightStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnHighlightStart),NULL);
	}
	static FName NAME_AMordhauActor_OnInteractionEnd = FName(TEXT("OnInteractionEnd"));
	void AMordhauActor::OnInteractionEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnInteractionEnd),NULL);
	}
	static FName NAME_AMordhauActor_OnInteractionStart = FName(TEXT("OnInteractionStart"));
	void AMordhauActor::OnInteractionStart(AMordhauCharacter* Character)
	{
		MordhauActor_eventOnInteractionStart_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnInteractionStart),&Parms);
	}
	static FName NAME_AMordhauActor_OnInteractPassively = FName(TEXT("OnInteractPassively"));
	void AMordhauActor::OnInteractPassively(AMordhauCharacter* Character)
	{
		MordhauActor_eventOnInteractPassively_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnInteractPassively),&Parms);
	}
	static FName NAME_AMordhauActor_OnLocalPlayerUsedToKillOther = FName(TEXT("OnLocalPlayerUsedToKillOther"));
	void AMordhauActor::OnLocalPlayerUsedToKillOther(AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, FName const& bone, FVector const& Point, AActor* Source)
	{
		MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms Parms;
		Parms.Character=Character;
		Parms.Type=Type;
		Parms.SubType=SubType;
		Parms.bone=bone;
		Parms.Point=Point;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnLocalPlayerUsedToKillOther),&Parms);
	}
	static FName NAME_AMordhauActor_OnPostDismemberedOther = FName(TEXT("OnPostDismemberedOther"));
	void AMordhauActor::OnPostDismemberedOther(FName const& bone, ASeparatedBodyPart* Part)
	{
		MordhauActor_eventOnPostDismemberedOther_Parms Parms;
		Parms.bone=bone;
		Parms.Part=Part;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnPostDismemberedOther),&Parms);
	}
	static FName NAME_AMordhauActor_OnReceiveCosmeticHit = FName(TEXT("OnReceiveCosmeticHit"));
	void AMordhauActor::OnReceiveCosmeticHit(AActor* Source, AActor* Agent, EAttackMove Move, FHitResult const& Hit)
	{
		MordhauActor_eventOnReceiveCosmeticHit_Parms Parms;
		Parms.Source=Source;
		Parms.Agent=Agent;
		Parms.Move=Move;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnReceiveCosmeticHit),&Parms);
	}
	static FName NAME_AMordhauActor_OnThud = FName(TEXT("OnThud"));
	void AMordhauActor::OnThud()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnThud),NULL);
	}
	static FName NAME_AMordhauActor_OnUsedToKillOther = FName(TEXT("OnUsedToKillOther"));
	void AMordhauActor::OnUsedToKillOther(AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, FName const& bone, FVector const& Point, AActor* Source)
	{
		MordhauActor_eventOnUsedToKillOther_Parms Parms;
		Parms.Character=Character;
		Parms.Type=Type;
		Parms.SubType=SubType;
		Parms.bone=bone;
		Parms.Point=Point;
		Parms.Source=Source;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_OnUsedToKillOther),&Parms);
	}
	static FName NAME_AMordhauActor_PostInteractionWidgetCreated = FName(TEXT("PostInteractionWidgetCreated"));
	void AMordhauActor::PostInteractionWidgetCreated()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauActor_PostInteractionWidgetCreated),NULL);
	}
	void AMordhauActor::StaticRegisterNativesAMordhauActor()
	{
		UClass* Class = AMordhauActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HeldInteractionStart", &AMordhauActor::execHeldInteractionStart },
			{ "Highlight", &AMordhauActor::execHighlight },
			{ "InteractionEnd", &AMordhauActor::execInteractionEnd },
			{ "InteractionStart", &AMordhauActor::execInteractionStart },
			{ "InteractPassively", &AMordhauActor::execInteractPassively },
			{ "IsAnyInstanceOwner", &AMordhauActor::execIsAnyInstanceOwner },
			{ "UnHighlight", &AMordhauActor::execUnHighlight },
			{ "UpdateThudVelocity", &AMordhauActor::execUpdateThudVelocity },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauActor_eventCanHeldInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauActor_eventCanHeldInteract_Parms), &Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventCanHeldInteract_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "CanHeldInteract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauActor_eventCanHeldInteract_Parms), Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_CanHeldInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_CanHeldInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_CanInteract_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauActor_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauActor_eventCanInteract_Parms), &Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventCanInteract_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "CanInteract", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauActor_eventCanInteract_Parms), Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauActor_eventCanInteractPassively_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauActor_eventCanInteractPassively_Parms), &Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventCanInteractPassively_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "CanInteractPassively", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauActor_eventCanInteractPassively_Parms), Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_CanInteractPassively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_CanInteractPassively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics
	{
		struct MordhauActor_eventHeldInteractionStart_Parms
		{
			AMordhauCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventHeldInteractionStart_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "HeldInteractionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauActor_eventHeldInteractionStart_Parms), Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_HeldInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_HeldInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_Highlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_Highlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_Highlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "Highlight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_Highlight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_Highlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_Highlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_Highlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_InteractionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_InteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_InteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "InteractionEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_InteractionEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_InteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_InteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_InteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics
	{
		struct MordhauActor_eventInteractionStart_Parms
		{
			AMordhauCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventInteractionStart_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "InteractionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauActor_eventInteractionStart_Parms), Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_InteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_InteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics
	{
		struct MordhauActor_eventInteractPassively_Parms
		{
			AMordhauCharacter* Character;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventInteractPassively_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "InteractPassively", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauActor_eventInteractPassively_Parms), Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_InteractPassively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_InteractPassively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics
	{
		struct MordhauActor_eventIsAnyInstanceOwner_Parms
		{
			TArray<AMordhauPlayerController*> ControllerArray;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControllerArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ControllerArray_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauActor_eventIsAnyInstanceOwner_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauActor_eventIsAnyInstanceOwner_Parms), &Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ControllerArray = { UE4CodeGen_Private::EPropertyClass::Array, "ControllerArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventIsAnyInstanceOwner_Parms, ControllerArray), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ControllerArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ControllerArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMordhauPlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ControllerArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::NewProp_ControllerArray_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "IsAnyInstanceOwner", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauActor_eventIsAnyInstanceOwner_Parms), Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnHeldInteractionStart_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", ", Category = \"MordhauActorFns\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnHeldInteractionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauActor_eventOnHeldInteractionStart_Parms), Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnHighlightEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnHighlightEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", ", Category = \"MordhauActorFns\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnHighlightEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnHighlightEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnHighlightEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnHighlightEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnHighlightEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnHighlightEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnHighlightStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnHighlightStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", ", Category = \"MordhauActorFns\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnHighlightStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnHighlightStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnHighlightStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnHighlightStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnHighlightStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnHighlightStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnInteractionEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnInteractionEnd_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", ", Category = \"MordhauActorFns\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnInteractionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnInteractionEnd", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnInteractionEnd_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnInteractionEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnInteractionEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnInteractionEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnInteractionStart_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", ", Category = \"MordhauActorFns\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnInteractionStart", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauActor_eventOnInteractionStart_Parms), Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnInteractionStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnInteractionStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnInteractPassively_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", ", Category = \"MordhauActorFns\")" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnInteractPassively", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauActor_eventOnInteractPassively_Parms), Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnInteractPassively()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnInteractPassively_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_bone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_SubType = { UE4CodeGen_Private::EPropertyClass::Byte, "SubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms, SubType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms, Type), Z_Construct_UEnum_Mordhau_EMordhauDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_SubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnLocalPlayerUsedToKillOther", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20800, sizeof(MordhauActor_eventOnLocalPlayerUsedToKillOther_Parms), Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Part;
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_Part = { UE4CodeGen_Private::EPropertyClass::Object, "Part", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnPostDismemberedOther_Parms, Part), Z_Construct_UClass_ASeparatedBodyPart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnPostDismemberedOther_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_bone_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_Part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::NewProp_bone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnPostDismemberedOther", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420800, sizeof(MordhauActor_eventOnPostDismemberedOther_Parms), Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Move;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Move_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Agent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnReceiveCosmeticHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Move = { UE4CodeGen_Private::EPropertyClass::Enum, "Move", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnReceiveCosmeticHit_Parms, Move), Z_Construct_UEnum_Mordhau_EAttackMove, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Move_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Agent = { UE4CodeGen_Private::EPropertyClass::Object, "Agent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnReceiveCosmeticHit_Parms, Agent), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnReceiveCosmeticHit_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Move,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Move_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Agent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::NewProp_Source,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnReceiveCosmeticHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(MordhauActor_eventOnReceiveCosmeticHit_Parms), Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnThud_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnThud_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnThud_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnThud", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnThud_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnThud_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnThud()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnThud_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Source;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SubType;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Source = { UE4CodeGen_Private::EPropertyClass::Object, "Source", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnUsedToKillOther_Parms, Source), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Point = { UE4CodeGen_Private::EPropertyClass::Struct, "Point", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnUsedToKillOther_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Point_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Point_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnUsedToKillOther_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_bone_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_SubType = { UE4CodeGen_Private::EPropertyClass::Byte, "SubType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnUsedToKillOther_Parms, SubType), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Type = { UE4CodeGen_Private::EPropertyClass::Enum, "Type", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnUsedToKillOther_Parms, Type), Z_Construct_UEnum_Mordhau_EMordhauDamageType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Type_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventOnUsedToKillOther_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Source,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Point,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_SubType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorEvents" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "OnUsedToKillOther", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08C20800, sizeof(MordhauActor_eventOnUsedToKillOther_Parms), Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "PostInteractionWidgetCreated", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_UnHighlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_UnHighlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_UnHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "UnHighlight", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_UnHighlight_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_UnHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_UnHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_UnHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics
	{
		struct MordhauActor_eventUpdateThudVelocity_Parms
		{
			float NewThudVelocity;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewThudVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::NewProp_NewThudVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "NewThudVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauActor_eventUpdateThudVelocity_Parms, NewThudVelocity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::NewProp_NewThudVelocity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauActorFns" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauActor, "UpdateThudVelocity", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauActor_eventUpdateThudVelocity_Parms), Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauActor_NoRegister()
	{
		return AMordhauActor::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastLocallyRequestedPassiveInteractionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastLocallyRequestedPassiveInteractionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInteractionHoldTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInteractionHoldTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsPassivelyInteractable_MetaData[];
#endif
		static void NewProp_bIsPassivelyInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsPassivelyInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInteractable_MetaData[];
#endif
		static void NewProp_bIsInteractable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInteractable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxInteractWithDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxInteractWithDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHighlighted_MetaData[];
#endif
		static void NewProp_bIsHighlighted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHighlighted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPerformCustomDepthHighlight_MetaData[];
#endif
		static void NewProp_bPerformCustomDepthHighlight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPerformCustomDepthHighlight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractionWidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoDetermineWidgetTransform_MetaData[];
#endif
		static void NewProp_bAutoDetermineWidgetTransform_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoDetermineWidgetTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InteractionWidgetRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bNoInteractionWidgetWhenAttachedToChar_MetaData[];
#endif
		static void NewProp_bNoInteractionWidgetWhenAttachedToChar_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNoInteractionWidgetWhenAttachedToChar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InteractionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeldInteractionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_HeldInteractionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionWidgetComponentClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_InteractionWidgetComponentClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSmoothNetworkMovement_MetaData[];
#endif
		static void NewProp_bSmoothNetworkMovement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSmoothNetworkMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterpolationSmoothTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterpolationSmoothTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClientsideRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastClientsideRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDamageLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastDamageLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDamageNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastDamageNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClientsideLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastClientsideLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplayPriorityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReplayPriorityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceRagdollOnDeath_MetaData[];
#endif
		static void NewProp_bForceRagdollOnDeath_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceRagdollOnDeath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollForceMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollForceMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveCosmeticHits_MetaData[];
#endif
		static void NewProp_bReceiveCosmeticHits_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveCosmeticHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bForceLongDeathYell_MetaData[];
#endif
		static void NewProp_bForceLongDeathYell_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bForceLongDeathYell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIgnoresBleedOut_MetaData[];
#endif
		static void NewProp_bIgnoresBleedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIgnoresBleedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsStat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillsStat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventClimbing_MetaData[];
#endif
		static void NewProp_bPreventClimbing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventClimbing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoThudUntilTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NoThudUntilTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinDelayBetweenThuds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinDelayBetweenThuds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThudMaxVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThudMaxVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThudMinVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ThudMinVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldReplicateThud_MetaData[];
#endif
		static void NewProp_bShouldReplicateThud_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldReplicateThud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThudVolumeMultiplierRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThudVolumeMultiplierRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThudPitchMultiplierRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ThudPitchMultiplierRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThudSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ThudSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Thud_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Thud;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstanceOwner_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_InstanceOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauActor_CanHeldInteract, "CanHeldInteract" }, // 662537293
		{ &Z_Construct_UFunction_AMordhauActor_CanInteract, "CanInteract" }, // 3623486639
		{ &Z_Construct_UFunction_AMordhauActor_CanInteractPassively, "CanInteractPassively" }, // 1806679150
		{ &Z_Construct_UFunction_AMordhauActor_HeldInteractionStart, "HeldInteractionStart" }, // 3800160404
		{ &Z_Construct_UFunction_AMordhauActor_Highlight, "Highlight" }, // 3920427459
		{ &Z_Construct_UFunction_AMordhauActor_InteractionEnd, "InteractionEnd" }, // 2662213327
		{ &Z_Construct_UFunction_AMordhauActor_InteractionStart, "InteractionStart" }, // 524637613
		{ &Z_Construct_UFunction_AMordhauActor_InteractPassively, "InteractPassively" }, // 768613607
		{ &Z_Construct_UFunction_AMordhauActor_IsAnyInstanceOwner, "IsAnyInstanceOwner" }, // 583112208
		{ &Z_Construct_UFunction_AMordhauActor_OnHeldInteractionStart, "OnHeldInteractionStart" }, // 2457371685
		{ &Z_Construct_UFunction_AMordhauActor_OnHighlightEnd, "OnHighlightEnd" }, // 3882562245
		{ &Z_Construct_UFunction_AMordhauActor_OnHighlightStart, "OnHighlightStart" }, // 3087292415
		{ &Z_Construct_UFunction_AMordhauActor_OnInteractionEnd, "OnInteractionEnd" }, // 3268875872
		{ &Z_Construct_UFunction_AMordhauActor_OnInteractionStart, "OnInteractionStart" }, // 4232349315
		{ &Z_Construct_UFunction_AMordhauActor_OnInteractPassively, "OnInteractPassively" }, // 2871227926
		{ &Z_Construct_UFunction_AMordhauActor_OnLocalPlayerUsedToKillOther, "OnLocalPlayerUsedToKillOther" }, // 824102940
		{ &Z_Construct_UFunction_AMordhauActor_OnPostDismemberedOther, "OnPostDismemberedOther" }, // 3875934180
		{ &Z_Construct_UFunction_AMordhauActor_OnReceiveCosmeticHit, "OnReceiveCosmeticHit" }, // 3545359230
		{ &Z_Construct_UFunction_AMordhauActor_OnThud, "OnThud" }, // 67470268
		{ &Z_Construct_UFunction_AMordhauActor_OnUsedToKillOther, "OnUsedToKillOther" }, // 2879735275
		{ &Z_Construct_UFunction_AMordhauActor_PostInteractionWidgetCreated, "PostInteractionWidgetCreated" }, // 2586998744
		{ &Z_Construct_UFunction_AMordhauActor_UnHighlight, "UnHighlight" }, // 3028778212
		{ &Z_Construct_UFunction_AMordhauActor_UpdateThudVelocity, "UpdateThudVelocity" }, // 1623447748
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauActor.h" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "UENUM(BlueprintType)\nenum class EAttackMove : uint8\n{\n       RightStrike = 0,\n       LeftStrike = 1,\n       Stab = 2,\n       AltStab = 3,\n       Kick = 4,\n       Bash = 5,\n       Couch = 6,\n       Ranged = 7,\n       EAttackMove_MAX = 8\n};\nUENUM(BlueprintType)\nenum class EMordhauDamageType : uint8\n{\n       Generic = 0,\n       Melee = 1,\n       Ranged = 2,\n       Fall = 3,\n       Fire = 4,\n       EMordhauDamageType_MAX = 5\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastLocallyRequestedPassiveInteractionTime_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastLocallyRequestedPassiveInteractionTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastLocallyRequestedPassiveInteractionTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, LastLocallyRequestedPassiveInteractionTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastLocallyRequestedPassiveInteractionTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastLocallyRequestedPassiveInteractionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractionHoldTime_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractionHoldTime = { UE4CodeGen_Private::EPropertyClass::Float, "MaxInteractionHoldTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, MaxInteractionHoldTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractionHoldTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractionHoldTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bIsPassivelyInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsPassivelyInteractable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bIsInteractable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsInteractable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractWithDistance_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractWithDistance = { UE4CodeGen_Private::EPropertyClass::Float, "MaxInteractWithDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, MaxInteractWithDistance), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractWithDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractWithDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bIsHighlighted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHighlighted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bPerformCustomDepthHighlight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight = { UE4CodeGen_Private::EPropertyClass::Bool, "bPerformCustomDepthHighlight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponent_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "InteractionWidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InteractionWidgetComponent), Z_Construct_UClass_UMordhauWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bAutoDetermineWidgetTransform = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoDetermineWidgetTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetRelativeTransform_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetRelativeTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "InteractionWidgetRelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InteractionWidgetRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetRelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bNoInteractionWidgetWhenAttachedToChar = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar = { UE4CodeGen_Private::EPropertyClass::Bool, "bNoInteractionWidgetWhenAttachedToChar", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionText_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionText = { UE4CodeGen_Private::EPropertyClass::Text, "InteractionText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InteractionText), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_HeldInteractionText_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_HeldInteractionText = { UE4CodeGen_Private::EPropertyClass::Text, "HeldInteractionText", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, HeldInteractionText), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_HeldInteractionText_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_HeldInteractionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetClass_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetClass = { UE4CodeGen_Private::EPropertyClass::Class, "InteractionWidgetClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InteractionWidgetClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponentClass_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponentClass = { UE4CodeGen_Private::EPropertyClass::Class, "InteractionWidgetComponentClass", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InteractionWidgetComponentClass), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponentClass_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponentClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bSmoothNetworkMovement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement = { UE4CodeGen_Private::EPropertyClass::Bool, "bSmoothNetworkMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InterpolationSmoothTime_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InterpolationSmoothTime = { UE4CodeGen_Private::EPropertyClass::Float, "InterpolationSmoothTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InterpolationSmoothTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InterpolationSmoothTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InterpolationSmoothTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideRotation_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideRotation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastClientsideRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, LastClientsideRotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageLocation_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastDamageLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, LastDamageLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageNormal_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "LastDamageNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, LastDamageNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideLocation_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastClientsideLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, LastClientsideLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_ReplayPriorityFactor_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_ReplayPriorityFactor = { UE4CodeGen_Private::EPropertyClass::Float, "ReplayPriorityFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, ReplayPriorityFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ReplayPriorityFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ReplayPriorityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bForceRagdollOnDeath = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceRagdollOnDeath", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_RagdollForceMultiplier_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_RagdollForceMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "RagdollForceMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, RagdollForceMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_RagdollForceMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_RagdollForceMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bReceiveCosmeticHits = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits = { UE4CodeGen_Private::EPropertyClass::Bool, "bReceiveCosmeticHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bForceLongDeathYell = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell = { UE4CodeGen_Private::EPropertyClass::Bool, "bForceLongDeathYell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bIgnoresBleedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut = { UE4CodeGen_Private::EPropertyClass::Bool, "bIgnoresBleedOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_KillsStat_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_KillsStat = { UE4CodeGen_Private::EPropertyClass::Struct, "KillsStat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, KillsStat), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_KillsStat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_KillsStat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bPreventClimbing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreventClimbing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_NoThudUntilTime_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_NoThudUntilTime = { UE4CodeGen_Private::EPropertyClass::Float, "NoThudUntilTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, NoThudUntilTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_NoThudUntilTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_NoThudUntilTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_MinDelayBetweenThuds_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_MinDelayBetweenThuds = { UE4CodeGen_Private::EPropertyClass::Float, "MinDelayBetweenThuds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, MinDelayBetweenThuds), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_MinDelayBetweenThuds_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_MinDelayBetweenThuds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMaxVelocity_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMaxVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "ThudMaxVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, ThudMaxVelocity), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMaxVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMaxVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMinVelocity_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMinVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "ThudMinVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, ThudMinVelocity), METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMinVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMinVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud_SetBit(void* Obj)
	{
		((AMordhauActor*)Obj)->bShouldReplicateThud = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldReplicateThud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauActor), &Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudVolumeMultiplierRange_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudVolumeMultiplierRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ThudVolumeMultiplierRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, ThudVolumeMultiplierRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudVolumeMultiplierRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudVolumeMultiplierRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudPitchMultiplierRange_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudPitchMultiplierRange = { UE4CodeGen_Private::EPropertyClass::Struct, "ThudPitchMultiplierRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, ThudPitchMultiplierRange), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudPitchMultiplierRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudPitchMultiplierRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudSound_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudSound = { UE4CodeGen_Private::EPropertyClass::Object, "ThudSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, ThudSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_Thud_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_Thud = { UE4CodeGen_Private::EPropertyClass::Byte, "Thud", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, Thud), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_Thud_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_Thud_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauActor_Statics::NewProp_InstanceOwner_MetaData[] = {
		{ "Category", "MordhauActor" },
		{ "ModuleRelativePath", "MordhauActor.h" },
		{ "ToolTip", "Sets default values for this actor's properties\nUPROPERTY(VisibleAnywhere, BlueprintReadWrite)\nUMordhauSceneComponent * RootSceneComponent;" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauActor_Statics::NewProp_InstanceOwner = { UE4CodeGen_Private::EPropertyClass::WeakObject, "InstanceOwner", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauActor, InstanceOwner), Z_Construct_UClass_AMordhauPlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InstanceOwner_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::NewProp_InstanceOwner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastLocallyRequestedPassiveInteractionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractionHoldTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsPassivelyInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsInteractable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_MaxInteractWithDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIsHighlighted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPerformCustomDepthHighlight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bAutoDetermineWidgetTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bNoInteractionWidgetWhenAttachedToChar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_HeldInteractionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InteractionWidgetComponentClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bSmoothNetworkMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InterpolationSmoothTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastDamageNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_LastClientsideLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_ReplayPriorityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceRagdollOnDeath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_RagdollForceMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bReceiveCosmeticHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bForceLongDeathYell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bIgnoresBleedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_KillsStat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bPreventClimbing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_NoThudUntilTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_MinDelayBetweenThuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMaxVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudMinVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_bShouldReplicateThud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudVolumeMultiplierRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudPitchMultiplierRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_ThudSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_Thud,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauActor_Statics::NewProp_InstanceOwner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauActor_Statics::ClassParams = {
		&AMordhauActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauActor, 2411346859);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauActor(Z_Construct_UClass_AMordhauActor, &AMordhauActor::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
