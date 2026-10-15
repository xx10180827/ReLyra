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
#include "Inventory/LyraInventoryItemInstance.h"
#include "Equipment/LyraQuickBarComponent.h"
#include "EngineUtils.h"

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
		UBoxComponent* Floor()
		{
			auto* Actor = World->SpawnActor<AActor>();
			auto* Box = NewObject<UBoxComponent>(Actor); Actor->SetRootComponent(Box);
			Box->SetMobility(EComponentMobility::Static); Box->SetBoxExtent(FVector(1000,1000,10));
			Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly); Box->SetCollisionResponseToAllChannels(ECR_Block); Box->RegisterComponent();
			return Box;
		}
		FLyraInventoryOperationRequest DropRequest(int32 Count, int64 Sequence = 1)
		{
			const auto Slot = Inventory->GetSlotSnapshot()[0];
			FLyraInventoryOperationRequest Request; Request.Operation = ELyraInventoryOperation::Drop;
			Request.RequestId = Sequence; Request.SourceSlot = Request.TargetSlot = 0;
			Request.SourceEntryId = Request.TargetEntryId = Slot.EntryId;
			Request.ExpectedSourceCount = Request.ExpectedTargetCount = Slot.StackCount; Request.Quantity = Count;
			return Request;
		}
		ALyraWorldPickup* Dropped()
		{
			for (TActorIterator<ALyraWorldPickup> It(World); It; ++It) { if (!It->IsActorBeingDestroyed()) { return *It; } }
			return nullptr;
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
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraDropQuantityTest, "Lyra.Inventory.Drop.QuantityAndCompetition", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraDropQuantityTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	FFixture F; F.Floor(); F.Inventory->AddItemDefinition(F.Def, 10);
	const auto Request = F.DropRequest(7);
	bool ReentryBlocked = false;
	const auto Handle = F.Inventory->OnInventoryChanged.AddLambda([&]
	{
		auto* Ground = F.Dropped();
		if (Ground) { const auto S = Ground->GetPickupState(); ReentryBlocked = Ground->TryPickup(F.PC, S.Id, S.Revision).Status == Status::Busy; }
	});
	TestTrue(TEXT("Exact drop succeeds"), F.Inventory->ExecuteInventoryOperation(Request).Status == ELyraInventoryOperationStatus::Success);
	F.Inventory->OnInventoryChanged.Remove(Handle);
	TestTrue(TEXT("New source unavailable during inventory commit"), ReentryBlocked);
	TestEqual(TEXT("Source retains three"), F.Inventory->GetTotalItemCountByDefinition(F.Def), 3);
	TestTrue(TEXT("Replay rejected"), F.Inventory->ExecuteInventoryOperation(Request).Status == ELyraInventoryOperationStatus::StaleRequest);
	auto* Ground = F.Dropped(); if (!TestNotNull(TEXT("Ground generated"), Ground)) { return false; }
	auto* Other = F.Player(2); auto* Inv = Other->FindComponentByClass<ULyraInventoryManagerComponent>();
	Inv->AddItemDefinition(F.Def, 17);
	const auto Token = Ground->GetPickupState();
	TestEqual(TEXT("Other player admits only available three"), Ground->TryPickup(Other, Token.Id, Token.Revision).Added, 3);
	const auto Updated = Ground->GetPickupState();
	TestEqual(TEXT("Four remain on ground"), Updated.Count, 4);
	TestTrue(TEXT("Full inventory cannot consume source"), Ground->TryPickup(Other, Updated.Id, Updated.Revision).Status == Status::NoSpace);
	TestEqual(TEXT("Stale competitor receives nothing"), Ground->TryPickup(F.PC, Token.Id, Token.Revision).Added, 0);
	TestEqual(TEXT("Original owner claims remaining four"), Ground->TryPickup(F.PC, Updated.Id, Updated.Revision).Added, 4);
	TestEqual(TEXT("Exhausted source cannot be claimed twice"), Ground->TryPickup(Other, Updated.Id, Updated.Revision).Added, 0);
	TestEqual(TEXT("Total conserved across inventories and world"), F.Inventory->GetTotalItemCountByDefinition(F.Def) + Inv->GetTotalItemCountByDefinition(F.Def), 27);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraDropFailureTest, "Lyra.Inventory.Drop.FailureRollback", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraDropFailureTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	using OpStatus = ELyraInventoryOperationStatus;
	FFixture F; auto* Item = F.Inventory->AddItemDefinition(F.Def, 5);
	auto* Quick = NewObject<ULyraQuickBarComponent>(F.PC); Quick->RegisterComponent(); Quick->RegisterAllComponentTickFunctions(true); Quick->BeginPlay(); Quick->AddItemToSlot(0, Item);
	int64 Id = 0;
	const auto Run = [&](int32 Quantity) { return F.Inventory->ExecuteInventoryOperation(F.DropRequest(Quantity, ++Id)).Status; };
	TestTrue(TEXT("Zero quantity"), Run(0) == OpStatus::InvalidQuantity);
	TestTrue(TEXT("Negative quantity"), Run(-1) == OpStatus::InvalidQuantity);
	TestTrue(TEXT("Excess quantity"), Run(6) == OpStatus::InvalidQuantity);
	auto Forged = F.DropRequest(2, ++Id); Forged.SourceEntryId = FGuid::NewGuid();
	TestTrue(TEXT("Foreign identity"), F.Inventory->ExecuteInventoryOperation(Forged).Status == OpStatus::StaleState);
	auto Stale = F.DropRequest(2, ++Id); Stale.ExpectedSourceCount = 4;
	TestTrue(TEXT("Stale quantity"), F.Inventory->ExecuteInventoryOperation(Stale).Status == OpStatus::StaleState);
	TestTrue(TEXT("Void cannot consume inventory"), Run(2) == OpStatus::InvalidLocation);
	F.Floor();
	// All nearby candidates obstructed: searching must not turn failure into a through-wall drop.
	auto* Wall = F.World->SpawnActor<AActor>(); auto* Box = NewObject<UBoxComponent>(Wall); Wall->SetRootComponent(Box);
	Box->SetBoxExtent(FVector(300,300,200)); Box->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Box->SetCollisionResponseToAllChannels(ECR_Block); Box->RegisterComponent(); Wall->SetActorLocation(FVector(65,0,100));
	TestTrue(TEXT("Blocked area rejects every candidate"), Run(2) == OpStatus::InvalidLocation); Wall->Destroy();
	const auto SpawnHandle = F.World->AddOnActorSpawnedHandler(FOnActorSpawned::FDelegate::CreateLambda([](AActor* Actor)
	{
		if (Cast<ALyraWorldPickup>(Actor)) { Actor->Destroy(); }
	}));
	TestTrue(TEXT("Generated actor failure rolls back"), Run(2) == OpStatus::SpawnFailed);
	F.World->RemoveOnActorSpawnedHandler(SpawnHandle);
	TestEqual(TEXT("Failures retain exact quantity"), F.Inventory->GetTotalItemCountByDefinition(F.Def), 5);
	TestTrue(TEXT("Failures retain quickbar reference"), Quick->GetSlots()[0] == Item);
	TestNull(TEXT("Failure leaves no claimable world source"), F.Dropped());
	auto* Health = NewObject<ULyraHealthComponent>(F.PC->GetPawn()); Health->RegisterComponent(); Health->StartDeath();
	TestTrue(TEXT("Dead character rejected"), Run(2) == OpStatus::NotAllowed);
	F.PC->UnPossess(); TestTrue(TEXT("No pawn rejected"), Run(2) == OpStatus::NotAllowed);
	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraDropStateTest, "Lyra.Inventory.Drop.WeaponStateAndOwnership", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraDropStateTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	FFixture F; F.Floor();
	F.Def = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Rifle/ID_WS_Rifle.ID_WS_Rifle_C"));
	if (!TestNotNull(TEXT("Real weapon definition"), F.Def.Get())) { return false; }
	auto* Item = F.Inventory->AddItemDefinition(F.Def, 1);
	const auto Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	Item->RemoveStatTagStack(Magazine, Item->GetStatTagStackCount(Magazine));
	Item->RemoveStatTagStack(Reserve, Item->GetStatTagStackCount(Reserve));
	Item->AddStatTagStack(Reserve, 19); // An absent magazine tag must remain zero.
	const auto OldId = F.Inventory->GetSlotSnapshot()[0].EntryId;
	auto* Quick = NewObject<ULyraQuickBarComponent>(F.PC); Quick->RegisterComponent(); Quick->RegisterAllComponentTickFunctions(true); Quick->BeginPlay(); Quick->AddItemToSlot(0, Item);
	TestTrue(TEXT("Entire stateful item dropped"), F.Inventory->ExecuteInventoryOperation(F.DropRequest(1)).Status == ELyraInventoryOperationStatus::Success);
	TestNull(TEXT("Source quickbar cleared"), Quick->GetSlots()[0]);
	auto* Ground = F.Dropped(); if (!TestNotNull(TEXT("Stateful world source"), Ground)) { return false; }
	auto* Other = F.Player(1); auto* Inv = Other->FindComponentByClass<ULyraInventoryManagerComponent>();
	const auto S = Ground->GetPickupState(); TestEqual(TEXT("Other player receives item"), Ground->TryPickup(Other, S.Id, S.Revision).Added, 1);
	auto* Rebuilt = Inv->GetSlotSnapshot()[0].Instance.Get(); if (!TestNotNull(TEXT("Rebuilt item"), Rebuilt)) { return false; }
	TestTrue(TEXT("Fresh identity and legal outer"), Rebuilt != Item && Rebuilt->GetOuter() == Other && Inv->GetSlotSnapshot()[0].EntryId != OldId);
	TestEqual(TEXT("Empty magazine preserved"), Rebuilt->GetStatTagStackCount(Magazine), 0);
	TestEqual(TEXT("Reserve preserved"), Rebuilt->GetStatTagStackCount(Reserve), 19);
	return true;
}
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraDropNearbyWeaponsTest, "Lyra.Inventory.Drop.NearbyShotguns", EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraDropNearbyWeaponsTest::RunTest(const FString& Parameters)
{
	using namespace LyraPickupTest;
	FFixture F(6); F.Floor();
	F.Def = LoadClass<ULyraInventoryItemDefinition>(nullptr, TEXT("/Game/WeaponSystem/Weapons/Shotgun/ID_WS_Shotgun.ID_WS_Shotgun_C"));
	if (!TestNotNull(TEXT("Actual shotgun asset"), F.Def.Get())) { return false; }
	const auto Magazine = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
	const auto Reserve = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));
	TestEqual(TEXT("Three shotguns occupy separate slots"), F.Inventory->AddItemDefinitionWithResult(F.Def, 3, false).AddedCount, 3);
	const auto Slots = F.Inventory->GetSlotSnapshot();
	const FVector OriginalLocation = F.PC->GetPawn()->GetActorLocation();
	TArray<ALyraWorldPickup*> GroundItems;
	for (int32 Index = 0; Index < 3; ++Index)
	{
		auto* Item = Slots[Index].Instance.Get(); if (!TestNotNull(TEXT("Separate shotgun instance"), Item)) { return false; }
		Item->RemoveStatTagStack(Magazine, Item->GetStatTagStackCount(Magazine)); Item->AddStatTagStack(Magazine, Index);
		Item->RemoveStatTagStack(Reserve, Item->GetStatTagStackCount(Reserve)); Item->AddStatTagStack(Reserve, Index + 3);
		FLyraInventoryOperationRequest Request;
		Request.Operation = ELyraInventoryOperation::Drop; Request.RequestId = Index + 1;
		Request.SourceSlot = Request.TargetSlot = Slots[Index].SlotIndex;
		Request.SourceEntryId = Slots[Index].EntryId; Request.ExpectedSourceCount = 1; Request.Quantity = 1;
		if (!TestTrue(TEXT("Consecutive stationary drop succeeds"), F.Inventory->ExecuteInventoryOperation(Request).Status == ELyraInventoryOperationStatus::Success)) { return false; }
	}
	for (TActorIterator<ALyraWorldPickup> It(F.World); It; ++It) { GroundItems.Add(*It); }
	TestEqual(TEXT("All three ground weapons coexist"), GroundItems.Num(), 3);
	TestEqual(TEXT("No movement required"), F.PC->GetPawn()->GetActorLocation(), OriginalLocation);
	for (int32 A = 0; A < GroundItems.Num(); ++A)
	{
		TestEqual(TEXT("Each weapon remains independent"), GroundItems[A]->GetPickupState().Count, 1);
		for (int32 B = A + 1; B < GroundItems.Num(); ++B)
		{ TestTrue(TEXT("Ground pickups do not overlap"), FVector::Distance(GroundItems[A]->GetActorLocation(), GroundItems[B]->GetActorLocation()) >= 60); }
	}
	auto* Other = F.Player(6); auto* Inv = Other->FindComponentByClass<ULyraInventoryManagerComponent>();
	auto* Owned = Inv->AddItemDefinition(F.Def, 1);
	const int32 OwnedMagazine = Owned->GetStatTagStackCount(Magazine), OwnedReserve = Owned->GetStatTagStackCount(Reserve);
	for (auto* Ground : GroundItems)
	{
		const auto S = Ground->GetPickupState();
		TestEqual(TEXT("Already owning a shotgun does not prevent E pickup"), Ground->TryPickup(Other, S.Id, S.Revision).Added, 1);
	}
	TestEqual(TEXT("Four shotguns can coexist in backpack"), Inv->GetTotalItemCountByDefinition(F.Def), 4);
	TestEqual(TEXT("New pickup does not refill the existing magazine"), Owned->GetStatTagStackCount(Magazine), OwnedMagazine);
	TestEqual(TEXT("New pickup does not refill the existing reserve"), Owned->GetStatTagStackCount(Reserve), OwnedReserve);
	for (int32 Index = 0; Index < 3; ++Index)
	{
		const auto Items = Inv->GetAllItems();
		TestTrue(TEXT("Distinct dropped ammunition states survive"), Items.ContainsByPredicate([&](const auto* Item)
		{ return Item != Owned && Item->GetStatTagStackCount(Magazine) == Index && Item->GetStatTagStackCount(Reserve) == Index + 3; }));
	}
	return true;
}
#endif
