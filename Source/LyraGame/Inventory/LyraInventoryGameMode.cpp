// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraInventoryGameMode.h"

#include "Kismet/GameplayStatics.h"

void ALyraInventoryGameSession::InitOptions(const FString& Options)
{
	Super::InitOptions(Options);
	// The direct-IP path must enforce the same limit as the advertised session.
	MaxPlayers = 2;
	MaxSpectators = 0;
	MaxSplitscreensPerConnection = 1;
}

ALyraInventoryGameMode::ALyraInventoryGameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	GameSessionClass = ALyraInventoryGameSession::StaticClass();
}

void ALyraInventoryGameMode::PreLogin(const FString& Options, const FString& Address,
	const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage)
{
	Super::PreLogin(Options, Address, UniqueId, ErrorMessage);
	if (GetNumPlayers() >= 2)
	{
		ErrorMessage = TEXT("INVENTORY_ROOM_FULL");
	}
	else if (UGameplayStatics::HasOption(Options, TEXT("SpectatorOnly")))
	{
		ErrorMessage = TEXT("INVENTORY_SPECTATORS_DISABLED");
	}
}
