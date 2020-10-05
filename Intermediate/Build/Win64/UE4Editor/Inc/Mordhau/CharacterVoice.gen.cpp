// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/CharacterVoice.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterVoice() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_UCharacterVoice_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_UCharacterVoice();
	MORDHAU_API UClass* Z_Construct_UClass_UMordhauInventoryItem();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
// End Cross Module References
	void UCharacterVoice::StaticRegisterNativesUCharacterVoice()
	{
	}
	UClass* Z_Construct_UClass_UCharacterVoice_NoRegister()
	{
		return UCharacterVoice::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterVoice_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClipCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ClipCounts;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ClipCounts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PitchLimits_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PitchLimits;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Screaming_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Screaming;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Breathing_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Breathing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackYell_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackYell;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Death_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Death;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hurt_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hurt;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VoiceCommands_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VoiceCommands;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterVoice_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMordhauInventoryItem,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterVoice.h" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts = { UE4CodeGen_Private::EPropertyClass::Array, "ClipCounts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, ClipCounts), METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts_MetaData)) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts_Inner = { UE4CodeGen_Private::EPropertyClass::Int, "ClipCounts", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_PitchLimits_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_PitchLimits = { UE4CodeGen_Private::EPropertyClass::Struct, "PitchLimits", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, PitchLimits), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_PitchLimits_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_PitchLimits_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Screaming_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Screaming = { UE4CodeGen_Private::EPropertyClass::Object, "Screaming", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, Screaming), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Screaming_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Screaming_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Breathing_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Breathing = { UE4CodeGen_Private::EPropertyClass::Object, "Breathing", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, Breathing), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Breathing_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Breathing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_AttackYell_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_AttackYell = { UE4CodeGen_Private::EPropertyClass::Object, "AttackYell", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, AttackYell), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_AttackYell_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_AttackYell_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Death_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Death = { UE4CodeGen_Private::EPropertyClass::Object, "Death", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, Death), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Death_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Death_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Hurt_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Hurt = { UE4CodeGen_Private::EPropertyClass::Object, "Hurt", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, Hurt), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Hurt_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Hurt_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterVoice_Statics::NewProp_VoiceCommands_MetaData[] = {
		{ "Category", "CharacterVoice" },
		{ "ModuleRelativePath", "CharacterVoice.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UCharacterVoice_Statics::NewProp_VoiceCommands = { UE4CodeGen_Private::EPropertyClass::Object, "VoiceCommands", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(UCharacterVoice, VoiceCommands), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_VoiceCommands_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::NewProp_VoiceCommands_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCharacterVoice_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_ClipCounts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_PitchLimits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Screaming,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Breathing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_AttackYell,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Death,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_Hurt,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCharacterVoice_Statics::NewProp_VoiceCommands,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterVoice_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterVoice>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterVoice_Statics::ClassParams = {
		&UCharacterVoice::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		nullptr, 0,
		Z_Construct_UClass_UCharacterVoice_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterVoice_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCharacterVoice_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterVoice()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterVoice_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterVoice, 471134083);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterVoice(Z_Construct_UClass_UCharacterVoice, &UCharacterVoice::StaticClass, TEXT("/Script/Mordhau"), TEXT("UCharacterVoice"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterVoice);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
