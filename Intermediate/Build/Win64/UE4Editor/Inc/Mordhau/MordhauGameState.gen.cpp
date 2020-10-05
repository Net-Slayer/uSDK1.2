// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauGameState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauGameState() {}
// Cross Module References
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FCapturePointGroup();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UClass* Z_Construct_UClass_AControlPoint_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FEmpty_array();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameState_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauGameState();
	ENGINE_API UClass* Z_Construct_UClass_AGameState();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerState_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor();
	MORDHAU_API UClass* Z_Construct_UClass_AMapCameraActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetTeamColor();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_GetTeamName();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FStatInt();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauStats_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_IsFriendly();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor();
	MORDHAU_API UClass* Z_Construct_UClass_AParticleSystemActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauEquipment_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_APreSkinnedPoseOracle_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauUtilityLibrary_NoRegister();
// End Cross Module References
class UScriptStruct* FCapturePointGroup::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FCapturePointGroup_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCapturePointGroup, Z_Construct_UPackage__Script_Mordhau(), TEXT("CapturePointGroup"), sizeof(FCapturePointGroup), Get_Z_Construct_UScriptStruct_FCapturePointGroup_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCapturePointGroup(FCapturePointGroup::StaticStruct, TEXT("/Script/Mordhau"), TEXT("CapturePointGroup"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFCapturePointGroup
{
	FScriptStruct_Mordhau_StaticRegisterNativesFCapturePointGroup()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CapturePointGroup")),new UScriptStruct::TCppStructOps<FCapturePointGroup>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFCapturePointGroup;
	struct Z_Construct_UScriptStruct_FCapturePointGroup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapturePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapturePoints_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturePointGroup_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCapturePointGroup>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints_MetaData[] = {
		{ "Category", "CapturePointGroup" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints = { UE4CodeGen_Private::EPropertyClass::Array, "CapturePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FCapturePointGroup, CapturePoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CapturePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCapturePointGroup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCapturePointGroup_Statics::NewProp_CapturePoints_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCapturePointGroup_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"CapturePointGroup",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FCapturePointGroup),
		alignof(FCapturePointGroup),
		Z_Construct_UScriptStruct_FCapturePointGroup_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturePointGroup_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCapturePointGroup_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FCapturePointGroup_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCapturePointGroup()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCapturePointGroup_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CapturePointGroup"), sizeof(FCapturePointGroup), Get_Z_Construct_UScriptStruct_FCapturePointGroup_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCapturePointGroup_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCapturePointGroup_CRC() { return 2346980401U; }
class UScriptStruct* FEmpty_array::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FEmpty_array_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmpty_array, Z_Construct_UPackage__Script_Mordhau(), TEXT("Empty_array"), sizeof(FEmpty_array), Get_Z_Construct_UScriptStruct_FEmpty_array_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmpty_array(FEmpty_array::StaticStruct, TEXT("/Script/Mordhau"), TEXT("Empty_array"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFEmpty_array
{
	FScriptStruct_Mordhau_StaticRegisterNativesFEmpty_array()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Empty_array")),new UScriptStruct::TCppStructOps<FEmpty_array>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFEmpty_array;
	struct Z_Construct_UScriptStruct_FEmpty_array_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nonsense_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_nonsense;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_nonsense_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmpty_array_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmpty_array_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmpty_array>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense_MetaData[] = {
		{ "Category", "Empty_array" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense = { UE4CodeGen_Private::EPropertyClass::Array, "nonsense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020001, 1, nullptr, STRUCT_OFFSET(FEmpty_array, nonsense), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "nonsense", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmpty_array_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmpty_array_Statics::NewProp_nonsense_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmpty_array_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"Empty_array",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEmpty_array),
		alignof(FEmpty_array),
		Z_Construct_UScriptStruct_FEmpty_array_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmpty_array_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmpty_array_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEmpty_array_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmpty_array()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmpty_array_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Empty_array"), sizeof(FEmpty_array), Get_Z_Construct_UScriptStruct_FEmpty_array_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmpty_array_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmpty_array_CRC() { return 3373933801U; }
	static FName NAME_AMordhauGameState_CanImmediatelyChangeProfile = FName(TEXT("CanImmediatelyChangeProfile"));
	bool AMordhauGameState::CanImmediatelyChangeProfile(AController* Controller)
	{
		MordhauGameState_eventCanImmediatelyChangeProfile_Parms Parms;
		Parms.Controller=Controller;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameState_CanImmediatelyChangeProfile),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameState_GetTeamColor = FName(TEXT("GetTeamColor"));
	FLinearColor AMordhauGameState::GetTeamColor(int32 Team)
	{
		MordhauGameState_eventGetTeamColor_Parms Parms;
		Parms.Team=Team;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameState_GetTeamColor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameState_IsFriendly = FName(TEXT("IsFriendly"));
	bool AMordhauGameState::IsFriendly(AActor* ActorA, AActor* ActorB)
	{
		MordhauGameState_eventIsFriendly_Parms Parms;
		Parms.ActorA=ActorA;
		Parms.ActorB=ActorB;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameState_IsFriendly),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauGameState_LocalPlayerChangedTeam = FName(TEXT("LocalPlayerChangedTeam"));
	void AMordhauGameState::LocalPlayerChangedTeam()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameState_LocalPlayerChangedTeam),NULL);
	}
	static FName NAME_AMordhauGameState_ShouldBlockPawnInput = FName(TEXT("ShouldBlockPawnInput"));
	bool AMordhauGameState::ShouldBlockPawnInput()
	{
		MordhauGameState_eventShouldBlockPawnInput_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauGameState_ShouldBlockPawnInput),&Parms);
		return !!Parms.ReturnValue;
	}
	void AMordhauGameState::StaticRegisterNativesAMordhauGameState()
	{
		UClass* Class = AMordhauGameState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanPlayerJoinTeam", &AMordhauGameState::execCanPlayerJoinTeam },
			{ "GetAppropriateMapCameraActor", &AMordhauGameState::execGetAppropriateMapCameraActor },
			{ "GetBindPoseTransform", &AMordhauGameState::execGetBindPoseTransform },
			{ "GetCharacterByDistanceRank", &AMordhauGameState::execGetCharacterByDistanceRank },
			{ "GetCurrentFrame", &AMordhauGameState::execGetCurrentFrame },
			{ "GetEquipmentCacheHash", &AMordhauGameState::execGetEquipmentCacheHash },
			{ "GetEquipmentMeshFromCache", &AMordhauGameState::execGetEquipmentMeshFromCache },
			{ "GetPlayerCountsPerTeam", &AMordhauGameState::execGetPlayerCountsPerTeam },
			{ "GetSecondaryTeamColor", &AMordhauGameState::execGetSecondaryTeamColor },
			{ "GetTeamName", &AMordhauGameState::execGetTeamName },
			{ "IncrementIntStatValueChecked", &AMordhauGameState::execIncrementIntStatValueChecked },
			{ "RegisterParticleSystemActor", &AMordhauGameState::execRegisterParticleSystemActor },
			{ "RemoveCharacterFromDistanceArray", &AMordhauGameState::execRemoveCharacterFromDistanceArray },
			{ "ReserveCharacterRagdoll", &AMordhauGameState::execReserveCharacterRagdoll },
			{ "ShouldPaintGearWithTeamColors", &AMordhauGameState::execShouldPaintGearWithTeamColors },
			{ "ShouldTickAnimationThisFrame", &AMordhauGameState::execShouldTickAnimationThisFrame },
			{ "ShouldTickThisFrame", &AMordhauGameState::execShouldTickThisFrame },
			{ "StoreEquipmentMeshInCache", &AMordhauGameState::execStoreEquipmentMeshInCache },
			{ "UnregisterParticleSystemActor", &AMordhauGameState::execUnregisterParticleSystemActor },
			{ "UpdateCapturePointData", &AMordhauGameState::execUpdateCapturePointData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventCanImmediatelyChangeProfile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventCanImmediatelyChangeProfile_Parms), &Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventCanImmediatelyChangeProfile_Parms, Controller), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateEvents" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "CanImmediatelyChangeProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauGameState_eventCanImmediatelyChangeProfile_Parms), Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics
	{
		struct MordhauGameState_eventCanPlayerJoinTeam_Parms
		{
			AMordhauPlayerState* Player;
			int32 Team;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventCanPlayerJoinTeam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventCanPlayerJoinTeam_Parms), &Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventCanPlayerJoinTeam_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventCanPlayerJoinTeam_Parms, Player), Z_Construct_UClass_AMordhauPlayerState_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "CanPlayerJoinTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventCanPlayerJoinTeam_Parms), Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics
	{
		struct MordhauGameState_eventGetAppropriateMapCameraActor_Parms
		{
			APlayerController* Controller;
			AMapCameraActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Controller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetAppropriateMapCameraActor_Parms, ReturnValue), Z_Construct_UClass_AMapCameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::NewProp_Controller = { UE4CodeGen_Private::EPropertyClass::Object, "Controller", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetAppropriateMapCameraActor_Parms, Controller), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::NewProp_Controller,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetAppropriateMapCameraActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventGetAppropriateMapCameraActor_Parms), Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics
	{
		struct MordhauGameState_eventGetBindPoseTransform_Parms
		{
			FTransform transformTmp;
			USkeletalMesh* Mesh;
			FName SocketName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_transformTmp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_SocketName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_SocketName = { UE4CodeGen_Private::EPropertyClass::Name, "SocketName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetBindPoseTransform_Parms, SocketName), METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_SocketName_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_SocketName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetBindPoseTransform_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_transformTmp = { UE4CodeGen_Private::EPropertyClass::Struct, "transformTmp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetBindPoseTransform_Parms, transformTmp), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_Mesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::NewProp_transformTmp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetBindPoseTransform", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauGameState_eventGetBindPoseTransform_Parms), Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics
	{
		struct MordhauGameState_eventGetCharacterByDistanceRank_Parms
		{
			int32 DistanceRank;
			AAdvancedCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DistanceRank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetCharacterByDistanceRank_Parms, ReturnValue), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::NewProp_DistanceRank = { UE4CodeGen_Private::EPropertyClass::Int, "DistanceRank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetCharacterByDistanceRank_Parms, DistanceRank), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::NewProp_DistanceRank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetCharacterByDistanceRank", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventGetCharacterByDistanceRank_Parms), Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics
	{
		struct MordhauGameState_eventGetCurrentFrame_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetCurrentFrame_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetCurrentFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventGetCurrentFrame_Parms), Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics
	{
		struct MordhauGameState_eventGetEquipmentCacheHash_Parms
		{
			int32 ID;
			uint8 Skin;
			uint8 Part1;
			uint8 Part2;
			uint8 Part3;
			bool bUseAuxiliaryMesh;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseAuxiliaryMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAuxiliaryMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Skin;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentCacheHash_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_bUseAuxiliaryMesh_SetBit(void* Obj)
	{
		((MordhauGameState_eventGetEquipmentCacheHash_Parms*)Obj)->bUseAuxiliaryMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_bUseAuxiliaryMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAuxiliaryMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventGetEquipmentCacheHash_Parms), &Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_bUseAuxiliaryMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Part3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentCacheHash_Parms, Part3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Part2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentCacheHash_Parms, Part2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Part1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentCacheHash_Parms, Part1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Skin = { UE4CodeGen_Private::EPropertyClass::Byte, "Skin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentCacheHash_Parms, Skin), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentCacheHash_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_bUseAuxiliaryMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Part3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Part2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Part1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetEquipmentCacheHash", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventGetEquipmentCacheHash_Parms), Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics
	{
		struct MordhauGameState_eventGetEquipmentMeshFromCache_Parms
		{
			int32 ID;
			uint8 Skin;
			uint8 Part1;
			uint8 Part2;
			uint8 Part3;
			bool bUseAuxiliaryMesh;
			USkeletalMesh* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_bUseAuxiliaryMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAuxiliaryMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Skin;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentMeshFromCache_Parms, ReturnValue), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_bUseAuxiliaryMesh_SetBit(void* Obj)
	{
		((MordhauGameState_eventGetEquipmentMeshFromCache_Parms*)Obj)->bUseAuxiliaryMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_bUseAuxiliaryMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAuxiliaryMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventGetEquipmentMeshFromCache_Parms), &Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_bUseAuxiliaryMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Part3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentMeshFromCache_Parms, Part3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Part2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentMeshFromCache_Parms, Part2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Part1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentMeshFromCache_Parms, Part1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Skin = { UE4CodeGen_Private::EPropertyClass::Byte, "Skin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentMeshFromCache_Parms, Skin), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetEquipmentMeshFromCache_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_bUseAuxiliaryMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Part3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Part2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Part1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::NewProp_ID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetEquipmentMeshFromCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventGetEquipmentMeshFromCache_Parms), Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics
	{
		struct MordhauGameState_eventGetPlayerCountsPerTeam_Parms
		{
			TArray<int32> ReturnValue;
			bool bOnlyLiving;
			bool bOnlyWithValidProfiles;
		};
		static void NewProp_bOnlyWithValidProfiles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyWithValidProfiles;
		static void NewProp_bOnlyLiving_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOnlyLiving;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyWithValidProfiles_SetBit(void* Obj)
	{
		((MordhauGameState_eventGetPlayerCountsPerTeam_Parms*)Obj)->bOnlyWithValidProfiles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyWithValidProfiles = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyWithValidProfiles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventGetPlayerCountsPerTeam_Parms), &Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyWithValidProfiles_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyLiving_SetBit(void* Obj)
	{
		((MordhauGameState_eventGetPlayerCountsPerTeam_Parms*)Obj)->bOnlyLiving = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyLiving = { UE4CodeGen_Private::EPropertyClass::Bool, "bOnlyLiving", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventGetPlayerCountsPerTeam_Parms), &Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyLiving_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Array, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetPlayerCountsPerTeam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_ReturnValue_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyWithValidProfiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_bOnlyLiving,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetPlayerCountsPerTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauGameState_eventGetPlayerCountsPerTeam_Parms), Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics
	{
		struct MordhauGameState_eventGetSecondaryTeamColor_Parms
		{
			int32 Team;
			FLinearColor ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetSecondaryTeamColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetSecondaryTeamColor_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       struct FSTRUCT_SkirmishRoundInfo RoundInfo;\n/UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       struct FSTRUCT_SkirmishRoundInfo RoundInfo_0;\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\n       struct FSTRUCT_MatchEndInfo MatchEndInfo;\nUPROPERTY(EditAnywhere, BlueprintReadWrite)\nTEnumAsByte<E_SkirmishRoundStage> LastObservedRoundStage;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetSecondaryTeamColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04820401, sizeof(MordhauGameState_eventGetSecondaryTeamColor_Parms), Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetTeamColor_Parms, ReturnValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetTeamColor_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateEvents" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetTeamColor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C820800, sizeof(MordhauGameState_eventGetTeamColor_Parms), Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetTeamColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetTeamColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics
	{
		struct MordhauGameState_eventGetTeamName_Parms
		{
			int32 Team;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetTeamName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventGetTeamName_Parms, Team), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::NewProp_Team,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "GetTeamName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventGetTeamName_Parms), Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_GetTeamName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_GetTeamName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics
	{
		struct MordhauGameState_eventIncrementIntStatValueChecked_Parms
		{
			UMordhauStats* Target;
			UObject* World;
			FStatInt Stat;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventIncrementIntStatValueChecked_Parms, Stat), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventIncrementIntStatValueChecked_Parms, World), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::NewProp_Target = { UE4CodeGen_Private::EPropertyClass::Object, "Target", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventIncrementIntStatValueChecked_Parms, Target), Z_Construct_UClass_UMordhauStats_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::NewProp_World,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::NewProp_Target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "IncrementIntStatValueChecked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventIncrementIntStatValueChecked_Parms), Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorB;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventIsFriendly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventIsFriendly_Parms), &Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ActorB = { UE4CodeGen_Private::EPropertyClass::Object, "ActorB", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventIsFriendly_Parms, ActorB), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ActorA = { UE4CodeGen_Private::EPropertyClass::Object, "ActorA", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventIsFriendly_Parms, ActorA), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ActorB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::NewProp_ActorA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateEvents" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "IsFriendly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauGameState_eventIsFriendly_Parms), Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_IsFriendly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_IsFriendly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateEvents" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "LocalPlayerChangedTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics
	{
		struct MordhauGameState_eventRegisterParticleSystemActor_Parms
		{
			AParticleSystemActor* ParticleActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::NewProp_ParticleActor = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventRegisterParticleSystemActor_Parms, ParticleActor), Z_Construct_UClass_AParticleSystemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::NewProp_ParticleActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "RegisterParticleSystemActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventRegisterParticleSystemActor_Parms), Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics
	{
		struct MordhauGameState_eventRemoveCharacterFromDistanceArray_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventRemoveCharacterFromDistanceArray_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "RemoveCharacterFromDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventRemoveCharacterFromDistanceArray_Parms), Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics
	{
		struct MordhauGameState_eventReserveCharacterRagdoll_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventReserveCharacterRagdoll_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "ReserveCharacterRagdoll", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventReserveCharacterRagdoll_Parms), Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventShouldBlockPawnInput_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventShouldBlockPawnInput_Parms), &Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateEvents" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "ShouldBlockPawnInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauGameState_eventShouldBlockPawnInput_Parms), Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics
	{
		struct MordhauGameState_eventShouldPaintGearWithTeamColors_Parms
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
	void Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventShouldPaintGearWithTeamColors_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventShouldPaintGearWithTeamColors_Parms), &Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "ShouldPaintGearWithTeamColors", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventShouldPaintGearWithTeamColors_Parms), Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics
	{
		struct MordhauGameState_eventShouldTickAnimationThisFrame_Parms
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
	void Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventShouldTickAnimationThisFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventShouldTickAnimationThisFrame_Parms), &Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventShouldTickAnimationThisFrame_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "ShouldTickAnimationThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventShouldTickAnimationThisFrame_Parms), Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics
	{
		struct MordhauGameState_eventShouldTickThisFrame_Parms
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
	void Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauGameState_eventShouldTickThisFrame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventShouldTickThisFrame_Parms), &Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventShouldTickThisFrame_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "ShouldTickThisFrame", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventShouldTickThisFrame_Parms), Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics
	{
		struct MordhauGameState_eventStoreEquipmentMeshInCache_Parms
		{
			USkeletalMesh* Mesh;
			int32 ID;
			uint8 Skin;
			uint8 Part1;
			uint8 Part2;
			uint8 Part3;
			bool bUseAuxiliaryMesh;
		};
		static void NewProp_bUseAuxiliaryMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseAuxiliaryMesh;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part3;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part2;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Part1;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Skin;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Mesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_bUseAuxiliaryMesh_SetBit(void* Obj)
	{
		((MordhauGameState_eventStoreEquipmentMeshInCache_Parms*)Obj)->bUseAuxiliaryMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_bUseAuxiliaryMesh = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseAuxiliaryMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauGameState_eventStoreEquipmentMeshInCache_Parms), &Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_bUseAuxiliaryMesh_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Part3 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part3", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventStoreEquipmentMeshInCache_Parms, Part3), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Part2 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part2", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventStoreEquipmentMeshInCache_Parms, Part2), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Part1 = { UE4CodeGen_Private::EPropertyClass::Byte, "Part1", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventStoreEquipmentMeshInCache_Parms, Part1), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Skin = { UE4CodeGen_Private::EPropertyClass::Byte, "Skin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventStoreEquipmentMeshInCache_Parms, Skin), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Int, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventStoreEquipmentMeshInCache_Parms, ID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Mesh = { UE4CodeGen_Private::EPropertyClass::Object, "Mesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventStoreEquipmentMeshInCache_Parms, Mesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_bUseAuxiliaryMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Part3,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Part2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Part1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Skin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::NewProp_Mesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "StoreEquipmentMeshInCache", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventStoreEquipmentMeshInCache_Parms), Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics
	{
		struct MordhauGameState_eventUnregisterParticleSystemActor_Parms
		{
			AParticleSystemActor* ParticleActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::NewProp_ParticleActor = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauGameState_eventUnregisterParticleSystemActor_Parms, ParticleActor), Z_Construct_UClass_AParticleSystemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::NewProp_ParticleActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "UnregisterParticleSystemActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauGameState_eventUnregisterParticleSystemActor_Parms), Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameStateFns" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauGameState, "UpdateCapturePointData", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauGameState_NoRegister()
	{
		return AMordhauGameState::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauGameState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsePushTopologicalProgress_MetaData[];
#endif
		static void NewProp_bUsePushTopologicalProgress_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsePushTopologicalProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushTopologicalProgressAttackingTeam_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PushTopologicalProgressAttackingTeam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannedEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FSetPropertyParams NewProp_BannedEquipment;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BannedEquipment_ElementProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBotClimbTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastBotClimbTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBotEmoteTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastBotEmoteTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastBotVoiceCommandTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastBotVoiceCommandTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapturePointTopologicalOrdering_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CapturePointTopologicalOrdering;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CapturePointTopologicalOrdering_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2TopologicalProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Team2TopologicalProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1TopologicalProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Team1TopologicalProgress;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2CapturePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team2CapturePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1CapturePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team1CapturePoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllCapturePoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllCapturePoints;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllCapturePoints_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryTeamColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SecondaryTeamColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SecondaryTeamColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNames_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamNames;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TeamNames_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamColors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamColors;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TeamColors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnforceTeamColors_MetaData[];
#endif
		static void NewProp_bEnforceTeamColors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnforceTeamColors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsTeamMode_MetaData[];
#endif
		static void NewProp_bIsTeamMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsTeamMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamScores_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TeamScores;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TeamScores_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_TeamCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowSpawning_MetaData[];
#endif
		static void NewProp_bAllowSpawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowSpawning;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotShowPostMatchScreen_MetaData[];
#endif
		static void NewProp_bDoNotShowPostMatchScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotShowPostMatchScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotGoToNextMapOnMatchEnd_MetaData[];
#endif
		static void NewProp_bDoNotGoToNextMapOnMatchEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotGoToNextMapOnMatchEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarmupEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarmupEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinPlayersToStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MinPlayersToStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bBlockInputInWarmup_MetaData[];
#endif
		static void NewProp_bBlockInputInWarmup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBlockInputInWarmup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSkipWarmupInDevBuild_MetaData[];
#endif
		static void NewProp_bSkipWarmupInDevBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSkipWarmupInDevBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultWarmupTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultWarmupTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostMatchScreenDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PostMatchScreenDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndMatchMapChangeEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EndMatchMapChangeEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultEndMatchMapChangeTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultEndMatchMapChangeTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapCameraActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MapCameraActors;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MapCameraActors_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MapCameraActors_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchDurationMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MatchDurationMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllPlayersHaveMarkers_MetaData[];
#endif
		static void NewProp_bAllPlayersHaveMarkers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllPlayersHaveMarkers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideArmorAccelerationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideArmorAccelerationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverrideArmorSpeedFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OverrideArmorSpeedFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bOverrideArmorSpeedAndAccelerationFactor_MetaData[];
#endif
		static void NewProp_bOverrideArmorSpeedAndAccelerationFactor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bOverrideArmorSpeedAndAccelerationFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDoNotLimitPlaceables_MetaData[];
#endif
		static void NewProp_bDoNotLimitPlaceables_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDoNotLimitPlaceables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAllowHealthRegen_MetaData[];
#endif
		static void NewProp_bAllowHealthRegen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAllowHealthRegen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableScoreboard_MetaData[];
#endif
		static void NewProp_bDisableScoreboard_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableScoreboard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableChat_MetaData[];
#endif
		static void NewProp_bDisableChat_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableChat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableClientStats_MetaData[];
#endif
		static void NewProp_bDisableClientStats_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableClientStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MetaData_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_MetaData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreSkinnedPoseOracle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PreSkinnedPoseOracle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquipmentMeshCacheMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EquipmentMeshCacheMap;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EquipmentMeshCacheMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquipmentMeshCacheMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RagdollDistanceArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RagdollDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterToDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterToDistanceArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterToDistanceArray_Key_KeyProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CharacterToDistanceArray_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterDistanceArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterDistanceArray;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterDistanceArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ParticleSystemActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextBudgetTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NextBudgetTime;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NextBudgetTime_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_utilityRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_utilityRef;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauGameState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameState,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauGameState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauGameState_CanImmediatelyChangeProfile, "CanImmediatelyChangeProfile" }, // 794026795
		{ &Z_Construct_UFunction_AMordhauGameState_CanPlayerJoinTeam, "CanPlayerJoinTeam" }, // 3862034322
		{ &Z_Construct_UFunction_AMordhauGameState_GetAppropriateMapCameraActor, "GetAppropriateMapCameraActor" }, // 626631341
		{ &Z_Construct_UFunction_AMordhauGameState_GetBindPoseTransform, "GetBindPoseTransform" }, // 3244121027
		{ &Z_Construct_UFunction_AMordhauGameState_GetCharacterByDistanceRank, "GetCharacterByDistanceRank" }, // 2418667431
		{ &Z_Construct_UFunction_AMordhauGameState_GetCurrentFrame, "GetCurrentFrame" }, // 4102832139
		{ &Z_Construct_UFunction_AMordhauGameState_GetEquipmentCacheHash, "GetEquipmentCacheHash" }, // 3577088896
		{ &Z_Construct_UFunction_AMordhauGameState_GetEquipmentMeshFromCache, "GetEquipmentMeshFromCache" }, // 1740113763
		{ &Z_Construct_UFunction_AMordhauGameState_GetPlayerCountsPerTeam, "GetPlayerCountsPerTeam" }, // 1412907108
		{ &Z_Construct_UFunction_AMordhauGameState_GetSecondaryTeamColor, "GetSecondaryTeamColor" }, // 2011369694
		{ &Z_Construct_UFunction_AMordhauGameState_GetTeamColor, "GetTeamColor" }, // 1489747110
		{ &Z_Construct_UFunction_AMordhauGameState_GetTeamName, "GetTeamName" }, // 3288263919
		{ &Z_Construct_UFunction_AMordhauGameState_IncrementIntStatValueChecked, "IncrementIntStatValueChecked" }, // 1672709619
		{ &Z_Construct_UFunction_AMordhauGameState_IsFriendly, "IsFriendly" }, // 1071716328
		{ &Z_Construct_UFunction_AMordhauGameState_LocalPlayerChangedTeam, "LocalPlayerChangedTeam" }, // 1730388633
		{ &Z_Construct_UFunction_AMordhauGameState_RegisterParticleSystemActor, "RegisterParticleSystemActor" }, // 2069505861
		{ &Z_Construct_UFunction_AMordhauGameState_RemoveCharacterFromDistanceArray, "RemoveCharacterFromDistanceArray" }, // 80598672
		{ &Z_Construct_UFunction_AMordhauGameState_ReserveCharacterRagdoll, "ReserveCharacterRagdoll" }, // 3864253535
		{ &Z_Construct_UFunction_AMordhauGameState_ShouldBlockPawnInput, "ShouldBlockPawnInput" }, // 768676885
		{ &Z_Construct_UFunction_AMordhauGameState_ShouldPaintGearWithTeamColors, "ShouldPaintGearWithTeamColors" }, // 308438647
		{ &Z_Construct_UFunction_AMordhauGameState_ShouldTickAnimationThisFrame, "ShouldTickAnimationThisFrame" }, // 2310189223
		{ &Z_Construct_UFunction_AMordhauGameState_ShouldTickThisFrame, "ShouldTickThisFrame" }, // 53276947
		{ &Z_Construct_UFunction_AMordhauGameState_StoreEquipmentMeshInCache, "StoreEquipmentMeshInCache" }, // 1970713043
		{ &Z_Construct_UFunction_AMordhauGameState_UnregisterParticleSystemActor, "UnregisterParticleSystemActor" }, // 2265389067
		{ &Z_Construct_UFunction_AMordhauGameState_UpdateCapturePointData, "UpdateCapturePointData" }, // 291638189
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MordhauGameState.h" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bUsePushTopologicalProgress = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsePushTopologicalProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PushTopologicalProgressAttackingTeam_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PushTopologicalProgressAttackingTeam = { UE4CodeGen_Private::EPropertyClass::Byte, "PushTopologicalProgressAttackingTeam", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, PushTopologicalProgressAttackingTeam), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PushTopologicalProgressAttackingTeam_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PushTopologicalProgressAttackingTeam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment_MetaData[] = {
		{ "Category", "MordhauGameState|General" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FSetPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment = { UE4CodeGen_Private::EPropertyClass::Set, "BannedEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, BannedEquipment), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment_ElementProp = { UE4CodeGen_Private::EPropertyClass::Class, "BannedEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0004000000000001, 1, nullptr, 0, Z_Construct_UClass_AMordhauEquipment_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotClimbTime_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotClimbTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastBotClimbTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, LastBotClimbTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotClimbTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotClimbTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotEmoteTime_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotEmoteTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastBotEmoteTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, LastBotEmoteTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotEmoteTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotEmoteTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotVoiceCommandTime_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotVoiceCommandTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastBotVoiceCommandTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, LastBotVoiceCommandTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotVoiceCommandTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotVoiceCommandTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering = { UE4CodeGen_Private::EPropertyClass::Array, "CapturePointTopologicalOrdering", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, CapturePointTopologicalOrdering), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "CapturePointTopologicalOrdering", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FCapturePointGroup, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2TopologicalProgress_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2TopologicalProgress = { UE4CodeGen_Private::EPropertyClass::Float, "Team2TopologicalProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, Team2TopologicalProgress), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2TopologicalProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2TopologicalProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1TopologicalProgress_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1TopologicalProgress = { UE4CodeGen_Private::EPropertyClass::Float, "Team1TopologicalProgress", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, Team1TopologicalProgress), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1TopologicalProgress_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1TopologicalProgress_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2CapturePoints_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2CapturePoints = { UE4CodeGen_Private::EPropertyClass::Int, "Team2CapturePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, Team2CapturePoints), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2CapturePoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2CapturePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1CapturePoints_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1CapturePoints = { UE4CodeGen_Private::EPropertyClass::Int, "Team1CapturePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, Team1CapturePoints), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1CapturePoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1CapturePoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints = { UE4CodeGen_Private::EPropertyClass::Array, "AllCapturePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, AllCapturePoints), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "AllCapturePoints", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AControlPoint_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors = { UE4CodeGen_Private::EPropertyClass::Array, "SecondaryTeamColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, SecondaryTeamColors), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "SecondaryTeamColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames = { UE4CodeGen_Private::EPropertyClass::Array, "TeamNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, TeamNames), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames_Inner = { UE4CodeGen_Private::EPropertyClass::Str, "TeamNames", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors = { UE4CodeGen_Private::EPropertyClass::Array, "TeamColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, TeamColors), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "TeamColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bEnforceTeamColors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnforceTeamColors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bIsTeamMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsTeamMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores = { UE4CodeGen_Private::EPropertyClass::Array, "TeamScores", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, TeamScores), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "TeamScores", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamCount_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamCount = { UE4CodeGen_Private::EPropertyClass::Byte, "TeamCount", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, TeamCount), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamCount_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bAllowSpawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowSpawning", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bDoNotShowPostMatchScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotShowPostMatchScreen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bDoNotGoToNextMapOnMatchEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotGoToNextMapOnMatchEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_WarmupEnd_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_WarmupEnd = { UE4CodeGen_Private::EPropertyClass::Float, "WarmupEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, WarmupEnd), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_WarmupEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_WarmupEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MinPlayersToStart_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MinPlayersToStart = { UE4CodeGen_Private::EPropertyClass::Int, "MinPlayersToStart", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, MinPlayersToStart), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MinPlayersToStart_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MinPlayersToStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bBlockInputInWarmup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup = { UE4CodeGen_Private::EPropertyClass::Bool, "bBlockInputInWarmup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bSkipWarmupInDevBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild = { UE4CodeGen_Private::EPropertyClass::Bool, "bSkipWarmupInDevBuild", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultWarmupTime_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultWarmupTime = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultWarmupTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, DefaultWarmupTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultWarmupTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultWarmupTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PostMatchScreenDelay_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PostMatchScreenDelay = { UE4CodeGen_Private::EPropertyClass::Float, "PostMatchScreenDelay", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, PostMatchScreenDelay), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PostMatchScreenDelay_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PostMatchScreenDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EndMatchMapChangeEnd_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EndMatchMapChangeEnd = { UE4CodeGen_Private::EPropertyClass::Float, "EndMatchMapChangeEnd", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, EndMatchMapChangeEnd), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EndMatchMapChangeEnd_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EndMatchMapChangeEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultEndMatchMapChangeTime_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultEndMatchMapChangeTime = { UE4CodeGen_Private::EPropertyClass::Float, "DefaultEndMatchMapChangeTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, DefaultEndMatchMapChangeTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultEndMatchMapChangeTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultEndMatchMapChangeTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors = { UE4CodeGen_Private::EPropertyClass::Map, "MapCameraActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, MapCameraActors), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "MapCameraActors_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "MapCameraActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_AMapCameraActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MatchDurationMax_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MatchDurationMax = { UE4CodeGen_Private::EPropertyClass::Int, "MatchDurationMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, MatchDurationMax), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MatchDurationMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MatchDurationMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bAllPlayersHaveMarkers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllPlayersHaveMarkers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorAccelerationFactor_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorAccelerationFactor = { UE4CodeGen_Private::EPropertyClass::Float, "OverrideArmorAccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, OverrideArmorAccelerationFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorAccelerationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorAccelerationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorSpeedFactor_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorSpeedFactor = { UE4CodeGen_Private::EPropertyClass::Float, "OverrideArmorSpeedFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, OverrideArmorSpeedFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorSpeedFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorSpeedFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bOverrideArmorSpeedAndAccelerationFactor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor = { UE4CodeGen_Private::EPropertyClass::Bool, "bOverrideArmorSpeedAndAccelerationFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bDoNotLimitPlaceables = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables = { UE4CodeGen_Private::EPropertyClass::Bool, "bDoNotLimitPlaceables", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bAllowHealthRegen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen = { UE4CodeGen_Private::EPropertyClass::Bool, "bAllowHealthRegen", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bDisableScoreboard = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableScoreboard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bDisableChat = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableChat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats_SetBit(void* Obj)
	{
		((AMordhauGameState*)Obj)->bDisableClientStats = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats = { UE4CodeGen_Private::EPropertyClass::Bool, "bDisableClientStats", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauGameState), &Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MetaData_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MetaData = { UE4CodeGen_Private::EPropertyClass::Class, "MetaData", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, MetaData), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MetaData_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MetaData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PreSkinnedPoseOracle_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PreSkinnedPoseOracle = { UE4CodeGen_Private::EPropertyClass::Object, "PreSkinnedPoseOracle", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, PreSkinnedPoseOracle), Z_Construct_UClass_APreSkinnedPoseOracle_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PreSkinnedPoseOracle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PreSkinnedPoseOracle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap = { UE4CodeGen_Private::EPropertyClass::Map, "EquipmentMeshCacheMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, EquipmentMeshCacheMap), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Int, "EquipmentMeshCacheMap_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "EquipmentMeshCacheMap", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray = { UE4CodeGen_Private::EPropertyClass::Array, "RagdollDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, RagdollDistanceArray), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "RagdollDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray = { UE4CodeGen_Private::EPropertyClass::Map, "CharacterToDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, CharacterToDistanceArray), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterToDistanceArray_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_ValueProp = { UE4CodeGen_Private::EPropertyClass::Int, "CharacterToDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray = { UE4CodeGen_Private::EPropertyClass::Array, "CharacterDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, CharacterDistanceArray), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "CharacterDistanceArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors = { UE4CodeGen_Private::EPropertyClass::Array, "ParticleSystemActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, ParticleSystemActors), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSystemActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AParticleSystemActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
		{ "ToolTip", "UPROPERTY(EditAnywhere, BlueprintReadWrite)\n       FSTRUCT_VoteKickInfo VoteKickInfo;" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime = { UE4CodeGen_Private::EPropertyClass::Array, "NextBudgetTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000025, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, NextBudgetTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "NextBudgetTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauGameState_Statics::NewProp_utilityRef_MetaData[] = {
		{ "Category", "MordhauGameState" },
		{ "ModuleRelativePath", "MordhauGameState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauGameState_Statics::NewProp_utilityRef = { UE4CodeGen_Private::EPropertyClass::Object, "utilityRef", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauGameState, utilityRef), Z_Construct_UClass_UMordhauUtilityLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_utilityRef_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::NewProp_utilityRef_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bUsePushTopologicalProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PushTopologicalProgressAttackingTeam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_BannedEquipment_ElementProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotClimbTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotEmoteTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_LastBotVoiceCommandTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CapturePointTopologicalOrdering_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2TopologicalProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1TopologicalProgress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team2CapturePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_Team1CapturePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_AllCapturePoints_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_SecondaryTeamColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamNames_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamColors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bEnforceTeamColors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bIsTeamMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamScores_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_TeamCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowSpawning,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotShowPostMatchScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotGoToNextMapOnMatchEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_WarmupEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MinPlayersToStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bBlockInputInWarmup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bSkipWarmupInDevBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultWarmupTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PostMatchScreenDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EndMatchMapChangeEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_DefaultEndMatchMapChangeTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MapCameraActors_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MatchDurationMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllPlayersHaveMarkers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorAccelerationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_OverrideArmorSpeedFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bOverrideArmorSpeedAndAccelerationFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDoNotLimitPlaceables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bAllowHealthRegen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableScoreboard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableChat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_bDisableClientStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_MetaData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_PreSkinnedPoseOracle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_EquipmentMeshCacheMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_RagdollDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterToDistanceArray_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_CharacterDistanceArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_ParticleSystemActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_NextBudgetTime_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauGameState_Statics::NewProp_utilityRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauGameState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauGameState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauGameState_Statics::ClassParams = {
		&AMordhauGameState::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauGameState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauGameState_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauGameState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauGameState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauGameState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauGameState, 1335393726);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauGameState(Z_Construct_UClass_AMordhauGameState, &AMordhauGameState::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauGameState"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauGameState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
