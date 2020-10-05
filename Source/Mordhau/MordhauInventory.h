// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauInventory.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauInventory : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FScriptMulticastDelegate                    OnItemsRefreshed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FScriptMulticastDelegate                    OnItemsSerialized;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FScriptMulticastDelegate                    OnItemsDeserialized;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FScriptMulticastDelegate                    OnItemsDropped;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FScriptMulticastDelegate                    OnRewardsDropped;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FScriptMulticastDelegate                    OnItemsUnlocked;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
 FString                                     RecipesString;
	
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void UnlockLevelUnlocks(const struct FSteamID& SteamID, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void UnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void UnlockItem(const struct FSteamID& SteamID, int ItemDefID, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void TriggerRewardDrop(TArray<class AMordhauPlayerState*> Players, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void TriggerItemDrop(int ItemDefID, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void SetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, int quantity, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void SerializeItems(ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void ResetInventory(ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void RequestUnlockRecipes();
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void RefreshItems(ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool ParseResponseString(const FString& ResponseString, TArray<struct FItemStack> ItemStacks);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void OnWebAPIItemsDropped(const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool IsSkinAvailable(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool IsInventoryAvailable(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool HasSupporterPack(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool HasSkin(const struct FSteamID& SteamID, const struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool HasRewards(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool HasItem(const struct FSteamID& SteamID, int ItemDefID);
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static int GetXPItemDefID();
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	int GetXP();
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void GetUnlockRequirements(int ItemDefID, ECallResult CallResult, TArray<struct FItemStack> Requirements);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void GetUnlockRecipe(int ItemDefID, ECallResult CallResult, struct FUnlockRecipe Recipe);
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static int GetTutorialPackageItemDefID();
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static int GetStackQuantity(const struct FItemStack& ItemStack);
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static int GetStackItemDefID(const struct FItemStack& ItemStack);
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static class UMordhauInventoryItem* GetStackItem(const struct FItemStack& ItemStack);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	EItemRarity GetSkinRarity(const struct FEquipmentSkinEntry& Skin);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void GetItemStacks(const struct FSteamID& SteamID, ECallResult CallResult, TArray<struct FItemStack> ItemStacks);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void GetItemQuantity(const struct FSteamID& SteamID, int ItemDefID, ECallResult CallResult, int quantity);
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static class UMordhauInventoryItem* GetItem(int ItemDefID);
UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
	static int GetGoldItemDefID();
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	int GetGold();
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void FakeRewardDrop(int Gold, int XP, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void FakeItemDrop(int ItemDefID, int quantity, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void DeserializeItems(const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void ConsumeItemStack(const struct FItemStack& ItemStack, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void ConsolidateItems(ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	TArray<struct FItemStack> CollectRewards(const struct FSteamID& SteamID);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool CanUnlockItems(const struct FSteamID& SteamID, TArray<int> ItemDefIDs);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool CanUnlockItem(const struct FSteamID& SteamID, int ItemDefID);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	bool AreUnlockRecipesAvailable();
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void AddItems(TArray<int> ItemDefIDs, ECallResult CallResult);
UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
	void AddItem(int ItemDefID, ECallResult CallResult);





};
