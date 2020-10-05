// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauInventory.h"


TArray<struct FItemStack> ReturnValue;
EItemRarity ReturnValue1;

void UMordhauInventory::UnlockLevelUnlocks(const struct FSteamID& SteamID, ECallResult CallResult)
{

}

void UMordhauInventory::UnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs, ECallResult CallResult)
{

}

void UMordhauInventory::UnlockItem(const struct FSteamID& SteamID, int ItemDefID, ECallResult CallResult)
{

}

void UMordhauInventory::TriggerRewardDrop(TArray<class AMordhauPlayerState*> Players, ECallResult CallResult)
{

}

void UMordhauInventory::TriggerItemDrop(int ItemDefID, ECallResult CallResult)
{

}

void UMordhauInventory::SetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, int quantity, ECallResult CallResult)
{

}

void UMordhauInventory::SerializeItems(ECallResult CallResult)
{

}

void UMordhauInventory::ResetInventory(ECallResult CallResult)
{

}

void UMordhauInventory::RequestUnlockRecipes()
{

}

void UMordhauInventory::RefreshItems(ECallResult CallResult)
{

}

bool UMordhauInventory::ParseResponseString(const FString& ResponseString, TArray<struct FItemStack> ItemStacks)
{
	return 1;
}

void UMordhauInventory::OnWebAPIItemsDropped(const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks)
{

}

bool UMordhauInventory::IsSkinAvailable(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin)
{
	return 1;
}

bool UMordhauInventory::IsInventoryAvailable(const struct FSteamID& SteamID)
{
	return 1;
}

bool UMordhauInventory::HasSupporterPack(const struct FSteamID& SteamID)
{
	return 1;
}

bool UMordhauInventory::HasSkin(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin)
{
	return 1;
}

bool UMordhauInventory::HasRewards(const struct FSteamID& SteamID)
{
	return 1;
}

bool UMordhauInventory::HasItem(const struct FSteamID& SteamID, int ItemDefID)
{
	return 1;
}

int UMordhauInventory::GetXPItemDefID()
{
	return 1;
}

int UMordhauInventory::GetXP()
{
	return 1;
}

void UMordhauInventory::GetUnlockRequirements(int ItemDefID, ECallResult CallResult, TArray<struct FItemStack> Requirements)
{

}

void UMordhauInventory::GetUnlockRecipe(int ItemDefID, ECallResult CallResult, struct FUnlockRecipe Recipe)
{

}

int UMordhauInventory::GetTutorialPackageItemDefID()
{
return 1;
}

int UMordhauInventory::GetStackQuantity(const struct FItemStack& ItemStack)
{
	return 1;
}

int UMordhauInventory::GetStackItemDefID(const struct FItemStack& ItemStack)
{
	return 1;
}

class UMordhauInventoryItem* UMordhauInventory::GetStackItem(const struct FItemStack& ItemStack)
{
	return nullptr;
}

EItemRarity UMordhauInventory::GetSkinRarity(const struct FEquipmentSkinEntry& Skin)
{
	return ReturnValue1;
}

void UMordhauInventory::GetItemStacks(const struct FSteamID& SteamID, ECallResult CallResult, TArray<struct FItemStack> ItemStacks)
{
}


void UMordhauInventory::GetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, ECallResult CallResult, int quantity)
{

}

class UMordhauInventoryItem* UMordhauInventory::GetItem(int ItemDefID)
{
	return nullptr;
}

int UMordhauInventory::GetGoldItemDefID()
{
	return 1;
}

int UMordhauInventory::GetGold()
{
	return 1;
}

void UMordhauInventory::FakeRewardDrop(int Gold, int XP, ECallResult CallResult)
{

}

void UMordhauInventory::FakeItemDrop(int ItemDefID, int quantity, ECallResult CallResult)
{

}

void UMordhauInventory::DeserializeItems(const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems, ECallResult CallResult)
{

}

void UMordhauInventory::ConsumeItemStack(const struct FItemStack& ItemStack, ECallResult CallResult)
{

}

void UMordhauInventory::ConsolidateItems(ECallResult CallResult)
{

}

TArray<struct FItemStack> UMordhauInventory::CollectRewards(const struct FSteamID& SteamID)
{
	return ReturnValue;
}

bool UMordhauInventory::CanUnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs)
{
	return 1;
}

bool UMordhauInventory::CanUnlockItem(const struct FSteamID& SteamID, int ItemDefID)
{
	return 1;
}

bool UMordhauInventory::AreUnlockRecipesAvailable()
{
	return 1;
}

void UMordhauInventory::AddItems(TArray<int> ItemDefIDs, ECallResult CallResult)
{

}

void UMordhauInventory::AddItem(int ItemDefID, ECallResult CallResult)
{

}
