// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Commandlets/Commandlet.h"

#include "LyraInventorySetupCommandlet.generated.h"

/** Creates the initial inventory experience and greybox map, without changing original assets. */
UCLASS()
class ULyraInventorySetupCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	ULyraInventorySetupCommandlet(const FObjectInitializer& ObjectInitializer);
	virtual int32 Main(const FString& Params) override;
};
