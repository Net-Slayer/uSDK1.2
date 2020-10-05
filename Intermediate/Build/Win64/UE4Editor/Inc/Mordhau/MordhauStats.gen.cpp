// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauStats.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauStats() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauStats_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauStats();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FStatInt();
	ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
	MORDHAU_API UScriptStruct* Z_Construct_UScriptStruct_FAchievement();
// End Cross Module References
	void UMordhauStats::StaticRegisterNativesUMordhauStats()
	{
		UClass* Class = UMordhauStats::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "IncrementIntStatValueChecked", &UMordhauStats::execIncrementIntStatValueChecked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics
	{
		struct MordhauStats_eventIncrementIntStatValueChecked_Parms
		{
			UWorld* World;
			FStatInt Stat;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Stat_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Stat;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_World;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_Stat_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_Stat = { UE4CodeGen_Private::EPropertyClass::Struct, "Stat", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(MordhauStats_eventIncrementIntStatValueChecked_Parms, Stat), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_Stat_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_Stat_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_World = { UE4CodeGen_Private::EPropertyClass::Object, "World", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauStats_eventIncrementIntStatValueChecked_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_Stat,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::NewProp_World,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::Function_MetaDataParams[] = {
		{ "Category", "StatFunctions" },
		{ "ModuleRelativePath", "MordhauStats.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMordhauStats, "IncrementIntStatValueChecked", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(MordhauStats_eventIncrementIntStatValueChecked_Parms), Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMordhauStats_NoRegister()
	{
		return UMordhauStats::StaticClass();
	}
	struct Z_Construct_UClass_UMordhauStats_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BurningMan_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BurningMan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NotSparta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NotSparta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JusticeFromGrave_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_JusticeFromGrave;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Yoink_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Yoink;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EagleEye_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EagleEye;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeepsComingOff_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KeepsComingOff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Highlander_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Highlander;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LivedToTell_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LivedToTell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TheABCs_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TheABCs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunRankSamples_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunRankSamples;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FunRank_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FunRank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrampleKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TrampleKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LadderKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LadderKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CouchedHeadKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CouchedHeadKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FireKills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FireKills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsOneAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillsOneAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeLegHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeLegHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeTorsoHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeTorsoHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeleeHeadHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MeleeHeadHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileLegHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileLegHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileTorsoHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileTorsoHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileHeadHits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectileHeadHits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HeadsDecapitated_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HeadsDecapitated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageTakenOneLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DamageTakenOneLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsOneLife_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillsOneLife;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssistsOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssistsOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillsOneMatch_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillsOneMatch;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Assists_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Assists;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Kills_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Kills;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Disarms_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Disarms;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Battlecries_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Battlecries;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilesBlocked_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectilesBlocked;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectilesDeflected_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ProjectilesDeflected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Chambers_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Chambers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Blocks_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Blocks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GameVersion;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMordhauStats_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMordhauStats_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMordhauStats_IncrementIntStatValueChecked, "IncrementIntStatValueChecked" }, // 468634128
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "MordhauStats.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_BurningMan_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_BurningMan = { UE4CodeGen_Private::EPropertyClass::Struct, "BurningMan", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, BurningMan), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_BurningMan_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_BurningMan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_NotSparta_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_NotSparta = { UE4CodeGen_Private::EPropertyClass::Struct, "NotSparta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, NotSparta), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_NotSparta_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_NotSparta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_JusticeFromGrave_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_JusticeFromGrave = { UE4CodeGen_Private::EPropertyClass::Struct, "JusticeFromGrave", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, JusticeFromGrave), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_JusticeFromGrave_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_JusticeFromGrave_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Yoink_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Yoink = { UE4CodeGen_Private::EPropertyClass::Struct, "Yoink", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Yoink), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Yoink_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Yoink_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_EagleEye_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_EagleEye = { UE4CodeGen_Private::EPropertyClass::Struct, "EagleEye", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, EagleEye), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_EagleEye_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_EagleEye_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_KeepsComingOff_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_KeepsComingOff = { UE4CodeGen_Private::EPropertyClass::Struct, "KeepsComingOff", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, KeepsComingOff), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KeepsComingOff_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KeepsComingOff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Highlander_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Highlander = { UE4CodeGen_Private::EPropertyClass::Struct, "Highlander", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Highlander), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Highlander_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Highlander_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_LivedToTell_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_LivedToTell = { UE4CodeGen_Private::EPropertyClass::Struct, "LivedToTell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, LivedToTell), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_LivedToTell_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_LivedToTell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_TheABCs_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_TheABCs = { UE4CodeGen_Private::EPropertyClass::Struct, "TheABCs", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, TheABCs), Z_Construct_UScriptStruct_FAchievement, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_TheABCs_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_TheABCs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRankSamples_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRankSamples = { UE4CodeGen_Private::EPropertyClass::Struct, "FunRankSamples", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, FunRankSamples), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRankSamples_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRankSamples_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRank_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRank = { UE4CodeGen_Private::EPropertyClass::Struct, "FunRank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, FunRank), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRank_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_TrampleKills_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_TrampleKills = { UE4CodeGen_Private::EPropertyClass::Struct, "TrampleKills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, TrampleKills), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_TrampleKills_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_TrampleKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_LadderKills_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_LadderKills = { UE4CodeGen_Private::EPropertyClass::Struct, "LadderKills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, LadderKills), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_LadderKills_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_LadderKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_CouchedHeadKills_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_CouchedHeadKills = { UE4CodeGen_Private::EPropertyClass::Struct, "CouchedHeadKills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, CouchedHeadKills), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_CouchedHeadKills_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_CouchedHeadKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_FireKills_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_FireKills = { UE4CodeGen_Private::EPropertyClass::Struct, "FireKills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, FireKills), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_FireKills_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_FireKills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneAttack_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneAttack = { UE4CodeGen_Private::EPropertyClass::Struct, "KillsOneAttack", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, KillsOneAttack), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneAttack_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeLegHits_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeLegHits = { UE4CodeGen_Private::EPropertyClass::Struct, "MeleeLegHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, MeleeLegHits), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeLegHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeLegHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeTorsoHits_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeTorsoHits = { UE4CodeGen_Private::EPropertyClass::Struct, "MeleeTorsoHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, MeleeTorsoHits), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeTorsoHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeTorsoHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeHeadHits_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeHeadHits = { UE4CodeGen_Private::EPropertyClass::Struct, "MeleeHeadHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, MeleeHeadHits), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeHeadHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeHeadHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileLegHits_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileLegHits = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectileLegHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, ProjectileLegHits), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileLegHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileLegHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileTorsoHits_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileTorsoHits = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectileTorsoHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, ProjectileTorsoHits), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileTorsoHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileTorsoHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileHeadHits_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileHeadHits = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectileHeadHits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, ProjectileHeadHits), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileHeadHits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileHeadHits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_HeadsDecapitated_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_HeadsDecapitated = { UE4CodeGen_Private::EPropertyClass::Struct, "HeadsDecapitated", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, HeadsDecapitated), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_HeadsDecapitated_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_HeadsDecapitated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_DamageTakenOneLife_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_DamageTakenOneLife = { UE4CodeGen_Private::EPropertyClass::Struct, "DamageTakenOneLife", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, DamageTakenOneLife), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_DamageTakenOneLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_DamageTakenOneLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneLife_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneLife = { UE4CodeGen_Private::EPropertyClass::Struct, "KillsOneLife", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, KillsOneLife), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneLife_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneLife_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_AssistsOneMatch_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_AssistsOneMatch = { UE4CodeGen_Private::EPropertyClass::Struct, "AssistsOneMatch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, AssistsOneMatch), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_AssistsOneMatch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_AssistsOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneMatch_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneMatch = { UE4CodeGen_Private::EPropertyClass::Struct, "KillsOneMatch", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, KillsOneMatch), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneMatch_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneMatch_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Assists_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Assists = { UE4CodeGen_Private::EPropertyClass::Struct, "Assists", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Assists), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Assists_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Assists_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Kills_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Kills = { UE4CodeGen_Private::EPropertyClass::Struct, "Kills", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Kills), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Kills_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Kills_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Disarms_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Disarms = { UE4CodeGen_Private::EPropertyClass::Struct, "Disarms", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Disarms), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Disarms_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Disarms_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Battlecries_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Battlecries = { UE4CodeGen_Private::EPropertyClass::Struct, "Battlecries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Battlecries), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Battlecries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Battlecries_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesBlocked_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesBlocked = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectilesBlocked", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, ProjectilesBlocked), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesBlocked_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesBlocked_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesDeflected_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesDeflected = { UE4CodeGen_Private::EPropertyClass::Struct, "ProjectilesDeflected", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, ProjectilesDeflected), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesDeflected_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesDeflected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Chambers_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Chambers = { UE4CodeGen_Private::EPropertyClass::Struct, "Chambers", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Chambers), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Chambers_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Chambers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_Blocks_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_Blocks = { UE4CodeGen_Private::EPropertyClass::Struct, "Blocks", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, Blocks), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Blocks_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_Blocks_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMordhauStats_Statics::NewProp_GameVersion_MetaData[] = {
		{ "Category", "MordhauStats" },
		{ "ModuleRelativePath", "MordhauStats.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMordhauStats_Statics::NewProp_GameVersion = { UE4CodeGen_Private::EPropertyClass::Struct, "GameVersion", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UMordhauStats, GameVersion), Z_Construct_UScriptStruct_FStatInt, METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::NewProp_GameVersion_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::NewProp_GameVersion_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMordhauStats_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_BurningMan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_NotSparta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_JusticeFromGrave,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Yoink,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_EagleEye,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_KeepsComingOff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Highlander,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_LivedToTell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_TheABCs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRankSamples,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_FunRank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_TrampleKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_LadderKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_CouchedHeadKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_FireKills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeLegHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeTorsoHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_MeleeHeadHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileLegHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileTorsoHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectileHeadHits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_HeadsDecapitated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_DamageTakenOneLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneLife,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_AssistsOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_KillsOneMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Assists,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Kills,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Disarms,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Battlecries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesBlocked,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_ProjectilesDeflected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Chambers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_Blocks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMordhauStats_Statics::NewProp_GameVersion,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMordhauStats_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMordhauStats>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMordhauStats_Statics::ClassParams = {
		&UMordhauStats::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UMordhauStats_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UMordhauStats_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMordhauStats_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMordhauStats()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMordhauStats_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMordhauStats, 1427595466);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMordhauStats(Z_Construct_UClass_UMordhauStats, &UMordhauStats::StaticClass, TEXT("/Script/Mordhau"), TEXT("UMordhauStats"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMordhauStats);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
