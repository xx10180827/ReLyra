// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraGameSession.h"
#include "Kismet/GameplayStatics.h"
#include "GameModes/LyraGameMode.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraGameSession)


ALyraGameSession::ALyraGameSession(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

bool ALyraGameSession::ProcessAutoLogin()
{
	// This is actually handled in LyraGameMode::TryDedicatedServerLogin
	return true;
}

void ALyraGameSession::InitOptions(const FString& Options)
{
	Super::InitOptions(Options);
	if (UGameplayStatics::ParseOption(Options, TEXT("LyraLanRoom")) == TEXT("1"))
	{
		MaxPlayers = 2;
		MaxSpectators = 0;
		MaxSplitscreensPerConnection = 1;
	}
}

void ALyraGameSession::HandleMatchHasStarted()
{
	Super::HandleMatchHasStarted();
}

bool ALyraGameSession::AtCapacity(bool bSpectator)
{
	const auto* Mode = GetWorld()->GetAuthGameMode<ALyraGameMode>();
	if (Mode && Mode->IsLanRoom())
	{
		// Include dying/unpossessed humans and ignore native AI controllers.
		int32 Humans = 0;
		for (auto It = GetWorld()->GetPlayerControllerIterator(); It; ++It)
		{
			if (IsValid(It->Get())) { ++Humans; }
		}
		return bSpectator || Humans >= 2;
	}
	return Super::AtCapacity(bSpectator);
}

void ALyraGameSession::HandleMatchHasEnded()
{
	Super::HandleMatchHasEnded();
}

