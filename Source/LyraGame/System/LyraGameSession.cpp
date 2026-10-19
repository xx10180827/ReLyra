// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraGameSession.h"
#include "Kismet/GameplayStatics.h"

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

void ALyraGameSession::HandleMatchHasEnded()
{
	Super::HandleMatchHasEnded();
}

