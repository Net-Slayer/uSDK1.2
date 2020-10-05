// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AController;
struct FCharacterProfile;
class UArchetype;
class UObject;
class AMordhauGameSession;
class UMordhauInput;
class UMordhauInventory;
class UMordhauSingleton;
class UMordhauWebAPI;
class UUpperChestWearable;
struct FSkillsCustomization;
enum class EItemRarity : uint8;
class UArmsWearable;
class UHeadWearable;
class UMordhauWearable;
class ULegsWearable;
class AMordhauEquipment;
struct FBox;
struct FVector;
class AActor;
struct FHitResult;
enum class EServerRegion : uint8;
struct FAppearanceCustomization;
struct FEquipmentCustomization;
struct FFaceCustomization;
struct FCharacterGearCustomization;
class UCanvas;
class UFont;
struct FVector2D;
struct FLinearColor;
struct FSteamID;
struct FRotator;
class AMordhauPlayerState;
class APlayerController;
class UCharacterMovementComponent;
enum class EWearableSlot : uint8;
class USkeletalMeshComponent;
class UWorld;
class UMordhauGameUserSettings;
class AMordhauHUD;
class UMordhauStats;
class UPerk;
struct FTransform;
struct FEquipmentSkinEntry;
class AMordhauCharacter;
struct FSoundMixInfo;
enum class EAvatarSize : uint8;
class UTexture2D;
class UAnimInstance;
class UMeshComponent;
class AAdvancedCharacter;
class UActorComponent;
class UDecalComponent;
class UShapeComponent;
class APawn;
class UMaterialInterface;
#ifdef MORDHAU_MordhauUtilityLibrary_generated_h
#error "MordhauUtilityLibrary.generated.h already included, missing '#pragma once' in MordhauUtilityLibrary.h"
#endif
#define MORDHAU_MordhauUtilityLibrary_generated_h

#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execResetController) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ResetController(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArchetypeObject) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UArchetype**)Z_Param__Result=UMordhauUtilityLibrary::GetArchetypeObject(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauGameSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauGameSession**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauGameSession(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInput**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInventory**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauSingleton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauSingleton**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauSingleton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauWebAPI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWebAPI**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauWebAPI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomArmsWearable) \
	{ \
		P_GET_OBJECT(UUpperChestWearable,Z_Param_UpperChestWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UArmsWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomArmsWearable(Z_Param_UpperChestWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomCoifWearable) \
	{ \
		P_GET_OBJECT(UHeadWearable,Z_Param_HeadWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomCoifWearable(Z_Param_HeadWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomFeetWearable) \
	{ \
		P_GET_OBJECT(ULegsWearable,Z_Param_LegsWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomFeetWearable(Z_Param_LegsWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomHandsWearable) \
	{ \
		P_GET_OBJECT(UArmsWearable,Z_Param_ArmsWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomHandsWearable(Z_Param_ArmsWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomHeadWearable) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHeadWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomHeadWearable(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomLegsWearable) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULegsWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomLegsWearable(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomLowerChestWearable) \
	{ \
		P_GET_OBJECT(UUpperChestWearable,Z_Param_UpperChestWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomLowerChestWearable(Z_Param_UpperChestWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomMeleeWeapon) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomMeleeWeapon(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomRangedWeapon) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomRangedWeapon(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomShouldersWearable) \
	{ \
		P_GET_OBJECT(UUpperChestWearable,Z_Param_UpperChestWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomShouldersWearable(Z_Param_UpperChestWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomUpperChestWearable) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUpperChestWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomUpperChestWearable(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrowBoxToIncludePoint) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=UMordhauUtilityLibrary::GrowBoxToIncludePoint(Z_Param_Out_Box,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMordhauApplyRadialDamageWithFalloff) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseStructureDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumStructureDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageInnerRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageOuterRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageFalloff); \
		P_GET_TARRAY(AActor*,Z_Param_IgnoreActors); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseKnockback); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumKnockback); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RagdollFallRadius); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(AController,Z_Param_InstigatedByController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamagePreventionChannel); \
		P_GET_UBOOL(Z_Param_bIgnoreFriendly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::MordhauApplyRadialDamageWithFalloff(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_MinimumDamage,Z_Param_BaseStructureDamage,Z_Param_MinimumStructureDamage,Z_Param_Out_Origin,Z_Param_DamageInnerRadius,Z_Param_DamageOuterRadius,Z_Param_DamageFalloff,Z_Param_IgnoreActors,Z_Param_BaseKnockback,Z_Param_MinimumKnockback,Z_Param_RagdollFallRadius,Z_Param_DamageCauser,Z_Param_InstigatedByController,ECollisionChannel(Z_Param_DamagePreventionChannel),Z_Param_bIgnoreFriendly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaneTrace) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Left); \
		P_GET_STRUCT(FVector,Z_Param_Right); \
		P_GET_STRUCT(FVector,Z_Param_Forward); \
		P_GET_STRUCT(FVector,Z_Param_Back); \
		P_GET_STRUCT(FVector,Z_Param_TraceAmount); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bConnectLeftRight); \
		P_GET_UBOOL(Z_Param_bConnectForwardBack); \
		P_GET_STRUCT(FVector,Z_Param_ConnectOffset); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_LeftHit); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_RightHit); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ForwardHit); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_BackHit); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRight); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutForward); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::PlaneTrace(Z_Param_WorldContextObject,Z_Param_Left,Z_Param_Right,Z_Param_Forward,Z_Param_Back,Z_Param_TraceAmount,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bConnectLeftRight,Z_Param_bConnectForwardBack,Z_Param_ConnectOffset,Z_Param_Out_LeftHit,Z_Param_Out_RightHit,Z_Param_Out_ForwardHit,Z_Param_Out_BackHit,Z_Param_Out_OutRight,Z_Param_Out_OutForward,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRegion) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RegionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EServerRegion*)Z_Param__Result=UMordhauUtilityLibrary::GetRegion(Z_Param_RegionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreActorsFromSameLevel) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorA); \
		P_GET_OBJECT(AActor,Z_Param_ActorB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::AreActorsFromSameLevel(Z_Param_ActorA,Z_Param_ActorB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreProfilesEqual) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::AreProfilesEqual(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateAngle2D) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::CalculateAngle2D(Z_Param_Out_Direction,Z_Param_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateGCD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ValueA); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ValueB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::CalculateGCD(Z_Param_ValueA,Z_Param_ValueB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapitalize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::Capitalize(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointOnLine) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::ClosestPointOnLine(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_Out_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareAppearanceCustomization) \
	{ \
		P_GET_STRUCT_REF(FAppearanceCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FAppearanceCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareAppearanceCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareEquipmentCustomization) \
	{ \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareEquipmentCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareFaceCustomization) \
	{ \
		P_GET_STRUCT_REF(FFaceCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FFaceCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareFaceCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareGearCustomization) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareGearCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePointsLeft) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::ComputePointsLeft(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_OBJECT(UCanvas,Z_Param_Canvas); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Kerning); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ShadowColor); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ShadowOffset); \
		P_GET_UBOOL(Z_Param_bCentreX); \
		P_GET_UBOOL(Z_Param_bCentreY); \
		P_GET_UBOOL(Z_Param_bOutlined); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutlineColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::DrawText(Z_Param_Canvas,Z_Param_Font,Z_Param_Size,Z_Param_Text,Z_Param_Out_Position,Z_Param_Out_TextColor,Z_Param_Kerning,Z_Param_Out_ShadowColor,Z_Param_Out_ShadowOffset,Z_Param_bCentreX,Z_Param_bCentreY,Z_Param_bOutlined,Z_Param_Out_OutlineColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqual_SteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::Equal_SteamID(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindBetween) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UMordhauUtilityLibrary::FindBetween(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAwardDuelMMR) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_Winner); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_Loser); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NewWinnerMMR); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NewLoserMMR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::AwardDuelMMR(Z_Param_Out_Winner,Z_Param_Out_Loser,Z_Param_Out_NewWinnerMMR,Z_Param_Out_NewLoserMMR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCircleIntersectionPoints) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CenterA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RadiusA); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CenterB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RadiusB); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PointA); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PointB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::FindCircleIntersectionPoints(Z_Param_Out_CenterA,Z_Param_RadiusA,Z_Param_Out_CenterB,Z_Param_RadiusB,Z_Param_Out_PointA,Z_Param_Out_PointB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPlayerState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauPlayerState**)Z_Param__Result=UMordhauUtilityLibrary::FindPlayerState(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSteamID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FindSteamID(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTeleportSpot) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation); \
		P_GET_STRUCT(FVector,Z_Param_OutLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::FindTeleportSpot(Z_Param_Actor,Z_Param_Out_InLocation,Z_Param_Out_InRotation,Z_Param_OutLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpConstantToSeparate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncreaseSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DecreaseSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::FInterpConstantToSeparate(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_IncreaseSpeed,Z_Param_DecreaseSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpToSeparate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncreaseSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DecreaseSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::FInterpToSeparate(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_IncreaseSpeed,Z_Param_DecreaseSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashWindow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FlashWindow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPlayerControllerPressedKeys) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FlushPlayerControllerPressedKeys(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceReplicationUpdate) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ForceReplicationUpdate(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceValidCharacterProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_GET_STRUCT(FCharacterProfile,Z_Param_ForceValidatedProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::ForceValidCharacterProfile(Z_Param_Out_Profile,Z_Param_ForceValidatedProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFormatText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UMordhauUtilityLibrary::FormatText(Z_Param_Out_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFSmoothDamp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SmoothTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FSmoothDamp(Z_Param_Target,Z_Param_SmoothTime,Z_Param_DeltaTime,Z_Param_MaxSpeed,Z_Param_Current,Z_Param_CurrentVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWearableClassesForSlotExhaustive) \
	{ \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_classPlaceholder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetAllWearableClassesForSlotExhaustive(EWearableSlot(Z_Param_Slot),Z_Param_Out_classPlaceholder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParentActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UMordhauUtilityLibrary::GetAttachParentActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBoxOfBoneInfluence) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent); \
		P_GET_TARRAY(FName,Z_Param_Bones); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WeightThreshold); \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_boxRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetBoundingBoxOfBoneInfluence(Z_Param_MeshComponent,Z_Param_Bones,Z_Param_WeightThreshold,Z_Param_Out_boxRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoxCenter) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetBoxCenter(Z_Param_Out_Box); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetBuildVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCentroid) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetCentroid(Z_Param_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentsBoundingBoxInActorSpace) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetComponentsBoundingBoxInActorSpace(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetConsoleVariableFloat(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetConsoleVariableInt(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetConsoleVariableString(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDemoTime) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetCurrentDemoTime(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrame) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetCurrentFrame(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrameBP) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetCurrentFrameBP(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_colorReturn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid,Z_Param_Out_colorReturn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_FromClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UMordhauUtilityLibrary::GetDefaultActor(Z_Param_FromClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_FromClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UMordhauUtilityLibrary::GetDefaultObject(Z_Param_FromClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultWearable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_FromClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetDefaultWearable(Z_Param_FromClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EnumName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EnumValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetEnumKey(Z_Param_EnumName,Z_Param_EnumValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EnumName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EnumKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetEnumValue(Z_Param_EnumName,Z_Param_EnumKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetErrorText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ErrorString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UMordhauUtilityLibrary::getErrorText(Z_Param_ErrorString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceIndex) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetFaceIndex(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsPeasant) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetIsPeasant(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastReceiveTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetLastReceiveTime(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetMapName(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxIndexWithDraw) \
	{ \
		P_GET_TARRAY(int32,Z_Param_inArray); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetMaxIndexWithDraw(Z_Param_inArray,Z_Param_Out_bFoundDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauGameUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauGameUserSettings**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauGameUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauHUD) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauHUD**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauHUD(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauStats**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauStats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UMordhauUtilityLibrary::GetMousePosition(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Start); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetNormalizedTime(Z_Param_Start,Z_Param_End,Z_Param_Current); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNotifyServerReceivedClientData) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetNotifyServerReceivedClientData(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPacketsLost) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetPacketsLost(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerforceRevision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetPerforceRevision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerks) \
	{ \
		P_GET_TARRAY_REF(UPerk*,Z_Param_Out_Perks); \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetPerks(Z_Param_Out_Perks,Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerksCost) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetPerksCost(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsBodyWorldTransform) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_transformPlacehldr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetPhysicsBodyWorldTransform(Z_Param_MeshComponent,Z_Param_Out_BoneName,Z_Param_Out_transformPlacehldr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPing) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bUseMedian); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetPing(Z_Param_WorldContextObject,Z_Param_bUseMedian); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomEquipment) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomEquipment(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomFaceCustomizationVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RandomExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetRandomFaceCustomizationVector(Z_Param_RandomExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomSkin) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ID); \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Equipment); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetRandomSkin(Z_Param_Out_ID,Z_Param_Out_Skin,Z_Param_Equipment,EItemRarity(Z_Param_MaxRarity)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomWeapon) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomWeapon(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRankFromXP) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_XP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetRankFromXP(Z_Param_XP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSculptableBoneAtLine) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SearchRadius); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent); \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauUtilityLibrary::GetSculptableBoneAtLine(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_SearchRadius,Z_Param_MeshComponent,Z_Param_Character,Z_Param_Level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerSteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetServerSteamID(Z_Param_Out_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundMixInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_STRUCT(FSoundMixInfo,Z_Param_SoundMixInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetSoundMixInfo(Z_Param_Name,Z_Param_SoundMixInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamAvatar) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_ENUM(EAvatarSize,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMordhauUtilityLibrary::GetSteamAvatar(Z_Param_Out_SteamID,EAvatarSize(Z_Param_Size)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetSteamID(Z_Param_Out_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamIDFromPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=UMordhauUtilityLibrary::GetSteamIDFromPlayer(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamName) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetSteamName(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedScreenResolutions) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetSupportedScreenResolutions(Z_Param_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSyncGroupPositionBetweenMarkers) \
	{ \
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SyncGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetSyncGroupPositionBetweenMarkers(Z_Param_AnimInstance,Z_Param_Out_SyncGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalDemoTime) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetTotalDemoTime(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetVersionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetVersionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTargetCharacter) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bOnlyLiving); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=UMordhauUtilityLibrary::GetViewTargetCharacter(Z_Param_WorldContextObject,Z_Param_bOnlyLiving); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWearableClass) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_CharacterGearCustomization); \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UMordhauUtilityLibrary::GetWearableClass(Z_Param_Out_CharacterGearCustomization,EWearableSlot(Z_Param_Slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWearableClasses) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_CharacterGearCustomization); \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_classHolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetWearableClasses(Z_Param_Out_CharacterGearCustomization,EWearableSlot(Z_Param_Slot),Z_Param_Out_classHolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWearableNames) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_CharacterGearCustomization); \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_GET_TARRAY_REF(FText,Z_Param_Out_namePlacehldr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetWearableNames(Z_Param_Out_CharacterGearCustomization,EWearableSlot(Z_Param_Slot),Z_Param_Out_namePlacehldr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldOf) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UMordhauUtilityLibrary::GetWorldOf(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXPFromRank) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Rank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetXPFromRank(Z_Param_Rank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasActorBegunPlay) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::HasActorBegunPlay(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBeenReallyRecentlyRendered) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::HasBeenReallyRecentlyRendered(Z_Param_MeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDedicatedServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDedicatedServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDemoPlayback) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDemoPlayback(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDevelopmentBranch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDevelopmentBranch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDevelopmentBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDevelopmentBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDLCInstalled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_appid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDLCInstalled(Z_Param_appid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFriendlyToLocalPlayer) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_WorldReference); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsFriendlyToLocalPlayer(Z_Param_WorldReference,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListenServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsListenServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOfficialServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsOfficialServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartyMember) \
	{ \
		P_GET_OBJECT(AMordhauPlayerState,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsPartyMember(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayInEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsPlayInEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReleaseBranch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsReleaseBranch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandalone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsStandalone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSteamFriend) \
	{ \
		P_GET_OBJECT(AMordhauPlayerState,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsSteamFriend(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTestingBranch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsTestingBranch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_SteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsValid_SteamID(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEmptyProfile) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_CharacterClass); \
		P_GET_UBOOL(Z_Param_bRandomizeVoice); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCharacterProfile*)Z_Param__Result=UMordhauUtilityLibrary::MakeEmptyProfile(Z_Param_CharacterClass,Z_Param_bRandomizeVoice); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkRenderStateDirty) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::MarkRenderStateDirty(Z_Param_MeshComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_SteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::NotEqual_SteamID(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::OpenURL(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomRangeExclude) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Exclude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::RandomRangeExclude(Z_Param_Min,Z_Param_Max,Z_Param_Exclude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReserveCharacterRagdoll) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ReserveCharacterRagdoll(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetClientPredictionData) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ResetClientPredictionData(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetServerPredictionData) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ResetServerPredictionData(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendClientAdjustment) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SendClientAdjustment(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanEverAffectNavigation) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent); \
		P_GET_UBOOL(Z_Param_bRelevant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCanEverAffectNavigation(Z_Param_ActorComponent,Z_Param_bRelevant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDecalFadeScreenSize) \
	{ \
		P_GET_OBJECT(UDecalComponent,Z_Param_Decal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFadeScreenSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetDecalFadeScreenSize(Z_Param_Decal,Z_Param_NewFadeScreenSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceMipStreaming) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SMC); \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetForceMipStreaming(Z_Param_SMC,Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalSpaceKinematics) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetLocalSpaceKinematics(Z_Param_Mesh,Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetMousePosition(Z_Param_Controller,Z_Param_LocationX,Z_Param_LocationY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNavAreaClass) \
	{ \
		P_GET_OBJECT(UShapeComponent,Z_Param_ShapeComponent); \
		P_GET_OBJECT(UClass,Z_Param_AreaClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetNavAreaClass(Z_Param_ShapeComponent,Z_Param_AreaClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPawnFromRep) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Contr); \
		P_GET_OBJECT(APawn,Z_Param_NewPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetPawnFromRep(Z_Param_Contr,Z_Param_NewPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSGreaterThan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringA); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::SGreaterThan(Z_Param_StringA,Z_Param_StringB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSLessThan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringA); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::SLessThan(Z_Param_StringA,Z_Param_StringB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnap180AngleToSteps) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle180); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Step); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::Snap180AngleToSteps(Z_Param_Angle180,Z_Param_Step); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBloodDecalAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DecalSize); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDecalComponent**)Z_Param__Result=P_THIS->SpawnBloodDecalAtLocation(Z_Param_WorldContextObject,Z_Param_DecalMaterial,Z_Param_Out_DecalSize,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_LifeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamIDToString) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::SteamIDToString(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStripProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_InProfile); \
		P_GET_UBOOL(Z_Param_bStripEquipment); \
		P_GET_UBOOL(Z_Param_bStripPerks); \
		P_GET_UBOOL(Z_Param_bStripNonTier0Armor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCharacterProfile*)Z_Param__Result=UMordhauUtilityLibrary::StripProfile(Z_Param_Out_InProfile,Z_Param_bStripEquipment,Z_Param_bStripPerks,Z_Param_bStripNonTier0Armor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTermAllChildBodiesOf) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_USMC); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::TermAllChildBodiesOf(Z_Param_USMC,Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryExecuteHeavydutyOperation) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_WorldObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::TryExecuteHeavydutyOperation(Z_Param_WorldObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpossessCharacterAndHandleSpectating) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::UnpossessCharacterAndHandleSpectating(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateCharacterProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::ValidateCharacterProfile(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSmoothDamp) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SmoothTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeed); \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_CurrentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::VSmoothDamp(Z_Param_Out_Target,Z_Param_SmoothTime,Z_Param_DeltaTime,Z_Param_MaxSpeed,Z_Param_Current,Z_Param_CurrentVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortPlayers) \
	{ \
		P_GET_TARRAY(AMordhauPlayerState*,Z_Param_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMordhauPlayerState*>*)Z_Param__Result=UMordhauUtilityLibrary::SortPlayers(Z_Param_Array); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execResetController) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ResetController(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetArchetypeObject) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UArchetype**)Z_Param__Result=UMordhauUtilityLibrary::GetArchetypeObject(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauGameSession) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauGameSession**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauGameSession(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauInput) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInput**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauInput(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauInventory) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInventory**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauInventory(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauSingleton) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauSingleton**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauSingleton(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauWebAPI) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWebAPI**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauWebAPI(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomArmsWearable) \
	{ \
		P_GET_OBJECT(UUpperChestWearable,Z_Param_UpperChestWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UArmsWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomArmsWearable(Z_Param_UpperChestWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomCoifWearable) \
	{ \
		P_GET_OBJECT(UHeadWearable,Z_Param_HeadWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomCoifWearable(Z_Param_HeadWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomFeetWearable) \
	{ \
		P_GET_OBJECT(ULegsWearable,Z_Param_LegsWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomFeetWearable(Z_Param_LegsWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomHandsWearable) \
	{ \
		P_GET_OBJECT(UArmsWearable,Z_Param_ArmsWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomHandsWearable(Z_Param_ArmsWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomHeadWearable) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UHeadWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomHeadWearable(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomLegsWearable) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(ULegsWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomLegsWearable(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomLowerChestWearable) \
	{ \
		P_GET_OBJECT(UUpperChestWearable,Z_Param_UpperChestWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomLowerChestWearable(Z_Param_UpperChestWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomMeleeWeapon) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomMeleeWeapon(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomRangedWeapon) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomRangedWeapon(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomShouldersWearable) \
	{ \
		P_GET_OBJECT(UUpperChestWearable,Z_Param_UpperChestWearable); \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomShouldersWearable(Z_Param_UpperChestWearable,Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomUpperChestWearable) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UUpperChestWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomUpperChestWearable(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGrowBoxToIncludePoint) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Vector); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FBox*)Z_Param__Result=UMordhauUtilityLibrary::GrowBoxToIncludePoint(Z_Param_Out_Box,Z_Param_Out_Vector); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMordhauApplyRadialDamageWithFalloff) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseStructureDamage); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumStructureDamage); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageInnerRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageOuterRadius); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DamageFalloff); \
		P_GET_TARRAY(AActor*,Z_Param_IgnoreActors); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BaseKnockback); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MinimumKnockback); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RagdollFallRadius); \
		P_GET_OBJECT(AActor,Z_Param_DamageCauser); \
		P_GET_OBJECT(AController,Z_Param_InstigatedByController); \
		P_GET_PROPERTY(UByteProperty,Z_Param_DamagePreventionChannel); \
		P_GET_UBOOL(Z_Param_bIgnoreFriendly); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::MordhauApplyRadialDamageWithFalloff(Z_Param_WorldContextObject,Z_Param_BaseDamage,Z_Param_MinimumDamage,Z_Param_BaseStructureDamage,Z_Param_MinimumStructureDamage,Z_Param_Out_Origin,Z_Param_DamageInnerRadius,Z_Param_DamageOuterRadius,Z_Param_DamageFalloff,Z_Param_IgnoreActors,Z_Param_BaseKnockback,Z_Param_MinimumKnockback,Z_Param_RagdollFallRadius,Z_Param_DamageCauser,Z_Param_InstigatedByController,ECollisionChannel(Z_Param_DamagePreventionChannel),Z_Param_bIgnoreFriendly); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlaneTrace) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_STRUCT(FVector,Z_Param_Left); \
		P_GET_STRUCT(FVector,Z_Param_Right); \
		P_GET_STRUCT(FVector,Z_Param_Forward); \
		P_GET_STRUCT(FVector,Z_Param_Back); \
		P_GET_STRUCT(FVector,Z_Param_TraceAmount); \
		P_GET_TARRAY_REF(TEnumAsByte<EObjectTypeQuery>,Z_Param_Out_ObjectTypes); \
		P_GET_UBOOL(Z_Param_bTraceComplex); \
		P_GET_TARRAY_REF(AActor*,Z_Param_Out_ActorsToIgnore); \
		P_GET_UBOOL(Z_Param_bConnectLeftRight); \
		P_GET_UBOOL(Z_Param_bConnectForwardBack); \
		P_GET_STRUCT(FVector,Z_Param_ConnectOffset); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_LeftHit); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_RightHit); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_ForwardHit); \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_BackHit); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutRight); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_OutForward); \
		P_GET_UBOOL(Z_Param_bIgnoreSelf); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::PlaneTrace(Z_Param_WorldContextObject,Z_Param_Left,Z_Param_Right,Z_Param_Forward,Z_Param_Back,Z_Param_TraceAmount,Z_Param_Out_ObjectTypes,Z_Param_bTraceComplex,Z_Param_Out_ActorsToIgnore,Z_Param_bConnectLeftRight,Z_Param_bConnectForwardBack,Z_Param_ConnectOffset,Z_Param_Out_LeftHit,Z_Param_Out_RightHit,Z_Param_Out_ForwardHit,Z_Param_Out_BackHit,Z_Param_Out_OutRight,Z_Param_Out_OutForward,Z_Param_bIgnoreSelf); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRegion) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_RegionName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EServerRegion*)Z_Param__Result=UMordhauUtilityLibrary::GetRegion(Z_Param_RegionName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreActorsFromSameLevel) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_ActorA); \
		P_GET_OBJECT(AActor,Z_Param_ActorB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::AreActorsFromSameLevel(Z_Param_ActorA,Z_Param_ActorB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreProfilesEqual) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::AreProfilesEqual(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateAngle2D) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Direction); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Yaw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::CalculateAngle2D(Z_Param_Out_Direction,Z_Param_Yaw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCalculateGCD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ValueA); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ValueB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::CalculateGCD(Z_Param_ValueA,Z_Param_ValueB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCapitalize) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_String); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::Capitalize(Z_Param_String); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClosestPointOnLine) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::ClosestPointOnLine(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_Out_Point); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareAppearanceCustomization) \
	{ \
		P_GET_STRUCT_REF(FAppearanceCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FAppearanceCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareAppearanceCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareEquipmentCustomization) \
	{ \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareEquipmentCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareFaceCustomization) \
	{ \
		P_GET_STRUCT_REF(FFaceCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FFaceCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareFaceCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCompareGearCustomization) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_First); \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_Second); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::CompareGearCustomization(Z_Param_Out_First,Z_Param_Out_Second); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execComputePointsLeft) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::ComputePointsLeft(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDrawText) \
	{ \
		P_GET_OBJECT(UCanvas,Z_Param_Canvas); \
		P_GET_OBJECT(UFont,Z_Param_Font); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Size); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Text); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_TextColor); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Kerning); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_ShadowColor); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_ShadowOffset); \
		P_GET_UBOOL(Z_Param_bCentreX); \
		P_GET_UBOOL(Z_Param_bCentreY); \
		P_GET_UBOOL(Z_Param_bOutlined); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_OutlineColor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::DrawText(Z_Param_Canvas,Z_Param_Font,Z_Param_Size,Z_Param_Text,Z_Param_Out_Position,Z_Param_Out_TextColor,Z_Param_Kerning,Z_Param_Out_ShadowColor,Z_Param_Out_ShadowOffset,Z_Param_bCentreX,Z_Param_bCentreY,Z_Param_bOutlined,Z_Param_Out_OutlineColor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEqual_SteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::Equal_SteamID(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindBetween) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UMordhauUtilityLibrary::FindBetween(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAwardDuelMMR) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_Winner); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_Loser); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NewWinnerMMR); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_NewLoserMMR); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::AwardDuelMMR(Z_Param_Out_Winner,Z_Param_Out_Loser,Z_Param_Out_NewWinnerMMR,Z_Param_Out_NewLoserMMR); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindCircleIntersectionPoints) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CenterA); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RadiusA); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_CenterB); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RadiusB); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PointA); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_PointB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::FindCircleIntersectionPoints(Z_Param_Out_CenterA,Z_Param_RadiusA,Z_Param_Out_CenterB,Z_Param_RadiusB,Z_Param_Out_PointA,Z_Param_Out_PointB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindPlayerState) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauPlayerState**)Z_Param__Result=UMordhauUtilityLibrary::FindPlayerState(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindSteamID) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FindSteamID(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFindTeleportSpot) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_InLocation); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_InRotation); \
		P_GET_STRUCT(FVector,Z_Param_OutLocation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::FindTeleportSpot(Z_Param_Actor,Z_Param_Out_InLocation,Z_Param_Out_InRotation,Z_Param_OutLocation); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpConstantToSeparate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncreaseSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DecreaseSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::FInterpConstantToSeparate(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_IncreaseSpeed,Z_Param_DecreaseSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFInterpToSeparate) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_IncreaseSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DecreaseSpeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::FInterpToSeparate(Z_Param_Current,Z_Param_Target,Z_Param_DeltaTime,Z_Param_IncreaseSpeed,Z_Param_DecreaseSpeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlashWindow) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FlashWindow(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPlayerControllerPressedKeys) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FlushPlayerControllerPressedKeys(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceReplicationUpdate) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ForceReplicationUpdate(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execForceValidCharacterProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_GET_STRUCT(FCharacterProfile,Z_Param_ForceValidatedProfile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::ForceValidCharacterProfile(Z_Param_Out_Profile,Z_Param_ForceValidatedProfile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFormatText) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_Text); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UMordhauUtilityLibrary::FormatText(Z_Param_Out_Text); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFSmoothDamp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SmoothTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeed); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CurrentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::FSmoothDamp(Z_Param_Target,Z_Param_SmoothTime,Z_Param_DeltaTime,Z_Param_MaxSpeed,Z_Param_Current,Z_Param_CurrentVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAllWearableClassesForSlotExhaustive) \
	{ \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_classPlaceholder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetAllWearableClassesForSlotExhaustive(EWearableSlot(Z_Param_Slot),Z_Param_Out_classPlaceholder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAttachParentActor) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UMordhauUtilityLibrary::GetAttachParentActor(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoundingBoxOfBoneInfluence) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent); \
		P_GET_TARRAY(FName,Z_Param_Bones); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_WeightThreshold); \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_boxRef); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetBoundingBoxOfBoneInfluence(Z_Param_MeshComponent,Z_Param_Bones,Z_Param_WeightThreshold,Z_Param_Out_boxRef); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBoxCenter) \
	{ \
		P_GET_STRUCT_REF(FBox,Z_Param_Out_Box); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetBoxCenter(Z_Param_Out_Box); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBuildVersion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetBuildVersion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCentroid) \
	{ \
		P_GET_TARRAY(FVector,Z_Param_Points); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetCentroid(Z_Param_Points); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetComponentsBoundingBoxInActorSpace) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetComponentsBoundingBoxInActorSpace(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableFloat) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetConsoleVariableFloat(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableInt) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetConsoleVariableInt(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetConsoleVariableString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetConsoleVariableString(Z_Param_VariableName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentDemoTime) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetCurrentDemoTime(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrame) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetCurrentFrame(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentFrameBP) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetCurrentFrameBP(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_colorReturn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid,Z_Param_Out_colorReturn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FRotator*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_IsValid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UMordhauUtilityLibrary::GetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_IsValid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultActor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_FromClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AActor**)Z_Param__Result=UMordhauUtilityLibrary::GetDefaultActor(Z_Param_FromClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultObject) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_FromClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UObject**)Z_Param__Result=UMordhauUtilityLibrary::GetDefaultObject(Z_Param_FromClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultWearable) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_FromClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauWearable**)Z_Param__Result=UMordhauUtilityLibrary::GetDefaultWearable(Z_Param_FromClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumKey) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EnumName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_EnumValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetEnumKey(Z_Param_EnumName,Z_Param_EnumValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEnumValue) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_EnumName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_EnumKey); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetEnumValue(Z_Param_EnumName,Z_Param_EnumKey); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execgetErrorText) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ErrorString); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FText*)Z_Param__Result=UMordhauUtilityLibrary::getErrorText(Z_Param_ErrorString); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFaceIndex) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetFaceIndex(Z_Param_Out_Hit); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsPeasant) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetIsPeasant(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastReceiveTime) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetLastReceiveTime(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMapName) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetMapName(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxIndexWithDraw) \
	{ \
		P_GET_TARRAY(int32,Z_Param_inArray); \
		P_GET_UBOOL_REF(Z_Param_Out_bFoundDraw); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetMaxIndexWithDraw(Z_Param_inArray,Z_Param_Out_bFoundDraw); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauGameUserSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauGameUserSettings**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauGameUserSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauHUD) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauHUD**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauHUD(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMordhauStats) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauStats**)Z_Param__Result=UMordhauUtilityLibrary::GetMordhauStats(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=UMordhauUtilityLibrary::GetMousePosition(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNormalizedTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Start); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_End); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Current); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetNormalizedTime(Z_Param_Start,Z_Param_End,Z_Param_Current); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNotifyServerReceivedClientData) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetNotifyServerReceivedClientData(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPacketsLost) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetPacketsLost(Z_Param_WorldContextObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerforceRevision) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetPerforceRevision(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerks) \
	{ \
		P_GET_TARRAY_REF(UPerk*,Z_Param_Out_Perks); \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetPerks(Z_Param_Out_Perks,Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPerksCost) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetPerksCost(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPhysicsBodyWorldTransform) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out_transformPlacehldr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetPhysicsBodyWorldTransform(Z_Param_MeshComponent,Z_Param_Out_BoneName,Z_Param_Out_transformPlacehldr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetPing) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bUseMedian); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetPing(Z_Param_WorldContextObject,Z_Param_bUseMedian); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomEquipment) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomEquipment(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomFaceCustomizationVector) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_RandomExponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=UMordhauUtilityLibrary::GetRandomFaceCustomizationVector(Z_Param_RandomExponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomSkin) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_ID); \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_GET_OBJECT(AMordhauEquipment,Z_Param_Equipment); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetRandomSkin(Z_Param_Out_ID,Z_Param_Out_Skin,Z_Param_Equipment,EItemRarity(Z_Param_MaxRarity)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRandomWeapon) \
	{ \
		P_GET_STRUCT_REF(FSkillsCustomization,Z_Param_Out_SkillsCustomization); \
		P_GET_ENUM(EItemRarity,Z_Param_MaxRarity); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauEquipment**)Z_Param__Result=UMordhauUtilityLibrary::GetRandomWeapon(Z_Param_Out_SkillsCustomization,EItemRarity(Z_Param_MaxRarity),Z_Param_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRankFromXP) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_XP); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetRankFromXP(Z_Param_XP); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSculptableBoneAtLine) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineStart); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_LineEnd); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SearchRadius); \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_MeshComponent); \
		P_GET_OBJECT(AMordhauCharacter,Z_Param_Character); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Level); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UMordhauUtilityLibrary::GetSculptableBoneAtLine(Z_Param_Out_LineStart,Z_Param_Out_LineEnd,Z_Param_SearchRadius,Z_Param_MeshComponent,Z_Param_Character,Z_Param_Level); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerSteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetServerSteamID(Z_Param_Out_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSoundMixInfo) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Name); \
		P_GET_STRUCT(FSoundMixInfo,Z_Param_SoundMixInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetSoundMixInfo(Z_Param_Name,Z_Param_SoundMixInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamAvatar) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_ENUM(EAvatarSize,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=UMordhauUtilityLibrary::GetSteamAvatar(Z_Param_Out_SteamID,EAvatarSize(Z_Param_Size)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_ID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetSteamID(Z_Param_Out_ID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamIDFromPlayer) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=UMordhauUtilityLibrary::GetSteamIDFromPlayer(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamName) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetSteamName(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSupportedScreenResolutions) \
	{ \
		P_GET_TARRAY(FString,Z_Param_Resolutions); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::GetSupportedScreenResolutions(Z_Param_Resolutions); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSyncGroupPositionBetweenMarkers) \
	{ \
		P_GET_OBJECT(UAnimInstance,Z_Param_AnimInstance); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_SyncGroup); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetSyncGroupPositionBetweenMarkers(Z_Param_AnimInstance,Z_Param_Out_SyncGroup); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTotalDemoTime) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::GetTotalDemoTime(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetVersionName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVersionString) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::GetVersionString(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetViewTargetCharacter) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_UBOOL(Z_Param_bOnlyLiving); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=UMordhauUtilityLibrary::GetViewTargetCharacter(Z_Param_WorldContextObject,Z_Param_bOnlyLiving); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWearableClass) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_CharacterGearCustomization); \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UClass**)Z_Param__Result=UMordhauUtilityLibrary::GetWearableClass(Z_Param_Out_CharacterGearCustomization,EWearableSlot(Z_Param_Slot)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWearableClasses) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_CharacterGearCustomization); \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_GET_TARRAY_REF(UClass*,Z_Param_Out_classHolder); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetWearableClasses(Z_Param_Out_CharacterGearCustomization,EWearableSlot(Z_Param_Slot),Z_Param_Out_classHolder); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWearableNames) \
	{ \
		P_GET_STRUCT_REF(FCharacterGearCustomization,Z_Param_Out_CharacterGearCustomization); \
		P_GET_ENUM(EWearableSlot,Z_Param_Slot); \
		P_GET_TARRAY_REF(FText,Z_Param_Out_namePlacehldr); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::GetWearableNames(Z_Param_Out_CharacterGearCustomization,EWearableSlot(Z_Param_Slot),Z_Param_Out_namePlacehldr); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetWorldOf) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_Object); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UWorld**)Z_Param__Result=UMordhauUtilityLibrary::GetWorldOf(Z_Param_Object); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXPFromRank) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Rank); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::GetXPFromRank(Z_Param_Rank); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasActorBegunPlay) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::HasActorBegunPlay(Z_Param_Actor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasBeenReallyRecentlyRendered) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComponent); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::HasBeenReallyRecentlyRendered(Z_Param_MeshComponent); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsClient) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsClient(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDedicatedServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDedicatedServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDemoPlayback) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_World); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDemoPlayback(Z_Param_World); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDevelopmentBranch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDevelopmentBranch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDevelopmentBuild) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDevelopmentBuild(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsDLCInstalled) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_appid); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsDLCInstalled(Z_Param_appid); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsFriendlyToLocalPlayer) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_WorldReference); \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsFriendlyToLocalPlayer(Z_Param_WorldReference,Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsListenServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsListenServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsOfficialServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsOfficialServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPartyMember) \
	{ \
		P_GET_OBJECT(AMordhauPlayerState,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsPartyMember(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsPlayInEditor) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsPlayInEditor(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsReleaseBranch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsReleaseBranch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsServer) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsServer(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsStandalone) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsStandalone(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSteamFriend) \
	{ \
		P_GET_OBJECT(AMordhauPlayerState,Z_Param_Player); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsSteamFriend(Z_Param_Player); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsTestingBranch) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsTestingBranch(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsValid_SteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::IsValid_SteamID(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMakeEmptyProfile) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_CharacterClass); \
		P_GET_UBOOL(Z_Param_bRandomizeVoice); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCharacterProfile*)Z_Param__Result=UMordhauUtilityLibrary::MakeEmptyProfile(Z_Param_CharacterClass,Z_Param_bRandomizeVoice); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMarkRenderStateDirty) \
	{ \
		P_GET_OBJECT(UMeshComponent,Z_Param_MeshComp); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::MarkRenderStateDirty(Z_Param_MeshComp); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execNotEqual_SteamID) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_A); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_B); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::NotEqual_SteamID(Z_Param_Out_A,Z_Param_Out_B); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOpenURL) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_URL); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::OpenURL(Z_Param_URL); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRandomRangeExclude) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Min); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Max); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Exclude); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauUtilityLibrary::RandomRangeExclude(Z_Param_Min,Z_Param_Max,Z_Param_Exclude); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execReserveCharacterRagdoll) \
	{ \
		P_GET_OBJECT(AAdvancedCharacter,Z_Param_Character); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ReserveCharacterRagdoll(Z_Param_Character); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetClientPredictionData) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ResetClientPredictionData(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetServerPredictionData) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::ResetServerPredictionData(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSendClientAdjustment) \
	{ \
		P_GET_OBJECT(UCharacterMovementComponent,Z_Param_CMC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SendClientAdjustment(Z_Param_CMC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCanEverAffectNavigation) \
	{ \
		P_GET_OBJECT(UActorComponent,Z_Param_ActorComponent); \
		P_GET_UBOOL(Z_Param_bRelevant); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCanEverAffectNavigation(Z_Param_ActorComponent,Z_Param_bRelevant); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Bool) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Bool(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Color) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Color(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Float) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Float(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Int) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Int(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Rotator) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Rotator(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_String) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_String(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Vector) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Vector(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCustomConfigVar_Vector2D) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SectionName); \
		P_GET_PROPERTY(UStrProperty,Z_Param_VariableName); \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetCustomConfigVar_Vector2D(Z_Param_SectionName,Z_Param_VariableName,Z_Param_Out_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDecalFadeScreenSize) \
	{ \
		P_GET_OBJECT(UDecalComponent,Z_Param_Decal); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFadeScreenSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetDecalFadeScreenSize(Z_Param_Decal,Z_Param_NewFadeScreenSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetForceMipStreaming) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_SMC); \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetForceMipStreaming(Z_Param_SMC,Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLocalSpaceKinematics) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_Mesh); \
		P_GET_UBOOL(Z_Param_bNewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetLocalSpaceKinematics(Z_Param_Mesh,Z_Param_bNewValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMousePosition) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_Controller); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationX); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LocationY); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetMousePosition(Z_Param_Controller,Z_Param_LocationX,Z_Param_LocationY); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNavAreaClass) \
	{ \
		P_GET_OBJECT(UShapeComponent,Z_Param_ShapeComponent); \
		P_GET_OBJECT(UClass,Z_Param_AreaClass); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetNavAreaClass(Z_Param_ShapeComponent,Z_Param_AreaClass); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetPawnFromRep) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Contr); \
		P_GET_OBJECT(APawn,Z_Param_NewPawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::SetPawnFromRep(Z_Param_Contr,Z_Param_NewPawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSGreaterThan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringA); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::SGreaterThan(Z_Param_StringA,Z_Param_StringB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSLessThan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringA); \
		P_GET_PROPERTY(UStrProperty,Z_Param_StringB); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::SLessThan(Z_Param_StringA,Z_Param_StringB); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnap180AngleToSteps) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Angle180); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Step); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=UMordhauUtilityLibrary::Snap180AngleToSteps(Z_Param_Angle180,Z_Param_Step); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpawnBloodDecalAtLocation) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UMaterialInterface,Z_Param_DecalMaterial); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_DecalSize); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Location); \
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_Rotation); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_LifeSpan); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UDecalComponent**)Z_Param__Result=P_THIS->SpawnBloodDecalAtLocation(Z_Param_WorldContextObject,Z_Param_DecalMaterial,Z_Param_Out_DecalSize,Z_Param_Out_Location,Z_Param_Out_Rotation,Z_Param_LifeSpan); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSteamIDToString) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=UMordhauUtilityLibrary::SteamIDToString(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStripProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_InProfile); \
		P_GET_UBOOL(Z_Param_bStripEquipment); \
		P_GET_UBOOL(Z_Param_bStripPerks); \
		P_GET_UBOOL(Z_Param_bStripNonTier0Armor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FCharacterProfile*)Z_Param__Result=UMordhauUtilityLibrary::StripProfile(Z_Param_Out_InProfile,Z_Param_bStripEquipment,Z_Param_bStripPerks,Z_Param_bStripNonTier0Armor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTermAllChildBodiesOf) \
	{ \
		P_GET_OBJECT(USkeletalMeshComponent,Z_Param_USMC); \
		P_GET_PROPERTY_REF(UNameProperty,Z_Param_Out_BoneName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::TermAllChildBodiesOf(Z_Param_USMC,Z_Param_Out_BoneName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTryExecuteHeavydutyOperation) \
	{ \
		P_GET_OBJECT(UWorld,Z_Param_WorldObject); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::TryExecuteHeavydutyOperation(Z_Param_WorldObject); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnpossessCharacterAndHandleSpectating) \
	{ \
		P_GET_OBJECT(AController,Z_Param_Controller); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::UnpossessCharacterAndHandleSpectating(Z_Param_Controller); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execValidateCharacterProfile) \
	{ \
		P_GET_STRUCT_REF(FCharacterProfile,Z_Param_Out_Profile); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UMordhauUtilityLibrary::ValidateCharacterProfile(Z_Param_Out_Profile); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVSmoothDamp) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Target); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SmoothTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_DeltaTime); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxSpeed); \
		P_GET_STRUCT(FVector,Z_Param_Current); \
		P_GET_STRUCT(FVector,Z_Param_CurrentVelocity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UMordhauUtilityLibrary::VSmoothDamp(Z_Param_Out_Target,Z_Param_SmoothTime,Z_Param_DeltaTime,Z_Param_MaxSpeed,Z_Param_Current,Z_Param_CurrentVelocity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSortPlayers) \
	{ \
		P_GET_TARRAY(AMordhauPlayerState*,Z_Param_Array); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AMordhauPlayerState*>*)Z_Param__Result=UMordhauUtilityLibrary::SortPlayers(Z_Param_Array); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauUtilityLibrary(); \
	friend struct Z_Construct_UClass_UMordhauUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UMordhauUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauUtilityLibrary)


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauUtilityLibrary(); \
	friend struct Z_Construct_UClass_UMordhauUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UMordhauUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauUtilityLibrary)


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauUtilityLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauUtilityLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauUtilityLibrary(UMordhauUtilityLibrary&&); \
	NO_API UMordhauUtilityLibrary(const UMordhauUtilityLibrary&); \
public:


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauUtilityLibrary(UMordhauUtilityLibrary&&); \
	NO_API UMordhauUtilityLibrary(const UMordhauUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauUtilityLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauUtilityLibrary)


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_15_PROLOG
#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_INCLASS \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauUtilityLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
