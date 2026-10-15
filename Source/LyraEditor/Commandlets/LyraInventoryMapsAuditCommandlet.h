// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "Commandlets/Commandlet.h"
#include "LyraInventoryMapsAuditCommandlet.generated.h"

UCLASS()
class ULyraInventoryMapsAuditCommandlet : public UCommandlet
{
	GENERATED_BODY()
public:
	ULyraInventoryMapsAuditCommandlet();
	virtual int32 Main(const FString& Params) override;
};
