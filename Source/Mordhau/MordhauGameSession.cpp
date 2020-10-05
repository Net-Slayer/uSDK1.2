// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameSession.h"





bool AMordhauGameSession::UnbanPlayer(const struct FSteamID& SteamID)
{
return 1;
}
void AMordhauGameSession::TriggerRewardDropForPlayer(class APlayerController* Player)
{}
void AMordhauGameSession::TriggerRewardDrop()
{}
void AMordhauGameSession::RemoveAdmin(class APlayerController* AdminPlayer)
{}
bool AMordhauGameSession::KickPlayer(class APlayerController* KickedPlayer, const FText& KickReason)
{
return 1;
}
bool AMordhauGameSession::BanPlayerWithDuration(class APlayerController* BannedPlayer, int BanDuration, const FText& BanReason)
{
	return 1;
}
bool AMordhauGameSession::BanPlayer(class APlayerController* BannedPlayer, const FText& BanReason)
{
return 1;
}
bool AMordhauGameSession::AllowsJoin()
{
return 1;
}
void AMordhauGameSession::AllowJoin(bool bInAllowJoin)
{}
void AMordhauGameSession::AddAdmin(class APlayerController* AdminPlayer)
{}