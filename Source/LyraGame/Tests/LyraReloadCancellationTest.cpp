// Copyright Epic Games, Inc. All Rights Reserved.
#include "Misc/AutomationTest.h"
#include "Engine/World.h"
#include "EngineGlobals.h"
#include "TimerManager.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystem/LyraAbilitySystemComponent.h"
#include "Weapons/LyraGameplayAbility_Reload.h"
#include "Weapons/LyraGameplayAbility_RangedWeapon.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "LyraInventorySnapshotTestTypes.h"

#if WITH_DEV_AUTOMATION_TESTS
IMPLEMENT_SIMPLE_AUTOMATION_TEST(FLyraReloadCancellationTest, "Lyra.Weapons.Ranged.ReloadCancellation",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter)
bool FLyraReloadCancellationTest::RunTest(const FString& Parameters)
{
	const auto Init = UWorld::InitializationValues().AllowAudioPlayback(false).CreatePhysicsScene(false).CreateNavigation(false).CreateAISystem(false);
	auto* World = UWorld::CreateWorld(EWorldType::Game, false, NAME_None, nullptr, true, ERHIFeatureLevel::Num, &Init);
	auto* Controller = World->SpawnActor<ALyraInventoryTestController>();
	auto* Pawn = World->SpawnActor<APawn>(); Controller->Possess(Pawn);
	auto* ASC = NewObject<ULyraAbilitySystemComponent>(Pawn); ASC->RegisterComponent(); ASC->InitAbilityActorInfo(Pawn, Pawn);
	auto* Weapon = NewObject<ULyraRangedWeaponInstance>(Pawn); Weapon->SetFiniteAmmoSystemEnabled(true); Weapon->ConsumeAmmo(5);
	const auto Reload = ASC->GiveAbility(FGameplayAbilitySpec(ULyraGameplayAbility_Reload::StaticClass(), 1, INDEX_NONE, Weapon));
	const auto Fire = ASC->GiveAbility(FGameplayAbilitySpec(ULyraGameplayAbility_RangedWeapon::StaticClass(), 1, INDEX_NONE, Weapon));
	const auto Advance = [&](float Time) { ++GFrameCounter; World->GetTimerManager().Tick(Time); };
	TestTrue(TEXT("Reload starts"), ASC->TryActivateAbility(Reload)); Advance(0.01f);
	TestTrue(TEXT("Reload active before fire"), ASC->FindAbilitySpecFromHandle(Reload)->IsActive());
	TestTrue(TEXT("Fire starts"), ASC->TryActivateAbility(Fire));
	TestFalse(TEXT("Fire cancels the same weapon reload"), ASC->FindAbilitySpecFromHandle(Reload)->IsActive());
	ASC->CancelAbilityHandle(Fire);
	Advance(Weapon->GetReloadTime() + 1);
	TestEqual(TEXT("Cancelled timer cannot refill"), Weapon->GetCurrentAmmo(), 25);
	TestEqual(TEXT("Cancelled timer cannot consume reserve"), Weapon->GetCurrentReserveAmmo(), 90);
	TestTrue(TEXT("Reload can restart"), ASC->TryActivateAbility(Reload)); Advance(0.01f); Advance(Weapon->GetReloadTime() + 1);
	TestEqual(TEXT("Uninterrupted reload fills magazine"), Weapon->GetCurrentAmmo(), 30);
	TestEqual(TEXT("Normal reload transfers once"), Weapon->GetCurrentReserveAmmo(), 85);
	Advance(Weapon->GetReloadTime() + 1);
	TestEqual(TEXT("No second transfer"), Weapon->GetCurrentReserveAmmo(), 85);
	Weapon->ConsumeAmmo(3);
	TestTrue(TEXT("Reload before explicit cancellation"), ASC->TryActivateAbility(Reload)); Advance(0.01f);
	ASC->CancelAbilityHandle(Reload); Advance(Weapon->GetReloadTime() + 1);
	TestEqual(TEXT("Other cancellation also preserves magazine"), Weapon->GetCurrentAmmo(), 27);
	TestEqual(TEXT("Other cancellation preserves reserve"), Weapon->GetCurrentReserveAmmo(), 85);
	ASC->ClearAllAbilities(); World->DestroyWorld(false);
	return true;
}
#endif
