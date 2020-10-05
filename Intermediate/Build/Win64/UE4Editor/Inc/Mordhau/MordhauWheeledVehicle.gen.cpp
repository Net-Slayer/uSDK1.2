// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Mordhau/MordhauWheeledVehicle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMordhauWheeledVehicle() {}
// Cross Module References
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWheeledVehicle_NoRegister();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauWheeledVehicle();
	MORDHAU_API UClass* Z_Construct_UClass_AMordhauCompoundVehicle();
	UPackage* Z_Construct_UPackage__Script_Mordhau();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundCue_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AMordhauWheeledVehicle::StaticRegisterNativesAMordhauWheeledVehicle()
	{
	}
	UClass* Z_Construct_UClass_AMordhauWheeledVehicle_NoRegister()
	{
		return AMordhauWheeledVehicle::StaticClass();
	}
	struct Z_Construct_UClass_AMordhauWheeledVehicle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastMoveSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_LastMoveSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSoundCue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MoveSoundCue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightHandIKPushTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RightHandIKPushTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftHandIKPushTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_LeftHandIKPushTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationVelocityMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationVelocityMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationVelocityInterpSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationVelocityInterpSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinTranslationVelocityToPlayMoveSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinTranslationVelocityToPlayMoveSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinRotationVelocityToPlayMoveSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MinRotationVelocityToPlayMoveSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSoundFadeOut_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSoundFadeOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSoundAttachSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MoveSoundAttachSocket;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RotationVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMordhauWheeledVehicle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AMordhauCompoundVehicle,
		(UObject* (*)())Z_Construct_UPackage__Script_Mordhau,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MordhauWheeledVehicle.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LastMoveSound_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LastMoveSound = { UE4CodeGen_Private::EPropertyClass::WeakObject, "LastMoveSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x001400000008000d, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, LastMoveSound), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LastMoveSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LastMoveSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundCue_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundCue = { UE4CodeGen_Private::EPropertyClass::Object, "MoveSoundCue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, MoveSoundCue), Z_Construct_UClass_USoundCue_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundCue_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundCue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RightHandIKPushTarget_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RightHandIKPushTarget = { UE4CodeGen_Private::EPropertyClass::Name, "RightHandIKPushTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, RightHandIKPushTarget), METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RightHandIKPushTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RightHandIKPushTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LeftHandIKPushTarget_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LeftHandIKPushTarget = { UE4CodeGen_Private::EPropertyClass::Name, "LeftHandIKPushTarget", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, LeftHandIKPushTarget), METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LeftHandIKPushTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LeftHandIKPushTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityMax_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityMax = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationVelocityMax", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, RotationVelocityMax), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityInterpSpeed_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityInterpSpeed = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationVelocityInterpSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, RotationVelocityInterpSpeed), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityInterpSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityInterpSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinTranslationVelocityToPlayMoveSound_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinTranslationVelocityToPlayMoveSound = { UE4CodeGen_Private::EPropertyClass::Struct, "MinTranslationVelocityToPlayMoveSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, MinTranslationVelocityToPlayMoveSound), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinTranslationVelocityToPlayMoveSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinTranslationVelocityToPlayMoveSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinRotationVelocityToPlayMoveSound_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinRotationVelocityToPlayMoveSound = { UE4CodeGen_Private::EPropertyClass::Struct, "MinRotationVelocityToPlayMoveSound", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, MinRotationVelocityToPlayMoveSound), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinRotationVelocityToPlayMoveSound_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinRotationVelocityToPlayMoveSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundFadeOut_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundFadeOut = { UE4CodeGen_Private::EPropertyClass::Float, "MoveSoundFadeOut", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, MoveSoundFadeOut), METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundFadeOut_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundFadeOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundAttachSocket_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundAttachSocket = { UE4CodeGen_Private::EPropertyClass::Name, "MoveSoundAttachSocket", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, MoveSoundAttachSocket), METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundAttachSocket_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundAttachSocket_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocity_MetaData[] = {
		{ "Category", "MordhauWheeledVehicle" },
		{ "ModuleRelativePath", "MordhauWheeledVehicle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocity = { UE4CodeGen_Private::EPropertyClass::Struct, "RotationVelocity", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(AMordhauWheeledVehicle, RotationVelocity), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocity_MetaData, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMordhauWheeledVehicle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LastMoveSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundCue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RightHandIKPushTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_LeftHandIKPushTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocityInterpSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinTranslationVelocityToPlayMoveSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MinRotationVelocityToPlayMoveSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundFadeOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_MoveSoundAttachSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMordhauWheeledVehicle_Statics::NewProp_RotationVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMordhauWheeledVehicle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMordhauWheeledVehicle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMordhauWheeledVehicle_Statics::ClassParams = {
		&AMordhauWheeledVehicle::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		Z_Construct_UClass_AMordhauWheeledVehicle_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMordhauWheeledVehicle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMordhauWheeledVehicle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMordhauWheeledVehicle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMordhauWheeledVehicle, 132843383);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMordhauWheeledVehicle(Z_Construct_UClass_AMordhauWheeledVehicle, &AMordhauWheeledVehicle::StaticClass, TEXT("/Script/Mordhau"), TEXT("AMordhauWheeledVehicle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMordhauWheeledVehicle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
