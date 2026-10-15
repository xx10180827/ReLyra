// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Inventory/LyraWorldPickup.h"
#include "Inventory/LyraInventoryPlayerController.h"
#include "Inventory/LyraInventoryManagerComponent.h"
#include "LyraInventoryTestItemDefinition.h"
#include "Components/SceneComponent.h"
#include "Components/BoxComponent.h"
#include "Character/LyraHealthComponent.h"
#include "Engine/World.h"
#include "GameFramework/Pawn.h"

#if WITH_DEV_AUTOMATION_TESTS
namespace LyraPickupTest
{
	using Status = ELyraPickupStatus;
	struct FFixture
	{
		UWorld* World;
		ALyraInventoryPlayerController* PC;
		ULyraInventoryManagerComponent* Inventory;
		TSubclassOf<ULyraInventoryItemDefinition> Def = ULyraInventoryTestItemDefinition::StaticClass();
		FFixture(int32 Capacity = 2)
		{
			const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false).CreatePhysicsScene(true).CreateNavigation(false).CreateAISystem(false);
			World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
			PC = Player(Capacity); Inventory = PC->FindComponentByClass<ULyraInventoryManagerComponent>();
		}
		ALyraInventoryPlayerController* Player(int32 Capacity)
		{
			auto* Controller = World->SpawnActor<ALyraInventoryPlayerController>();
			auto* Pawn = World->SpawnActor<APawn>();
			auto* Root = NewObject<USceneComponent>(Pawn); Pawn->SetRootComponent(Root); Root->RegisterComponent();
			Pawn->SetActorLocation(FVector(0,0,100)); Controller->Possess(Pawn);
			auto* Inv = NewObject<ULyraInventoryManagerComponent>(Controller); Inv->RegisterComponent(); Inv->ConfigureSlotCapacity(Capacity);
			return Controller;
		}
		ALyraWorldPickup* Pickup(int32 Count = 13)
		{
			auto* Item = World->SpawnActor<ALyraWorldPickup>(FVector(100,0,100), FRotator::ZeroRotator); Item->Initialize(Def, Count); return Item;
		}
		~FFixture() { World->DestroyWorld(false); }
	};
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraPickupQuantityTest, "Lyra.Inventory.Pickup.QuantityAndCompetition", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraPickupQuantityTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	FFixture F;
	F.Inventory->AddItemDefinition(F.Def, 17);
	auto* Item = F.Pickup(); const auto Original = Item->GetPickupState();
	bool ReentryRejected = false;
	const auto Handle = F.Inventory->OnInventoryChanged.AddLambda([&] { ReentryRejected = Item->TryPickup(F.PC, Original.Id, Original.Revision).Status == Status::Busy; });
	const auto First = Item->TryPickup(F.PC, Original.Id, Original.Revision);
	F.Inventory->OnInventoryChanged.Remove(Handle);
	TestTrue(TEXT("Reentrant attempt cannot duplicate source"), ReentryRejected);
	TestTrue(TEXT("Partial admission is explicit"), First.Status == Status::Partial && First.Added == 3 && First.Remaining == 10);
	TestEqual(TEXT("Inventory and world conserve 30 units"), F.Inventory->GetTotalItemCountByDefinition(F.Def) + Item->GetPickupState().Count, 30);
	const auto Current = Item->GetPickupState();
	TestTrue(TEXT("Stale observation rejected"), Item->TryPickup(F.PC, Original.Id, Original.Revision).Status == Status::Stale);
	TestTrue(TEXT("Full backpack changes no ground count"), Item->TryPickup(F.PC, Current.Id, Current.Revision).Status == Status::NoSpace && Item->GetPickupState().Count == 10);
	auto* Rival = F.Player(2);
	const auto Won = Item->TryPickup(Rival, Current.Id, Current.Revision);
	TestTrue(TEXT("Other player claims exact remainder"), Won.Status == Status::Success && Won.Added == 10 && Won.Remaining == 0);
	TestTrue(TEXT("Exhausted source destroyed"), Item->IsActorBeingDestroyed());
	TestEqual(TEXT("Old request grants nothing"), Item->TryPickup(F.PC, Current.Id, Current.Revision).Added, 0);
	TestEqual(TEXT("Both inventories conserve source"), F.Inventory->GetTotalItemCountByDefinition(F.Def) + Rival->FindComponentByClass<ULyraInventoryManagerComponent>()->GetTotalItemCountByDefinition(F.Def), 30);
	// Reverse the successful contender and verify the loser cannot receive the same single item.
	auto* Single = F.Pickup(1); const auto Token = Single->GetPickupState();
	F.Inventory->ConsumeItemsByDefinition(F.Def, 1);
	TestEqual(TEXT("First player can win the next source"), Single->TryPickup(F.PC, Token.Id, Token.Revision).Added, 1);
	TestEqual(TEXT("Second contender receives zero"), Single->TryPickup(Rival, Token.Id, Token.Revision).Added, 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraPickupAccessTest, "Lyra.Inventory.Pickup.Access", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraPickupAccessTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	FFixture F; auto* Item = F.Pickup(); const auto State = Item->GetPickupState();
	Item->SetActorLocation(FVector(1000,0,100));
	TestTrue(TEXT("Server enforces physical distance"), Item->TryPickup(F.PC, State.Id, State.Revision).Status == Status::TooFar);
	Item->SetActorLocation(FVector(100,0,100));
	auto* Blocker = F.World->SpawnActor<AActor>();
	auto* Box = NewObject<UBoxComponent>(Blocker); Blocker->SetRootComponent(Box); Box->SetBoxExtent(FVector(10,60,100));
	Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly); Box->SetCollisionResponseToAllChannels(ECR_Block); Box->RegisterComponent(); Blocker->SetActorLocation(FVector(50,0,130));
	TestTrue(TEXT("Server rejects through-wall requests"), Item->TryPickup(F.PC, State.Id, State.Revision).Status == Status::Blocked);
	Box->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Item->SetOwner(F.World->SpawnActor<AActor>());
	TestTrue(TEXT("Reserved source is not public"), Item->TryPickup(F.PC, State.Id, State.Revision).Status == Status::NotAllowed);
	Item->SetOwner(nullptr);
	TestTrue(TEXT("Forged source identity rejected"), Item->TryPickup(F.PC, FGuid::NewGuid(), State.Revision).Status == Status::Stale);
	TestFalse(TEXT("Cannot reinitialize and refill a live source"), Item->Initialize(F.Def, 100));
	auto* Health = NewObject<ULyraHealthComponent>(F.PC->GetPawn()); Health->RegisterComponent(); Health->StartDeath();
	TestTrue(TEXT("Dead pawn cannot claim"), Item->TryPickup(F.PC, State.Id, State.Revision).Status == Status::NotAllowed);
	F.PC->UnPossess();
	TestTrue(TEXT("Unpossessed controller cannot claim"), Item->TryPickup(F.PC, State.Id, State.Revision).Status == Status::NotAllowed);
	TestEqual(TEXT("All failed attempts preserve ground quantity"), Item->GetPickupState().Count, 13);
	TestEqual(TEXT("All failed attempts preserve inventory"), F.Inventory->GetTotalItemCountByDefinition(F.Def), 0);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraPickupSequenceTest, "Lyra.Inventory.Pickup.RequestReplay", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraPickupSequenceTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	// This isolated world has no initialized gameplay/RPC dispatch; exercise the server handler directly.
    // The two-process pickup test verifies the actual client-to-server RPC and response.
    FFixture F(1); auto* Item = F.Pickup(); const auto State = Item->GetPickupState();
	F.PC->ServerRequestPickup_Implementation(Item, State.Id, State.Revision, 1);
	TestTrue(TEXT("RPC uses only owning controller inventory"), F.PC->GetLastPickupResult().Status == Status::Partial && F.Inventory->GetTotalItemCountByDefinition(F.Def) == 10);
	F.Inventory->ConsumeItemsByDefinition(F.Def, 5);
	const auto Current = Item->GetPickupState();
	F.PC->ServerRequestPickup_Implementation(Item, Current.Id, Current.Revision, 1);
	TestTrue(TEXT("Replay rejected even with fresh item state and free space"), F.PC->GetLastPickupResult().Status == Status::Stale && F.Inventory->GetTotalItemCountByDefinition(F.Def) == 5);
	F.PC->ServerRequestPickup_Implementation(Item, FGuid::NewGuid(), Current.Revision, 2);
	F.PC->ServerRequestPickup_Implementation(Item, Current.Id, Current.Revision, 2);
	TestTrue(TEXT("Rejected sequence cannot be reused"), F.PC->GetLastPickupResult().Status == Status::Stale);
	F.PC->ServerRequestPickup_Implementation(Item, Current.Id, Current.Revision, 3);
	TestTrue(TEXT("Fresh valid request claims exact remainder"), F.PC->GetLastPickupResult().Added == 3 && F.Inventory->GetTotalItemCountByDefinition(F.Def) == 8);
	return true;
}
#endif
