// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "Engine/PackageMapClient.h"
#include "GameFramework/Pawn.h"
#include "Serialization/BitReader.h"
#include "LyraWeaponFireTagTestTypes.h"
#include "LyraInventorySnapshotTestTypes.h"
#include "Weapons/LyraRangedWeaponInstance.h"

#if WITH_DEV_AUTOMATION_TESTS
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraWeaponFireTagReplication, "Lyra.Weapons.Ranged.FireTagReplication",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraWeaponFireTagReplication::RunTest(const FString& Parameters)
{
	const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false).CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
	auto* World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
	auto* Controller = World->SpawnActor<ALyraInventoryTestController>();
	auto* Pawn = World->SpawnActor<APawn>(); Controller->Possess(Pawn);
	auto* ASC = NewObject<ULyraWeaponFireTagTestASC>(Pawn); ASC->RegisterComponent(); ASC->InitAbilityActorInfo(Pawn, Pawn);
	auto* Weapon = NewObject<ULyraRangedWeaponInstance>(Pawn); Weapon->SetFiniteAmmoSystemEnabled(true);
	const auto Fire = ASC->GiveAbility(FGameplayAbilitySpec(ULyraWeaponFireTagTestAbility::StaticClass(), 1, INDEX_NONE, Weapon));
	const auto Tag = FGameplayTag::RequestGameplayTag(TEXT("Event.Movement.WeaponFire"));
	auto* PackageMap = NewObject<UPackageMapClient>();
	for (int32 Round = 0; Round < 2; ++Round)
	{
		TestTrue(TEXT("Fire starts"), ASC->TryActivateAbility(Fire));
		TestEqual(TEXT("Active fire grants one movement tag"), ASC->GetTagCount(Tag), 1);
		// Deserialize an actual empty loose-tag update while the local activation
		// is still active: the ordering that exposed GAS-001 under packet delay.
		uint8 EmptySnapshot[4] = {};
		FBitReader Reader(EmptySnapshot, 32);
		TestTrue(TEXT("Empty authoritative loose-tag update deserializes"), ASC->ReceiveLooseTagSnapshot(Reader, PackageMap));
		TestEqual(TEXT("Replication cannot erase the active firing tag"), ASC->GetTagCount(Tag), 1);
		ASC->CancelAbilityHandle(Fire);
		TestEqual(TEXT("Ending fire removes its tag without a missing-map removal"), ASC->GetTagCount(Tag), 0);
		TestFalse(TEXT("Fire is inactive after cancellation"), ASC->FindAbilitySpecFromHandle(Fire)->IsActive());
	}
	ASC->ClearAllAbilities(); World->DestroyWorld(false);
	return true;
}
#endif
