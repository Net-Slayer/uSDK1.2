// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/ControlPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeControlPoint() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AControlPoint_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AControlPoint();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_CanCapture();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnStartedFlashing();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_OnStoppedFlashing();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_SetCaptureProgress();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_UpdateUIWidgets();
	MORDHAU_API UFunction* Z_Construct_UFunction_AControlPoint_UpdateVisuals();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerStart_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_ACapturePointBanner_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauWidgetComponent_NoRegister();
// End Cross Module References
	static FName NAME_AControlPoint_EnemyGainedPrerequisites = FName(TEXT("EnemyGainedPrerequisites"));
	void AControlPoint::EnemyGainedPrerequisites()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_EnemyGainedPrerequisites),NULL);
	}
	static FName NAME_AControlPoint_EnemyLostPrerequisites = FName(TEXT("EnemyLostPrerequisites"));
	void AControlPoint::EnemyLostPrerequisites()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_EnemyLostPrerequisites),NULL);
	}
	static FName NAME_AControlPoint_OnCaptureAreaBeginOverlap = FName(TEXT("OnCaptureAreaBeginOverlap"));
	void AControlPoint::OnCaptureAreaBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, FHitResult const& SweepResult)
	{
		ControlPoint_eventOnCaptureAreaBeginOverlap_Parms Parms;
		Parms.OverlappedComp=OverlappedComp;
		Parms.Other=Other;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		Parms.bFromSweep=bFromSweep ? true : false;
		Parms.SweepResult=SweepResult;
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnCaptureAreaBeginOverlap),&Parms);
	}
	static FName NAME_AControlPoint_OnCaptureAreaEndOverlap = FName(TEXT("OnCaptureAreaEndOverlap"));
	void AControlPoint::OnCaptureAreaEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
	{
		ControlPoint_eventOnCaptureAreaEndOverlap_Parms Parms;
		Parms.OverlappedComp=OverlappedComp;
		Parms.Other=Other;
		Parms.OtherComp=OtherComp;
		Parms.OtherBodyIndex=OtherBodyIndex;
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnCaptureAreaEndOverlap),&Parms);
	}
	static FName NAME_AControlPoint_OnCapturingTeamChanged = FName(TEXT("OnCapturingTeamChanged"));
	void AControlPoint::OnCapturingTeamChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnCapturingTeamChanged),NULL);
	}
	static FName NAME_AControlPoint_OnOwningTeamChanged = FName(TEXT("OnOwningTeamChanged"));
	void AControlPoint::OnOwningTeamChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnOwningTeamChanged),NULL);
	}
	static FName NAME_AControlPoint_OnRep_CaptureProgress = FName(TEXT("OnRep_CaptureProgress"));
	void AControlPoint::OnRep_CaptureProgress()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnRep_CaptureProgress),NULL);
	}
	static FName NAME_AControlPoint_OnRep_CapturingTeam = FName(TEXT("OnRep_CapturingTeam"));
	void AControlPoint::OnRep_CapturingTeam()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnRep_CapturingTeam),NULL);
	}
	static FName NAME_AControlPoint_OnRep_OwningTeam = FName(TEXT("OnRep_OwningTeam"));
	void AControlPoint::OnRep_OwningTeam()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnRep_OwningTeam),NULL);
	}
	static FName NAME_AControlPoint_OnStartedFlashing = FName(TEXT("OnStartedFlashing"));
	void AControlPoint::OnStartedFlashing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnStartedFlashing),NULL);
	}
	static FName NAME_AControlPoint_OnStoppedFlashing = FName(TEXT("OnStoppedFlashing"));
	void AControlPoint::OnStoppedFlashing()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_OnStoppedFlashing),NULL);
	}
	static FName NAME_AControlPoint_UpdateCaptureProgress = FName(TEXT("UpdateCaptureProgress"));
	void AControlPoint::UpdateCaptureProgress(float DeltaTime)
	{
		ControlPoint_eventUpdateCaptureProgress_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_UpdateCaptureProgress),&Parms);
	}
	static FName NAME_AControlPoint_UpdatePresenceNumbers = FName(TEXT("UpdatePresenceNumbers"));
	void AControlPoint::UpdatePresenceNumbers()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_UpdatePresenceNumbers),NULL);
	}
	static FName NAME_AControlPoint_UpdateUIMaterialInstance = FName(TEXT("UpdateUIMaterialInstance"));
	void AControlPoint::UpdateUIMaterialInstance()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_UpdateUIMaterialInstance),NULL);
	}
	static FName NAME_AControlPoint_UpdateUIWidgets = FName(TEXT("UpdateUIWidgets"));
	void AControlPoint::UpdateUIWidgets()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_UpdateUIWidgets),NULL);
	}
	static FName NAME_AControlPoint_UpdateVisuals = FName(TEXT("UpdateVisuals"));
	void AControlPoint::UpdateVisuals()
	{
		ProcessEvent(FindFunctionChecked(NAME_AControlPoint_UpdateVisuals),NULL);
	}
	void AControlPoint::StaticRegisterNativesAControlPoint()
	{
		UClass* Class = AControlPoint::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanCapture", &AControlPoint::execCanCapture },
			{ "OnCaptureAreaBeginOverlap", &AControlPoint::execOnCaptureAreaBeginOverlap },
			{ "OnCaptureAreaEndOverlap", &AControlPoint::execOnCaptureAreaEndOverlap },
			{ "OnCapturingTeamChanged", &AControlPoint::execOnCapturingTeamChanged },
			{ "OnOwningTeamChanged", &AControlPoint::execOnOwningTeamChanged },
			{ "OnRep_CaptureProgress", &AControlPoint::execOnRep_CaptureProgress },
			{ "OnRep_CapturingTeam", &AControlPoint::execOnRep_CapturingTeam },
			{ "OnRep_OwningTeam", &AControlPoint::execOnRep_OwningTeam },
			{ "OnStartedFlashing", &AControlPoint::execOnStartedFlashing },
			{ "OnStoppedFlashing", &AControlPoint::execOnStoppedFlashing },
			{ "SetCaptureProgress", &AControlPoint::execSetCaptureProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AControlPoint_CanCapture_Statics
	{
		struct ControlPoint_eventCanCapture_Parms
		{
			uint8 Team;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AControlPoint_CanCapture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ControlPoint_eventCanCapture_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlPoint_CanCapture_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ControlPoint_eventCanCapture_Parms), &Z_Construct_UFunction_AControlPoint_CanCapture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AControlPoint_CanCapture_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Byte, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventCanCapture_Parms, Team), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPoint_CanCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_CanCapture_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_CanCapture_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_CanCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_CanCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "CanCapture", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ControlPoint_eventCanCapture_Parms), Z_Construct_UFunction_AControlPoint_CanCapture_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_CanCapture_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_CanCapture_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_CanCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_CanCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_CanCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "EnemyGainedPrerequisites", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "EnemyLostPrerequisites", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_SweepResult = { UE4CodeGen_Private::EPropertyClass::Struct, "SweepResult", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_SweepResult_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	void Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((ControlPoint_eventOnCaptureAreaBeginOverlap_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_bFromSweep = { UE4CodeGen_Private::EPropertyClass::Bool, "bFromSweep", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms), &Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_SweepResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnCaptureAreaBeginOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08420C00, sizeof(ControlPoint_eventOnCaptureAreaBeginOverlap_Parms), Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_OtherBodyIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Other;
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherBodyIndex = { UE4CodeGen_Private::EPropertyClass::Int, "OtherBodyIndex", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherComp = { UE4CodeGen_Private::EPropertyClass::Object, "OtherComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaEndOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_Other = { UE4CodeGen_Private::EPropertyClass::Object, "Other", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaEndOverlap_Parms, Other), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OverlappedComp = { UE4CodeGen_Private::EPropertyClass::Object, "OverlappedComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventOnCaptureAreaEndOverlap_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OverlappedComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_Other,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::NewProp_OverlappedComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnCaptureAreaEndOverlap", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, sizeof(ControlPoint_eventOnCaptureAreaEndOverlap_Parms), Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnCapturingTeamChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnOwningTeamChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnRep_CaptureProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnRep_CapturingTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnRep_OwningTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnStartedFlashing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnStartedFlashing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnStartedFlashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnStartedFlashing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnStartedFlashing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnStartedFlashing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnStartedFlashing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnStartedFlashing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_OnStoppedFlashing_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_OnStoppedFlashing_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointEvents" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_OnStoppedFlashing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "OnStoppedFlashing", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x08020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_OnStoppedFlashing_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_OnStoppedFlashing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_OnStoppedFlashing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_OnStoppedFlashing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics
	{
		struct ControlPoint_eventSetCaptureProgress_Parms
		{
			float NewProgress;
			uint8 NewCaptor;
			bool bAwardScore;
		};
		static void NewProp_bAwardScore_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAwardScore;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_NewCaptor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_bAwardScore_SetBit(void* Obj)
	{
		((ControlPoint_eventSetCaptureProgress_Parms*)Obj)->bAwardScore = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_bAwardScore = { UE4CodeGen_Private::EPropertyClass::Bool, "bAwardScore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ControlPoint_eventSetCaptureProgress_Parms), &Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_bAwardScore_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_NewCaptor = { UE4CodeGen_Private::EPropertyClass::Byte, "NewCaptor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventSetCaptureProgress_Parms, NewCaptor), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_NewProgress = { UE4CodeGen_Private::EPropertyClass::Float, "NewProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventSetCaptureProgress_Parms, NewProgress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_bAwardScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_NewCaptor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::NewProp_NewProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "SetCaptureProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(ControlPoint_eventSetCaptureProgress_Parms), Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_SetCaptureProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_SetCaptureProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ControlPoint_eventUpdateCaptureProgress_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "UpdateCaptureProgress", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(ControlPoint_eventUpdateCaptureProgress_Parms), Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "UpdatePresenceNumbers", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "UpdateUIMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_UpdateUIWidgets_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_UpdateUIWidgets_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_UpdateUIWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "UpdateUIWidgets", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_UpdateUIWidgets_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_UpdateUIWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_UpdateUIWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_UpdateUIWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AControlPoint_UpdateVisuals_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AControlPoint_UpdateVisuals_Statics::Function_MetaDataParams[] = {
		{ "Category", "ControlPointFns" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AControlPoint_UpdateVisuals_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AControlPoint, "UpdateVisuals", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AControlPoint_UpdateVisuals_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AControlPoint_UpdateVisuals_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AControlPoint_UpdateVisuals()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AControlPoint_UpdateVisuals_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AControlPoint_NoRegister()
	{
		return AControlPoint::StaticClass();
	}
	struct Z_Construct_UClass_AControlPoint_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NeutralizeSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NeutralizeSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UncaptureSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UncaptureSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasEverProgress_MetaData[];
#endif
		static void NewProp_bHasEverProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasEverProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPreventSpawningIfContested_MetaData[];
#endif
		static void NewProp_bPreventSpawningIfContested_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPreventSpawningIfContested;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFlashing_MetaData[];
#endif
		static void NewProp_bIsFlashing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFlashing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team2Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1Presence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team1Presence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnPoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnPoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2PrerequisitePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Team2PrerequisitePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Team2PrerequisitePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1PrerequisitePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Team1PrerequisitePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Team1PrerequisitePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturingTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CapturingTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OwningTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetworkSmoothTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NetworkSmoothTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBannersDoNotAnimateCaptureProgress_MetaData[];
#endif
		static void NewProp_bBannersDoNotAnimateCaptureProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBannersDoNotAnimateCaptureProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CaptureProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaptureArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CaptureArea;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Banners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Banners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Banners_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwardScoreNeutralized_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AwardScoreNeutralized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwardScoreNeutralizing_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AwardScoreNeutralizing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwardScoreCaptured_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AwardScoreCaptured;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwardScoreCapturing_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AwardScoreCapturing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AwardScoreInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AwardScoreInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSetUIProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastSetUIProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSetUIBorderColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSetUIBorderColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastSetUIIconColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastSetUIIconColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UIMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotShowInTopBarWidget_MetaData[];
#endif
		static void NewProp_bDoNotShowInTopBarWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotShowInTopBarWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotShowFloaterWidget_MetaData[];
#endif
		static void NewProp_bDoNotShowFloaterWidget_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotShowFloaterWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnsToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnsToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnsTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SpawnsTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterialInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterialInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnsDisabled_MetaData[];
#endif
		static void NewProp_bSpawnsDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnsDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeam2OwnsPrerequisites_MetaData[];
#endif
		static void NewProp_bTeam2OwnsPrerequisites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeam2OwnsPrerequisites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTeam1OwnsPrerequisites_MetaData[];
#endif
		static void NewProp_bTeam1OwnsPrerequisites_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTeam1OwnsPrerequisites;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsCapturable_MetaData[];
#endif
		static void NewProp_bIsCapturable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsCapturable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsHiddenPoint_MetaData[];
#endif
		static void NewProp_bIsHiddenPoint_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsHiddenPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapsCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OverlapsCache;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapsCache_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AControlPoint_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AControlPoint_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AControlPoint_CanCapture, "CanCapture" }, // 1041689373
		{ &Z_Construct_UFunction_AControlPoint_EnemyGainedPrerequisites, "EnemyGainedPrerequisites" }, // 3543443498
		{ &Z_Construct_UFunction_AControlPoint_EnemyLostPrerequisites, "EnemyLostPrerequisites" }, // 3687544592
		{ &Z_Construct_UFunction_AControlPoint_OnCaptureAreaBeginOverlap, "OnCaptureAreaBeginOverlap" }, // 3380982012
		{ &Z_Construct_UFunction_AControlPoint_OnCaptureAreaEndOverlap, "OnCaptureAreaEndOverlap" }, // 3982120616
		{ &Z_Construct_UFunction_AControlPoint_OnCapturingTeamChanged, "OnCapturingTeamChanged" }, // 2571701787
		{ &Z_Construct_UFunction_AControlPoint_OnOwningTeamChanged, "OnOwningTeamChanged" }, // 1534312922
		{ &Z_Construct_UFunction_AControlPoint_OnRep_CaptureProgress, "OnRep_CaptureProgress" }, // 144725852
		{ &Z_Construct_UFunction_AControlPoint_OnRep_CapturingTeam, "OnRep_CapturingTeam" }, // 2408545203
		{ &Z_Construct_UFunction_AControlPoint_OnRep_OwningTeam, "OnRep_OwningTeam" }, // 1788203423
		{ &Z_Construct_UFunction_AControlPoint_OnStartedFlashing, "OnStartedFlashing" }, // 928483495
		{ &Z_Construct_UFunction_AControlPoint_OnStoppedFlashing, "OnStoppedFlashing" }, // 3250774013
		{ &Z_Construct_UFunction_AControlPoint_SetCaptureProgress, "SetCaptureProgress" }, // 2161552130
		{ &Z_Construct_UFunction_AControlPoint_UpdateCaptureProgress, "UpdateCaptureProgress" }, // 814657506
		{ &Z_Construct_UFunction_AControlPoint_UpdatePresenceNumbers, "UpdatePresenceNumbers" }, // 3894535405
		{ &Z_Construct_UFunction_AControlPoint_UpdateUIMaterialInstance, "UpdateUIMaterialInstance" }, // 729191814
		{ &Z_Construct_UFunction_AControlPoint_UpdateUIWidgets, "UpdateUIWidgets" }, // 3093792359
		{ &Z_Construct_UFunction_AControlPoint_UpdateVisuals, "UpdateVisuals" }, // 3703098913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ControlPoint.h" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureSpeedCurve_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureSpeedCurve = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureSpeedCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, CaptureSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureSpeedCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_NeutralizeSpeedCurve_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_NeutralizeSpeedCurve = { UE4CodeGen_Private::EPropertyClass::Object, "NeutralizeSpeedCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, NeutralizeSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_NeutralizeSpeedCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_NeutralizeSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_UncaptureSpeed_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_UncaptureSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "UncaptureSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, UncaptureSpeed), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_UncaptureSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_UncaptureSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bHasEverProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasEverProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bPreventSpawningIfContested = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested = { UE4CodeGen_Private::EPropertyClass::Bool, "bPreventSpawningIfContested", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bIsFlashing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFlashing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2Presence_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2Presence = { UE4CodeGen_Private::EPropertyClass::Int, "Team2Presence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, Team2Presence), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2Presence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2Presence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1Presence_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1Presence = { UE4CodeGen_Private::EPropertyClass::Int, "Team1Presence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, Team1Presence), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1Presence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1Presence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints = { UE4CodeGen_Private::EPropertyClass::Array, "SpawnPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, SpawnPoints), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "SpawnPoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMordhauPlayerStart_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints = { UE4CodeGen_Private::EPropertyClass::Array, "Team2PrerequisitePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, Team2PrerequisitePoints), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Team2PrerequisitePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints = { UE4CodeGen_Private::EPropertyClass::Array, "Team1PrerequisitePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, Team1PrerequisitePoints), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Team1PrerequisitePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_CapturingTeam_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_CapturingTeam = { UE4CodeGen_Private::EPropertyClass::Byte, "CapturingTeam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, CapturingTeam), nullptr, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_CapturingTeam_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_CapturingTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_OwningTeam_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_OwningTeam = { UE4CodeGen_Private::EPropertyClass::Byte, "OwningTeam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, OwningTeam), nullptr, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_OwningTeam_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_OwningTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_NetworkSmoothTime_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_NetworkSmoothTime = { UE4CodeGen_Private::EPropertyClass::Float, "NetworkSmoothTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, NetworkSmoothTime), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_NetworkSmoothTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_NetworkSmoothTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bBannersDoNotAnimateCaptureProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress = { UE4CodeGen_Private::EPropertyClass::Bool, "bBannersDoNotAnimateCaptureProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureProgress_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureProgress = { UE4CodeGen_Private::EPropertyClass::Float, "CaptureProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, CaptureProgress), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureArea_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureArea = { UE4CodeGen_Private::EPropertyClass::Object, "CaptureArea", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AControlPoint, CaptureArea), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureArea_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureArea_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners = { UE4CodeGen_Private::EPropertyClass::Array, "Banners", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, Banners), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "Banners", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_ACapturePointBanner_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralized_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralized = { UE4CodeGen_Private::EPropertyClass::Int, "AwardScoreNeutralized", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, AwardScoreNeutralized), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralized_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralizing_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralizing = { UE4CodeGen_Private::EPropertyClass::Int, "AwardScoreNeutralizing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, AwardScoreNeutralizing), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralizing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralizing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCaptured_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCaptured = { UE4CodeGen_Private::EPropertyClass::Int, "AwardScoreCaptured", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, AwardScoreCaptured), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCaptured_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCaptured_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCapturing_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCapturing = { UE4CodeGen_Private::EPropertyClass::Int, "AwardScoreCapturing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, AwardScoreCapturing), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCapturing_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCapturing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreInterval_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreInterval = { UE4CodeGen_Private::EPropertyClass::Float, "AwardScoreInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, AwardScoreInterval), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIProgress_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIProgress = { UE4CodeGen_Private::EPropertyClass::Float, "LastSetUIProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, LastSetUIProgress), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIBorderColor_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIBorderColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LastSetUIBorderColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, LastSetUIBorderColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIBorderColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIBorderColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIIconColor_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIIconColor = { UE4CodeGen_Private::EPropertyClass::Struct, "LastSetUIIconColor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, LastSetUIIconColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIIconColor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIIconColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterialInstance_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "UIMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, UIMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterial_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "UIMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, UIMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bDoNotShowInTopBarWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotShowInTopBarWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bDoNotShowFloaterWidget = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotShowFloaterWidget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_WidgetComponent_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_WidgetComponent = { UE4CodeGen_Private::EPropertyClass::Object, "WidgetComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001000000008000d, 1, nullptr, STRUCT_OFFSET(AControlPoint, WidgetComponent), Z_Construct_UClass_UMordhauWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_WidgetComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_WidgetComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsToken_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsToken = { UE4CodeGen_Private::EPropertyClass::Int, "SpawnsToken", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, SpawnsToken), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsToken_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsTeam_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsTeam = { UE4CodeGen_Private::EPropertyClass::Int, "SpawnsTeam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, SpawnsTeam), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsTeam_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_DecalMaterialInstance_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_DecalMaterialInstance = { UE4CodeGen_Private::EPropertyClass::Object, "DecalMaterialInstance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, DecalMaterialInstance), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_DecalMaterialInstance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_DecalMaterialInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bSpawnsDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bSpawnsDisabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bTeam2OwnsPrerequisites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeam2OwnsPrerequisites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bTeam1OwnsPrerequisites = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites = { UE4CodeGen_Private::EPropertyClass::Bool, "bTeam1OwnsPrerequisites", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bIsCapturable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsCapturable", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	void Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint_SetBit(void* Obj)
	{
		((AControlPoint*)Obj)->bIsHiddenPoint = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsHiddenPoint", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AControlPoint), &Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint_SetBit, METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_Name = { UE4CodeGen_Private::EPropertyClass::Text, "Name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, Name), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_Name_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache_MetaData[] = {
		{ "Category", "ControlPoint" },
		{ "ModuleRelativePath", "ControlPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache = { UE4CodeGen_Private::EPropertyClass::Array, "OverlapsCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AControlPoint, OverlapsCache), METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "OverlapsCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AControlPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_NeutralizeSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_UncaptureSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bHasEverProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bPreventSpawningIfContested,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsFlashing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1Presence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnPoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Team2PrerequisitePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Team1PrerequisitePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_CapturingTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_OwningTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_NetworkSmoothTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bBannersDoNotAnimateCaptureProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_CaptureArea,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Banners_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreNeutralizing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCaptured,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreCapturing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_AwardScoreInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIBorderColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_LastSetUIIconColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_UIMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowInTopBarWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bDoNotShowFloaterWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_WidgetComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_SpawnsTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_DecalMaterialInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bSpawnsDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam2OwnsPrerequisites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bTeam1OwnsPrerequisites,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsCapturable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_bIsHiddenPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AControlPoint_Statics::NewProp_OverlapsCache_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AControlPoint_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AControlPoint>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AControlPoint_Statics::ClassParams = {
		&AControlPoint::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AControlPoint_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AControlPoint_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AControlPoint_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AControlPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AControlPoint_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AControlPoint, 2042123910);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AControlPoint(Z_Construct_UClass_AControlPoint, &AControlPoint::StaticClass, TEXT("/Script/Mordhau"), TEXT("AControlPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AControlPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
