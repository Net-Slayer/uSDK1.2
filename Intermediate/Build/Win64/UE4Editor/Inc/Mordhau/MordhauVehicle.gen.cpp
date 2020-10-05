// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauVehicle() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauVehicle_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauVehicle();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_CanDrive();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_DriverLateTick();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_GetExitTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FVehicleTransitionInfo();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle();
	MORDHAU_API UClass* Z_Construct_UClass_UAttackMotion_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPOV();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_RequestUse();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_SetDriver();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_StartDriving();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_StopDriving();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauAnimInstance_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
// End Cross Module References
	static FName NAME_AMordhauVehicle_CanDrive = FName(TEXT("CanDrive"));
	bool AMordhauVehicle::CanDrive(AMordhauCharacter* Character)
	{
		MordhauVehicle_eventCanDrive_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_CanDrive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauVehicle_DriverLateTick = FName(TEXT("DriverLateTick"));
	void AMordhauVehicle::DriverLateTick(AMordhauCharacter* FromDriver, float DeltaTime)
	{
		MordhauVehicle_eventDriverLateTick_Parms Parms;
		Parms.FromDriver=FromDriver;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_DriverLateTick),&Parms);
	}
	static FName NAME_AMordhauVehicle_GetExitTransform = FName(TEXT("GetExitTransform"));
	FTransform AMordhauVehicle::GetExitTransform()
	{
		MordhauVehicle_eventGetExitTransform_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_GetExitTransform),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauVehicle_GetVehicleEnterInfo = FName(TEXT("GetVehicleEnterInfo"));
	FVehicleTransitionInfo AMordhauVehicle::GetVehicleEnterInfo(AMordhauCharacter* Character, FTransform const& FromTransform)
	{
		MordhauVehicle_eventGetVehicleEnterInfo_Parms Parms;
		Parms.Character=Character;
		Parms.FromTransform=FromTransform;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_GetVehicleEnterInfo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauVehicle_GetVehicleLeaveInfo = FName(TEXT("GetVehicleLeaveInfo"));
	FVehicleTransitionInfo AMordhauVehicle::GetVehicleLeaveInfo(AMordhauCharacter* Character, FTransform const& FromTransform)
	{
		MordhauVehicle_eventGetVehicleLeaveInfo_Parms Parms;
		Parms.Character=Character;
		Parms.FromTransform=FromTransform;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_GetVehicleLeaveInfo),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauVehicle_KnockOffDriver = FName(TEXT("KnockOffDriver"));
	void AMordhauVehicle::KnockOffDriver(AMordhauCharacter* Character)
	{
		MordhauVehicle_eventKnockOffDriver_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_KnockOffDriver),&Parms);
	}
	static FName NAME_AMordhauVehicle_OnDriverChanged = FName(TEXT("OnDriverChanged"));
	void AMordhauVehicle::OnDriverChanged()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_OnDriverChanged),NULL);
	}
	static FName NAME_AMordhauVehicle_OnStartedDriving = FName(TEXT("OnStartedDriving"));
	void AMordhauVehicle::OnStartedDriving(AMordhauCharacter* Character)
	{
		MordhauVehicle_eventOnStartedDriving_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_OnStartedDriving),&Parms);
	}
	static FName NAME_AMordhauVehicle_OnStoppedDriving = FName(TEXT("OnStoppedDriving"));
	void AMordhauVehicle::OnStoppedDriving(AMordhauCharacter* Character)
	{
		MordhauVehicle_eventOnStoppedDriving_Parms Parms;
		Parms.Character=Character;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_OnStoppedDriving),&Parms);
	}
	static FName NAME_AMordhauVehicle_OverrideAttackAngle = FName(TEXT("OverrideAttackAngle"));
	float AMordhauVehicle::OverrideAttackAngle(UAttackMotion* Motion)
	{
		MordhauVehicle_eventOverrideAttackAngle_Parms Parms;
		Parms.Motion=Motion;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_OverrideAttackAngle),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauVehicle_PostProcessCameraPOV = FName(TEXT("PostProcessCameraPOV"));
	FPOV AMordhauVehicle::PostProcessCameraPOV(FPOV const& InPOV)
	{
		MordhauVehicle_eventPostProcessCameraPOV_Parms Parms;
		Parms.InPOV=InPOV;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_PostProcessCameraPOV),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauVehicle_RequestUse = FName(TEXT("RequestUse"));
	void AMordhauVehicle::RequestUse()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_RequestUse),NULL);
	}
	static FName NAME_AMordhauVehicle_SetDriver = FName(TEXT("SetDriver"));
	void AMordhauVehicle::SetDriver(AMordhauCharacter* NewDriver)
	{
		MordhauVehicle_eventSetDriver_Parms Parms;
		Parms.NewDriver=NewDriver;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_SetDriver),&Parms);
	}
	static FName NAME_AMordhauVehicle_UpdateAnimationFor = FName(TEXT("UpdateAnimationFor"));
	void AMordhauVehicle::UpdateAnimationFor(AMordhauCharacter* Character, UMordhauAnimInstance* AnimInst, float DeltaTime)
	{
		MordhauVehicle_eventUpdateAnimationFor_Parms Parms;
		Parms.Character=Character;
		Parms.AnimInst=AnimInst;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_UpdateAnimationFor),&Parms);
	}
	static FName NAME_AMordhauVehicle_UpdateFPCameraFor = FName(TEXT("UpdateFPCameraFor"));
	void AMordhauVehicle::UpdateFPCameraFor(AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly)
	{
		MordhauVehicle_eventUpdateFPCameraFor_Parms Parms;
		Parms.Character=Character;
		Parms.DeltaSeconds=DeltaSeconds;
		Parms.bRotationOnly=bRotationOnly ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauVehicle_UpdateFPCameraFor),&Parms);
	}
	void AMordhauVehicle::StaticRegisterNativesAMordhauVehicle()
	{
		UClass* Class = AMordhauVehicle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanDrive", &AMordhauVehicle::execCanDrive },
			{ "DriverLateTick", &AMordhauVehicle::execDriverLateTick },
			{ "GetExitTransform", &AMordhauVehicle::execGetExitTransform },
			{ "GetVehicleEnterInfo", &AMordhauVehicle::execGetVehicleEnterInfo },
			{ "GetVehicleLeaveInfo", &AMordhauVehicle::execGetVehicleLeaveInfo },
			{ "KnockOffDriver", &AMordhauVehicle::execKnockOffDriver },
			{ "OnDriverChanged", &AMordhauVehicle::execOnDriverChanged },
			{ "OnRep_SecondaryTurnValue", &AMordhauVehicle::execOnRep_SecondaryTurnValue },
			{ "OnStartedDriving", &AMordhauVehicle::execOnStartedDriving },
			{ "OnStoppedDriving", &AMordhauVehicle::execOnStoppedDriving },
			{ "OverrideAttackAngle", &AMordhauVehicle::execOverrideAttackAngle },
			{ "RequestUse", &AMordhauVehicle::execRequestUse },
			{ "SecondaryTurn", &AMordhauVehicle::execSecondaryTurn },
			{ "SecondaryTurnAtRate", &AMordhauVehicle::execSecondaryTurnAtRate },
			{ "ServerSecondaryTurn", &AMordhauVehicle::execServerSecondaryTurn },
			{ "SetDriver", &AMordhauVehicle::execSetDriver },
			{ "StartDriving", &AMordhauVehicle::execStartDriving },
			{ "StopDriving", &AMordhauVehicle::execStopDriving },
			{ "UpdateFPCameraFor", &AMordhauVehicle::execUpdateFPCameraFor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics
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
	void Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauVehicle_eventCanDrive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauVehicle_eventCanDrive_Parms), &Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventCanDrive_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "CanDrive", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventCanDrive_Parms), Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_CanDrive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_CanDrive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FromDriver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventDriverLateTick_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::NewProp_FromDriver = { UE4CodeGen_Private::EPropertyClass::Object, "FromDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventDriverLateTick_Parms, FromDriver), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::NewProp_FromDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "DriverLateTick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventDriverLateTick_Parms), Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_DriverLateTick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_DriverLateTick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetExitTransform_Parms, ReturnValue), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "GetExitTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820C00, sizeof(MordhauVehicle_eventGetExitTransform_Parms), Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_GetExitTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_GetExitTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetVehicleEnterInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FVehicleTransitionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_FromTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_FromTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "FromTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetVehicleEnterInfo_Parms, FromTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_FromTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_FromTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetVehicleEnterInfo_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_FromTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "GetVehicleEnterInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(MordhauVehicle_eventGetVehicleEnterInfo_Parms), Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FromTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FromTransform;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetVehicleLeaveInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FVehicleTransitionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_FromTransform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_FromTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "FromTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetVehicleLeaveInfo_Parms, FromTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_FromTransform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_FromTransform_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventGetVehicleLeaveInfo_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_FromTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "GetVehicleLeaveInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(MordhauVehicle_eventGetVehicleLeaveInfo_Parms), Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventKnockOffDriver_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "KnockOffDriver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventKnockOffDriver_Parms), Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "OnDriverChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleFns" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "OnRep_SecondaryTurnValue", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventOnStartedDriving_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "OnStartedDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventOnStartedDriving_Parms), Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventOnStoppedDriving_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "OnStoppedDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventOnStoppedDriving_Parms), Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Motion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventOverrideAttackAngle_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::NewProp_Motion = { UE4CodeGen_Private::EPropertyClass::Object, "Motion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventOverrideAttackAngle_Parms, Motion), Z_Construct_UClass_UAttackMotion_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::NewProp_Motion,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "OverrideAttackAngle", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventOverrideAttackAngle_Parms), Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InPOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InPOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventPostProcessCameraPOV_Parms, ReturnValue), Z_Construct_UScriptStruct_FPOV, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_InPOV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_InPOV = { UE4CodeGen_Private::EPropertyClass::Struct, "InPOV", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventPostProcessCameraPOV_Parms, InPOV), Z_Construct_UScriptStruct_FPOV, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_InPOV_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_InPOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::NewProp_InPOV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "PostProcessCameraPOV", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420800, sizeof(MordhauVehicle_eventPostProcessCameraPOV_Parms), Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_RequestUse_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_RequestUse_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_RequestUse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "RequestUse", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_RequestUse_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_RequestUse_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_RequestUse()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_RequestUse_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics
	{
		struct MordhauVehicle_eventSecondaryTurn_Parms
		{
			float Value;
			bool bIsAbsolute;
		};
		static void NewProp_bIsAbsolute_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsAbsolute;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::NewProp_bIsAbsolute_SetBit(void* Obj)
	{
		((MordhauVehicle_eventSecondaryTurn_Parms*)Obj)->bIsAbsolute = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::NewProp_bIsAbsolute = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsAbsolute", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauVehicle_eventSecondaryTurn_Parms), &Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::NewProp_bIsAbsolute_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventSecondaryTurn_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::NewProp_bIsAbsolute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleFns" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "SecondaryTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauVehicle_eventSecondaryTurn_Parms), Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics
	{
		struct MordhauVehicle_eventSecondaryTurnAtRate_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::NewProp_Value = { UE4CodeGen_Private::EPropertyClass::Float, "Value", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventSecondaryTurnAtRate_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleFns" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "SecondaryTurnAtRate", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauVehicle_eventSecondaryTurnAtRate_Parms), Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics
	{
		struct MordhauVehicle_eventServerSecondaryTurn_Parms
		{
			float NewTurn;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewTurn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::NewProp_NewTurn = { UE4CodeGen_Private::EPropertyClass::Float, "NewTurn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventServerSecondaryTurn_Parms, NewTurn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::NewProp_NewTurn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleFns" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "ServerSecondaryTurn", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauVehicle_eventServerSecondaryTurn_Parms), Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewDriver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::NewProp_NewDriver = { UE4CodeGen_Private::EPropertyClass::Object, "NewDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventSetDriver_Parms, NewDriver), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::NewProp_NewDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "SetDriver", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventSetDriver_Parms), Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_SetDriver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_SetDriver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics
	{
		struct MordhauVehicle_eventStartDriving_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventStartDriving_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleFns" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "StartDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauVehicle_eventStartDriving_Parms), Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_StartDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_StartDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_StopDriving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_StopDriving_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleFns" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_StopDriving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "StopDriving", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_StopDriving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_StopDriving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_StopDriving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_StopDriving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AnimInst;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventUpdateAnimationFor_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::NewProp_AnimInst = { UE4CodeGen_Private::EPropertyClass::Object, "AnimInst", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventUpdateAnimationFor_Parms, AnimInst), Z_Construct_UClass_UMordhauAnimInstance_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventUpdateAnimationFor_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::NewProp_AnimInst,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "UpdateAnimationFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauVehicle_eventUpdateAnimationFor_Parms), Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics
	{
		static void NewProp_bRotationOnly_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotationOnly;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaSeconds;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_bRotationOnly_SetBit(void* Obj)
	{
		((MordhauVehicle_eventUpdateFPCameraFor_Parms*)Obj)->bRotationOnly = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_bRotationOnly = { UE4CodeGen_Private::EPropertyClass::Bool, "bRotationOnly", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauVehicle_eventUpdateFPCameraFor_Parms), &Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_bRotationOnly_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_DeltaSeconds = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaSeconds", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventUpdateFPCameraFor_Parms, DeltaSeconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauVehicle_eventUpdateFPCameraFor_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_bRotationOnly,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_DeltaSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauVehicleEvents" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauVehicle, "UpdateFPCameraFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauVehicle_eventUpdateFPCameraFor_Parms), Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauVehicle_NoRegister()
	{
		return AMordhauVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinZDistanceToEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinZDistanceToEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinXYDistanceToEnter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinXYDistanceToEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainAnimationType_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MainAnimationType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisarmOnEnter_MetaData[];
#endif
		static void NewProp_bDisarmOnEnter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisarmOnEnter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLeaveOnDamage_MetaData[];
#endif
		static void NewProp_bLeaveOnDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLeaveOnDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDetachRotation_MetaData[];
#endif
		static void NewProp_bUseDetachRotation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDetachRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DetachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttachSocketOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VehicleName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_VehicleName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Driver_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Driver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTurnValueSmoothingStartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryTurnValueSmoothingStartTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTurnValueSmoothingFrom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryTurnValueSmoothingFrom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTurnValueSmoothingTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryTurnValueSmoothingTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTurnLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryTurnLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTurnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SecondaryTurnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetLookUpWhenNoDriver_MetaData[];
#endif
		static void NewProp_bResetLookUpWhenNoDriver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetLookUpWhenNoDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bResetSecondaryTurnWhenNoDriver_MetaData[];
#endif
		static void NewProp_bResetSecondaryTurnWhenNoDriver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bResetSecondaryTurnWhenNoDriver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCounteractTurnWithSecondaryTurn_MetaData[];
#endif
		static void NewProp_bCounteractTurnWithSecondaryTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCounteractTurnWithSecondaryTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseDriverTurnCaps_MetaData[];
#endif
		static void NewProp_bUseDriverTurnCaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseDriverTurnCaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableCameraDistance_MetaData[];
#endif
		static void NewProp_bDisableCameraDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableCameraDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDistanceCorrectionForLeaveSpot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxDistanceCorrectionForLeaveSpot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumInteractableVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumInteractableVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDriverRegenStamina_MetaData[];
#endif
		static void NewProp_bCanDriverRegenStamina_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDriverRegenStamina;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanDriverRegenHealth_MetaData[];
#endif
		static void NewProp_bCanDriverRegenHealth_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanDriverRegenHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedDyingHealthReductionInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UnusedDyingHealthReductionInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnusedDyingHealthReduction_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_UnusedDyingHealthReduction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTimeToStartUnusedDying_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinTimeToStartUnusedDying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWillDieIfUnused_MetaData[];
#endif
		static void NewProp_bWillDieIfUnused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWillDieIfUnused;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseVisualPingCompensationOnAttacks_MetaData[];
#endif
		static void NewProp_bUseVisualPingCompensationOnAttacks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseVisualPingCompensationOnAttacks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTickDriverAnimsAfterOurs_MetaData[];
#endif
		static void NewProp_bTickDriverAnimsAfterOurs_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTickDriverAnimsAfterOurs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentUnusedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CurrentUnusedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasEverDriven_MetaData[];
#endif
		static void NewProp_bWasEverDriven_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasEverDriven;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAdvancedCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauVehicle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauVehicle_CanDrive, "CanDrive" }, // 1334015629
		{ &Z_Construct_UFunction_AMordhauVehicle_DriverLateTick, "DriverLateTick" }, // 3475918090
		{ &Z_Construct_UFunction_AMordhauVehicle_GetExitTransform, "GetExitTransform" }, // 1714633145
		{ &Z_Construct_UFunction_AMordhauVehicle_GetVehicleEnterInfo, "GetVehicleEnterInfo" }, // 803814575
		{ &Z_Construct_UFunction_AMordhauVehicle_GetVehicleLeaveInfo, "GetVehicleLeaveInfo" }, // 662689864
		{ &Z_Construct_UFunction_AMordhauVehicle_KnockOffDriver, "KnockOffDriver" }, // 981353724
		{ &Z_Construct_UFunction_AMordhauVehicle_OnDriverChanged, "OnDriverChanged" }, // 197577100
		{ &Z_Construct_UFunction_AMordhauVehicle_OnRep_SecondaryTurnValue, "OnRep_SecondaryTurnValue" }, // 576234681
		{ &Z_Construct_UFunction_AMordhauVehicle_OnStartedDriving, "OnStartedDriving" }, // 2501057930
		{ &Z_Construct_UFunction_AMordhauVehicle_OnStoppedDriving, "OnStoppedDriving" }, // 1700597658
		{ &Z_Construct_UFunction_AMordhauVehicle_OverrideAttackAngle, "OverrideAttackAngle" }, // 435473253
		{ &Z_Construct_UFunction_AMordhauVehicle_PostProcessCameraPOV, "PostProcessCameraPOV" }, // 450351197
		{ &Z_Construct_UFunction_AMordhauVehicle_RequestUse, "RequestUse" }, // 2938775830
		{ &Z_Construct_UFunction_AMordhauVehicle_SecondaryTurn, "SecondaryTurn" }, // 2585055918
		{ &Z_Construct_UFunction_AMordhauVehicle_SecondaryTurnAtRate, "SecondaryTurnAtRate" }, // 1869223924
		{ &Z_Construct_UFunction_AMordhauVehicle_ServerSecondaryTurn, "ServerSecondaryTurn" }, // 2343803953
		{ &Z_Construct_UFunction_AMordhauVehicle_SetDriver, "SetDriver" }, // 2697258567
		{ &Z_Construct_UFunction_AMordhauVehicle_StartDriving, "StartDriving" }, // 2545868733
		{ &Z_Construct_UFunction_AMordhauVehicle_StopDriving, "StopDriving" }, // 357518814
		{ &Z_Construct_UFunction_AMordhauVehicle_UpdateAnimationFor, "UpdateAnimationFor" }, // 2231826725
		{ &Z_Construct_UFunction_AMordhauVehicle_UpdateFPCameraFor, "UpdateFPCameraFor" }, // 3129344092
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MordhauVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
		{ "ToolTip", "USTRUCT(BlueprintType)\nstruct FVehicleTransitionInfo\n{\n       GENERATED_BODY()\npublic:\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       class UAnimSequence*                               Animation;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       float                                              Duration;\n       UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       float                                              BlendTime;\n};" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinZDistanceToEnter_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinZDistanceToEnter = { UE4CodeGen_Private::EPropertyClass::Struct, "MinZDistanceToEnter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, MinZDistanceToEnter), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinZDistanceToEnter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinZDistanceToEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinXYDistanceToEnter_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinXYDistanceToEnter = { UE4CodeGen_Private::EPropertyClass::Float, "MinXYDistanceToEnter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, MinXYDistanceToEnter), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinXYDistanceToEnter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinXYDistanceToEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MainAnimationType_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MainAnimationType = { UE4CodeGen_Private::EPropertyClass::Name, "MainAnimationType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, MainAnimationType), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MainAnimationType_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MainAnimationType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bDisarmOnEnter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisarmOnEnter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bLeaveOnDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage = { UE4CodeGen_Private::EPropertyClass::Bool, "bLeaveOnDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bUseDetachRotation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDetachRotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_DetachSocketName_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_DetachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "DetachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, DetachSocketName), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_DetachSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_DetachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketOffset_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "AttachSocketOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, AttachSocketOffset), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketName_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketName = { UE4CodeGen_Private::EPropertyClass::Name, "AttachSocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, AttachSocketName), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_VehicleName_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_VehicleName = { UE4CodeGen_Private::EPropertyClass::Text, "VehicleName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, VehicleName), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_VehicleName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_VehicleName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_Driver_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_Driver = { UE4CodeGen_Private::EPropertyClass::Object, "Driver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, Driver), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_Driver_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_Driver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingStartTime_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingStartTime = { UE4CodeGen_Private::EPropertyClass::Float, "SecondaryTurnValueSmoothingStartTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, SecondaryTurnValueSmoothingStartTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingStartTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingStartTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingFrom_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingFrom = { UE4CodeGen_Private::EPropertyClass::Float, "SecondaryTurnValueSmoothingFrom", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, SecondaryTurnValueSmoothingFrom), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingFrom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingFrom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingTarget_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingTarget = { UE4CodeGen_Private::EPropertyClass::Float, "SecondaryTurnValueSmoothingTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, SecondaryTurnValueSmoothingTarget), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnLimit_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnLimit = { UE4CodeGen_Private::EPropertyClass::Float, "SecondaryTurnLimit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, SecondaryTurnLimit), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnLimit_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValue_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValue = { UE4CodeGen_Private::EPropertyClass::Float, "SecondaryTurnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, SecondaryTurnValue), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bResetLookUpWhenNoDriver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetLookUpWhenNoDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bResetSecondaryTurnWhenNoDriver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver = { UE4CodeGen_Private::EPropertyClass::Bool, "bResetSecondaryTurnWhenNoDriver", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bCounteractTurnWithSecondaryTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn = { UE4CodeGen_Private::EPropertyClass::Bool, "bCounteractTurnWithSecondaryTurn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bUseDriverTurnCaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseDriverTurnCaps", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bDisableCameraDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableCameraDistance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MaxDistanceCorrectionForLeaveSpot_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MaxDistanceCorrectionForLeaveSpot = { UE4CodeGen_Private::EPropertyClass::Float, "MaxDistanceCorrectionForLeaveSpot", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, MaxDistanceCorrectionForLeaveSpot), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MaxDistanceCorrectionForLeaveSpot_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MaxDistanceCorrectionForLeaveSpot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinimumInteractableVelocity_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinimumInteractableVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "MinimumInteractableVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, MinimumInteractableVelocity), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinimumInteractableVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinimumInteractableVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bCanDriverRegenStamina = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanDriverRegenStamina", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bCanDriverRegenHealth = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth = { UE4CodeGen_Private::EPropertyClass::Bool, "bCanDriverRegenHealth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReductionInterval_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReductionInterval = { UE4CodeGen_Private::EPropertyClass::Float, "UnusedDyingHealthReductionInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, UnusedDyingHealthReductionInterval), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReductionInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReductionInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReduction_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReduction = { UE4CodeGen_Private::EPropertyClass::Byte, "UnusedDyingHealthReduction", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, UnusedDyingHealthReduction), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReduction_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReduction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinTimeToStartUnusedDying_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinTimeToStartUnusedDying = { UE4CodeGen_Private::EPropertyClass::Float, "MinTimeToStartUnusedDying", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, MinTimeToStartUnusedDying), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinTimeToStartUnusedDying_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinTimeToStartUnusedDying_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bWillDieIfUnused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused = { UE4CodeGen_Private::EPropertyClass::Bool, "bWillDieIfUnused", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bUseVisualPingCompensationOnAttacks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseVisualPingCompensationOnAttacks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bTickDriverAnimsAfterOurs = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs = { UE4CodeGen_Private::EPropertyClass::Bool, "bTickDriverAnimsAfterOurs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_CurrentUnusedTime_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_CurrentUnusedTime = { UE4CodeGen_Private::EPropertyClass::Float, "CurrentUnusedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauVehicle, CurrentUnusedTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_CurrentUnusedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_CurrentUnusedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven_MetaData[] = {
		{ "Category", "MordhauVehicle" },
		{ "ModuleRelativePath", "MordhauVehicle.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven_SetBit(void* Obj)
	{
		((AMordhauVehicle*)Obj)->bWasEverDriven = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasEverDriven", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauVehicle), &Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinZDistanceToEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinXYDistanceToEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MainAnimationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisarmOnEnter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bLeaveOnDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDetachRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_DetachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_AttachSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_VehicleName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_Driver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingStartTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingFrom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValueSmoothingTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_SecondaryTurnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetLookUpWhenNoDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bResetSecondaryTurnWhenNoDriver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCounteractTurnWithSecondaryTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseDriverTurnCaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bDisableCameraDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MaxDistanceCorrectionForLeaveSpot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinimumInteractableVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenStamina,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bCanDriverRegenHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReductionInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_UnusedDyingHealthReduction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_MinTimeToStartUnusedDying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWillDieIfUnused,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bUseVisualPingCompensationOnAttacks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bTickDriverAnimsAfterOurs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_CurrentUnusedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauVehicle_Statics::NewProp_bWasEverDriven,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauVehicle_Statics::ClassParams = {
		&AMordhauVehicle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauVehicle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauVehicle, 2339072634);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauVehicle(Z_Construct_UClass_AMordhauVehicle, &AMordhauVehicle::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
