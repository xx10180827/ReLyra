// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "GameModes/LyraGameMode.h"
#include "System/LyraGameSession.h"

#include "LyraInventoryGameMode.generated.h"

/** A two-player session used only by the inventory demonstration map. */
UCLASS()
class LYRAGAME_API ALyraInventoryGameSession : public ALyraGameSession
{
	GENERATED_BODY()

public:
	virtual void InitOptions(const FString& Options) override;
};

UCLASS()
class LYRAGAME_API ALyraInventoryGameMode : public ALyraGameMode
{
	GENERATED_BODY()

public:
	ALyraInventoryGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Only this experience opts into fixed inventory capacity. Other game modes remain unlimited.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Inventory, meta=(ClampMin="1", ClampMax="1024"))
	int32 InventorySlotCapacity = 20;
	virtual void PreLogin(const FString& Options, const FString& Address,
		const FUniqueNetIdRepl& UniqueId, FString& ErrorMessage) override;
};
