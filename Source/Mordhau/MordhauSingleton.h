// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "MordhauSingleton.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauSingleton : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoftObjectPath>                     CurrentlyProcessingLoadQueueArray;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               DefaultCharacterMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                MaxBloodPools;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                SingletonVersion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*>                              BotProfiles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString>                             RandomBotNames;
	
	
	
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              MaleFaces;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              FemaleFaces;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<TSubclassOf<class UEmblem>>                              Emblems;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              Badges;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              Perks;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              Archetypes;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              Eyebrows;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              Motions;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonClassRefs")
TArray<class UClass*>                              EmoteMotions;

	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingleton")
		 TArray<TSoftClassPtr<UObject>> Equipment;

	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingleton")
		 TArray<TSoftClassPtr<UObject>> UpperChestWearables;

	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingleton")
		 TArray<TSoftClassPtr<UObject>> LegsWearables;

	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingleton")
		 TArray<TSoftClassPtr<UObject>> HeadWearables;

	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingleton")
	 TArray<TSoftClassPtr<UObject>>  Voices;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
		 TSet<UObject*> AlwaysLoadedObjects;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
		 TMap<FName, UObject*> CachedLoadedObjects;




	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FFaceCustomization                          DefaultCharacterFace;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FAppearanceCustomization                    DefaultCharacterAppearance;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FMordhauColorItemTable                      SkinColorTable;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FMordhauColorItemTable                      EyeColorTable;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FMordhauColorItemTable                      HairColorTable;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FMordhauColorItemTable                      EmblemColorTable;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
struct FMordhauColorItemTable                      MetalTintsColorTable;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
TArray<struct FMordhauColorItemTable>              ColorTables;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
TArray<struct FCharacterProfile>                   CharacterProfiles;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
TArray<struct FCharacterProfile>                   DefaultProfiles;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonStructs")
TArray<struct FCharacterProfile>                   BotCharacterProfiles;



	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonBytes")
uint8                                      DefaultHead;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonBytes")
uint8                                      DefaultUpperChest;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonBytes")
uint8                                      DefaultLegs;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauSingletonBytes")
uint8                                      SelectedBadge;



	 UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class AMordhauEquipment* SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, uint8 Emblem, uint8 EmblemColor1, uint8 EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 void SaveToConfig();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 void LoadQueueFinishedLoadingChunk();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 void LoadFromConfig();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 int GetVoicesNum();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UClass* GetVoice(int Index);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 int GetUpperChestWearablesNum();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UClass* GetUpperChestWearable(int Index);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UMordhauColor* GetTableColorObject(uint8 Table, uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 struct FLinearColor GetTableColor(uint8 Table, uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UMordhauColor* GetSkinColorObject(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 struct FLinearColor GetSkinColor(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UMordhauColor* GetMetalTintsColorObject(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 struct FLinearColor GetMetalTintsColor(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 int GetLegsWearablesNum();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UClass* GetLegsWearable(int Index);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 bool GetIsLoadingAssets();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 int GetHeadWearablesNum();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UClass* GetHeadWearable(int Index);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UMordhauColor* GetHairColorObject(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 struct FLinearColor GetHairColor(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UMordhauColor* GetEyeColorObject(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 struct FLinearColor GetEyeColor(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 int GetEquipmentNum();
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 uint8 GetEquipmentID(class UClass* EquipmentType);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UClass* GetEquipment(int Index);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 class UMordhauColor* GetEmblemColorObject(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 struct FLinearColor GetEmblemColor(uint8 ID);
UFUNCTION(BlueprintCallable, Category = "MordhauSingletonFns")
	 void ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, uint8 Team, bool bAddEquipment);

};