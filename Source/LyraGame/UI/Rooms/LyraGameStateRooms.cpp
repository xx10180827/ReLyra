// Copyright Epic Games, Inc. All Rights Reserved.
#include "GameModes/LyraGameState.h"
#include "LyraRoomMaps.h"
#include "Engine/World.h"
#include "Components/ActorComponent.h"
#include "UObject/UnrealType.h"

void ALyraGameState::TickRoomRoundClock()
{
	if (!bIsLanRoom) { return; }
	const auto* Map = LyraRoomMaps::FindPackage(GetWorld()->GetOutermost()->GetName());
	if (!Map || !Map->Id.StartsWith(TEXT("TopDown"))) { return; }
	for (UActorComponent* Component : GetComponents())
	{
		if (!Component) { continue; }
		bool bOriginalRoundComponent = false;
		for (const UClass* Type = Component->GetClass(); Type; Type = Type->GetSuperClass())
		{
			if (Type->GetPathName() == TEXT("/TopDownArena/Game/Modes/B_TopDownArena_GameComponent_Base.B_TopDownArena_GameComponent_Base_C"))
			{ bOriginalRoundComponent = true; break; }
		}
		if (!bOriginalRoundComponent) { continue; }
		auto* Playing = FindFProperty<FBoolProperty>(Component->GetClass(), TEXT("IsPlaying"));
		auto* EndTime = FindFProperty<FNumericProperty>(Component->GetClass(), TEXT("ServerWorld_GameEndTime"));
		if (!Playing || !EndTime || !EndTime->IsFloatingPoint()) { return; }
		void* TimeAddress = EndTime->ContainerPtrToValuePtr<void>(Component);
		if (HasAuthority())
		{
			const bool bPlaying = Playing->GetPropertyValue_InContainer(Component);
			const double Time = EndTime->GetFloatingPointPropertyValue(TimeAddress);
			if (RoomRoundClock.bPlaying != bPlaying || RoomRoundClock.ServerEndTime != Time)
			{
				RoomRoundClock.bPlaying = bPlaying;
				RoomRoundClock.ServerEndTime = Time;
				ForceNetUpdate();
			}
		}
		else
		{
			// Its original HUD calls GetRoundTimeRemaining on this component. The
			// original BeginPlay/Tick authority gates still own scoring and phases.
			// Tick also covers a component created after the GameState snapshot arrives.
			Playing->SetPropertyValue_InContainer(Component, RoomRoundClock.bPlaying);
			EndTime->SetFloatingPointPropertyValue(TimeAddress, RoomRoundClock.ServerEndTime);
		}
		return;
	}
}
