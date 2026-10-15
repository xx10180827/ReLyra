// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraInventoryPlayerController.h"
#include "LyraInventoryManagerComponent.h"
#include "Misc/CommandLine.h"
#include "Misc/Parse.h"
#include "Tests/LyraInventoryTestItemDefinition.h"
void ALyraInventoryPlayerController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);


	// Actor Tick also runs on remote controllers at the server; PlayerTick does not.
	// Explicit manual UI acceptance fixture; never grants items in ordinary gameplay.
	if (HasAuthority() && !bUIFixtureSeeded && FParse::Param(FCommandLine::Get(), TEXT("InventoryUIFixture")))
	{
		if (auto* Inventory = FindComponentByClass<ULyraInventoryManagerComponent>())
		{
			if (Inventory->GetSlotCapacity() == 20 && Inventory->GetAllItems().Num() > 0)
			{
				Inventory->AddItemDefinition(ULyraInventoryTestItemDefinition::StaticClass(), 13);
				bUIFixtureSeeded = true;
			}
		}
	}
}
