// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauProjectile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauProjectile() {}
// Cross Module References
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauProjectile_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauProjectile();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauActor();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_AttachProjectile();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_BounceComponent();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_Fire();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystemComponent_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter();
	MORDHAU_API UClass* Z_Construct_UClass_AAdvancedCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_RestockCharacter();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCharacter_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_SpawnDecal();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FDecalInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_SpawnParticles();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_StartTrail();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_StopTrail();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_SweepProjectile();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_WillPassThrough();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauProjectile_WillSticky();
	MORDHAU_API UClass* Z_Construct_UClass_UAdvProjectileMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FEquipmentCustomization();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FActorSetAndArray();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EPhysicalSurface();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FWoundInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FProjectileInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAU_API uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProjectileInfo, Z_Construct_UPackage__Script_Mordhau(), TEXT("ProjectileInfo"), sizeof(FProjectileInfo), Get_Z_Construct_UScriptStruct_FProjectileInfo_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProjectileInfo(FProjectileInfo::StaticStruct, TEXT("/Script/Mordhau"), TEXT("ProjectileInfo"), false, nullptr, nullptr);
static struct FScriptStruct_Mordhau_StaticRegisterNativesFProjectileInfo
{
	FScriptStruct_Mordhau_StaticRegisterNativesFProjectileInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProjectileInfo")),new UScriptStruct::TCppStructOps<FProjectileInfo>);
	}
} ScriptStruct_Mordhau_StaticRegisterNativesFProjectileInfo;
	struct Z_Construct_UScriptStruct_FProjectileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProjectileInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProjectileInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProjectileInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
		nullptr,
		&NewStructOps,
		"ProjectileInfo",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FProjectileInfo),
		alignof(FProjectileInfo),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FProjectileInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProjectileInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_Mordhau();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProjectileInfo"), sizeof(FProjectileInfo), Get_Z_Construct_UScriptStruct_FProjectileInfo_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProjectileInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProjectileInfo_CRC() { return 2925017101U; }
	static FName NAME_AMordhauProjectile_AttachProjectile = FName(TEXT("AttachProjectile"));
	bool AMordhauProjectile::AttachProjectile(FHitResult const& Hit)
	{
		MordhauProjectile_eventAttachProjectile_Parms Parms;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_AttachProjectile),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AMordhauProjectile_CarryOverTrail = FName(TEXT("CarryOverTrail"));
	void AMordhauProjectile::CarryOverTrail(AMordhauProjectile* NewProjectile)
	{
		MordhauProjectile_eventCarryOverTrail_Parms Parms;
		Parms.NewProjectile=NewProjectile;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_CarryOverTrail),&Parms);
	}
	static FName NAME_AMordhauProjectile_Fire = FName(TEXT("Fire"));
	void AMordhauProjectile::Fire()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_Fire),NULL);
	}
	static FName NAME_AMordhauProjectile_OnProjectileDamagedCharacter = FName(TEXT("OnProjectileDamagedCharacter"));
	void AMordhauProjectile::OnProjectileDamagedCharacter(AAdvancedCharacter* Character, bool bWillKill, FVector const& WorldLocation, FName const& bone)
	{
		MordhauProjectile_eventOnProjectileDamagedCharacter_Parms Parms;
		Parms.Character=Character;
		Parms.bWillKill=bWillKill ? true : false;
		Parms.WorldLocation=WorldLocation;
		Parms.bone=bone;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_OnProjectileDamagedCharacter),&Parms);
	}
	static FName NAME_AMordhauProjectile_OnProjectileFired = FName(TEXT("OnProjectileFired"));
	void AMordhauProjectile::OnProjectileFired()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_OnProjectileFired),NULL);
	}
	static FName NAME_AMordhauProjectile_OnProjectileHit = FName(TEXT("OnProjectileHit"));
	void AMordhauProjectile::OnProjectileHit(FVector const& HitLocation, FVector const& HitNormal, float BounceForce, uint8 Surface, bool bHasHitWorld, bool bHasStopped)
	{
		MordhauProjectile_eventOnProjectileHit_Parms Parms;
		Parms.HitLocation=HitLocation;
		Parms.HitNormal=HitNormal;
		Parms.BounceForce=BounceForce;
		Parms.Surface=Surface;
		Parms.bHasHitWorld=bHasHitWorld ? true : false;
		Parms.bHasStopped=bHasStopped ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_OnProjectileHit),&Parms);
	}
	static FName NAME_AMordhauProjectile_OnProjectileHitCosmetic = FName(TEXT("OnProjectileHitCosmetic"));
	void AMordhauProjectile::OnProjectileHitCosmetic(AActor* OtherActor, FHitResult const& Hit)
	{
		MordhauProjectile_eventOnProjectileHitCosmetic_Parms Parms;
		Parms.OtherActor=OtherActor;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_OnProjectileHitCosmetic),&Parms);
	}
	static FName NAME_AMordhauProjectile_ProcessProjectileHit = FName(TEXT("ProcessProjectileHit"));
	void AMordhauProjectile::ProcessProjectileHit(bool bIsBlocking, FHitResult const& Hit)
	{
		MordhauProjectile_eventProcessProjectileHit_Parms Parms;
		Parms.bIsBlocking=bIsBlocking ? true : false;
		Parms.Hit=Hit;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_ProcessProjectileHit),&Parms);
	}
	static FName NAME_AMordhauProjectile_StartTrail = FName(TEXT("StartTrail"));
	void AMordhauProjectile::StartTrail()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_StartTrail),NULL);
	}
	static FName NAME_AMordhauProjectile_StopTrail = FName(TEXT("StopTrail"));
	void AMordhauProjectile::StopTrail()
	{
		ProcessEvent(FindFunctionChecked(NAME_AMordhauProjectile_StopTrail),NULL);
	}
	void AMordhauProjectile::StaticRegisterNativesAMordhauProjectile()
	{
		UClass* Class = AMordhauProjectile::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttachProjectile", &AMordhauProjectile::execAttachProjectile },
			{ "BounceComponent", &AMordhauProjectile::execBounceComponent },
			{ "CarryOverTrail", &AMordhauProjectile::execCarryOverTrail },
			{ "Fire", &AMordhauProjectile::execFire },
			{ "GetCurrentTrailParticles", &AMordhauProjectile::execGetCurrentTrailParticles },
			{ "GetPercentageOfMaxVelocityClamped", &AMordhauProjectile::execGetPercentageOfMaxVelocityClamped },
			{ "GetProjectileCreator", &AMordhauProjectile::execGetProjectileCreator },
			{ "GetProjectileOwningController", &AMordhauProjectile::execGetProjectileOwningController },
			{ "InitializeProjectile", &AMordhauProjectile::execInitializeProjectile },
			{ "OnProjectileDamagedCharacter", &AMordhauProjectile::execOnProjectileDamagedCharacter },
			{ "OnProjectileFired", &AMordhauProjectile::execOnProjectileFired },
			{ "OnProjectileHit", &AMordhauProjectile::execOnProjectileHit },
			{ "OnProjectileHitCosmetic", &AMordhauProjectile::execOnProjectileHitCosmetic },
			{ "OnRep_ProjectileInfo", &AMordhauProjectile::execOnRep_ProjectileInfo },
			{ "ProcessProjectileHit", &AMordhauProjectile::execProcessProjectileHit },
			{ "RestockCharacter", &AMordhauProjectile::execRestockCharacter },
			{ "SetCurrentTrailParticles", &AMordhauProjectile::execSetCurrentTrailParticles },
			{ "SpawnDecal", &AMordhauProjectile::execSpawnDecal },
			{ "SpawnParticles", &AMordhauProjectile::execSpawnParticles },
			{ "StartTrail", &AMordhauProjectile::execStartTrail },
			{ "StopTrail", &AMordhauProjectile::execStopTrail },
			{ "SweepProjectile", &AMordhauProjectile::execSweepProjectile },
			{ "TerminateProjectile", &AMordhauProjectile::execTerminateProjectile },
			{ "UpdateProjectileState", &AMordhauProjectile::execUpdateProjectileState },
			{ "UsesProjectileBlending", &AMordhauProjectile::execUsesProjectileBlending },
			{ "WillPassThrough", &AMordhauProjectile::execWillPassThrough },
			{ "WillSticky", &AMordhauProjectile::execWillSticky },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauProjectile_eventAttachProjectile_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventAttachProjectile_Parms), &Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventAttachProjectile_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "AttachProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(MordhauProjectile_eventAttachProjectile_Parms), Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_AttachProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_AttachProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics
	{
		struct MordhauProjectile_eventBounceComponent_Parms
		{
			USkeletalMeshComponent* ComponentToBounce;
			FVector NewVelocity;
			FVector NewAngularVelocity;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentToBounce_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ComponentToBounce;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewAngularVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "NewAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventBounceComponent_Parms, NewAngularVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "NewVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventBounceComponent_Parms, NewVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewVelocity_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_ComponentToBounce_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_ComponentToBounce = { UE4CodeGen_Private::EPropertyClass::Object, "ComponentToBounce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventBounceComponent_Parms, ComponentToBounce), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_ComponentToBounce_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_ComponentToBounce_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_NewVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::NewProp_ComponentToBounce,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"ProjectileFns\")\n       struct FTransform GetBlendedTransform(float T);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "BounceComponent", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauProjectile_eventBounceComponent_Parms), Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_BounceComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_BounceComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewProjectile;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::NewProp_NewProjectile = { UE4CodeGen_Private::EPropertyClass::Object, "NewProjectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventCarryOverTrail_Parms, NewProjectile), Z_Construct_UClass_AMordhauProjectile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::NewProp_NewProjectile,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "CarryOverTrail", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, sizeof(MordhauProjectile_eventCarryOverTrail_Parms), Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_Fire_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_Fire_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "Fire", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_Fire_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_Fire_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_Fire()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_Fire_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics
	{
		struct MordhauProjectile_eventGetCurrentTrailParticles_Parms
		{
			UParticleSystemComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080588, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventGetCurrentTrailParticles_Parms, ReturnValue), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"ProjectileFns\")\n       struct FTransform GetCurrentTransformWithOffsets();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "GetCurrentTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventGetCurrentTrailParticles_Parms), Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics
	{
		struct MordhauProjectile_eventGetPercentageOfMaxVelocityClamped_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventGetPercentageOfMaxVelocityClamped_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "GetPercentageOfMaxVelocityClamped", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventGetPercentageOfMaxVelocityClamped_Parms), Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics
	{
		struct MordhauProjectile_eventGetProjectileCreator_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventGetProjectileCreator_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "GetProjectileCreator", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventGetProjectileCreator_Parms), Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics
	{
		struct MordhauProjectile_eventGetProjectileOwningController_Parms
		{
			AController* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventGetProjectileOwningController_Parms, ReturnValue), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "GetProjectileOwningController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventGetProjectileOwningController_Parms), Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics
	{
		struct MordhauProjectile_eventInitializeProjectile_Parms
		{
			AController* InOwningController;
			bool bInIsLocallyPredicted;
			AActor* InCreator;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InCreator;
		static void NewProp_bInIsLocallyPredicted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInIsLocallyPredicted;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InOwningController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_InCreator = { UE4CodeGen_Private::EPropertyClass::Object, "InCreator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventInitializeProjectile_Parms, InCreator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_bInIsLocallyPredicted_SetBit(void* Obj)
	{
		((MordhauProjectile_eventInitializeProjectile_Parms*)Obj)->bInIsLocallyPredicted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_bInIsLocallyPredicted = { UE4CodeGen_Private::EPropertyClass::Bool, "bInIsLocallyPredicted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventInitializeProjectile_Parms), &Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_bInIsLocallyPredicted_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_InOwningController = { UE4CodeGen_Private::EPropertyClass::Object, "InOwningController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventInitializeProjectile_Parms, InOwningController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_InCreator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_bInIsLocallyPredicted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::NewProp_InOwningController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "InitializeProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventInitializeProjectile_Parms), Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bone_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_bone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
		static void NewProp_bWillKill_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWillKill;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bone_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bone = { UE4CodeGen_Private::EPropertyClass::Name, "bone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileDamagedCharacter_Parms, bone), METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bone_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_WorldLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "WorldLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileDamagedCharacter_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_WorldLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_WorldLocation_MetaData)) };
	void Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bWillKill_SetBit(void* Obj)
	{
		((MordhauProjectile_eventOnProjectileDamagedCharacter_Parms*)Obj)->bWillKill = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bWillKill = { UE4CodeGen_Private::EPropertyClass::Bool, "bWillKill", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventOnProjectileDamagedCharacter_Parms), &Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bWillKill_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileDamagedCharacter_Parms, Character), Z_Construct_UClass_AAdvancedCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_WorldLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_bWillKill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "OnProjectileDamagedCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(MordhauProjectile_eventOnProjectileDamagedCharacter_Parms), Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "OnProjectileFired", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics
	{
		static void NewProp_bHasStopped_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStopped;
		static void NewProp_bHasHitWorld_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasHitWorld;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasStopped_SetBit(void* Obj)
	{
		((MordhauProjectile_eventOnProjectileHit_Parms*)Obj)->bHasStopped = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasStopped = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStopped", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventOnProjectileHit_Parms), &Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasStopped_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasHitWorld_SetBit(void* Obj)
	{
		((MordhauProjectile_eventOnProjectileHit_Parms*)Obj)->bHasHitWorld = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasHitWorld = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasHitWorld", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventOnProjectileHit_Parms), &Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasHitWorld_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_Surface = { UE4CodeGen_Private::EPropertyClass::Byte, "Surface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileHit_Parms, Surface), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_BounceForce = { UE4CodeGen_Private::EPropertyClass::Float, "BounceForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileHit_Parms, BounceForce), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitNormal = { UE4CodeGen_Private::EPropertyClass::Struct, "HitNormal", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileHit_Parms, HitNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitNormal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "HitLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileHit_Parms, HitLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitLocation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_bHasHitWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_Surface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_BounceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::NewProp_HitLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "OnProjectileHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0CC20C00, sizeof(MordhauProjectile_eventOnProjectileHit_Parms), Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileHitCosmetic_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_OtherActor = { UE4CodeGen_Private::EPropertyClass::Object, "OtherActor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventOnProjectileHitCosmetic_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "OnProjectileHitCosmetic", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(MordhauProjectile_eventOnProjectileHitCosmetic_Parms), Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "OnRep_ProjectileInfo", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static void NewProp_bIsBlocking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsBlocking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_Hit = { UE4CodeGen_Private::EPropertyClass::Struct, "Hit", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventProcessProjectileHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_Hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_Hit_MetaData)) };
	void Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_bIsBlocking_SetBit(void* Obj)
	{
		((MordhauProjectile_eventProcessProjectileHit_Parms*)Obj)->bIsBlocking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_bIsBlocking = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsBlocking", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventProcessProjectileHit_Parms), &Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_bIsBlocking_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_Hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::NewProp_bIsBlocking,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "ProcessProjectileHit", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C420C00, sizeof(MordhauProjectile_eventProcessProjectileHit_Parms), Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics
	{
		struct MordhauProjectile_eventRestockCharacter_Parms
		{
			AMordhauCharacter* Character;
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
	void Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauProjectile_eventRestockCharacter_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventRestockCharacter_Parms), &Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::NewProp_Character = { UE4CodeGen_Private::EPropertyClass::Object, "Character", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventRestockCharacter_Parms, Character), Z_Construct_UClass_AMordhauCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::NewProp_Character,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "RestockCharacter", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventRestockCharacter_Parms), Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_RestockCharacter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_RestockCharacter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics
	{
		struct MordhauProjectile_eventSetCurrentTrailParticles_Parms
		{
			UParticleSystemComponent* ParticleSystemComponent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::NewProp_ParticleSystemComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::NewProp_ParticleSystemComponent = { UE4CodeGen_Private::EPropertyClass::Object, "ParticleSystemComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSetCurrentTrailParticles_Parms, ParticleSystemComponent), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::NewProp_ParticleSystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::NewProp_ParticleSystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::NewProp_ParticleSystemComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "SetCurrentTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventSetCurrentTrailParticles_Parms), Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics
	{
		struct MordhauProjectile_eventSpawnDecal_Parms
		{
			FVector Location;
			FRotator Rotation;
			FDecalInfo DecalInfo;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DecalInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_DecalInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_DecalInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "DecalInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSpawnDecal_Parms, DecalInfo), Z_Construct_UScriptStruct_FDecalInfo, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_DecalInfo_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_DecalInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSpawnDecal_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSpawnDecal_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_DecalInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "SpawnDecal", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauProjectile_eventSpawnDecal_Parms), Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_SpawnDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_SpawnDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics
	{
		struct MordhauProjectile_eventSpawnParticles_Parms
		{
			FVector Location;
			FRotator Rotation;
			UParticleSystem* System;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_System;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_System = { UE4CodeGen_Private::EPropertyClass::Object, "System", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSpawnParticles_Parms, System), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Rotation = { UE4CodeGen_Private::EPropertyClass::Struct, "Rotation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSpawnParticles_Parms, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Location = { UE4CodeGen_Private::EPropertyClass::Struct, "Location", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventSpawnParticles_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Location_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_System,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "SpawnParticles", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04C20401, sizeof(MordhauProjectile_eventSpawnParticles_Parms), Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_SpawnParticles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_SpawnParticles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_StartTrail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_StartTrail_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_StartTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "StartTrail", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_StartTrail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_StartTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_StartTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_StartTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_StopTrail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_StopTrail_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileEvents" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_StopTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "StopTrail", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020C00, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_StopTrail_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_StopTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_StopTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_StopTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_SweepProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_SweepProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_SweepProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "SweepProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_SweepProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_SweepProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_SweepProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_SweepProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "TerminateProjectile", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics
	{
		struct MordhauProjectile_eventUpdateProjectileState_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::NewProp_DeltaTime = { UE4CodeGen_Private::EPropertyClass::Float, "DeltaTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventUpdateProjectileState_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "UpdateProjectileState", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventUpdateProjectileState_Parms), Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics
	{
		struct MordhauProjectile_eventUsesProjectileBlending_Parms
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
	void Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauProjectile_eventUsesProjectileBlending_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventUsesProjectileBlending_Parms), &Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "UsesProjectileBlending", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventUsesProjectileBlending_Parms), Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics
	{
		struct MordhauProjectile_eventWillPassThrough_Parms
		{
			uint8 Surface;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauProjectile_eventWillPassThrough_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventWillPassThrough_Parms), &Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::NewProp_Surface = { UE4CodeGen_Private::EPropertyClass::Byte, "Surface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventWillPassThrough_Parms, Surface), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::NewProp_Surface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "WillPassThrough", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventWillPassThrough_Parms), Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_WillPassThrough()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_WillPassThrough_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics
	{
		struct MordhauProjectile_eventWillSticky_Parms
		{
			uint8 Surface;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Surface;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauProjectile_eventWillSticky_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauProjectile_eventWillSticky_Parms), &Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::NewProp_Surface = { UE4CodeGen_Private::EPropertyClass::Byte, "Surface", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauProjectile_eventWillSticky_Parms, Surface), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::NewProp_Surface,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::Function_MetaDataParams[] = {
		{ "Category", "ProjectileFns" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
		{ "ToolTip", "TEnumAsByte<ETrailWidthMode>                       TrailWidthMode;" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauProjectile, "WillSticky", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(MordhauProjectile_eventWillSticky_Parms), Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauProjectile_WillSticky()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauProjectile_WillSticky_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauProjectile_NoRegister()
	{
		return AMordhauProjectile::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauProjectile_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileMovement_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProjectileMovement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CollisionComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistanceRagdoll_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CullDistanceRagdoll;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bShouldFlinch_MetaData[];
#endif
		static void NewProp_bShouldFlinch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bShouldFlinch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceMinAngularVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceMinAngularVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BounceAngularVelocityFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BounceAngularVelocityFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnvironmentBounceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EnvironmentBounceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileBounceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileBounceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParryBounceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ParryBounceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackBounceForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackBounceForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsLocallyPredicted_MetaData[];
#endif
		static void NewProp_bIsLocallyPredicted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsLocallyPredicted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailWidth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailWidth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailEndSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrailEndSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailStartSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_TrailStartSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTrailParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentTrailParticles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailParticleTemplate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailParticleTemplate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickySurfaceYawBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickySurfaceYawBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StickySurfacePitchBlend_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StickySurfacePitchBlend;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyDetermineSpinLocation_MetaData[];
#endif
		static void NewProp_bAutomaticallyDetermineSpinLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyDetermineSpinLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWillIgnoreShooter_MetaData[];
#endif
		static void NewProp_bWillIgnoreShooter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWillIgnoreShooter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileCollisionPrecedence_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ProjectileCollisionPrecedence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyDetermineMeshLocation_MetaData[];
#endif
		static void NewProp_bAutomaticallyDetermineMeshLocation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyDetermineMeshLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasStartedTrail_MetaData[];
#endif
		static void NewProp_bHasStartedTrail_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasStartedTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsActiveBlendProjectile_MetaData[];
#endif
		static void NewProp_bIsActiveBlendProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsActiveBlendProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreatorEquipmentCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CreatorEquipmentCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAssignCustomizationOnPickup_MetaData[];
#endif
		static void NewProp_bAssignCustomizationOnPickup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAssignCustomizationOnPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GiveEquipmentOnPickup_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GiveEquipmentOnPickup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestockAmmoForEquipment_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_RestockAmmoForEquipment;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RestockAmmoForEquipment_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasFired_MetaData[];
#endif
		static void NewProp_bHasFired_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasFired;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasNetworkOrigin_MetaData[];
#endif
		static void NewProp_bHasNetworkOrigin_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasNetworkOrigin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TerminatedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TerminatedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasTerminated_MetaData[];
#endif
		static void NewProp_bHasTerminated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasTerminated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsConfirmed_MetaData[];
#endif
		static void NewProp_bIsConfirmed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsConfirmed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUsesLocalProjectileBlending_MetaData[];
#endif
		static void NewProp_bUsesLocalProjectileBlending_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUsesLocalProjectileBlending;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastProjectileSweepTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastProjectileSweepTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiredTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FiredTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHasReceivedInfo_MetaData[];
#endif
		static void NewProp_bHasReceivedInfo_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHasReceivedInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StoneDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StoneDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WoodDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WoodDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LegBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LegBonus;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LegBonus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadBonus_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HeadBonus;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeadBonus_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageModifierHuntsmanPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageModifierHuntsmanPerk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedProjectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsFromLocalPlayer_MetaData[];
#endif
		static void NewProp_bIsFromLocalPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsFromLocalPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwningPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningController_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_OwningController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Creator_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Creator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AccumulatedRotationSpin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AccumulatedRotationSpin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitResultCache_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_HitResultCache;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitResultCache_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IgnoreActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticIgnoreActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CosmeticIgnoreActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentFlightSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_CurrentFlightSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FleshImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FleshImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImpactSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImpactSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FlightSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FlightSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AttackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RagdollLifeSpan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RagdollLifeSpan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PathBlendDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PathBlendDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationSpin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceImpactDecals_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SurfaceImpactDecals;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceImpactDecals_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurfaceImpactDecals_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceImpactParticles_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_SurfaceImpactParticles;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurfaceImpactParticles_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceImpactParticles_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WillPassThroughOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WillPassThroughOn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WillPassThroughOn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WillStickyOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WillStickyOn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_WillStickyOn_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WoundInfoArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_WoundInfoArray;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WoundInfoArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMeshRotationOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefaultMeshRotationOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OriginalMeshRelativeTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OriginalMeshRelativeTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticOffsetBlendWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CosmeticOffsetBlendWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticOffsetBlendOutSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CosmeticOffsetBlendOutSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CosmeticOffsetToBlendOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CosmeticOffsetToBlendOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideProjectile_MetaData[];
#endif
		static void NewProp_bHideProjectile_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideProjectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastProjectileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LastProjectileLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ProjectileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bWasAttachedOnClient_MetaData[];
#endif
		static void NewProp_bWasAttachedOnClient_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bWasAttachedOnClient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDestroyWhenTerminated_MetaData[];
#endif
		static void NewProp_bDestroyWhenTerminated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDestroyWhenTerminated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpinComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpinComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauProjectile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauProjectile_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauProjectile_AttachProjectile, "AttachProjectile" }, // 498719532
		{ &Z_Construct_UFunction_AMordhauProjectile_BounceComponent, "BounceComponent" }, // 585147065
		{ &Z_Construct_UFunction_AMordhauProjectile_CarryOverTrail, "CarryOverTrail" }, // 892388724
		{ &Z_Construct_UFunction_AMordhauProjectile_Fire, "Fire" }, // 1693879066
		{ &Z_Construct_UFunction_AMordhauProjectile_GetCurrentTrailParticles, "GetCurrentTrailParticles" }, // 4041527664
		{ &Z_Construct_UFunction_AMordhauProjectile_GetPercentageOfMaxVelocityClamped, "GetPercentageOfMaxVelocityClamped" }, // 4154500970
		{ &Z_Construct_UFunction_AMordhauProjectile_GetProjectileCreator, "GetProjectileCreator" }, // 2620809023
		{ &Z_Construct_UFunction_AMordhauProjectile_GetProjectileOwningController, "GetProjectileOwningController" }, // 3660195810
		{ &Z_Construct_UFunction_AMordhauProjectile_InitializeProjectile, "InitializeProjectile" }, // 2213994248
		{ &Z_Construct_UFunction_AMordhauProjectile_OnProjectileDamagedCharacter, "OnProjectileDamagedCharacter" }, // 2237970237
		{ &Z_Construct_UFunction_AMordhauProjectile_OnProjectileFired, "OnProjectileFired" }, // 2428709866
		{ &Z_Construct_UFunction_AMordhauProjectile_OnProjectileHit, "OnProjectileHit" }, // 547798025
		{ &Z_Construct_UFunction_AMordhauProjectile_OnProjectileHitCosmetic, "OnProjectileHitCosmetic" }, // 2710392151
		{ &Z_Construct_UFunction_AMordhauProjectile_OnRep_ProjectileInfo, "OnRep_ProjectileInfo" }, // 4030202182
		{ &Z_Construct_UFunction_AMordhauProjectile_ProcessProjectileHit, "ProcessProjectileHit" }, // 203359666
		{ &Z_Construct_UFunction_AMordhauProjectile_RestockCharacter, "RestockCharacter" }, // 3718211394
		{ &Z_Construct_UFunction_AMordhauProjectile_SetCurrentTrailParticles, "SetCurrentTrailParticles" }, // 4004034473
		{ &Z_Construct_UFunction_AMordhauProjectile_SpawnDecal, "SpawnDecal" }, // 1400016097
		{ &Z_Construct_UFunction_AMordhauProjectile_SpawnParticles, "SpawnParticles" }, // 67896968
		{ &Z_Construct_UFunction_AMordhauProjectile_StartTrail, "StartTrail" }, // 2466503418
		{ &Z_Construct_UFunction_AMordhauProjectile_StopTrail, "StopTrail" }, // 637821679
		{ &Z_Construct_UFunction_AMordhauProjectile_SweepProjectile, "SweepProjectile" }, // 1106448997
		{ &Z_Construct_UFunction_AMordhauProjectile_TerminateProjectile, "TerminateProjectile" }, // 4261111076
		{ &Z_Construct_UFunction_AMordhauProjectile_UpdateProjectileState, "UpdateProjectileState" }, // 828570531
		{ &Z_Construct_UFunction_AMordhauProjectile_UsesProjectileBlending, "UsesProjectileBlending" }, // 2293299730
		{ &Z_Construct_UFunction_AMordhauProjectile_WillPassThrough, "WillPassThrough" }, // 2240602503
		{ &Z_Construct_UFunction_AMordhauProjectile_WillSticky, "WillSticky" }, // 4013204089
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MordhauProjectile.h" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileMovement_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileMovement = { UE4CodeGen_Private::EPropertyClass::Object, "ProjectileMovement", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ProjectileMovement), Z_Construct_UClass_UAdvProjectileMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileMovement_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileMovement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CollisionComp_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CollisionComp = { UE4CodeGen_Private::EPropertyClass::Object, "CollisionComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CollisionComp), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CollisionComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CollisionComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CullDistanceRagdoll_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CullDistanceRagdoll = { UE4CodeGen_Private::EPropertyClass::Float, "CullDistanceRagdoll", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CullDistanceRagdoll), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CullDistanceRagdoll_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CullDistanceRagdoll_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bShouldFlinch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch = { UE4CodeGen_Private::EPropertyClass::Bool, "bShouldFlinch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceMinAngularVelocity_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceMinAngularVelocity = { UE4CodeGen_Private::EPropertyClass::Float, "BounceMinAngularVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, BounceMinAngularVelocity), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceMinAngularVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceMinAngularVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceAngularVelocityFactor_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceAngularVelocityFactor = { UE4CodeGen_Private::EPropertyClass::Float, "BounceAngularVelocityFactor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, BounceAngularVelocityFactor), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceAngularVelocityFactor_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceAngularVelocityFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_EnvironmentBounceForce_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_EnvironmentBounceForce = { UE4CodeGen_Private::EPropertyClass::Float, "EnvironmentBounceForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, EnvironmentBounceForce), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_EnvironmentBounceForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_EnvironmentBounceForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileBounceForce_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileBounceForce = { UE4CodeGen_Private::EPropertyClass::Float, "ProjectileBounceForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ProjectileBounceForce), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileBounceForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileBounceForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ParryBounceForce_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ParryBounceForce = { UE4CodeGen_Private::EPropertyClass::Float, "ParryBounceForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ParryBounceForce), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ParryBounceForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ParryBounceForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackBounceForce_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackBounceForce = { UE4CodeGen_Private::EPropertyClass::Float, "AttackBounceForce", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, AttackBounceForce), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackBounceForce_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackBounceForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bIsLocallyPredicted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsLocallyPredicted", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailWidth_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailWidth = { UE4CodeGen_Private::EPropertyClass::Float, "TrailWidth", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, TrailWidth), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailWidth_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailWidth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailEndSocket_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailEndSocket = { UE4CodeGen_Private::EPropertyClass::Name, "TrailEndSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, TrailEndSocket), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailEndSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailEndSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailStartSocket_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailStartSocket = { UE4CodeGen_Private::EPropertyClass::Name, "TrailStartSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, TrailStartSocket), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailStartSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailStartSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentTrailParticles_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentTrailParticles = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentTrailParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008000d, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CurrentTrailParticles), Z_Construct_UClass_UParticleSystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentTrailParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentTrailParticles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailParticleTemplate_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailParticleTemplate = { UE4CodeGen_Private::EPropertyClass::Object, "TrailParticleTemplate", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, TrailParticleTemplate), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailParticleTemplate_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailParticleTemplate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfaceYawBlend_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfaceYawBlend = { UE4CodeGen_Private::EPropertyClass::Float, "StickySurfaceYawBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, StickySurfaceYawBlend), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfaceYawBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfaceYawBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfacePitchBlend_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfacePitchBlend = { UE4CodeGen_Private::EPropertyClass::Float, "StickySurfacePitchBlend", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, StickySurfacePitchBlend), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfacePitchBlend_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfacePitchBlend_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bAutomaticallyDetermineSpinLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticallyDetermineSpinLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bWillIgnoreShooter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter = { UE4CodeGen_Private::EPropertyClass::Bool, "bWillIgnoreShooter", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileCollisionPrecedence_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileCollisionPrecedence = { UE4CodeGen_Private::EPropertyClass::Int, "ProjectileCollisionPrecedence", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ProjectileCollisionPrecedence), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileCollisionPrecedence_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileCollisionPrecedence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bAutomaticallyDetermineMeshLocation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation = { UE4CodeGen_Private::EPropertyClass::Bool, "bAutomaticallyDetermineMeshLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bHasStartedTrail = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasStartedTrail", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bIsActiveBlendProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsActiveBlendProjectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CreatorEquipmentCustomization_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CreatorEquipmentCustomization = { UE4CodeGen_Private::EPropertyClass::Struct, "CreatorEquipmentCustomization", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CreatorEquipmentCustomization), Z_Construct_UScriptStruct_FEquipmentCustomization, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CreatorEquipmentCustomization_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CreatorEquipmentCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bAssignCustomizationOnPickup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup = { UE4CodeGen_Private::EPropertyClass::Bool, "bAssignCustomizationOnPickup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_GiveEquipmentOnPickup_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_GiveEquipmentOnPickup = { UE4CodeGen_Private::EPropertyClass::Class, "GiveEquipmentOnPickup", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, GiveEquipmentOnPickup), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_GiveEquipmentOnPickup_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_GiveEquipmentOnPickup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment = { UE4CodeGen_Private::EPropertyClass::Array, "RestockAmmoForEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, RestockAmmoForEquipment), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment_Inner = { UE4CodeGen_Private::EPropertyClass::Class, "RestockAmmoForEquipment", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bHasFired = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasFired", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bHasNetworkOrigin = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasNetworkOrigin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TerminatedTime_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TerminatedTime = { UE4CodeGen_Private::EPropertyClass::Float, "TerminatedTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, TerminatedTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TerminatedTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TerminatedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bHasTerminated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasTerminated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bIsConfirmed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsConfirmed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bUsesLocalProjectileBlending = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending = { UE4CodeGen_Private::EPropertyClass::Bool, "bUsesLocalProjectileBlending", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileSweepTime_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileSweepTime = { UE4CodeGen_Private::EPropertyClass::Float, "LastProjectileSweepTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, LastProjectileSweepTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileSweepTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileSweepTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FiredTime_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FiredTime = { UE4CodeGen_Private::EPropertyClass::Float, "FiredTime", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, FiredTime), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FiredTime_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FiredTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SkeletalMeshComponent_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SkeletalMeshComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SkeletalMeshComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, SkeletalMeshComponent), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SkeletalMeshComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SkeletalMeshComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bHasReceivedInfo = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo = { UE4CodeGen_Private::EPropertyClass::Bool, "bHasReceivedInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StoneDamage_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StoneDamage = { UE4CodeGen_Private::EPropertyClass::Float, "StoneDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, StoneDamage), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StoneDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StoneDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoodDamage_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoodDamage = { UE4CodeGen_Private::EPropertyClass::Float, "WoodDamage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, WoodDamage), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoodDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoodDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus = { UE4CodeGen_Private::EPropertyClass::Array, "LegBonus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, LegBonus), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "LegBonus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus = { UE4CodeGen_Private::EPropertyClass::Array, "HeadBonus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, HeadBonus), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "HeadBonus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage = { UE4CodeGen_Private::EPropertyClass::Array, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, Damage), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage_Inner = { UE4CodeGen_Private::EPropertyClass::Float, "Damage", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageMultiplier_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "DamageMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, DamageMultiplier), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageModifierHuntsmanPerk_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageModifierHuntsmanPerk = { UE4CodeGen_Private::EPropertyClass::Float, "DamageModifierHuntsmanPerk", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, DamageModifierHuntsmanPerk), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageModifierHuntsmanPerk_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageModifierHuntsmanPerk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AssociatedProjectile_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AssociatedProjectile = { UE4CodeGen_Private::EPropertyClass::Object, "AssociatedProjectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, AssociatedProjectile), Z_Construct_UClass_AMordhauProjectile_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AssociatedProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AssociatedProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bIsFromLocalPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsFromLocalPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningPawn_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningPawn = { UE4CodeGen_Private::EPropertyClass::WeakObject, "OwningPawn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, OwningPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningPawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningController_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningController = { UE4CodeGen_Private::EPropertyClass::WeakObject, "OwningController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, OwningController), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningController_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Creator_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Creator = { UE4CodeGen_Private::EPropertyClass::WeakObject, "Creator", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0014000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, Creator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Creator_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Creator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileInfo_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileInfo = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectileInfo", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ProjectileInfo), Z_Construct_UScriptStruct_FProjectileInfo, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileInfo_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AccumulatedRotationSpin_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AccumulatedRotationSpin = { UE4CodeGen_Private::EPropertyClass::Struct, "AccumulatedRotationSpin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, AccumulatedRotationSpin), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AccumulatedRotationSpin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AccumulatedRotationSpin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache = { UE4CodeGen_Private::EPropertyClass::Array, "HitResultCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010008000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, HitResultCache), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "HitResultCache", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000008000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_IgnoreActors_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_IgnoreActors = { UE4CodeGen_Private::EPropertyClass::Struct, "IgnoreActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, IgnoreActors), Z_Construct_UScriptStruct_FActorSetAndArray, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_IgnoreActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_IgnoreActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticIgnoreActors_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticIgnoreActors = { UE4CodeGen_Private::EPropertyClass::Struct, "CosmeticIgnoreActors", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CosmeticIgnoreActors), Z_Construct_UScriptStruct_FActorSetAndArray, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticIgnoreActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticIgnoreActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentFlightSound_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentFlightSound = { UE4CodeGen_Private::EPropertyClass::WeakObject, "CurrentFlightSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008000d, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CurrentFlightSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentFlightSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentFlightSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FleshImpactSound_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FleshImpactSound = { UE4CodeGen_Private::EPropertyClass::Object, "FleshImpactSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, FleshImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FleshImpactSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FleshImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ImpactSound_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ImpactSound = { UE4CodeGen_Private::EPropertyClass::Object, "ImpactSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ImpactSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ImpactSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ImpactSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FlightSound_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FlightSound = { UE4CodeGen_Private::EPropertyClass::Object, "FlightSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, FlightSound), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FlightSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FlightSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackMask_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackMask = { UE4CodeGen_Private::EPropertyClass::Byte, "AttackMask", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, AttackMask), nullptr, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackMask_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RagdollLifeSpan_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RagdollLifeSpan = { UE4CodeGen_Private::EPropertyClass::Float, "RagdollLifeSpan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, RagdollLifeSpan), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RagdollLifeSpan_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RagdollLifeSpan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_PathBlendDuration_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_PathBlendDuration = { UE4CodeGen_Private::EPropertyClass::Float, "PathBlendDuration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, PathBlendDuration), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_PathBlendDuration_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_PathBlendDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RotationSpin_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RotationSpin = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationSpin", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, RotationSpin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RotationSpin_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RotationSpin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals = { UE4CodeGen_Private::EPropertyClass::Map, "SurfaceImpactDecals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, SurfaceImpactDecals), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceImpactDecals_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_ValueProp = { UE4CodeGen_Private::EPropertyClass::Struct, "SurfaceImpactDecals", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UScriptStruct_FDecalInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles = { UE4CodeGen_Private::EPropertyClass::Map, "SurfaceImpactParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, SurfaceImpactParticles), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Byte, "SurfaceImpactParticles_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_ValueProp = { UE4CodeGen_Private::EPropertyClass::Object, "SurfaceImpactParticles", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn = { UE4CodeGen_Private::EPropertyClass::Array, "WillPassThroughOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, WillPassThroughOn), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "WillPassThroughOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn = { UE4CodeGen_Private::EPropertyClass::Array, "WillStickyOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, WillStickyOn), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn_Inner = { UE4CodeGen_Private::EPropertyClass::Byte, "WillStickyOn", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UEnum_Engine_EPhysicalSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray = { UE4CodeGen_Private::EPropertyClass::Array, "WoundInfoArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, WoundInfoArray), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "WoundInfoArray", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, Z_Construct_UScriptStruct_FWoundInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DefaultMeshRotationOffset_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DefaultMeshRotationOffset = { UE4CodeGen_Private::EPropertyClass::Struct, "DefaultMeshRotationOffset", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, DefaultMeshRotationOffset), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DefaultMeshRotationOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DefaultMeshRotationOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OriginalMeshRelativeTransform_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OriginalMeshRelativeTransform = { UE4CodeGen_Private::EPropertyClass::Struct, "OriginalMeshRelativeTransform", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, OriginalMeshRelativeTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OriginalMeshRelativeTransform_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OriginalMeshRelativeTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendWeight_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendWeight = { UE4CodeGen_Private::EPropertyClass::Float, "CosmeticOffsetBlendWeight", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CosmeticOffsetBlendWeight), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendWeight_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendOutSpeed_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendOutSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "CosmeticOffsetBlendOutSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CosmeticOffsetBlendOutSpeed), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendOutSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendOutSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetToBlendOut_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetToBlendOut = { UE4CodeGen_Private::EPropertyClass::Struct, "CosmeticOffsetToBlendOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, CosmeticOffsetToBlendOut), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetToBlendOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetToBlendOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bHideProjectile = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideProjectile", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileLocation_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileLocation = { UE4CodeGen_Private::EPropertyClass::Struct, "LastProjectileLocation", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, LastProjectileLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileName_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileName = { UE4CodeGen_Private::EPropertyClass::Text, "ProjectileName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, ProjectileName), METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileName_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bWasAttachedOnClient = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient = { UE4CodeGen_Private::EPropertyClass::Bool, "bWasAttachedOnClient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated_SetBit(void* Obj)
	{
		((AMordhauProjectile*)Obj)->bDestroyWhenTerminated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated = { UE4CodeGen_Private::EPropertyClass::Bool, "bDestroyWhenTerminated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauProjectile), &Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SpinComponent_MetaData[] = {
		{ "Category", "MordhauProjectile" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "MordhauProjectile.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SpinComponent = { UE4CodeGen_Private::EPropertyClass::Object, "SpinComponent", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00100000000a000d, 1, nullptr, STRUCT_OFFSET(AMordhauProjectile, SpinComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SpinComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SpinComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileMovement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CollisionComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CullDistanceRagdoll,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bShouldFlinch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceMinAngularVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_BounceAngularVelocityFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_EnvironmentBounceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileBounceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ParryBounceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackBounceForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsLocallyPredicted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailWidth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailEndSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailStartSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentTrailParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TrailParticleTemplate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfaceYawBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StickySurfacePitchBlend,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineSpinLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWillIgnoreShooter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileCollisionPrecedence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAutomaticallyDetermineMeshLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasStartedTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsActiveBlendProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CreatorEquipmentCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bAssignCustomizationOnPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_GiveEquipmentOnPickup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RestockAmmoForEquipment_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasFired,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasNetworkOrigin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_TerminatedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasTerminated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsConfirmed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bUsesLocalProjectileBlending,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileSweepTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FiredTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SkeletalMeshComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHasReceivedInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_StoneDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoodDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LegBonus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HeadBonus_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Damage_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DamageModifierHuntsmanPerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AssociatedProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bIsFromLocalPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OwningController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_Creator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AccumulatedRotationSpin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_HitResultCache_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_IgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticIgnoreActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CurrentFlightSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FleshImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ImpactSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_FlightSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_AttackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RagdollLifeSpan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_PathBlendDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_RotationSpin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactDecals_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SurfaceImpactParticles_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillPassThroughOn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WillStickyOn_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_WoundInfoArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_DefaultMeshRotationOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_OriginalMeshRelativeTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetBlendOutSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_CosmeticOffsetToBlendOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bHideProjectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_LastProjectileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_ProjectileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bWasAttachedOnClient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_bDestroyWhenTerminated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauProjectile_Statics::NewProp_SpinComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauProjectile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauProjectile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauProjectile_Statics::ClassParams = {
		&AMordhauProjectile::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauProjectile_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauProjectile_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauProjectile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauProjectile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauProjectile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauProjectile, 2721501593);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauProjectile(Z_Construct_UClass_AMordhauProjectile, &AMordhauProjectile::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauProjectile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauProjectile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
