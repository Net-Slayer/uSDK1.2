// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauAIController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauAIController() {}
// Cross Module References
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_ECrowdSimulationState();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_ECrowdAvoidanceQuality();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FPerceptionInfo();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauAIController_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauAIController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_DestroyController();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetClosestAlly();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EAIFacingMode();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_GetTeam();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_PerceivesAlly();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingBone();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingMovement();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo();
	MORDHAU_API UClass* Z_Construct_UClass_ACustomizationReplicationActor_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UBotBehaviorProfile_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UBotProfile_NoRegister();
// End Cross Module References
	static UEnum* ECrowdSimulationState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mordhau_ECrowdSimulationState, Z_Construct_UPackage__Script_Mordhau(), TEXT("ECrowdSimulationState"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECrowdSimulationState(ECrowdSimulationState_StaticEnum, TEXT("/Script/Mordhau"), TEXT("ECrowdSimulationState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mordhau_ECrowdSimulationState_CRC() { return 1885897451U; }
	UEnum* Z_Construct_UEnum_Mordhau_ECrowdSimulationState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECrowdSimulationState"), 0, Get_Z_Construct_UEnum_Mordhau_ECrowdSimulationState_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECrowdSimulationState::Enabled", (int64)ECrowdSimulationState::Enabled },
				{ "ECrowdSimulationState::ObstacleOnly", (int64)ECrowdSimulationState::ObstacleOnly },
				{ "ECrowdSimulationState::Disabled", (int64)ECrowdSimulationState::Disabled },
				{ "ECrowdSimulationState::ECrowdSimulationState_MAX", (int64)ECrowdSimulationState::ECrowdSimulationState_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MordhauAIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mordhau,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECrowdSimulationState",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECrowdSimulationState",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* ECrowdAvoidanceQuality_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Mordhau_ECrowdAvoidanceQuality, Z_Construct_UPackage__Script_Mordhau(), TEXT("ECrowdAvoidanceQuality"));
		}
		return Singleton;
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECrowdAvoidanceQuality(ECrowdAvoidanceQuality_StaticEnum, TEXT("/Script/Mordhau"), TEXT("ECrowdAvoidanceQuality"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Mordhau_ECrowdAvoidanceQuality_CRC() { return 3959777521U; }
	UEnum* Z_Construct_UEnum_Mordhau_ECrowdAvoidanceQuality()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECrowdAvoidanceQuality"), 0, Get_Z_Construct_UEnum_Mordhau_ECrowdAvoidanceQuality_CRC(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECrowdAvoidanceQuality::Low", (int64)ECrowdAvoidanceQuality::Low },
				{ "ECrowdAvoidanceQuality::Medium", (int64)ECrowdAvoidanceQuality::Medium },
				{ "ECrowdAvoidanceQuality::Good", (int64)ECrowdAvoidanceQuality::Good },
				{ "ECrowdAvoidanceQuality::High", (int64)ECrowdAvoidanceQuality::High },
				{ "ECrowdAvoidanceQuality::ECrowdAvoidanceQuality_MAX", (int64)ECrowdAvoidanceQuality::ECrowdAvoidanceQuality_MAX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "MordhauAIController.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Mordhau,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				"ECrowdAvoidanceQuality",
				RF_Public|RF_Transient|RF_MarkAsNative,
				nullptr,
				(uint8)UEnum::ECppForm::EnumClass,
				"ECrowdAvoidanceQuality",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FPerceptionInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FPerceptionInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerceptionInfo, Z_Construct_UPackage__Script_Mordhau(), TEXT("PerceptionInfo"), sizeof(FPerceptionInfo), Get_Z_Construct_UScriptStruct_FPerceptionInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerceptionInfo(FPerceptionInfo::StaticStruct, TEXT("/Script/Mordhau"), TEXT("PerceptionInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFPerceptionInfo
{
	FScriptStruct_Mordhau_StaticRegisterNativesFPerceptionInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerceptionInfo")),new UScriptStruct::TCppStructOps<FPerceptionInfo>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFPerceptionInfo;
	struct Z_Construct_UScriptStruct_FPerceptionInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_UpdateTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Team;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDamage_MetaData[];
#endif
		static void NewProp_bDamage_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHearing_MetaData[];
#endif
		static void NewProp_bHearing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHearing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSight_MetaData[];
#endif
		static void NewProp_bSight_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSight;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerceptionInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_UpdateTime_MetaData[] = {
		{ "Category", "PerceptionInfo" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_UpdateTime = { UE4CodeGen_Private::EPropertyClass::Float, "UpdateTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPerceptionInfo, UpdateTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_UpdateTime_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_UpdateTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "PerceptionInfo" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Byte, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FPerceptionInfo, Team), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_Team_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_Team_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage_MetaData[] = {
		{ "Category", "PerceptionInfo" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage_SetBit(void* Obj)
	{
		((FPerceptionInfo*)Obj)->bDamage = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage = { UE4CodeGen_Private::EPropertyClass::Bool, "bDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPerceptionInfo), &Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing_MetaData[] = {
		{ "Category", "PerceptionInfo" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing_SetBit(void* Obj)
	{
		((FPerceptionInfo*)Obj)->bHearing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing = { UE4CodeGen_Private::EPropertyClass::Bool, "bHearing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPerceptionInfo), &Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight_MetaData[] = {
		{ "Category", "PerceptionInfo" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight_SetBit(void* Obj)
	{
		((FPerceptionInfo*)Obj)->bSight = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight = { UE4CodeGen_Private::EPropertyClass::Bool, "bSight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(FPerceptionInfo), &Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_UpdateTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_Team,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bHearing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerceptionInfo_Statics::NewProp_bSight,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerceptionInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"PerceptionInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FPerceptionInfo),
		alignof(FPerceptionInfo),
		Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FPerceptionInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerceptionInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerceptionInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerceptionInfo"), sizeof(FPerceptionInfo), Get_Z_Construct_UScriptStruct_FPerceptionInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerceptionInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerceptionInfo_CRC() { return 4014609739U; }
	static FName NAME_AMordhauAIController_OnAfterUnPossess = FName(TEXT("OnAfterUnPossess"));
	void AMordhauAIController::OnAfterUnPossess()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauAIController_OnAfterUnPossess),NULL);
	}
	static FName NAME_AMordhauAIController_OnCharacterDiedOrDestroyed = FName(TEXT("OnCharacterDiedOrDestroyed"));
	void AMordhauAIController::OnCharacterDiedOrDestroyed(AAdvancedCharacter* AdvancedCharacter)
	{
		MordhauAIController_eventOnCharacterDiedOrDestroyed_Parms Parms;
		Parms.AdvancedCharacter=AdvancedCharacter;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauAIController_OnCharacterDiedOrDestroyed),&Parms);
	}
	static FName NAME_AMordhauAIController_OnStartedPerceivingCharacter = FName(TEXT("OnStartedPerceivingCharacter"));
	void AMordhauAIController::OnStartedPerceivingCharacter(AAdvancedCharacter* PerceivedCharacter, FPerceptionInfo PerceptionInfo)
	{
		MordhauAIController_eventOnStartedPerceivingCharacter_Parms Parms;
		Parms.PerceivedCharacter=PerceivedCharacter;
		Parms.PerceptionInfo=PerceptionInfo;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauAIController_OnStartedPerceivingCharacter),&Parms);
	}
	static FName NAME_AMordhauAIController_OnStoppedPerceivingCharacter = FName(TEXT("OnStoppedPerceivingCharacter"));
	void AMordhauAIController::OnStoppedPerceivingCharacter(AAdvancedCharacter* PerceivedCharacter, FPerceptionInfo PerceptionInfo)
	{
		MordhauAIController_eventOnStoppedPerceivingCharacter_Parms Parms;
		Parms.PerceivedCharacter=PerceivedCharacter;
		Parms.PerceptionInfo=PerceptionInfo;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauAIController_OnStoppedPerceivingCharacter),&Parms);
	}
	void AMordhauAIController::StaticRegisterNativesAMordhauAIController()
	{
		UClass* Class = AMordhauAIController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DestroyController", &AMordhauAIController::execDestroyController },
			{ "GetAllyClearanceSides", &AMordhauAIController::execGetAllyClearanceSides },
			{ "GetClosestAlly", &AMordhauAIController::execGetClosestAlly },
			{ "GetClosestEnemy", &AMordhauAIController::execGetClosestEnemy },
			{ "GetCurrentFacingMode", &AMordhauAIController::execGetCurrentFacingMode },
			{ "GetCurrentlyFacingActor", &AMordhauAIController::execGetCurrentlyFacingActor },
			{ "GetKthClosestOfThree", &AMordhauAIController::execGetKthClosestOfThree },
			{ "GetMotionBasedRandom", &AMordhauAIController::execGetMotionBasedRandom },
			{ "GetPerceivedAllies", &AMordhauAIController::execGetPerceivedAllies },
			{ "GetPerceivedEnemies", &AMordhauAIController::execGetPerceivedEnemies },
			{ "GetTeam", &AMordhauAIController::execGetTeam },
			{ "PerceivesAlly", &AMordhauAIController::execPerceivesAlly },
			{ "PerceivesEnemy", &AMordhauAIController::execPerceivesEnemy },
			{ "RefreshCharacterProfile", &AMordhauAIController::execRefreshCharacterProfile },
			{ "RequestVoiceCommand", &AMordhauAIController::execRequestVoiceCommand },
			{ "StartFacingActor", &AMordhauAIController::execStartFacingActor },
			{ "StartFacingActor2D", &AMordhauAIController::execStartFacingActor2D },
			{ "StartFacingBone", &AMordhauAIController::execStartFacingBone },
			{ "StartFacingLocation", &AMordhauAIController::execStartFacingLocation },
			{ "StartFacingMovement", &AMordhauAIController::execStartFacingMovement },
			{ "UpdatePerceptionInfo", &AMordhauAIController::execUpdatePerceptionInfo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauAIController_DestroyController_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_DestroyController_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_DestroyController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "DestroyController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_DestroyController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_DestroyController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_DestroyController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_DestroyController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics
	{
		struct MordhauAIController_eventGetAllyClearanceSides_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetAllyClearanceSides_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetAllyClearanceSides", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetAllyClearanceSides_Parms), Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics
	{
		struct MordhauAIController_eventGetClosestAlly_Parms
		{
			AMordhauCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetClosestAlly_Parms, ReturnValue), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetClosestAlly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetClosestAlly_Parms), Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetClosestAlly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetClosestAlly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics
	{
		struct MordhauAIController_eventGetClosestEnemy_Parms
		{
			AMordhauCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetClosestEnemy_Parms, ReturnValue), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetClosestEnemy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetClosestEnemy_Parms), Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics
	{
		struct MordhauAIController_eventGetCurrentFacingMode_Parms
		{
			EAIFacingMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetCurrentFacingMode_Parms, ReturnValue), Z_Construct_UEnum_Mordhau_EAIFacingMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetCurrentFacingMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetCurrentFacingMode_Parms), Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics
	{
		struct MordhauAIController_eventGetCurrentlyFacingActor_Parms
		{
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetCurrentlyFacingActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetCurrentlyFacingActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetCurrentlyFacingActor_Parms), Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics
	{
		struct MordhauAIController_eventGetKthClosestOfThree_Parms
		{
			int32 Idx;
			AMordhauCharacter* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Idx;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetKthClosestOfThree_Parms, ReturnValue), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::NewProp_Idx = { UE4CodeGen_Private::EPropertyClass::Int, "Idx", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetKthClosestOfThree_Parms, Idx), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::NewProp_Idx,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetKthClosestOfThree", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetKthClosestOfThree_Parms), Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics
	{
		struct MordhauAIController_eventGetMotionBasedRandom_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetMotionBasedRandom_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetMotionBasedRandom", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetMotionBasedRandom_Parms), Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics
	{
		struct MordhauAIController_eventGetPerceivedAllies_Parms
		{
			TArray<AMordhauCharacter*> allies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_allies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_allies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::NewProp_allies = { UE4CodeGen_Private::EPropertyClass::Array, "allies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetPerceivedAllies_Parms, allies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::NewProp_allies_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "allies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::NewProp_allies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::NewProp_allies_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetPerceivedAllies", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauAIController_eventGetPerceivedAllies_Parms), Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics
	{
		struct MordhauAIController_eventGetPerceivedEnemies_Parms
		{
			TArray<AMordhauCharacter*> enemies;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_enemies;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_enemies_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::NewProp_enemies = { UE4CodeGen_Private::EPropertyClass::Array, "enemies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetPerceivedEnemies_Parms, enemies), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::NewProp_enemies_Inner = { UE4CodeGen_Private::EPropertyClass::Object, "enemies", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::NewProp_enemies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::NewProp_enemies_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetPerceivedEnemies", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauAIController_eventGetPerceivedEnemies_Parms), Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics
	{
		struct MordhauAIController_eventGetTeam_Parms
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
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Int, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventGetTeam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "GetTeam", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventGetTeam_Parms), Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_GetTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_GetTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerEvents" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "OnAfterUnPossess", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdvancedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::NewProp_AdvancedCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "AdvancedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventOnCharacterDiedOrDestroyed_Parms, AdvancedCharacter), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::NewProp_AdvancedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerEvents" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "OnCharacterDiedOrDestroyed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauAIController_eventOnCharacterDiedOrDestroyed_Parms), Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceptionInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceivedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::NewProp_PerceptionInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "PerceptionInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventOnStartedPerceivingCharacter_Parms, PerceptionInfo), Z_Construct_UScriptStruct_FPerceptionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::NewProp_PerceivedCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "PerceivedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventOnStartedPerceivingCharacter_Parms, PerceivedCharacter), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::NewProp_PerceptionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::NewProp_PerceivedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerEvents" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "OnStartedPerceivingCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauAIController_eventOnStartedPerceivingCharacter_Parms), Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceptionInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerceivedCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::NewProp_PerceptionInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "PerceptionInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventOnStoppedPerceivingCharacter_Parms, PerceptionInfo), Z_Construct_UScriptStruct_FPerceptionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::NewProp_PerceivedCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "PerceivedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventOnStoppedPerceivingCharacter_Parms, PerceivedCharacter), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::NewProp_PerceptionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::NewProp_PerceivedCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerEvents" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "OnStoppedPerceivingCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauAIController_eventOnStoppedPerceivingCharacter_Parms), Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics
	{
		struct MordhauAIController_eventPerceivesAlly_Parms
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
	void Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauAIController_eventPerceivesAlly_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauAIController_eventPerceivesAlly_Parms), &Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "PerceivesAlly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventPerceivesAlly_Parms), Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_PerceivesAlly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_PerceivesAlly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics
	{
		struct MordhauAIController_eventPerceivesEnemy_Parms
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
	void Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauAIController_eventPerceivesEnemy_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauAIController_eventPerceivesEnemy_Parms), &Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "PerceivesEnemy", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventPerceivesEnemy_Parms), Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "RefreshCharacterProfile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics
	{
		struct MordhauAIController_eventRequestVoiceCommand_Parms
		{
			uint8 Command;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Command;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::NewProp_Command = { UE4CodeGen_Private::EPropertyClass::Byte, "Command", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventRequestVoiceCommand_Parms, Command), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::NewProp_Command,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "RequestVoiceCommand", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventRequestVoiceCommand_Parms), Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics
	{
		struct MordhauAIController_eventStartFacingActor_Parms
		{
			AActor* Actor;
			float LocationUpOffset;
			FVector2D DegreeOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DegreeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DegreeOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationUpOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_DegreeOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_DegreeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "DegreeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingActor_Parms, DegreeOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_DegreeOffset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_DegreeOffset_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_LocationUpOffset = { UE4CodeGen_Private::EPropertyClass::Float, "LocationUpOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingActor_Parms, LocationUpOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_DegreeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_LocationUpOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "StartFacingActor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauAIController_eventStartFacingActor_Parms), Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_StartFacingActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics
	{
		struct MordhauAIController_eventStartFacingActor2D_Parms
		{
			AActor* Actor;
			float LocationUpOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationUpOffset;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::NewProp_LocationUpOffset = { UE4CodeGen_Private::EPropertyClass::Float, "LocationUpOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingActor2D_Parms, LocationUpOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::NewProp_Actor = { UE4CodeGen_Private::EPropertyClass::Object, "Actor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingActor2D_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::NewProp_LocationUpOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "StartFacingActor2D", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventStartFacingActor2D_Parms), Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics
	{
		struct MordhauAIController_eventStartFacingBone_Parms
		{
			USkeletalMeshComponent* SkelMesh;
			FName BoneToFace;
			float LocationUpOffset;
			FVector2D DegreeOffset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DegreeOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DegreeOffset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationUpOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneToFace_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneToFace;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkelMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkelMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_DegreeOffset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_DegreeOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "DegreeOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingBone_Parms, DegreeOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_DegreeOffset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_DegreeOffset_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_LocationUpOffset = { UE4CodeGen_Private::EPropertyClass::Float, "LocationUpOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingBone_Parms, LocationUpOffset), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_BoneToFace_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_BoneToFace = { UE4CodeGen_Private::EPropertyClass::Name, "BoneToFace", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingBone_Parms, BoneToFace), METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_BoneToFace_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_BoneToFace_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_SkelMesh_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_SkelMesh = { UE4CodeGen_Private::EPropertyClass::Object, "SkelMesh", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingBone_Parms, SkelMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_SkelMesh_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_SkelMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_DegreeOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_LocationUpOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_BoneToFace,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::NewProp_SkelMesh,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "StartFacingBone", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauAIController_eventStartFacingBone_Parms), Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingBone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_StartFacingBone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics
	{
		struct MordhauAIController_eventStartFacingLocation_Parms
		{
			FVector WorldLocation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingLocation_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::NewProp_WorldLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::NewProp_WorldLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "StartFacingLocation", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauAIController_eventStartFacingLocation_Parms), Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_StartFacingLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics
	{
		struct MordhauAIController_eventStartFacingMovement_Parms
		{
			float LocationUpOffset;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LocationUpOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::NewProp_LocationUpOffset = { UE4CodeGen_Private::EPropertyClass::Float, "LocationUpOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventStartFacingMovement_Parms, LocationUpOffset), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::NewProp_LocationUpOffset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "StartFacingMovement", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventStartFacingMovement_Parms), Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_StartFacingMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_StartFacingMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics
	{
		struct MordhauAIController_eventUpdatePerceptionInfo_Parms
		{
			AAdvancedCharacter* InCharacter;
			FPerceptionInfo PerceptionInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerceptionInfo;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCharacter;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::NewProp_PerceptionInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "PerceptionInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventUpdatePerceptionInfo_Parms, PerceptionInfo), Z_Construct_UScriptStruct_FPerceptionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::NewProp_InCharacter = { UE4CodeGen_Private::EPropertyClass::Object, "InCharacter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauAIController_eventUpdatePerceptionInfo_Parms, InCharacter), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::NewProp_PerceptionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::NewProp_InCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "MordhauAIControllerFns" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauAIController, "UpdatePerceptionInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauAIController_eventUpdatePerceptionInfo_Parms), Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauAIController_NoRegister()
	{
		return AMordhauAIController::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauAIController_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationReplicationActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CustomizationReplicationActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team2NavQueryFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Team2NavQueryFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team1NavQueryFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Team1NavQueryFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultNavQueryFilter_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DefaultNavQueryFilter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AvoidanceQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AvoidanceQuality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AvoidanceRangeMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AvoidanceRangeMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathOptimizationRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathOptimizationRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionQueryRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollisionQueryRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeparationWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SeparationWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSlowdownAtGoal_MetaData[];
#endif
		static void NewProp_bEnableSlowdownAtGoal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSlowdownAtGoal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnablePathOffset_MetaData[];
#endif
		static void NewProp_bEnablePathOffset_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnablePathOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOptimizeTopology_MetaData[];
#endif
		static void NewProp_bEnableOptimizeTopology_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOptimizeTopology;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOptimizeVisibility_MetaData[];
#endif
		static void NewProp_bEnableOptimizeVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOptimizeVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableSeparation_MetaData[];
#endif
		static void NewProp_bEnableSeparation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableSeparation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableObstacleAvoidance_MetaData[];
#endif
		static void NewProp_bEnableObstacleAvoidance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableObstacleAvoidance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableAnticipateTurns_MetaData[];
#endif
		static void NewProp_bEnableAnticipateTurns_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableAnticipateTurns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextRespawnTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NextRespawnTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWantsRespawn_MetaData[];
#endif
		static void NewProp_bWantsRespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWantsRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoRespawn_MetaData[];
#endif
		static void NewProp_bAutoRespawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoRespawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyScanIntervalVariance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemyScanIntervalVariance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnemyScanInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnemyScanInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BehaviorProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BehaviorProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BotProfile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BotProfile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomFloat_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RandomFloat;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFirstRun_MetaData[];
#endif
		static void NewProp_bFirstRun_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFirstRun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClosestEnemy_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LastClosestEnemy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReallyCloseEnemyCached_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_ReallyCloseEnemyCached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauAIController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauAIController_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauAIController_DestroyController, "DestroyController" }, // 2385554952
		{ &Z_Construct_UFunction_AMordhauAIController_GetAllyClearanceSides, "GetAllyClearanceSides" }, // 794756522
		{ &Z_Construct_UFunction_AMordhauAIController_GetClosestAlly, "GetClosestAlly" }, // 2624747776
		{ &Z_Construct_UFunction_AMordhauAIController_GetClosestEnemy, "GetClosestEnemy" }, // 4057573331
		{ &Z_Construct_UFunction_AMordhauAIController_GetCurrentFacingMode, "GetCurrentFacingMode" }, // 4106928641
		{ &Z_Construct_UFunction_AMordhauAIController_GetCurrentlyFacingActor, "GetCurrentlyFacingActor" }, // 1583364102
		{ &Z_Construct_UFunction_AMordhauAIController_GetKthClosestOfThree, "GetKthClosestOfThree" }, // 831229341
		{ &Z_Construct_UFunction_AMordhauAIController_GetMotionBasedRandom, "GetMotionBasedRandom" }, // 2658185554
		{ &Z_Construct_UFunction_AMordhauAIController_GetPerceivedAllies, "GetPerceivedAllies" }, // 2847858120
		{ &Z_Construct_UFunction_AMordhauAIController_GetPerceivedEnemies, "GetPerceivedEnemies" }, // 1546481199
		{ &Z_Construct_UFunction_AMordhauAIController_GetTeam, "GetTeam" }, // 3399385269
		{ &Z_Construct_UFunction_AMordhauAIController_OnAfterUnPossess, "OnAfterUnPossess" }, // 43758738
		{ &Z_Construct_UFunction_AMordhauAIController_OnCharacterDiedOrDestroyed, "OnCharacterDiedOrDestroyed" }, // 548286668
		{ &Z_Construct_UFunction_AMordhauAIController_OnStartedPerceivingCharacter, "OnStartedPerceivingCharacter" }, // 3523400337
		{ &Z_Construct_UFunction_AMordhauAIController_OnStoppedPerceivingCharacter, "OnStoppedPerceivingCharacter" }, // 2399792575
		{ &Z_Construct_UFunction_AMordhauAIController_PerceivesAlly, "PerceivesAlly" }, // 1614752080
		{ &Z_Construct_UFunction_AMordhauAIController_PerceivesEnemy, "PerceivesEnemy" }, // 2762314108
		{ &Z_Construct_UFunction_AMordhauAIController_RefreshCharacterProfile, "RefreshCharacterProfile" }, // 3024259973
		{ &Z_Construct_UFunction_AMordhauAIController_RequestVoiceCommand, "RequestVoiceCommand" }, // 2622909024
		{ &Z_Construct_UFunction_AMordhauAIController_StartFacingActor, "StartFacingActor" }, // 1433747355
		{ &Z_Construct_UFunction_AMordhauAIController_StartFacingActor2D, "StartFacingActor2D" }, // 698658728
		{ &Z_Construct_UFunction_AMordhauAIController_StartFacingBone, "StartFacingBone" }, // 3478131848
		{ &Z_Construct_UFunction_AMordhauAIController_StartFacingLocation, "StartFacingLocation" }, // 3537896058
		{ &Z_Construct_UFunction_AMordhauAIController_StartFacingMovement, "StartFacingMovement" }, // 829983711
		{ &Z_Construct_UFunction_AMordhauAIController_UpdatePerceptionInfo, "UpdatePerceptionInfo" }, // 1746320880
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "MordhauAIController.h" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CustomizationReplicationActor_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CustomizationReplicationActor = { UE4CodeGen_Private::EPropertyClass::Object, "CustomizationReplicationActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, CustomizationReplicationActor), Z_Construct_UClass_ACustomizationReplicationActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CustomizationReplicationActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CustomizationReplicationActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team2NavQueryFilter_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team2NavQueryFilter = { UE4CodeGen_Private::EPropertyClass::Class, "Team2NavQueryFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, Team2NavQueryFilter), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team2NavQueryFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team2NavQueryFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team1NavQueryFilter_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team1NavQueryFilter = { UE4CodeGen_Private::EPropertyClass::Class, "Team1NavQueryFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, Team1NavQueryFilter), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team1NavQueryFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team1NavQueryFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_DefaultNavQueryFilter_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_DefaultNavQueryFilter = { UE4CodeGen_Private::EPropertyClass::Class, "DefaultNavQueryFilter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, DefaultNavQueryFilter), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_DefaultNavQueryFilter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_DefaultNavQueryFilter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality = { UE4CodeGen_Private::EPropertyClass::Enum, "AvoidanceQuality", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, AvoidanceQuality), Z_Construct_UEnum_Mordhau_ECrowdAvoidanceQuality, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceRangeMultiplier_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceRangeMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "AvoidanceRangeMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, AvoidanceRangeMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceRangeMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceRangeMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_PathOptimizationRange_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_PathOptimizationRange = { UE4CodeGen_Private::EPropertyClass::Float, "PathOptimizationRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, PathOptimizationRange), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_PathOptimizationRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_PathOptimizationRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CollisionQueryRange_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CollisionQueryRange = { UE4CodeGen_Private::EPropertyClass::Float, "CollisionQueryRange", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, CollisionQueryRange), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CollisionQueryRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CollisionQueryRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_SeparationWeight_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_SeparationWeight = { UE4CodeGen_Private::EPropertyClass::Float, "SeparationWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, SeparationWeight), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_SeparationWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_SeparationWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnableSlowdownAtGoal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSlowdownAtGoal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnablePathOffset = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnablePathOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnableOptimizeTopology = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOptimizeTopology", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnableOptimizeVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableOptimizeVisibility", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnableSeparation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableSeparation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnableObstacleAvoidance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableObstacleAvoidance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bEnableAnticipateTurns = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns = { UE4CodeGen_Private::EPropertyClass::Bool, "bEnableAnticipateTurns", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_NextRespawnTime_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_NextRespawnTime = { UE4CodeGen_Private::EPropertyClass::Float, "NextRespawnTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, NextRespawnTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_NextRespawnTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_NextRespawnTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bWantsRespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn = { UE4CodeGen_Private::EPropertyClass::Bool, "bWantsRespawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bAutoRespawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutoRespawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanIntervalVariance_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanIntervalVariance = { UE4CodeGen_Private::EPropertyClass::Float, "EnemyScanIntervalVariance", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, EnemyScanIntervalVariance), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanIntervalVariance_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanIntervalVariance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanInterval_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanInterval = { UE4CodeGen_Private::EPropertyClass::Float, "EnemyScanInterval", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, EnemyScanInterval), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanInterval_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BehaviorProfile_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BehaviorProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BehaviorProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, BehaviorProfile), Z_Construct_UClass_UBotBehaviorProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BehaviorProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BehaviorProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BotProfile_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BotProfile = { UE4CodeGen_Private::EPropertyClass::Object, "BotProfile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, BotProfile), Z_Construct_UClass_UBotProfile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BotProfile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BotProfile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_RandomFloat_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_RandomFloat = { UE4CodeGen_Private::EPropertyClass::Float, "RandomFloat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, RandomFloat), METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_RandomFloat_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_RandomFloat_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun_SetBit(void* Obj)
	{
		((AMordhauAIController*)Obj)->bFirstRun = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun = { UE4CodeGen_Private::EPropertyClass::Bool, "bFirstRun", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauAIController), &Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_LastClosestEnemy_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_LastClosestEnemy = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LastClosestEnemy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, LastClosestEnemy), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_LastClosestEnemy_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_LastClosestEnemy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauAIController_Statics::NewProp_ReallyCloseEnemyCached_MetaData[] = {
		{ "Category", "MordhauAIController" },
		{ "ModuleRelativePath", "MordhauAIController.h" },
		{ "ToolTip", "class UAISenseConfig_Sight*                        SightConfig;\nclass UAISenseConfig_Hearing*                      HearingConfig;\nclass UAISenseConfig_Damage*                       DamageConfig;" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauAIController_Statics::NewProp_ReallyCloseEnemyCached = { UE4CodeGen_Private::EPropertyClass::WeakObject, "ReallyCloseEnemyCached", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauAIController, ReallyCloseEnemyCached), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_ReallyCloseEnemyCached_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::NewProp_ReallyCloseEnemyCached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauAIController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CustomizationReplicationActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team2NavQueryFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_Team1NavQueryFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_DefaultNavQueryFilter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceQuality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_AvoidanceRangeMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_PathOptimizationRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_CollisionQueryRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_SeparationWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSlowdownAtGoal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnablePathOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeTopology,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableOptimizeVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableSeparation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableObstacleAvoidance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bEnableAnticipateTurns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_NextRespawnTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bWantsRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bAutoRespawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanIntervalVariance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_EnemyScanInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BehaviorProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_BotProfile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_RandomFloat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_bFirstRun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_LastClosestEnemy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauAIController_Statics::NewProp_ReallyCloseEnemyCached,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauAIController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauAIController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauAIController_Statics::ClassParams = {
		&AMordhauAIController::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauAIController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauAIController_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauAIController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauAIController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauAIController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauAIController, 3667223407);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauAIController(Z_Construct_UClass_AMordhauAIController, &AMordhauAIController::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauAIController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauAIController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
