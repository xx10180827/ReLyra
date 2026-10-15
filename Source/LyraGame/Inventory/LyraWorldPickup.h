// Copyright Epic Games, Inc. All Rights Reserved.
#pragma once
#include "GameFramework/Actor.h"
#include "LyraWorldPickup.generated.h"

class ULyraInventoryItemDefinition;
class USphereComponent;
class UStaticMeshComponent;
class USkeletalMeshComponent;
class UTextRenderComponent;
class APlayerController;

UENUM()
enum class ELyraPickupStatus : uint8
{
	Success, Partial, NoSpace, Invalid, Stale, Busy, TooFar, Blocked, NotAllowed, NotAuthority
};

USTRUCT()
struct FLyraWorldPickupState
{
	GENERATED_BODY()
	UPROPERTY() FGuid Id;
	UPROPERTY() TSubclassOf<ULyraInventoryItemDefinition> Definition;
	UPROPERTY() int32 Count = 0;
	UPROPERTY() int32 Revision = 0;
};

USTRUCT()
struct FLyraPickupResult
{
	GENERATED_BODY()
	UPROPERTY() int64 RequestId = 0;
	UPROPERTY() ELyraPickupStatus Status = ELyraPickupStatus::Invalid;
	UPROPERTY() int32 Added = 0;
	UPROPERTY() int32 Remaining = 0;
};

/** One shared, server-owned source of items. Never implements the legacy unchecked pickup interface. */
UCLASS()
class LYRAGAME_API ALyraWorldPickup : public AActor
{
	GENERATED_BODY()
public:
	ALyraWorldPickup();
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void Tick(float DeltaSeconds) override;
	bool Initialize(TSubclassOf<ULyraInventoryItemDefinition> Definition, int32 Count);
	const FLyraWorldPickupState& GetPickupState() const { return State; }
	// Evaluates server-owned pawn position, health, ownership, and visibility. Also used for local hints.
	ELyraPickupStatus CheckAccess(const APlayerController* Controller) const;
	FLyraPickupResult TryPickup(APlayerController* Controller, FGuid ExpectedId, int32 ExpectedRevision);
	static constexpr float PickupDistance = 250.0f;
private:
	UFUNCTION() void OnRep_State();
	UPROPERTY(ReplicatedUsing=OnRep_State) FLyraWorldPickupState State;
	UPROPERTY() TObjectPtr<USphereComponent> Collision;
	UPROPERTY() TObjectPtr<UStaticMeshComponent> Crate;
	UPROPERTY() TObjectPtr<USkeletalMeshComponent> Weapon;
	UPROPERTY() TObjectPtr<UTextRenderComponent> Label;
	bool bClaimInProgress = false;
};
