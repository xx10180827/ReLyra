// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Commandlets/Commandlet.h"

#include "LyraInventoryAuditCommandlet.generated.h"

/** Reads inventory/weapon sample assets without modifying or saving any packages. */
UCLASS()
class ULyraInventoryAuditCommandlet : public UCommandlet
{
	GENERATED_BODY()

public:
	ULyraInventoryAuditCommandlet(const FObjectInitializer& ObjectInitializer);
	virtual int32 Main(const FString& Params) override;
};
