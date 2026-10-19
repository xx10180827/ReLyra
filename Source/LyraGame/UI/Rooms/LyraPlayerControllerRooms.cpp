// Copyright Epic Games, Inc. All Rights Reserved.
#include "Player/LyraPlayerController.h"

void ALyraPlayerController::ServerChooseRoomTeam_Implementation(int32 Team)
{
	// Team is accepted only by InitNewPlayer from the entry URL. Never unlock it
	// on death, unpossession or respawn, even when a client bypasses the disabled UI.
	ClientRoomTeamResult(false, NSLOCTEXT("RoomTeams", "Locked", "进入房间后队伍已锁定；请退出房间后重新选择。"));
}
void ALyraPlayerController::ClientRoomTeamResult_Implementation(bool bSuccess, const FText& Message)
{
	RoomTeamFeedback = Message;
	UE_LOG(LogTemp, Display, TEXT("ROOM_TEAM_RESULT success=%d message=%s"), bSuccess, *Message.ToString());
}
