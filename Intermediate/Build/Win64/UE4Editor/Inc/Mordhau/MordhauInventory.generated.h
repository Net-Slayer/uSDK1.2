// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECallResult : uint8;
struct FSteamID;
struct FItemStack;
struct FSerializedItems;
class UMordhauInventoryItem;
struct FEquipmentSkinEntry;
enum class EItemRarity : uint8;
struct FUnlockRecipe;
class AMordhauPlayerState;
#ifdef MORDHAU_MordhauInventory_generated_h
#error "MordhauInventory.generated.h already included, missing '#pragma once' in MordhauInventory.h"
#endif
#define MORDHAU_MordhauInventory_generated_h

#define Mordhau_Source_Mordhau_MordhauInventory_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItem(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItems) \
	{ \
		P_GET_TARRAY(int32,Z_Param_ItemDefIDs); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItems(Z_Param_ItemDefIDs,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreUnlockRecipesAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreUnlockRecipesAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanUnlockItem) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanUnlockItem(Z_Param_Out_SteamID,Z_Param_ItemDefID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanUnlockItems) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(int32,Z_Param_ItemDefIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanUnlockItems(Z_Param_Out_SteamID,Z_Param_ItemDefIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectRewards) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemStack>*)Z_Param__Result=P_THIS->CollectRewards(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsolidateItems) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsolidateItems(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeItemStack) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsumeItemStack(Z_Param_Out_ItemStack,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeItems) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FSerializedItems,Z_Param_Out_SerializedItems); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeserializeItems(Z_Param_Out_SteamID,Z_Param_Out_SerializedItems,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFakeItemDrop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_quantity); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FakeItemDrop(Z_Param_ItemDefID,Z_Param_quantity,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFakeRewardDrop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Gold); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XP); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FakeRewardDrop(Z_Param_Gold,Z_Param_XP,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoldItemDefID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetGoldItemDefID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInventoryItem**)Z_Param__Result=UMordhauInventory::GetItem(Z_Param_ItemDefID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemQuantity) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_PROPERTY(UIntProperty,Z_Param_quantity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetItemQuantity(Z_Param_Out_SteamID,Z_Param_ItemDefID,ECallResult(Z_Param_CallResult),Z_Param_quantity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemStacks) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetItemStacks(Z_Param_Out_SteamID,ECallResult(Z_Param_CallResult),Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkinRarity) \
	{ \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EItemRarity*)Z_Param__Result=P_THIS->GetSkinRarity(Z_Param_Out_Skin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackItem) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInventoryItem**)Z_Param__Result=UMordhauInventory::GetStackItem(Z_Param_Out_ItemStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackItemDefID) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetStackItemDefID(Z_Param_Out_ItemStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackQuantity) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetStackQuantity(Z_Param_Out_ItemStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialPackageItemDefID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetTutorialPackageItemDefID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnlockRecipe) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_STRUCT(FUnlockRecipe,Z_Param_Recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnlockRecipe(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult),Z_Param_Recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnlockRequirements) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_TARRAY(FItemStack,Z_Param_Requirements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnlockRequirements(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult),Z_Param_Requirements); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetXP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXPItemDefID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetXPItemDefID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasItem) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_Out_SteamID,Z_Param_ItemDefID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasRewards) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasRewards(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSkin) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSkin(Z_Param_Out_SteamID,Z_Param_Out_Skin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSupporterPack) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSupporterPack(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInventoryAvailable) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInventoryAvailable(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSkinAvailable) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSkinAvailable(Z_Param_Out_SteamID,Z_Param_Out_Skin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWebAPIItemsDropped) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWebAPIItemsDropped(Z_Param_Out_SteamID,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseResponseString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ResponseString); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ParseResponseString(Z_Param_ResponseString,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshItems) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshItems(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestUnlockRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestUnlockRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInventory) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInventory(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeItems) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SerializeItems(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemQuantity) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_quantity); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemQuantity(Z_Param_Out_SteamID,Z_Param_ItemDefID,Z_Param_quantity,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerItemDrop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerItemDrop(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerRewardDrop) \
	{ \
		P_GET_TARRAY(AMordhauPlayerState*,Z_Param_Players); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerRewardDrop(Z_Param_Players,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockItem) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockItem(Z_Param_Out_SteamID,Z_Param_ItemDefID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockItems) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(int32,Z_Param_ItemDefIDs); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockItems(Z_Param_Out_SteamID,Z_Param_ItemDefIDs,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockLevelUnlocks) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockLevelUnlocks(Z_Param_Out_SteamID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItem(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddItems) \
	{ \
		P_GET_TARRAY(int32,Z_Param_ItemDefIDs); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddItems(Z_Param_ItemDefIDs,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAreUnlockRecipesAvailable) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->AreUnlockRecipesAvailable(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanUnlockItem) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanUnlockItem(Z_Param_Out_SteamID,Z_Param_ItemDefID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCanUnlockItems) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(int32,Z_Param_ItemDefIDs); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CanUnlockItems(Z_Param_Out_SteamID,Z_Param_ItemDefIDs); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCollectRewards) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<FItemStack>*)Z_Param__Result=P_THIS->CollectRewards(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsolidateItems) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsolidateItems(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConsumeItemStack) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConsumeItemStack(Z_Param_Out_ItemStack,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDeserializeItems) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FSerializedItems,Z_Param_Out_SerializedItems); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DeserializeItems(Z_Param_Out_SteamID,Z_Param_Out_SerializedItems,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFakeItemDrop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_quantity); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FakeItemDrop(Z_Param_ItemDefID,Z_Param_quantity,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFakeRewardDrop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Gold); \
		P_GET_PROPERTY(UIntProperty,Z_Param_XP); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->FakeRewardDrop(Z_Param_Gold,Z_Param_XP,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGold) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetGold(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetGoldItemDefID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetGoldItemDefID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItem) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInventoryItem**)Z_Param__Result=UMordhauInventory::GetItem(Z_Param_ItemDefID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemQuantity) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_PROPERTY(UIntProperty,Z_Param_quantity); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetItemQuantity(Z_Param_Out_SteamID,Z_Param_ItemDefID,ECallResult(Z_Param_CallResult),Z_Param_quantity); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetItemStacks) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetItemStacks(Z_Param_Out_SteamID,ECallResult(Z_Param_CallResult),Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetSkinRarity) \
	{ \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EItemRarity*)Z_Param__Result=P_THIS->GetSkinRarity(Z_Param_Out_Skin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackItem) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UMordhauInventoryItem**)Z_Param__Result=UMordhauInventory::GetStackItem(Z_Param_Out_ItemStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackItemDefID) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetStackItemDefID(Z_Param_Out_ItemStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetStackQuantity) \
	{ \
		P_GET_STRUCT_REF(FItemStack,Z_Param_Out_ItemStack); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetStackQuantity(Z_Param_Out_ItemStack); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetTutorialPackageItemDefID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetTutorialPackageItemDefID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnlockRecipe) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_STRUCT(FUnlockRecipe,Z_Param_Recipe); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnlockRecipe(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult),Z_Param_Recipe); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetUnlockRequirements) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_GET_TARRAY(FItemStack,Z_Param_Requirements); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetUnlockRequirements(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult),Z_Param_Requirements); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXP) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->GetXP(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetXPItemDefID) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=UMordhauInventory::GetXPItemDefID(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasItem) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_Out_SteamID,Z_Param_ItemDefID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasRewards) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasRewards(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSkin) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSkin(Z_Param_Out_SteamID,Z_Param_Out_Skin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execHasSupporterPack) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->HasSupporterPack(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsInventoryAvailable) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsInventoryAvailable(Z_Param_Out_SteamID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsSkinAvailable) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_STRUCT_REF(FEquipmentSkinEntry,Z_Param_Out_Skin); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->IsSkinAvailable(Z_Param_Out_SteamID,Z_Param_Out_Skin); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execOnWebAPIItemsDropped) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->OnWebAPIItemsDropped(Z_Param_Out_SteamID,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execParseResponseString) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_ResponseString); \
		P_GET_TARRAY(FItemStack,Z_Param_ItemStacks); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->ParseResponseString(Z_Param_ResponseString,Z_Param_ItemStacks); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRefreshItems) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RefreshItems(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRequestUnlockRecipes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RequestUnlockRecipes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execResetInventory) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ResetInventory(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSerializeItems) \
	{ \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SerializeItems(ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetItemQuantity) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_quantity); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetItemQuantity(Z_Param_Out_SteamID,Z_Param_ItemDefID,Z_Param_quantity,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerItemDrop) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerItemDrop(Z_Param_ItemDefID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execTriggerRewardDrop) \
	{ \
		P_GET_TARRAY(AMordhauPlayerState*,Z_Param_Players); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->TriggerRewardDrop(Z_Param_Players,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockItem) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_PROPERTY(UIntProperty,Z_Param_ItemDefID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockItem(Z_Param_Out_SteamID,Z_Param_ItemDefID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockItems) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_TARRAY(int32,Z_Param_ItemDefIDs); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockItems(Z_Param_Out_SteamID,Z_Param_ItemDefIDs,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUnlockLevelUnlocks) \
	{ \
		P_GET_STRUCT_REF(FSteamID,Z_Param_Out_SteamID); \
		P_GET_ENUM(ECallResult,Z_Param_CallResult); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UnlockLevelUnlocks(Z_Param_Out_SteamID,ECallResult(Z_Param_CallResult)); \
		P_NATIVE_END; \
	}


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMordhauInventory(); \
	friend struct Z_Construct_UClass_UMordhauInventory_Statics; \
public: \
	DECLARE_CLASS(UMordhauInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauInventory)


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUMordhauInventory(); \
	friend struct Z_Construct_UClass_UMordhauInventory_Statics; \
public: \
	DECLARE_CLASS(UMordhauInventory, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Mordhau"), NO_API) \
	DECLARE_SERIALIZER(UMordhauInventory)


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauInventory) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauInventory); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauInventory(UMordhauInventory&&); \
	NO_API UMordhauInventory(const UMordhauInventory&); \
public:


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMordhauInventory(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMordhauInventory(UMordhauInventory&&); \
	NO_API UMordhauInventory(const UMordhauInventory&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMordhauInventory); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMordhauInventory); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMordhauInventory)


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_PRIVATE_PROPERTY_OFFSET
#define Mordhau_Source_Mordhau_MordhauInventory_h_14_PROLOG
#define Mordhau_Source_Mordhau_MordhauInventory_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_RPC_WRAPPERS \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_INCLASS \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Mordhau_Source_Mordhau_MordhauInventory_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_PRIVATE_PROPERTY_OFFSET \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_INCLASS_NO_PURE_DECLS \
	Mordhau_Source_Mordhau_MordhauInventory_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Mordhau_Source_Mordhau_MordhauInventory_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
