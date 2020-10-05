// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCharacterProfile;
class AMordhauCharacter;
struct FLinearColor;
class UMordhauColor;
class UObject;
class UWorld;
struct FEquipmentCustomization;
class AMordhauEquipment;
#ifdef MORDHAU_MordhauSingleton_generated_h
#error "MordhauSingleton.generated.h already included, missing '#pragma once' in MordhauSingleton.h"
#endif
#define MORDHAU_MordhauSingleton_generated_h

#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyProfileTo) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Char); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Team); \
		P_GET_UBOOL(Z_Param_bAddEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyProfileTo(Z_Param_Out_Profile,Z_Param_Char,Z_Param_Team,Z_Param_bAddEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEmblemColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetEmblemColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEmblemColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetEmblemColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipment) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetEquipment(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentID) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_EquipmentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetEquipmentID(Z_Param_EquipmentType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEquipmentNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyeColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetEyeColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyeColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetEyeColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHairColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHairColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHairColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetHairColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetHeadWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHeadWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsLoadingAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsLoadingAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLegsWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetLegsWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLegsWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLegsWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetalTintsColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetMetalTintsColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetalTintsColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetMetalTintsColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkinColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSkinColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkinColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetSkinColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Table); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTableColor(Z_Param_Table,Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Table); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetTableColorObject(Z_Param_Table,Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperChestWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetUpperChestWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperChestWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetUpperChestWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetVoice(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoicesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVoicesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFromConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadFromConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadQueueFinishedLoadingChunk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadQueueFinishedLoadingChunk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveToConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveToConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEquipment) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_WorldRef); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_Customization); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Emblem); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EmblemColor1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EmblemColor2); \
		P_GET_UBOOL(Z_Param_bForceInstantMeshUpdate); \
		P_GET_UBOOL(Z_Param_bForceMipStreaming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=P_THIS->SpawnEquipment(Z_Param_WorldRef,Z_Param_Out_Customization,Z_Param_Emblem,Z_Param_EmblemColor1,Z_Param_EmblemColor2,Z_Param_bForceInstantMeshUpdate,Z_Param_bForceMipStreaming); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyProfileTo) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Char); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Team); \
		P_GET_UBOOL(Z_Param_bAddEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ApplyProfileTo(Z_Param_Out_Profile,Z_Param_Char,Z_Param_Team,Z_Param_bAddEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEmblemColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetEmblemColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEmblemColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetEmblemColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipment) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetEquipment(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentID) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_EquipmentType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(uint8*)Z_Param__Result=P_THIS->GetEquipmentID(Z_Param_EquipmentType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEquipmentNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetEquipmentNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyeColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetEyeColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEyeColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetEyeColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHairColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetHairColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHairColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetHairColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetHeadWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHeadWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsLoadingAssets) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetIsLoadingAssets(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLegsWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetLegsWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLegsWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLegsWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetalTintsColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetMetalTintsColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMetalTintsColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetMetalTintsColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkinColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetSkinColor(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkinColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetSkinColorObject(Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Table); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FLinearColor*)Z_Param__Result=P_THIS->GetTableColor(Z_Param_Table,Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTableColorObject) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Table); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauColor**)Z_Param__Result=P_THIS->GetTableColorObject(Z_Param_Table,Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperChestWearable) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetUpperChestWearable(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUpperChestWearablesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetUpperChestWearablesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoice) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=P_THIS->GetVoice(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVoicesNum) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetVoicesNum(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadFromConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadFromConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLoadQueueFinishedLoadingChunk) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LoadQueueFinishedLoadingChunk(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveToConfig) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveToConfig(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnEquipment) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_WorldRef); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_Customization); \
		P_GET_PROPERTY(UByteProperty,Z_Param_Emblem); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EmblemColor1); \
		P_GET_PROPERTY(UByteProperty,Z_Param_EmblemColor2); \
		P_GET_UBOOL(Z_Param_bForceInstantMeshUpdate); \
		P_GET_UBOOL(Z_Param_bForceMipStreaming); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=P_THIS->SpawnEquipment(Z_Param_WorldRef,Z_Param_Out_Customization,Z_Param_Emblem,Z_Param_EmblemColor1,Z_Param_EmblemColor2,Z_Param_bForceInstantMeshUpdate,Z_Param_bForceMipStreaming); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauSingleton(); \
	friend struct Z_Construct_UClass_UMordhauSingleton_Statics; \
public: \
	DECLARE_CLASS(UMordhauSingleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauSingleton)


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauSingleton(); \
	friend struct Z_Construct_UClass_UMordhauSingleton_Statics; \
public: \
	DECLARE_CLASS(UMordhauSingleton, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauSingleton)


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauSingleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauSingleton) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauSingleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauSingleton); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauSingleton(UMordhauSingleton&&); \
	NO_API UMordhauSingleton(const UMordhauSingleton&); \
public:


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauSingleton(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauSingleton(UMordhauSingleton&&); \
	NO_API UMordhauSingleton(const UMordhauSingleton&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauSingleton); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauSingleton); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauSingleton)


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauSingleton_h_13_PROLOG
#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauSingleton_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauSingleton_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauSingleton_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
