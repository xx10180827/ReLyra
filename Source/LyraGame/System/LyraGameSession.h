// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameFramework/GameSession.h"

#include "LyraGameSession.generated.h"

class UObject;


UCLASS(Config = Game)
class ALyraGameSession : public AGameSession
{
	GENERATED_BODY()

public:

	ALyraGameSession(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	virtual void InitOptions(const FString& Options) override;

protected:

	/** Override to disable the default behavior */
	virtual bool ProcessAutoLogin() override;

	virtual void HandleMatchHasStarted() override;
	virtual void HandleMatchHasEnded() override;
};
