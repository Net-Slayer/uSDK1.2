
#include "MordhauPlayerController.h"
#include "UnrealNetwork.h"



void AMordhauPlayerController::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	//DOREPLIFETIME(AMordhauPlayerController, bIsInventoryAvailableOnAuthority)
	//	DOREPLIFETIME(AMordhauPlayerController, bIsAnythingRestockable)
	//	DOREPLIFETIME(AMordhauPlayerController, SelectedCharacterProfile)
	//	DOREPLIFETIME(AMordhauPlayerController, SelectedDefaultProfile)
	//	DOREPLIFETIME(AMordhauPlayerController, bReceivedValidProfileFromClient)
	//	DOREPLIFETIME(AMordhauPlayerController, LastAskedForSpawnTime)
	//	DOREPLIFETIME(AMordhauPlayerController, SpawnToken)
	//	DOREPLIFETIME(AMordhauPlayerController, bSendsDefaultCustomization)
	//	DOREPLIFETIME(AMordhauPlayerController, LastControlledCharacter)
	//	DOREPLIFETIME(AMordhauPlayerController, NextRespawnTime)
	//	DOREPLIFETIME(AMordhauPlayerController, bUseInstancing)
	//	DOREPLIFETIME(AMordhauPlayerController, MaxAFKTime)
	//	DOREPLIFETIME(AMordhauPlayerController, bOnlyAFKIfAlive)
	//	DOREPLIFETIME(AMordhauPlayerController, CurrentAFKTime)
}
//struct FSteamID ReturnSteamID;
//
//void AMordhauPlayerController::Turn(float Value)
//{
//
//}
//void AMordhauPlayerController::ToggleStamina()
//{
//
//}
//void AMordhauPlayerController::ToggleDamage()
//{
//
//}
//void AMordhauPlayerController::StopServerStatsFile()
//{
//
//}
//void AMordhauPlayerController::StartServerStatsFile()
//{
//
//}
//void AMordhauPlayerController::Slomo(float Value)
//{
//
//}
//void AMordhauPlayerController::ShowTips()
//{
//
//}
//void AMordhauPlayerController::ShowEquipment()
//{
//
//}
//void AMordhauPlayerController::ShowAuthTraces(bool bValue)
//{
//
//}
//bool AMordhauPlayerController::SharesInstanceWith(class AActor* OtherActor)
//{
//	return 1;
//}
//void AMordhauPlayerController::SetChoiceMenuConsumesInput(bool Value)
//{
//
//}
//void AMordhauPlayerController::ServerToggleStamina()
//{
//
//}
//void AMordhauPlayerController::ServerToggleDamage()
//{
//
//}
//void AMordhauPlayerController::ServerStopServerStatsFile()
//{
//
//}
//void AMordhauPlayerController::ServerStartServerStatsFile()
//{
//
//}
//void AMordhauPlayerController::ServerSlomo(float Value)
//{
//
//}
//void AMordhauPlayerController::ServerSetSpawnToken(int NewToken)
//{
//
//}
//void AMordhauPlayerController::ServerRequestSetTeam(int NewTeam)
//{
//
//}
//void AMordhauPlayerController::AdminList()
//{
//
//}
//void AMordhauPlayerController::AddBotsTeam(int Amount, int Team)
//{
//
//}
//void AMordhauPlayerController::AddBots(int Amount)
//{
//
//}
//void AMordhauPlayerController::CancelVoteKick()
//{
//
//}
//bool AMordhauPlayerController::CanAskForSpawn()
//{
//	return 1;
//}
//void AMordhauPlayerController::BanList()
//{
//
//}
//void AMordhauPlayerController::ClientSetControlAndPawnRotation(class APawn* APawn, const struct FRotator& NewRotation)
//{
//
//}
//void AMordhauPlayerController::ClientRequestMatchmakingLobbyID()
//{
//
//}
//void AMordhauPlayerController::ClientRequestInventoryItems()
//{
//
//}
//void AMordhauPlayerController::ClientRequestAuthTicket()
//{
//
//}
//void AMordhauPlayerController::ClientReceiveScoreNoState(uint8 ReasonAndParam, int ScoreAmount)
//{
//
//}
//void AMordhauPlayerController::ClientReceiveScore(uint8 ReasonAndParam, int ScoreAmount, class AMordhauPlayerState* AssociatedPlayer)
//{
//
//}
//bool AMordhauPlayerController::IsInventoryAvailable()
//{
//	return 1;
//}
//bool AMordhauPlayerController::IsAuthTicketAvailable()
//{
//	return 1;
//}
//bool AMordhauPlayerController::IsAdmin()
//{
//	return 1;
//}
//void AMordhauPlayerController::ServerRequestRewards()
//{
//
//}
//void AMordhauPlayerController::ServerRequestAuthTraces(bool bEnabled)
//{
//
//}
//void AMordhauPlayerController::ServerRemoveBots(int Amount, int Team)
//{
//
//}
//void AMordhauPlayerController::ServerGetServerStats()
//{
//
//}
//void AMordhauPlayerController::ServerGetMapVoteMaps()
//{
//
//}
//void AMordhauPlayerController::ServerGetMapVoteCounts()
//{
//
//}
//void AMordhauPlayerController::ServerBanList()
//{
//
//}
//void AMordhauPlayerController::ServerAdminList()
//{
//
//}
//void AMordhauPlayerController::ServerAddBots(int Amount, int Team)
//{
//
//}
//void AMordhauPlayerController::SaveCurrentProfilesAsBotProfiles()
//{
//
//}
//void AMordhauPlayerController::RemoveBotsTeam(int Amount, int Team)
//{
//
//}
//void AMordhauPlayerController::RemoveBots(int Amount)
//{
//
//}
//bool AMordhauPlayerController::GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<EWearableSlot, struct FWearableCustomization> OutMap)
//{
//	return 1;
//}
//void AMordhauPlayerController::ClientMessageBP(FString String)
//{}
//
//void RemoveAdmin(const  FString& PlayerNameOrSteamID);
//void ClientReceiveScoreBP(EScoreFeedReason Reason, uint8 ReasonParam, float ScoreAmount, class AMordhauPlayerState* AssociatedPlayer);
//void ServerRemoveAdmin(uint8 SteamID);
//void ServerChangeLevel(const  FString& LevelName);
//void ServerBanPlayer(uint8 SteamID, int BanDuration, const FString& BanReason);
//void ServerAdminLogin(const  FString& Password);
//void ServerAddAdmin(uint8 SteamID);




void AMordhauPlayerController::SaveCurrentProfilesAsBotProfiles()
{}
void AMordhauPlayerController::RemoveBotsTeam(int Amount, int Team)
{}
void AMordhauPlayerController::RemoveBots(int Amount)
{}
void AMordhauPlayerController::RemoveAdmin(const FString& PlayerNameOrSteamID)
{}
void AMordhauPlayerController::RegisterAnglingYInput(float Value)
{}
void AMordhauPlayerController::RegisterAnglingXInput(float Value)
{}
void AMordhauPlayerController::PrepareAndSendCustomizationIfChanged()
{}
void AMordhauPlayerController::PlayerList()
{}
void AMordhauPlayerController::OnSettingsChanged()
{}
void AMordhauPlayerController::OnInventoryRewardsDropped(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks)
{}
void AMordhauPlayerController::OnInventoryItemsUnlocked(bool bWasSuccessful, const struct FSteamID& SteamID, TArray<struct FItemStack> ItemStacks)
{}
void AMordhauPlayerController::OnInventoryItemsSerialized(bool bWasSuccessful, const struct FSteamID& SteamID, const struct FSerializedItems& SerializedItems)
{}
void AMordhauPlayerController::LookUp(float Value)
{}
void AMordhauPlayerController::GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount)
{}
void AMordhauPlayerController::Kick(const FString& PlayerNameOrSteamID, const FString& KickReason)
{}
void AMordhauPlayerController::FlushPendingAnglingInputs()
{}
void AMordhauPlayerController::EquipmentCommand(int Command)
{}
void AMordhauPlayerController::ClientWasKicked_Implementation(const FText& KickReason)
{}
void AMordhauPlayerController::ChooseExit()
{}
void AMordhauPlayerController::Choose9()
{}
void AMordhauPlayerController::Choose8()
{}
void AMordhauPlayerController::Choose7()
{}
void AMordhauPlayerController::Choose6()
{}
void AMordhauPlayerController::Choose5()
{}
void AMordhauPlayerController::Choose4()
{}
void AMordhauPlayerController::Choose3()
{}
void AMordhauPlayerController::Choose2()
{}
void AMordhauPlayerController::Choose1()
{}
void AMordhauPlayerController::ChoiceMenu(int Index)
{}
void AMordhauPlayerController::ChangeMap(const FString& MapName)
{}
void AMordhauPlayerController::ChangeLevel(const FString& LevelName)
{}
void AMordhauPlayerController::CancelVoteKick()
{}
void AMordhauPlayerController::BanList()
{}
void AMordhauPlayerController::Ban(const FString& PlayerNameOrSteamID, int BanDuration, const FString& BanReason)
{}
void AMordhauPlayerController::AdminLogin(const FString& Password)
{}
void AMordhauPlayerController::AdminList()
{}
void AMordhauPlayerController::AddBotsTeam(int Amount, int Team)
{}
void AMordhauPlayerController::AddBots(int Amount)
{}
void AMordhauPlayerController::AskForSpawn()
{}
void AMordhauPlayerController::AddAdmin(const FString& PlayerNameOrSteamID)
{}
void AMordhauPlayerController::VoteMap(const FString& MapName)
{}
void AMordhauPlayerController::VoteLevel(const FString& LevelName)
{}
void AMordhauPlayerController::VoteKick(const FString& PlayerNameOrSteamID)
{}
void AMordhauPlayerController::Unban(const FString& SteamID)
{}
void AMordhauPlayerController::Turn(float Value)
{}
void AMordhauPlayerController::ToggleStamina()
{}
void AMordhauPlayerController::ToggleDamage()
{}
void AMordhauPlayerController::StopServerStatsFile()
{}
void AMordhauPlayerController::StartServerStatsFile()
{}
void AMordhauPlayerController::SpectatorCmd(const FString& SpecCmd)
{}
void AMordhauPlayerController::Slomo(float Value)
{}
void AMordhauPlayerController::ShowAuthTraces(bool bValue)
{}
void AMordhauPlayerController::SetChoiceMenuConsumesInput(bool Value)
{}
bool AMordhauPlayerController::CanAskForSpawn()
{
	return 1;
}
bool AMordhauPlayerController::SharesInstanceWith(class AActor* OtherActor)
{
	return 1;
}
bool AMordhauPlayerController::IsInventoryAvailable()
{
	return 1;
}
bool AMordhauPlayerController::IsAuthTicketAvailable()
{
	return 1;
}
bool AMordhauPlayerController::IsAdmin()
{
	return 1;
}
bool AMordhauPlayerController::GetDefaultEquipmentCustomizationFor(class UClass* ForEquipmentClass, struct FEquipmentCustomization& OutCustomization)
{
	return 1;
}
bool AMordhauPlayerController::GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>& OutMap)
{
	return 1;
}
float AMordhauPlayerController::GetAnglingAngle()
{
	return 1;
}
struct FSteamID AMordhauPlayerController::GetSteamID()
{
	return FSteamID();
}

struct FVector2D AMordhauPlayerController::GetAnglingVector()
{
	return { 1,1 };
}
class UTexture2D* AMordhauPlayerController::GetSteamAvatar(EAvatarSize Size)
{
	return nullptr;
}
class AMordhauCharacter* AMordhauPlayerController::GetLastControlledCharacter()
{
	return nullptr;
}

