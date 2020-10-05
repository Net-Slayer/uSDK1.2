// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEquipmentCustomization;
#ifdef MORDHAU_CharacterProfileBPWrapper_generated_h
#error "CharacterProfileBPWrapper.generated.h already included, missing '#pragma once' in CharacterProfileBPWrapper.h"
#endif
#define MORDHAU_CharacterProfileBPWrapper_generated_h

#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execForceValidate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceValidate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPerk) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Perk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPerk(Z_Param_Perk); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAge) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAge(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmblem) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmblem(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmblemColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ColorIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmblemColor(Z_Param_ColorIdx,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ColorIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentColor(Z_Param_Slot,Z_Param_ColorIdx,Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentCustomizationDirect) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_NewCustomization); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentCustomizationDirect(Z_Param_Slot,Z_Param_Out_NewCustomization); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentId) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentId(Z_Param_Slot,Z_Param_NewId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentPartId) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PartIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewPartId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentPartId(Z_Param_Slot,Z_Param_PartIdx,Z_Param_NewPartId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentPattern) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewPattern); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentPattern(Z_Param_Slot,Z_Param_NewPattern); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentSkin) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewSkin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentSkin(Z_Param_Slot,Z_Param_NewSkin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyebrows) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEyebrows(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyeColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEyeColor(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFace) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFace(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFacialHair) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFacialHair(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFat(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHair) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHair(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHairColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHairColor(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsFemale) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsFemale(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetalRoughnessScale) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetalRoughnessScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetalTint) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetalTint(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProfileName) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProfileName(Z_Param_Out_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkinColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkinColor(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkinny) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkinny(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrong) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrong(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoice) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVoice(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoicePitch) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVoicePitch(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWearableColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ColorIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWearableColor(Z_Param_Slot,Z_Param_ColorIdx,Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWearableId) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWearableId(Z_Param_Slot,Z_Param_NewId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWearablePattern) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewPattern); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWearablePattern(Z_Param_Slot,Z_Param_NewPattern); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTogglePerk) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Perk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TogglePerk(Z_Param_Perk); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execForceValidate) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ForceValidate(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasPerk) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Perk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasPerk(Z_Param_Perk); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAllEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAllEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAge) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAge(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmblem) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmblem(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEmblemColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_ColorIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEmblemColor(Z_Param_ColorIdx,Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ColorIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentColor(Z_Param_Slot,Z_Param_ColorIdx,Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentCustomizationDirect) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_NewCustomization); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentCustomizationDirect(Z_Param_Slot,Z_Param_Out_NewCustomization); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentId) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentId(Z_Param_Slot,Z_Param_NewId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentPartId) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_PartIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewPartId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentPartId(Z_Param_Slot,Z_Param_PartIdx,Z_Param_NewPartId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentPattern) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewPattern); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentPattern(Z_Param_Slot,Z_Param_NewPattern); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEquipmentSkin) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewSkin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEquipmentSkin(Z_Param_Slot,Z_Param_NewSkin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyebrows) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEyebrows(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEyeColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEyeColor(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFace) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFace(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFacialHair) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFacialHair(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFat) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFat(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHair) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHair(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHairColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHairColor(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIsFemale) \
	{ \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIsFemale(Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetalRoughnessScale) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetalRoughnessScale(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMetalTint) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMetalTint(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetProfileName) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_NewName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetProfileName(Z_Param_Out_NewName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkinColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkinColor(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSkinny) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSkinny(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStrong) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStrong(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoice) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVoice(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVoicePitch) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVoicePitch(Z_Param_NewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWearableColor) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ColorIdx); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWearableColor(Z_Param_Slot,Z_Param_ColorIdx,Z_Param_NewColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWearableId) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewId); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWearableId(Z_Param_Slot,Z_Param_NewId); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetWearablePattern) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Slot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_NewPattern); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetWearablePattern(Z_Param_Slot,Z_Param_NewPattern); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTogglePerk) \
	{ \
		P_GET_PROPERTY(UByteProperty,Z_Param_Perk); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TogglePerk(Z_Param_Perk); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCharacterProfileBPWrapper(); \
	friend struct Z_Construct_UClass_UCharacterProfileBPWrapper_Statics; \
public: \
	DECLARE_CLASS(UCharacterProfileBPWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UCharacterProfileBPWrapper)


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUCharacterProfileBPWrapper(); \
	friend struct Z_Construct_UClass_UCharacterProfileBPWrapper_Statics; \
public: \
	DECLARE_CLASS(UCharacterProfileBPWrapper, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UCharacterProfileBPWrapper)


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterProfileBPWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterProfileBPWrapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterProfileBPWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterProfileBPWrapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterProfileBPWrapper(UCharacterProfileBPWrapper&&); \
	NO_API UCharacterProfileBPWrapper(const UCharacterProfileBPWrapper&); \
public:


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCharacterProfileBPWrapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCharacterProfileBPWrapper(UCharacterProfileBPWrapper&&); \
	NO_API UCharacterProfileBPWrapper(const UCharacterProfileBPWrapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCharacterProfileBPWrapper); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCharacterProfileBPWrapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCharacterProfileBPWrapper)


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_13_PROLOG
#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_INCLASS \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_CharacterProfileBPWrapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
