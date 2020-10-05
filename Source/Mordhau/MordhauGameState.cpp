// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameState.h"
#include "UnrealNetwork.h"

void AMordhauGameState::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	//DOREPLIFETIME(AAdvancedCharacter, Health);
	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);

	DOREPLIFETIME(AMordhauGameState, CharacterDistanceArray)
	DOREPLIFETIME(AMordhauGameState, CharacterToDistanceArray)
	DOREPLIFETIME(AMordhauGameState, bDisableClientStats)
	DOREPLIFETIME(AMordhauGameState, bDisableChat)
	DOREPLIFETIME(AMordhauGameState, bDisableScoreboard)
	DOREPLIFETIME(AMordhauGameState, bAllowHealthRegen)
	DOREPLIFETIME(AMordhauGameState, bDoNotLimitPlaceables)
	DOREPLIFETIME(AMordhauGameState, bOverrideArmorSpeedAndAccelerationFactor)
	DOREPLIFETIME(AMordhauGameState, OverrideArmorSpeedFactor)
	DOREPLIFETIME(AMordhauGameState, OverrideArmorAccelerationFactor)
	DOREPLIFETIME(AMordhauGameState, bAllPlayersHaveMarkers)
	DOREPLIFETIME(AMordhauGameState, MatchDurationMax)
	DOREPLIFETIME(AMordhauGameState, DefaultEndMatchMapChangeTime)
	DOREPLIFETIME(AMordhauGameState, EndMatchMapChangeEnd)
	DOREPLIFETIME(AMordhauGameState, PostMatchScreenDelay)
	DOREPLIFETIME(AMordhauGameState, DefaultWarmupTime)
	DOREPLIFETIME(AMordhauGameState, bSkipWarmupInDevBuild)
	DOREPLIFETIME(AMordhauGameState, bBlockInputInWarmup)
	DOREPLIFETIME(AMordhauGameState, MinPlayersToStart)
	DOREPLIFETIME(AMordhauGameState, WarmupEnd)
	DOREPLIFETIME(AMordhauGameState, bDoNotGoToNextMapOnMatchEnd)
	DOREPLIFETIME(AMordhauGameState, bDoNotShowPostMatchScreen)
	DOREPLIFETIME(AMordhauGameState, bAllowSpawning)
	DOREPLIFETIME(AMordhauGameState, TeamScores)
	DOREPLIFETIME(AMordhauGameState, bIsTeamMode)
	DOREPLIFETIME(AMordhauGameState, bEnforceTeamColors)
	DOREPLIFETIME(AMordhauGameState, Team1CapturePoints)
	DOREPLIFETIME(AMordhauGameState, Team2CapturePoints)
	DOREPLIFETIME(AMordhauGameState, Team1TopologicalProgress)
	DOREPLIFETIME(AMordhauGameState, Team2TopologicalProgress)
	DOREPLIFETIME(AMordhauGameState, LastBotVoiceCommandTime)
	DOREPLIFETIME(AMordhauGameState, LastBotEmoteTime)
	DOREPLIFETIME(AMordhauGameState, LastBotClimbTime)
}
//void AMordhauGameState::GetScoreboardTimeInProgress(struct FTimespan& Time)
//{}
//
//void AMordhauGameState::GetScoreboardTime(struct FTimespan& Time)
//{}
//void AMordhauGameState::GetScoreboardObjectiveName(FText& NewParam)
//{}
//
//void AMordhauGameState::OnRep_VoteKickInfo()
//{}
//void AMordhauGameState::GetScoreboardTeamObjectiveValue(int Team, FString& Output)
//{}
//void AMordhauGameState::OnRep_MatchEndInfo()
//{}
//void AMordhauGameState::HandleMatchEndInfo()
//{}
//
//void AMordhauGameState::GetKillfeedColor(class APlayerState* PlayerState, struct FLinearColor& Color)
//{}
//void AMordhauGameState::GetChatColor(class APlayerState* PlayerState, struct FLinearColor& Color)
//{}
//void AMordhauGameState::ShouldHideSpawnInfoText(bool& Hide)
//{}
FLinearColor ReturnColor;
FLinearColor AMordhauGameState::GetSecondaryTeamColor(int Team)
{
	return ReturnColor;
}
FString AMordhauGameState::GetTeamName(int Team)
{
	return "1";
}
void AMordhauGameState::GetPlayerCountsPerTeam(TArray<int>& ReturnValue, bool bOnlyLiving, bool bOnlyWithValidProfiles)
{

}
void AMordhauGameState::UpdateCapturePointData()
{

}
bool AMordhauGameState::ShouldTickThisFrame(class AAdvancedCharacter* Character)
{
	return 1;
}
bool AMordhauGameState::ShouldTickAnimationThisFrame(class AAdvancedCharacter* Character)
{
	return 1;
}
bool AMordhauGameState::ShouldPaintGearWithTeamColors()
{
	return 1;
}
//bool AMordhauGameState::ShouldBlockPawnInput()
//{
//	return 1;
//}
void AMordhauGameState::ReserveCharacterRagdoll(class AAdvancedCharacter* Character)
{

}
void AMordhauGameState::RemoveCharacterFromDistanceArray(class AAdvancedCharacter* Character)
{

}
//void AMordhauGameState::LocalPlayerChangedTeam()
//{
//
//}
//bool AMordhauGameState::IsFriendly(class AActor* ActorA, class AActor* ActorB)
//{
//	return 1;
//}
//TArray<int> AMordhauGameState::GetPlayerCountsPerTeam(bool bOnlyLiving, bool bOnlyWithValidProfiles)
//{
//	return nonsense;
//}
int AMordhauGameState::GetCurrentFrame()
{
	return 1;
}
//FLinearColor AMordhauGameState::GetTeamColor(int Team)
//{
//	return { 0,0,0,0 };
//}
class USkeletalMesh* AMordhauGameState::GetEquipmentMeshFromCache(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh)
{
	return nullptr;
}
int AMordhauGameState::GetEquipmentCacheHash(int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh)
{
	return 1;
}
class AAdvancedCharacter* AMordhauGameState::GetCharacterByDistanceRank(int DistanceRank)
{
	return nullptr;
}
bool AMordhauGameState::CanPlayerJoinTeam(class AMordhauPlayerState* Player, int Team)
{
	return 1;
}
//bool AMordhauGameState::CanImmediatelyChangeProfile(class AController* Controller)
//{
//	return 1;
//}
void AMordhauGameState::UnregisterParticleSystemActor(class AParticleSystemActor* ParticleActor)
{}
void AMordhauGameState::RegisterParticleSystemActor(class AParticleSystemActor* ParticleActor)
{}
void AMordhauGameState::StoreEquipmentMeshInCache(class USkeletalMesh* Mesh, int ID, uint8 Skin, uint8 Part1, uint8 Part2, uint8 Part3, bool bUseAuxiliaryMesh)
{}
void AMordhauGameState::GetBindPoseTransform(FTransform& transformTmp, class USkeletalMesh* Mesh, const FName& SocketName)
{
}
class AMapCameraActor* AMordhauGameState::GetAppropriateMapCameraActor(class APlayerController* Controller)
{
	return nullptr;
}

void AMordhauGameState::IncrementIntStatValueChecked(class UMordhauStats* Target, class UObject* World, struct FStatInt Stat)
{}