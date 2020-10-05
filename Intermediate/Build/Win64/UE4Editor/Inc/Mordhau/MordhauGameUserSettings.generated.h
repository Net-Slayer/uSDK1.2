// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef MORDHAU_MordhauGameUserSettings_generated_h
#error "MordhauGameUserSettings.generated.h already included, missing '#pragma once' in MordhauGameUserSettings.h"
#endif
#define MORDHAU_MordhauGameUserSettings_generated_h

#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActualCrosshairType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetActualCrosshairType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmbientOcclusion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmbientOcclusion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAntiAliasing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAntiAliasing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBloom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBloom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBloomLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetBloomLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCameraDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraDistanceLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetCameraDistanceLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterCloth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCharacterCloth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterFidelity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCharacterFidelity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCrosshairType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCrosshairType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBloom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentBloom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGamma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentGamma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMotionBlur) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentMotionBlur(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawTracers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDrawTracers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEffectsVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFieldOfViewLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetFieldOfViewLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRateLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetFrameRateLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendlyMarkers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFriendlyMarkers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGammaLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetGammaLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadbob) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHeadbob(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadbobLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetHeadbobLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHideDefaultLoadouts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHideDefaultLoadouts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHideHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHideHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHideWatermark) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHideWatermark(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndirectCapsuleShadows) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIndirectCapsuleShadows(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLensFlares) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLensFlares(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMasterVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMasterVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingGameModes) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Modes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMatchmakingGameModes(Z_Param_Out_Modes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxRagdolls) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxRagdolls(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxRagdollsLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxRagdollsLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionBlur) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMotionBlur(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionBlurLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetMotionBlurLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSmoothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseSmoothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSmoothingLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetMouseSmoothingLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMusicVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoTeamColorsOnGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNoTeamColorsOnGear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuickSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetQuickSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRagdollFidelity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRagdollFidelity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRagdollStayTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRagdollStayTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRagdollStayTimeLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRagdollStayTimeLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScreenPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenPercentageLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetScreenPercentageLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenSpaceReflections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScreenSpaceReflections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserGameMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetServerBrowserGameMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserHasPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetServerBrowserHasPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserMaxPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetServerBrowserMaxPing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserNoPassword) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetServerBrowserNoPassword(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserNotFull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetServerBrowserNotFull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserServerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetServerBrowserServerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowAnnouncements) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowAnnouncements(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowChatBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowChatBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowCrosshair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowCrosshair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowEmotesMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowEmotesMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowHitMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowHitMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowKilledBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowKilledBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowKillFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowKillFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowObservedDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowObservedDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowScoreFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowScoreFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowSpawnInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowSpawnInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowStatusBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowStatusBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowTargetInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowTargetInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowTips) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowTips(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThirdPersonDeathCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetThirdPersonDeathCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTracersStayTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTracersStayTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTracersStayTimeLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetTracersStayTimeLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVideoVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAmbientOcclusion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAmbientOcclusion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAmbientOcclusion(Z_Param_NewAmbientOcclusion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAntiAliasing) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAntiAliasing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAntiAliasing(Z_Param_NewAntiAliasing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBloom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloom(Z_Param_NewBloom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCameraDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraDistance(Z_Param_NewCameraDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCharacterCloth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterCloth(Z_Param_NewCharacterCloth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterFidelity) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFidelity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterFidelity(Z_Param_NewFidelity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCrosshairType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCrosshairType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrosshairType(Z_Param_NewCrosshairType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawTracers) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewDrawTracers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawTracers(Z_Param_NewDrawTracers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectsVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectsVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFieldOfView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFieldOfView(Z_Param_NewFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFriendlyMarkers) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFriendlyMarkers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFriendlyMarkers(Z_Param_NewFriendlyMarkers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamma) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGamma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamma(Z_Param_NewGamma); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewGore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGore(Z_Param_NewGore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeadbob) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHeadbob); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeadbob(Z_Param_NewHeadbob); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHideDefaultLoadouts) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHideDefaultLoadouts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHideDefaultLoadouts(Z_Param_NewHideDefaultLoadouts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHideHUD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHideHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHideHUD(Z_Param_NewHideHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHideWatermark) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHideWatermark); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHideWatermark(Z_Param_NewHideWatermark); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndirectCapsuleShadows) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShadows); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIndirectCapsuleShadows(Z_Param_NewShadows); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLanguage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewLanguage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLanguage(Z_Param_NewLanguage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLensFlares) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewLensFlares); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLensFlares(Z_Param_NewLensFlares); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMasterVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMasterVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMatchmakingGameModes) \
	{ \
		P_GET_TARRAY(FString,Z_Param_NewGameModes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMatchmakingGameModes(Z_Param_NewGameModes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxRagdolls) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxRagdolls(Z_Param_NewMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMotionBlur) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMotionBlur); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMotionBlur(Z_Param_NewMotionBlur); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSmoothing) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSmoothing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSmoothing(Z_Param_NewSmoothing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMusicVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMusicVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNoTeamColorsOnGear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNoTeamColorsOnGear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNoTeamColorsOnGear(Z_Param_NewNoTeamColorsOnGear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQuickSpawn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewQuickSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetQuickSpawn(Z_Param_NewQuickSpawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRagdollFidelity) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFidelity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRagdollFidelity(Z_Param_NewFidelity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRagdollStayTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRagdollStayTime(Z_Param_NewTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenPercentage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScreenPercentage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScreenPercentage(Z_Param_NewScreenPercentage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenSpaceReflections) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScreenSpaceReflections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScreenSpaceReflections(Z_Param_NewScreenSpaceReflections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserGameMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewGameMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserGameMode(Z_Param_NewGameMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserHasPlayers) \
	{ \
		P_GET_UBOOL(Z_Param_bNewHasPlayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserHasPlayers(Z_Param_bNewHasPlayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserMaxPing) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewMaxPing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserMaxPing(Z_Param_NewMaxPing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserNoPassword) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNoPassword); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserNoPassword(Z_Param_bNewNoPassword); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserNotFull) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotFull); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserNotFull(Z_Param_bNewNotFull); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserServerName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserServerName(Z_Param_NewServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowAmmo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowAmmo(Z_Param_NewShowAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowAnnouncements) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowAnnouncements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowAnnouncements(Z_Param_NewShowAnnouncements); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowChatBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowChatBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowChatBox(Z_Param_NewShowChatBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowCrosshair) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowCrosshair); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowCrosshair(Z_Param_NewShowCrosshair); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowEmotesMenu) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewEmotesMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowEmotesMenu(Z_Param_NewEmotesMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowEquipment) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowEquipment(Z_Param_NewShowEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowHitMarker) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowHitMarker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowHitMarker(Z_Param_NewShowHitMarker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowKilledBy) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowKilledBy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowKilledBy(Z_Param_NewShowKilledBy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowKillFeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowKillFeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowKillFeed(Z_Param_NewShowKillFeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowMatchmakingDebug) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowMatchmakingDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowMatchmakingDebug(Z_Param_NewShowMatchmakingDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowMatchmakingOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowMatchmakingOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowMatchmakingOverride(Z_Param_NewShowMatchmakingOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowObservedDelay) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowObservedDelay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowObservedDelay(Z_Param_NewShowObservedDelay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowScoreFeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowScoreFeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowScoreFeed(Z_Param_NewShowScoreFeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowSpawnInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowSpawnInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowSpawnInfo(Z_Param_NewShowSpawnInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowStatusBar) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowStatusBar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowStatusBar(Z_Param_NewShowStatusBar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowTargetInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowTargetInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowTargetInfo(Z_Param_NewShowTargetInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowTips) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowTips); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowTips(Z_Param_NewShowTips); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThirdPersonDeathcamera) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewThirdPersonDeathCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThirdPersonDeathcamera(Z_Param_NewThirdPersonDeathCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTracersStayTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStayTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTracersStayTime(Z_Param_NewStayTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVideoVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldDrawTracers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldDrawTracers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldQuickSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldQuickSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowAnnouncements) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowAnnouncements(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowBlood) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowBlood(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowChatBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowChatBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowCrosshair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowCrosshair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowEmotesMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowEmotesMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowHitMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowHitMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowKilledBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowKilledBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowKillFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowKillFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowMatchmakingDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowMatchmakingDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowMatchmakingOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowMatchmakingOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowObservedDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowObservedDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowScoreFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowScoreFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowSpawnInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowSpawnInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowStatusBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowStatusBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowTargetInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowTargetInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowTips) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowTips(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowWatermark) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowWatermark(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActualCrosshairType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetActualCrosshairType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAmbientOcclusion) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAmbientOcclusion(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetAntiAliasing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetAntiAliasing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBloom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetBloom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetBloomLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetBloomLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraDistance) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCameraDistance(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCameraDistanceLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetCameraDistanceLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterCloth) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCharacterCloth(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCharacterFidelity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCharacterFidelity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCrosshairType) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetCrosshairType(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentBloom) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentBloom(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentGamma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentGamma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetCurrentMotionBlur) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetCurrentMotionBlur(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetDrawTracers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetDrawTracers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetEffectsVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetEffectsVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFieldOfView) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetFieldOfView(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFieldOfViewLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetFieldOfViewLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFrameRateLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetFrameRateLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetFriendlyMarkers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetFriendlyMarkers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGamma) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetGamma(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGammaLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetGammaLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGore) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGore(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadbob) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetHeadbob(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHeadbobLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetHeadbobLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHideDefaultLoadouts) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHideDefaultLoadouts(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHideHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHideHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHideWatermark) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetHideWatermark(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIndirectCapsuleShadows) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetIndirectCapsuleShadows(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLanguage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetLanguage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLensFlares) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetLensFlares(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMasterVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMasterVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMatchmakingGameModes) \
	{ \
		P_GET_TARRAY_REF(FString,Z_Param_Out_Modes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetMatchmakingGameModes(Z_Param_Out_Modes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxRagdolls) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxRagdolls(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMaxRagdollsLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetMaxRagdollsLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionBlur) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMotionBlur(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMotionBlurLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetMotionBlurLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSmoothing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMouseSmoothing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseSmoothingLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetMouseSmoothingLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMusicVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetMusicVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetNoTeamColorsOnGear) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetNoTeamColorsOnGear(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetQuickSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetQuickSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRagdollFidelity) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetRagdollFidelity(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRagdollStayTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRagdollStayTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRagdollStayTimeLimit) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetRagdollStayTimeLimit(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenPercentage) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetScreenPercentage(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenPercentageLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetScreenPercentageLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetScreenSpaceReflections) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetScreenSpaceReflections(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserGameMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetServerBrowserGameMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserHasPlayers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetServerBrowserHasPlayers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserMaxPing) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetServerBrowserMaxPing(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserNoPassword) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetServerBrowserNoPassword(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserNotFull) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->GetServerBrowserNotFull(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetServerBrowserServerName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FString*)Z_Param__Result=P_THIS->GetServerBrowserServerName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowAnnouncements) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowAnnouncements(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowChatBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowChatBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowCrosshair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowCrosshair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowEmotesMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowEmotesMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowHitMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowHitMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowKilledBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowKilledBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowKillFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowKillFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowObservedDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowObservedDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowScoreFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowScoreFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowSpawnInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowSpawnInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowStatusBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowStatusBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowTargetInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowTargetInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetShowTips) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetShowTips(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetThirdPersonDeathCamera) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetThirdPersonDeathCamera(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTracersStayTime) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetTracersStayTime(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTracersStayTimeLimits) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector2D*)Z_Param__Result=P_THIS->GetTracersStayTimeLimits(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetVideoVolume) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetVideoVolume(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAmbientOcclusion) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAmbientOcclusion); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAmbientOcclusion(Z_Param_NewAmbientOcclusion); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAntiAliasing) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewAntiAliasing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAntiAliasing(Z_Param_NewAntiAliasing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetBloom) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewBloom); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetBloom(Z_Param_NewBloom); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCameraDistance) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewCameraDistance); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCameraDistance(Z_Param_NewCameraDistance); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterCloth) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCharacterCloth); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterCloth(Z_Param_NewCharacterCloth); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCharacterFidelity) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFidelity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCharacterFidelity(Z_Param_NewFidelity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetCrosshairType) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewCrosshairType); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetCrosshairType(Z_Param_NewCrosshairType); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetDrawTracers) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewDrawTracers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetDrawTracers(Z_Param_NewDrawTracers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEffectsVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEffectsVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFieldOfView) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewFOV); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFieldOfView(Z_Param_NewFOV); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetFriendlyMarkers) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFriendlyMarkers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetFriendlyMarkers(Z_Param_NewFriendlyMarkers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGamma) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewGamma); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGamma(Z_Param_NewGamma); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetGore) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewGore); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetGore(Z_Param_NewGore); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHeadbob) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewHeadbob); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHeadbob(Z_Param_NewHeadbob); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHideDefaultLoadouts) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHideDefaultLoadouts); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHideDefaultLoadouts(Z_Param_NewHideDefaultLoadouts); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHideHUD) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHideHUD); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHideHUD(Z_Param_NewHideHUD); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetHideWatermark) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewHideWatermark); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetHideWatermark(Z_Param_NewHideWatermark); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetIndirectCapsuleShadows) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShadows); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetIndirectCapsuleShadows(Z_Param_NewShadows); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLanguage) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewLanguage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLanguage(Z_Param_NewLanguage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetLensFlares) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewLensFlares); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetLensFlares(Z_Param_NewLensFlares); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMasterVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMasterVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMatchmakingGameModes) \
	{ \
		P_GET_TARRAY(FString,Z_Param_NewGameModes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMatchmakingGameModes(Z_Param_NewGameModes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMaxRagdolls) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewMax); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMaxRagdolls(Z_Param_NewMax); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMotionBlur) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewMotionBlur); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMotionBlur(Z_Param_NewMotionBlur); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMouseSmoothing) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewSmoothing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMouseSmoothing(Z_Param_NewSmoothing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetMusicVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetMusicVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetNoTeamColorsOnGear) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewNoTeamColorsOnGear); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetNoTeamColorsOnGear(Z_Param_NewNoTeamColorsOnGear); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetQuickSpawn) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewQuickSpawn); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetQuickSpawn(Z_Param_NewQuickSpawn); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRagdollFidelity) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewFidelity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRagdollFidelity(Z_Param_NewFidelity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRagdollStayTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRagdollStayTime(Z_Param_NewTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenPercentage) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewScreenPercentage); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScreenPercentage(Z_Param_NewScreenPercentage); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetScreenSpaceReflections) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewScreenSpaceReflections); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetScreenSpaceReflections(Z_Param_NewScreenSpaceReflections); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserGameMode) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewGameMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserGameMode(Z_Param_NewGameMode); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserHasPlayers) \
	{ \
		P_GET_UBOOL(Z_Param_bNewHasPlayers); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserHasPlayers(Z_Param_bNewHasPlayers); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserMaxPing) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewMaxPing); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserMaxPing(Z_Param_NewMaxPing); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserNoPassword) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNoPassword); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserNoPassword(Z_Param_bNewNoPassword); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserNotFull) \
	{ \
		P_GET_UBOOL(Z_Param_bNewNotFull); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserNotFull(Z_Param_bNewNotFull); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetServerBrowserServerName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_NewServerName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetServerBrowserServerName(Z_Param_NewServerName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowAmmo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowAmmo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowAmmo(Z_Param_NewShowAmmo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowAnnouncements) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowAnnouncements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowAnnouncements(Z_Param_NewShowAnnouncements); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowChatBox) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowChatBox); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowChatBox(Z_Param_NewShowChatBox); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowCrosshair) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowCrosshair); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowCrosshair(Z_Param_NewShowCrosshair); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowEmotesMenu) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewEmotesMenu); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowEmotesMenu(Z_Param_NewEmotesMenu); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowEquipment) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowEquipment); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowEquipment(Z_Param_NewShowEquipment); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowHitMarker) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowHitMarker); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowHitMarker(Z_Param_NewShowHitMarker); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowKilledBy) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowKilledBy); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowKilledBy(Z_Param_NewShowKilledBy); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowKillFeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowKillFeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowKillFeed(Z_Param_NewShowKillFeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowMatchmakingDebug) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowMatchmakingDebug); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowMatchmakingDebug(Z_Param_NewShowMatchmakingDebug); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowMatchmakingOverride) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowMatchmakingOverride); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowMatchmakingOverride(Z_Param_NewShowMatchmakingOverride); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowObservedDelay) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowObservedDelay); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowObservedDelay(Z_Param_NewShowObservedDelay); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowScoreFeed) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowScoreFeed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowScoreFeed(Z_Param_NewShowScoreFeed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowSpawnInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowSpawnInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowSpawnInfo(Z_Param_NewShowSpawnInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowStatusBar) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowStatusBar); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowStatusBar(Z_Param_NewShowStatusBar); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowTargetInfo) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowTargetInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowTargetInfo(Z_Param_NewShowTargetInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetShowTips) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewShowTips); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetShowTips(Z_Param_NewShowTips); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetThirdPersonDeathcamera) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_NewThirdPersonDeathCamera); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetThirdPersonDeathcamera(Z_Param_NewThirdPersonDeathCamera); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetTracersStayTime) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewStayTime); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetTracersStayTime(Z_Param_NewStayTime); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetVideoVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_NewVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetVideoVolume(Z_Param_NewVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldDrawTracers) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldDrawTracers(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldQuickSpawn) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldQuickSpawn(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowAmmo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowAmmo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowAnnouncements) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowAnnouncements(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowBlood) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowBlood(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowChatBox) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowChatBox(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowCrosshair) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowCrosshair(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowEmotesMenu) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowEmotesMenu(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowEquipment) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowEquipment(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowHitMarker) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowHitMarker(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowHUD) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowHUD(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowKilledBy) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowKilledBy(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowKillFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowKillFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowMatchmakingDebug) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowMatchmakingDebug(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowMatchmakingOverride) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowMatchmakingOverride(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowObservedDelay) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowObservedDelay(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowScoreFeed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowScoreFeed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowSpawnInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowSpawnInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowStatusBar) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowStatusBar(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowTargetInfo) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowTargetInfo(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowTips) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowTips(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execShouldShowWatermark) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ShouldShowWatermark(); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauGameUserSettings(); \
	friend struct Z_Construct_UClass_UMordhauGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UMordhauGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauGameUserSettings)


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauGameUserSettings(); \
	friend struct Z_Construct_UClass_UMordhauGameUserSettings_Statics; \
public: \
	DECLARE_CLASS(UMordhauGameUserSettings, UGameUserSettings, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauGameUserSettings)


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauGameUserSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauGameUserSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauGameUserSettings(UMordhauGameUserSettings&&); \
	NO_API UMordhauGameUserSettings(const UMordhauGameUserSettings&); \
public:


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauGameUserSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauGameUserSettings(UMordhauGameUserSettings&&); \
	NO_API UMordhauGameUserSettings(const UMordhauGameUserSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauGameUserSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauGameUserSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauGameUserSettings)


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_13_PROLOG
#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_INCLASS \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauGameUserSettings_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauGameUserSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
