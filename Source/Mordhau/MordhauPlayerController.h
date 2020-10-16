#pragma once



#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauPlayerController.generated.h"

/**
 *
 */
 /*UENUM(BlueprintType)
 enum class EWearableSlot : uint8
 {
	 Head = 0,
	 Coif = 1,
	 UpperChest = 2,
	 LowerChest = 3,
	 Shoulders = 4,
	 Arms = 5,
	 Hands = 6,
	 Legs = 7,
	 Feet = 8,
	 Total = 9,
	 Invalid = 10,
 };*/
 /*UENUM(BlueprintType)
 enum class EMainWearableSlot : uint8
 {
	 //UPROPERTY(BlueprintReadWrite)
	 Head = 0,
	 //UPROPERTY(BlueprintReadWrite)
	 UpperChest = 1,
	 //UPROPERTY(BlueprintReadWrite)
	 Legs = 2,
	 //UPROPERTY(BlueprintReadWrite)
	 EMainWearableSlot_MAX = 3
 };*/

UCLASS()
class MORDHAU_API AMordhauPlayerController : public APlayerController
{
	GENERATED_BODY()

public:


	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float TotalMordhauCharacterDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float TotalMordhauCharacterTeamDamage;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsInventoryAvailableOnAuthority;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsAnythingRestockable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                SelectedCharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                SelectedDefaultProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FCharacterProfile                           CharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bReceivedValidProfileFromClient;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              LastAskedForSpawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                SpawnToken;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FCharacterProfile                           LastSentCharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class ACustomizationReplicationActor*              CustomizationReplicationActor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSendsDefaultCustomization;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentCustomization>             DefaultCharacterEquipment;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<struct FCharacterGearCustomization>         DefaultCharacterTier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FCharacterProfile                           PendingCharacterProfile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            LastControlledCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              NextRespawnTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bUseInstancing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              MaxAFKTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bOnlyAFKIfAlive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              CurrentAFKTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LastAFKCheckCameraLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FString                                     AuthTicket;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FServerStats                                ServerStats;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<FString>                             MapVoteMaps;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<uint8>                              MapVoteCounts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TSet<AMordhauPlayerController*> InInstanceWithControllers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FSteamID MatchmakingLobbyID;

	//UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
	//void Turn(float Value);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ToggleStamina();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ToggleDamage();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void StopServerStatsFile();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void StartServerStatsFile();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void Slomo(float Value);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ShowTips();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ShowEquipment();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ShowAuthTraces(bool bValue);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//bool SharesInstanceWith(class AActor* OtherActor);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void SetChoiceMenuConsumesInput(bool Value);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerToggleStamina();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerToggleDamage();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerStopServerStatsFile();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerStartServerStatsFile();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerSlomo(float Value);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerSetSpawnToken(int NewToken);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerRequestSetTeam(int NewTeam);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void AdminList();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void AddBotsTeam(int Amount, int Team);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void AddBots(int Amount);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void CancelVoteKick();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//bool CanAskForSpawn();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void BanList();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
	//UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
	//void ClientRequestMatchmakingLobbyID();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ClientRequestInventoryItems();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ClientRequestAuthTicket();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ClientReceiveScoreNoState(uint8 ReasonAndParam, int ScoreAmount);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ClientReceiveScore(uint8 ReasonAndParam, int ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	//UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
	//bool IsInventoryAvailable();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//bool IsAuthTicketAvailable();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//bool IsAdmin();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerRequestRewards();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerRequestAuthTraces(bool bEnabled);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerRemoveBots(int Amount, int Team);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerGetServerStats();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerGetMapVoteMaps();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerGetMapVoteCounts();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerBanList();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerAdminList();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void ServerAddBots(int Amount, int Team);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void SaveCurrentProfilesAsBotProfiles();
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void RemoveBotsTeam(int Amount, int Team);
	//UFUNCTION(BlueprintCallable, Category="PlayerControllerFns")
	//void RemoveBots(int Amount);
	//UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
	//bool GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<EWearableSlot, struct FWearableCustomization> OutMap);
	//UFUNCTION(BlueprintCallable, Category = "PlayerControllerFns")
	//void ClientMessageBP(FString String);
	//
	//
	//


	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauControllerEvents")
		void ShowTips();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ShowEquipment();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerVoteLevel(const FString& LevelName);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerUnbanPlayer(uint8 SteamID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerToggleStamina();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerToggleDamage();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerStopServerStatsFile();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerStartServerStatsFile();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerSlomo(float Value);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerSetSpawnToken(int NewToken);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerSetMatchmakingLobbyID(const struct FSteamID& InMatchmakingLobbyID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

	//	void ServerSetInventoryItems(const struct FSerializedItems& SerializedItems);
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerSetBadge(uint8 NewBadge);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerSetAuthTicket(const FString& InAuhTicket);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetTeam(int NewTeam);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetSkillsCustomization(const struct FSkillsCustomization& NewCharacterSkills);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetGearCustomization(const struct FCharacterGearCustomization& NewCharacterGear);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetFaceCustomization(const struct FFaceCustomization& NewCharacterFace);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetDefaultProfile(int NewDefaultProfile);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetDefaultCharacterTiers(TArray<struct FCharacterGearCustomization>& Tiers);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetDefaultCharacterEquipment(TArray<struct FEquipmentCustomization>& Equip);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestSetAppearanceCustomization(const struct FAppearanceCustomization& NewCharacterAppearance);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestRewards();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRequestAuthTraces(bool bEnabled);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRemoveBots(int Amount, int Team);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerRemoveAdmin(uint8 SteamID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerKickPlayer(uint8 SteamID, const FString& KickReason);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerHasPassedCheck(uint8 Param);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ServerGetServerStats();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerGetMapVoteMaps(TArray<FString>& OutMapVoteMaps);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerGetMapVoteCounts();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerChangeLevel(const FString& LevelName);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerBanPlayer(uint8 SteamID, int BanDuration, const FString& BanReason);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerBanList();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerAdminLogin(const FString& Password);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerAdminList();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerAddBots(int Amount, int Team);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ServerAddAdmin(uint8 SteamID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnSpectatorCmd(const FString& Cmd, const FString& Param);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnSpectatorAction(uint8 Action);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnRequestVoteKick(class AMordhauPlayerState* TargetPlayer);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnRequestCancelVoteKick();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnNewProfileFromClientPreValidation();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnNewProfileFromClientPostValidation();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnMordhauCharacterSpawned(class AMordhauCharacter* SpawnedCharacter);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnIsAnythingRestockableChanged();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnHighlightStart(class AActor* Actor);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnHighlightEnd(class AActor* Actor);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnAmmoChanged(class AMordhauEquipment* Equipment, int AmmoDifference);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnAfterPossess(class APawn* APawn);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnAFKTimeExceededMaximum();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void OnActionFailed(const  FName& Reason);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void DisplayMessage(class APlayerState* SenderPlayerState, const FString& S, const  FName& Type, float MsgLifeTime);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientSetServerStats(const struct FServerStats& InServerStats);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientSetMapVoteMaps(TArray<FString>& InMapVoteMaps);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientSetMapVoteCounts(TArray<uint8>& InMapVoteCounts);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientRequestMatchmakingLobbyID();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientRequestInventoryItems();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientRequestAuthTicket();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientReceiveScoreNoState(uint8 ReasonAndParam, int ScoreAmount);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientReceiveScoreBP(EScoreFeedReason Reason, uint8 ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientReceiveScore(uint8 ReasonAndParam, int ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientReceiveRewards(TArray<struct FItemStack>& Rewards);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientReceiveMessage(const FString& Message);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientNotifyInventoryIsAvailable();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")
		void ClientMessageBP(const FString& String);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ClientJoinMatchmakingLobby(const struct FSteamID& InMatchmakingLobbyID);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ClientDrawTracer(const struct FVector& Start, const struct FVector& End);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauControllerEvents")

		void ChoiceMenuOptionSelected(int Choice);



	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SaveCurrentProfilesAsBotProfiles();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RemoveBotsTeam(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RemoveBots(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RemoveAdmin(const FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RegisterAnglingYInput(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void RegisterAnglingXInput(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void PrepareAndSendCustomizationIfChanged();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void PlayerList();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnSettingsChanged();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnInventoryRewardsDropped(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnInventoryItemsUnlocked(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void OnInventoryItemsSerialized(bool bWasSuccessful, const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void LookUp(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Kick(const FString& PlayerNameOrSteamID, const FString& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void FlushPendingAnglingInputs();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void EquipmentCommand(int Command);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ClientWasKicked_Implementation(const FText& KickReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChooseExit();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose9();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose8();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose7();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose6();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose5();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose4();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose3();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose2();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Choose1();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChoiceMenu(int Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChangeMap(const FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ChangeLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void CancelVoteKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void BanList();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Ban(const FString& PlayerNameOrSteamID, int BanDuration, const FString& BanReason);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AdminLogin(const FString& Password);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AdminList();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AddBotsTeam(int Amount, int Team);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AddBots(int Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AskForSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void AddAdmin(const FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void VoteMap(const FString& MapName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void VoteLevel(const FString& LevelName);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void VoteKick(const FString& PlayerNameOrSteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Unban(const FString& SteamID);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Turn(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ToggleStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ToggleDamage();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void StopServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void StartServerStatsFile();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SpectatorCmd(const FString& SpecCmd);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void Slomo(float Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void ShowAuthTraces(bool bValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		void SetChoiceMenuConsumesInput(bool Value);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool CanAskForSpawn();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool SharesInstanceWith(class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool IsInventoryAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool IsAuthTicketAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool IsAdmin();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization& OutCustomization);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		bool GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>& OutMap);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		float GetAnglingAngle();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	struct FSteamID GetSteamID();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		struct FVector2D GetAnglingVector();
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		class UTexture2D* GetSteamAvatar(EAvatarSize Size);
	UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
		class AMordhauCharacter* GetLastControlledCharacter();



	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void RemoveAdmin(const  FString& PlayerNameOrSteamID);
	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void ClientReceiveScoreBP(EScoreFeedReason Reason, uint8 ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void ServerRemoveAdmin(uint8 SteamID);
	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void ServerChangeLevel(const  FString& LevelName);
	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void ServerBanPlayer(uint8 SteamID, int BanDuration, const FString& BanReason);
	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void ServerAdminLogin(const  FString& Password);
	//UFUNCTION(BlueprintCallable, Category = "MordhauControllerFns")
	//void ServerAddAdmin(uint8 SteamID);

};
