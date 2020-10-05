// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMordhauCharacter;
enum class EAvatarSize : uint8;
class UTexture2D;
struct FVector2D;
struct FSteamID;
enum class EMainWearableSlot : uint8;
enum class EWearableSlot : uint8; struct FWearableCustomization;
class UObject;
struct FEquipmentCustomization;
class AActor;
enum class EScoreFeedReason : uint8;
struct FSerializedItems;
struct FItemStack;
struct FVector;
class AMordhauPlayerState;
class APawn;
struct FRotator;
struct FServerStats;
class APlayerState;
class AMordhauEquipment;
struct FAppearanceCustomization;
struct FCharacterGearCustomization;
struct FFaceCustomization;
struct FSkillsCustomization;
#ifdef MORDHAU_MordhauPlayerController_generated_h
#error "MordhauPlayerController.generated.h already included, missing '#pragma once' in MordhauPlayerController.h"
#endif
#define MORDHAU_MordhauPlayerController_generated_h

#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLastControlledCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetLastControlledCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamAvatar) \
	{ \
		P_GET_ENUM(EAvatarSize,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetSteamAvatar(EAvatarSize(Z_Param_Size)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnglingVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetAnglingVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnglingAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnglingAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultTierCustomizationForSlot) \
	{ \
		P_GET_ENUM(EMainWearableSlot,Z_Param_MainSlot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ArmorTier); \
		P_GET_TMAP_REF(EWearableSlot,FWearableCustomization,Z_Param_Out_OutMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDefaultTierCustomizationForSlot(EMainWearableSlot(Z_Param_MainSlot),Z_Param_ArmorTier,Z_Param_Out_OutMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultEquipmentCustomizationFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForEquipmentClass); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_OutCustomization); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDefaultEquipmentCustomizationFor(Z_Param_ForEquipmentClass,Z_Param_Out_OutCustomization); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAdmin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAdmin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAuthTicketAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAuthTicketAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInventoryAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInventoryAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSharesInstanceWith) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SharesInstanceWith(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAskForSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAskForSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChoiceMenuConsumesInput) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChoiceMenuConsumesInput(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowAuthTraces) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowAuthTraces(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Slomo(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpectatorCmd) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SpecCmd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpectatorCmd(Z_Param_SpecCmd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartServerStatsFile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartServerStatsFile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopServerStatsFile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopServerStatsFile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnban) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unban(Z_Param_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoteKick) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VoteKick(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoteLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VoteLevel(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoteMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VoteMap(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAdmin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAdmin(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAskForSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AskForSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBots(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBotsTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBotsTeam(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdminList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdminList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdminLogin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdminLogin(Z_Param_Password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BanDuration); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BanReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ban(Z_Param_PlayerNameOrSteamID,Z_Param_BanDuration,Z_Param_BanReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BanList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelVoteKick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelVoteKick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeLevel(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMap(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoiceMenu) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChoiceMenu(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose6) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose6(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose7) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose7(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose8) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose8(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose9) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose9(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChooseExit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChooseExit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientWasKicked_Implementation) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientWasKicked_Implementation(Z_Param_Out_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipmentCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipmentCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPendingAnglingInputs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushPendingAnglingInputs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKick) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Kick(Z_Param_PlayerNameOrSteamID,Z_Param_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveClientScoreBP) \
	{ \
		P_GET_ENUM(EScoreFeedReason,Z_Param_Reason); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScoreAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveClientScoreBP(EScoreFeedReason(Z_Param_Reason),Z_Param_ScoreAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventoryItemsSerialized) \
	{ \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FSerializedItems,Z_Param_Out_SerializedItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventoryItemsSerialized(Z_Param_bWasSuccessful,Z_Param_Out_SteamID,Z_Param_Out_SerializedItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventoryItemsUnlocked) \
	{ \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventoryItemsUnlocked(Z_Param_bWasSuccessful,Z_Param_Out_SteamID,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventoryRewardsDropped) \
	{ \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventoryRewardsDropped(Z_Param_bWasSuccessful,Z_Param_Out_SteamID,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSettingsChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSettingsChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrepareAndSendCustomizationIfChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrepareAndSendCustomizationIfChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterAnglingXInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterAnglingXInput(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterAnglingYInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterAnglingYInput(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAdmin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAdmin(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBots(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBotsTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBotsTeam(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCurrentProfilesAsBotProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveCurrentProfilesAsBotProfiles(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLastControlledCharacter) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(AMordhauCharacter**)Z_Param__Result=P_THIS->GetLastControlledCharacter(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamAvatar) \
	{ \
		P_GET_ENUM(EAvatarSize,Z_Param_Size); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UTexture2D**)Z_Param__Result=P_THIS->GetSteamAvatar(EAvatarSize(Z_Param_Size)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnglingVector) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetAnglingVector(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSteamID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FSteamID*)Z_Param__Result=P_THIS->GetSteamID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAnglingAngle) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAnglingAngle(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultTierCustomizationForSlot) \
	{ \
		P_GET_ENUM(EMainWearableSlot,Z_Param_MainSlot); \
		P_GET_PROPERTY(UByteProperty,Z_Param_ArmorTier); \
		P_GET_TMAP_REF(EWearableSlot,FWearableCustomization,Z_Param_Out_OutMap); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDefaultTierCustomizationForSlot(EMainWearableSlot(Z_Param_MainSlot),Z_Param_ArmorTier,Z_Param_Out_OutMap); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDefaultEquipmentCustomizationFor) \
	{ \
		P_GET_OBJECT(UClass,Z_Param_ForEquipmentClass); \
		P_GET_STRUCT_REF(FEquipmentCustomization,Z_Param_Out_OutCustomization); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetDefaultEquipmentCustomizationFor(Z_Param_ForEquipmentClass,Z_Param_Out_OutCustomization); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAdmin) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAdmin(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsAuthTicketAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsAuthTicketAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInventoryAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInventoryAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSharesInstanceWith) \
	{ \
		P_GET_OBJECT(AActor,Z_Param_OtherActor); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->SharesInstanceWith(Z_Param_OtherActor); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanAskForSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanAskForSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetChoiceMenuConsumesInput) \
	{ \
		P_GET_UBOOL(Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetChoiceMenuConsumesInput(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShowAuthTraces) \
	{ \
		P_GET_UBOOL(Z_Param_bValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ShowAuthTraces(Z_Param_bValue); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSlomo) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Slomo(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSpectatorCmd) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SpecCmd); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SpectatorCmd(Z_Param_SpecCmd); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStartServerStatsFile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StartServerStatsFile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execStopServerStatsFile) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->StopServerStatsFile(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleDamage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleDamage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execToggleStamina) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ToggleStamina(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTurn) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Turn(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnban) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Unban(Z_Param_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoteKick) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VoteKick(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoteLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VoteLevel(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execVoteMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->VoteMap(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddAdmin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddAdmin(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAskForSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AskForSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBots(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddBotsTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddBotsTeam(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdminList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdminList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAdminLogin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_Password); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AdminLogin(Z_Param_Password); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBan) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_BanDuration); \
		P_GET_PROPERTY(UStrProperty,Z_Param_BanReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Ban(Z_Param_PlayerNameOrSteamID,Z_Param_BanDuration,Z_Param_BanReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execBanList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->BanList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCancelVoteKick) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CancelVoteKick(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeLevel) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_LevelName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeLevel(Z_Param_LevelName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChangeMap) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_MapName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChangeMap(Z_Param_MapName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoiceMenu) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Index); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChoiceMenu(Z_Param_Index); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose1) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose1(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose2) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose2(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose3) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose3(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose4) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose4(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose5) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose5(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose6) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose6(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose7) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose7(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose8) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose8(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChoose9) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Choose9(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execChooseExit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ChooseExit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execClientWasKicked_Implementation) \
	{ \
		P_GET_PROPERTY_REF(UTextProperty,Z_Param_Out_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ClientWasKicked_Implementation(Z_Param_Out_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEquipmentCommand) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Command); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->EquipmentCommand(Z_Param_Command); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushPendingAnglingInputs) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FlushPendingAnglingInputs(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execKick) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_GET_PROPERTY(UStrProperty,Z_Param_KickReason); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Kick(Z_Param_PlayerNameOrSteamID,Z_Param_KickReason); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGiveClientScoreBP) \
	{ \
		P_GET_ENUM(EScoreFeedReason,Z_Param_Reason); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ScoreAmount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GiveClientScoreBP(EScoreFeedReason(Z_Param_Reason),Z_Param_ScoreAmount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execLookUp) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->LookUp(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventoryItemsSerialized) \
	{ \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FSerializedItems,Z_Param_Out_SerializedItems); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventoryItemsSerialized(Z_Param_bWasSuccessful,Z_Param_Out_SteamID,Z_Param_Out_SerializedItems); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventoryItemsUnlocked) \
	{ \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventoryItemsUnlocked(Z_Param_bWasSuccessful,Z_Param_Out_SteamID,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnInventoryRewardsDropped) \
	{ \
		P_GET_UBOOL(Z_Param_bWasSuccessful); \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnInventoryRewardsDropped(Z_Param_bWasSuccessful,Z_Param_Out_SteamID,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnSettingsChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnSettingsChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPlayerList) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PlayerList(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPrepareAndSendCustomizationIfChanged) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PrepareAndSendCustomizationIfChanged(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterAnglingXInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterAnglingXInput(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRegisterAnglingYInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RegisterAnglingYInput(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveAdmin) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_PlayerNameOrSteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveAdmin(Z_Param_PlayerNameOrSteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBots) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBots(Z_Param_Amount); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveBotsTeam) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Amount); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Team); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveBotsTeam(Z_Param_Amount,Z_Param_Team); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSaveCurrentProfilesAsBotProfiles) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SaveCurrentProfilesAsBotProfiles(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_EVENT_PARMS \
	struct MordhauPlayerController_eventChoiceMenuOptionSelected_Parms \
	{ \
		int32 Choice; \
	}; \
	struct MordhauPlayerController_eventClientDrawTracer_Parms \
	{ \
		FVector Start; \
		FVector End; \
	}; \
	struct MordhauPlayerController_eventClientJoinMatchmakingLobby_Parms \
	{ \
		FSteamID InMatchmakingLobbyID; \
	}; \
	struct MordhauPlayerController_eventClientMessageBP_Parms \
	{ \
		FString String; \
	}; \
	struct MordhauPlayerController_eventClientReceiveMessage_Parms \
	{ \
		FString Message; \
	}; \
	struct MordhauPlayerController_eventClientReceiveRewards_Parms \
	{ \
		TArray<FItemStack> Rewards; \
	}; \
	struct MordhauPlayerController_eventClientReceiveScore_Parms \
	{ \
		uint8 ReasonAndParam; \
		int32 ScoreAmount; \
		AMordhauPlayerState* AssociatedPlayer; \
	}; \
	struct MordhauPlayerController_eventClientReceiveScoreBP_Parms \
	{ \
		EScoreFeedReason Reason; \
		uint8 ReasonParam; \
		float ScoreAmount; \
		AMordhauPlayerState* AssociatedPlayer; \
	}; \
	struct MordhauPlayerController_eventClientReceiveScoreNoState_Parms \
	{ \
		uint8 ReasonAndParam; \
		int32 ScoreAmount; \
	}; \
	struct MordhauPlayerController_eventClientSetControlAndPawnRotation_Parms \
	{ \
		APawn* APawn; \
		FRotator NewRotation; \
	}; \
	struct MordhauPlayerController_eventClientSetMapVoteCounts_Parms \
	{ \
		TArray<uint8> InMapVoteCounts; \
	}; \
	struct MordhauPlayerController_eventClientSetMapVoteMaps_Parms \
	{ \
		TArray<FString> InMapVoteMaps; \
	}; \
	struct MordhauPlayerController_eventClientSetServerStats_Parms \
	{ \
		FServerStats InServerStats; \
	}; \
	struct MordhauPlayerController_eventDisplayMessage_Parms \
	{ \
		APlayerState* SenderPlayerState; \
		FString S; \
		FName Type; \
		float MsgLifeTime; \
	}; \
	struct MordhauPlayerController_eventOnActionFailed_Parms \
	{ \
		FName Reason; \
	}; \
	struct MordhauPlayerController_eventOnAfterPossess_Parms \
	{ \
		APawn* APawn; \
	}; \
	struct MordhauPlayerController_eventOnAmmoChanged_Parms \
	{ \
		AMordhauEquipment* Equipment; \
		int32 AmmoDifference; \
	}; \
	struct MordhauPlayerController_eventOnHighlightEnd_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct MordhauPlayerController_eventOnHighlightStart_Parms \
	{ \
		AActor* Actor; \
	}; \
	struct MordhauPlayerController_eventOnMordhauCharacterSpawned_Parms \
	{ \
		AMordhauCharacter* SpawnedCharacter; \
	}; \
	struct MordhauPlayerController_eventOnRequestVoteKick_Parms \
	{ \
		AMordhauPlayerState* TargetPlayer; \
	}; \
	struct MordhauPlayerController_eventOnSpectatorAction_Parms \
	{ \
		uint8 Action; \
	}; \
	struct MordhauPlayerController_eventOnSpectatorCmd_Parms \
	{ \
		FString Cmd; \
		FString Param; \
	}; \
	struct MordhauPlayerController_eventServerAddAdmin_Parms \
	{ \
		uint8 SteamID; \
	}; \
	struct MordhauPlayerController_eventServerAddBots_Parms \
	{ \
		int32 Amount; \
		int32 Team; \
	}; \
	struct MordhauPlayerController_eventServerAdminLogin_Parms \
	{ \
		FString Password; \
	}; \
	struct MordhauPlayerController_eventServerBanPlayer_Parms \
	{ \
		uint8 SteamID; \
		int32 BanDuration; \
		FString BanReason; \
	}; \
	struct MordhauPlayerController_eventServerChangeLevel_Parms \
	{ \
		FString LevelName; \
	}; \
	struct MordhauPlayerController_eventServerHasPassedCheck_Parms \
	{ \
		uint8 Param; \
	}; \
	struct MordhauPlayerController_eventServerKickPlayer_Parms \
	{ \
		uint8 SteamID; \
		FString KickReason; \
	}; \
	struct MordhauPlayerController_eventServerRemoveAdmin_Parms \
	{ \
		uint8 SteamID; \
	}; \
	struct MordhauPlayerController_eventServerRemoveBots_Parms \
	{ \
		int32 Amount; \
		int32 Team; \
	}; \
	struct MordhauPlayerController_eventServerRequestAuthTraces_Parms \
	{ \
		bool bEnabled; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetAppearanceCustomization_Parms \
	{ \
		FAppearanceCustomization NewCharacterAppearance; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetDefaultCharacterEquipment_Parms \
	{ \
		TArray<FEquipmentCustomization> Equip; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetDefaultCharacterTiers_Parms \
	{ \
		TArray<FCharacterGearCustomization> Tiers; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetDefaultProfile_Parms \
	{ \
		int32 NewDefaultProfile; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetFaceCustomization_Parms \
	{ \
		FFaceCustomization NewCharacterFace; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetGearCustomization_Parms \
	{ \
		FCharacterGearCustomization NewCharacterGear; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetSkillsCustomization_Parms \
	{ \
		FSkillsCustomization NewCharacterSkills; \
	}; \
	struct MordhauPlayerController_eventServerRequestSetTeam_Parms \
	{ \
		int32 NewTeam; \
	}; \
	struct MordhauPlayerController_eventServerSetAuthTicket_Parms \
	{ \
		FString InAuhTicket; \
	}; \
	struct MordhauPlayerController_eventServerSetBadge_Parms \
	{ \
		uint8 NewBadge; \
	}; \
	struct MordhauPlayerController_eventServerSetMatchmakingLobbyID_Parms \
	{ \
		FSteamID InMatchmakingLobbyID; \
	}; \
	struct MordhauPlayerController_eventServerSetSpawnToken_Parms \
	{ \
		int32 NewToken; \
	}; \
	struct MordhauPlayerController_eventServerSlomo_Parms \
	{ \
		float Value; \
	}; \
	struct MordhauPlayerController_eventServerUnbanPlayer_Parms \
	{ \
		uint8 SteamID; \
	}; \
	struct MordhauPlayerController_eventServerVoteLevel_Parms \
	{ \
		FString LevelName; \
	};


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_CALLBACK_WRAPPERS
#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMordhauPlayerController(); \
	friend struct Z_Construct_UClass_AMordhauPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMordhauPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauPlayerController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_INCLASS \
private: \
	static void StaticRegisterNativesAMordhauPlayerController(); \
	friend struct Z_Construct_UClass_AMordhauPlayerController_Statics; \
public: \
	DECLARE_CLASS(AMordhauPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(AMordhauPlayerController) \
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauPlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauPlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauPlayerController(AMordhauPlayerController&&); \
	NO_API AMordhauPlayerController(const AMordhauPlayerController&); \
public:


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMordhauPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMordhauPlayerController(AMordhauPlayerController&&); \
	NO_API AMordhauPlayerController(const AMordhauPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMordhauPlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMordhauPlayerController); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMordhauPlayerController)


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauPlayerController_h_44_PROLOG \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_EVENT_PARMS


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_INCLASS \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauPlayerController_h_47_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_CALLBACK_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauPlayerController_h_47_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
