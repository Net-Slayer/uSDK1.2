// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauPlayerStart.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauPlayerStart() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerStart_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauPlayerStart();
	ENGINE_API UClass* Z_Construct_UClass_APlayerStart();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	MORDHAU_API UFunction* Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor();
// End Cross Module References
	static FName NAME_AMordhauPlayerStart_GetSpawnPreferenceFor = FName(TEXT("GetSpawnPreferenceFor"));
	float AMordhauPlayerStart::GetSpawnPreferenceFor(AController* Player)
	{
		MordhauPlayerStart_eventGetSpawnPreferenceFor_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauPlayerStart_GetSpawnPreferenceFor),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_AMordhauPlayerStart_IsAllowedSpawnFor = FName(TEXT("IsAllowedSpawnFor"));
	bool AMordhauPlayerStart::IsAllowedSpawnFor(AController* Player)
	{
		MordhauPlayerStart_eventIsAllowedSpawnFor_Parms Parms;
		Parms.Player=Player;
		ProcessEvent(FindFunctionChecked(NAME_AMordhauPlayerStart_IsAllowedSpawnFor),&Parms);
		return !!Parms.ReturnValue;
	}
	void AMordhauPlayerStart::StaticRegisterNativesAMordhauPlayerStart()
	{
	}
	struct Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Float, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(MordhauPlayerStart_eventGetSpawnPreferenceFor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerStart_eventGetSpawnPreferenceFor_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStartEvents" },
		{ "ModuleRelativePath", "MordhauPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerStart, "GetSpawnPreferenceFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauPlayerStart_eventGetSpawnPreferenceFor_Parms), Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((MordhauPlayerStart_eventIsAllowedSpawnFor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(MordhauPlayerStart_eventIsAllowedSpawnFor_Parms), &Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::NewProp_Player = { UE4CodeGen_Private::EPropertyClass::Object, "Player", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(MordhauPlayerStart_eventIsAllowedSpawnFor_Parms, Player), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::NewProp_Player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::Function_MetaDataParams[] = {
		{ "Category", "PlayerStartEvents" },
		{ "ModuleRelativePath", "MordhauPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMordhauPlayerStart, "IsAllowedSpawnFor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x0C020800, sizeof(MordhauPlayerStart_eventIsAllowedSpawnFor_Parms), Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AMordhauPlayerStart_NoRegister()
	{
		return AMordhauPlayerStart::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauPlayerStart_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Token_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Token;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsSpawnDisabled_MetaData[];
#endif
		static void NewProp_bIsSpawnDisabled_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsSpawnDisabled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Team_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Team;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauPlayerStart_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerStart,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AMordhauPlayerStart_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AMordhauPlayerStart_GetSpawnPreferenceFor, "GetSpawnPreferenceFor" }, // 3697837793
		{ &Z_Construct_UFunction_AMordhauPlayerStart_IsAllowedSpawnFor, "IsAllowedSpawnFor" }, // 1903619162
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerStart_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Lighting LightColor Force" },
		{ "IncludePath", "MordhauPlayerStart.h" },
		{ "ModuleRelativePath", "MordhauPlayerStart.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Token_MetaData[] = {
		{ "Category", "MordhauPlayerStart" },
		{ "ModuleRelativePath", "MordhauPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Token = { UE4CodeGen_Private::EPropertyClass::Int, "Token", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerStart, Token), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Token_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Token_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled_MetaData[] = {
		{ "Category", "MordhauPlayerStart" },
		{ "ModuleRelativePath", "MordhauPlayerStart.h" },
	};
#endif
	void Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled_SetBit(void* Obj)
	{
		((AMordhauPlayerStart*)Obj)->bIsSpawnDisabled = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled = { UE4CodeGen_Private::EPropertyClass::Bool, "bIsSpawnDisabled", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(AMordhauPlayerStart), &Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled_SetBit, METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Team_MetaData[] = {
		{ "Category", "MordhauPlayerStart" },
		{ "ModuleRelativePath", "MordhauPlayerStart.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Team = { UE4CodeGen_Private::EPropertyClass::Int, "Team", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauPlayerStart, Team), METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Team_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Team_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauPlayerStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Token,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_bIsSpawnDisabled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauPlayerStart_Statics::NewProp_Team,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauPlayerStart_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauPlayerStart>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauPlayerStart_Statics::ClassParams = {
		&AMordhauPlayerStart::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_AMordhauPlayerStart_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerStart_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauPlayerStart_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauPlayerStart_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauPlayerStart()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauPlayerStart_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauPlayerStart, 3194577739);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauPlayerStart(Z_Construct_UClass_AMordhauPlayerStart, &AMordhauPlayerStart::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauPlayerStart"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauPlayerStart);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
