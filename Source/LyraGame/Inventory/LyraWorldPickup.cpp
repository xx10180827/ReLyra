// Copyright Epic Games, Inc. All Rights Reserved.
#include "LyraWorldPickup.h"
#include "LyraInventoryItemDefinition.h"
#include "LyraInventoryManagerComponent.h"
#include "InventoryFragment_PickupIcon.h"
#include "Character/LyraHealthComponent.h"
#include "Components/SphereComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TextRenderComponent.h"
#include "Engine/StaticMesh.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "Net/UnrealNetwork.h"
#include "UObject/ConstructorHelpers.h"
#include "Templates/UnrealTemplate.h"

ALyraWorldPickup::ALyraWorldPickup()
{
	bReplicates = true;
	SetReplicateMovement(true);
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.TickInterval = 0.05f;
	Collision = CreateDefaultSubobject<USphereComponent>(TEXT("PickupCollision"));
	SetRootComponent(Collision);
	Collision->InitSphereRadius(30);
	Collision->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Collision->SetCollisionResponseToAllChannels(ECR_Ignore);
	Collision->SetCollisionResponseToChannel(ECC_Visibility, ECR_Block);
	Crate = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Crate"));
	Crate->SetupAttachment(Collision);
	Crate->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Crate->SetRelativeScale3D(FVector(0.45f, 0.3f, 0.25f));
	static ConstructorHelpers::FObjectFinder<UStaticMesh> Cube(TEXT("/Engine/BasicShapes/Cube.Cube"));
	Crate->SetStaticMesh(Cube.Object);
	Weapon = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Weapon"));
	Weapon->SetupAttachment(Collision);
	Weapon->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Label = CreateDefaultSubobject<UTextRenderComponent>(TEXT("Quantity"));
	Label->SetupAttachment(Collision);
	Label->SetRelativeLocation(FVector(0, 0, 38));
	Label->SetHorizontalAlignment(EHTA_Center);
	Label->SetWorldSize(20);
	Label->SetTextRenderColor(FColor(45, 220, 255));
}

void ALyraWorldPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(ALyraWorldPickup, State);
}

bool ALyraWorldPickup::Initialize(TSubclassOf<ULyraInventoryItemDefinition> Definition, int32 Count)
{
	if (!HasAuthority() || State.Id.IsValid() || !Definition || Definition->HasAnyClassFlags(CLASS_Abstract) || Count <= 0) { return false; }
	State.Id = FGuid::NewGuid(); State.Definition = Definition; State.Count = Count; State.Revision = 1;
	OnRep_State(); ForceNetUpdate(); return true;
}

void ALyraWorldPickup::OnRep_State()
{
	// Default engine world font is ASCII; localized names are shown by the screen prompt.
	Label->SetText(FText::FromString(FString::Printf(TEXT("x %d"), State.Count)));
	const auto* Def = State.Definition ? GetDefault<ULyraInventoryItemDefinition>(State.Definition) : nullptr;
	const auto* Icon = Def ? Cast<UInventoryFragment_PickupIcon>(Def->FindFragmentByClass(UInventoryFragment_PickupIcon::StaticClass())) : nullptr;
	Weapon->SetSkeletalMesh(Icon ? Icon->SkeletalMesh : nullptr);
	Crate->SetVisibility(!Icon || !Icon->SkeletalMesh);
	SetActorHiddenInGame(State.Count <= 0);
}

void ALyraWorldPickup::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	if (auto* PC = GetWorld()->GetFirstPlayerController(); PC && PC->IsLocalController())
	{
		FVector Eye; FRotator Rotation; PC->GetPlayerViewPoint(Eye, Rotation);
		Label->SetWorldRotation((Eye - Label->GetComponentLocation()).Rotation());
	}
}

ELyraPickupStatus ALyraWorldPickup::CheckAccess(const APlayerController* Controller) const
{
	if (!IsValid(Controller) || Controller->GetWorld() != GetWorld() || !State.Id.IsValid() || !State.Definition
		|| State.Count <= 0 || IsActorBeingDestroyed()) { return ELyraPickupStatus::Invalid; }
	const APawn* Pawn = Controller->GetPawn();
	if (!IsValid(Pawn) || Pawn->GetController() != Controller || (GetOwner() && GetOwner() != Controller && GetOwner() != Pawn)) { return ELyraPickupStatus::NotAllowed; }
	const auto* Health = ULyraHealthComponent::FindHealthComponent(Pawn);
	if (Health && (Health->IsDeadOrDying() || Health->GetHealth() <= 0)) { return ELyraPickupStatus::NotAllowed; }
	if (FVector::DistSquared(Pawn->GetActorLocation(), GetActorLocation()) > FMath::Square(PickupDistance)) { return ELyraPickupStatus::TooFar; }
	FCollisionQueryParams Params(SCENE_QUERY_STAT(InventoryPickupVisibility), false, Pawn);
	Params.AddIgnoredActor(this);
	FHitResult Hit;
	if (GetWorld()->LineTraceSingleByChannel(Hit, Pawn->GetPawnViewLocation(), GetActorLocation(), ECC_Visibility, Params)) { return ELyraPickupStatus::Blocked; }
	return ELyraPickupStatus::Success;
}

FLyraPickupResult ALyraWorldPickup::TryPickup(APlayerController* Controller, FGuid ExpectedId, int32 ExpectedRevision)
{
	FLyraPickupResult Result; Result.Remaining = State.Count;
	if (!HasAuthority() || !IsValid(Controller) || !Controller->HasAuthority()) { Result.Status = ELyraPickupStatus::NotAuthority; return Result; }
	if (bClaimInProgress) { Result.Status = ELyraPickupStatus::Busy; return Result; }
	if (State.Id != ExpectedId || State.Revision != ExpectedRevision) { Result.Status = ELyraPickupStatus::Stale; return Result; }
	Result.Status = CheckAccess(Controller);
	if (Result.Status != ELyraPickupStatus::Success) { return Result; }
	auto* Inventory = Controller->FindComponentByClass<ULyraInventoryManagerComponent>();
	if (!Inventory || Inventory->GetSlotCapacity() <= 0 || State.Revision == MAX_int32) { Result.Status = ELyraPickupStatus::NotAllowed; return Result; }
	TGuardValue<bool> Guard(bClaimInProgress, true);
	const auto Added = Inventory->AddItemDefinitionWithResult(State.Definition, State.Count, true);
	if (Added.AddedCount <= 0)
	{
		Result.Status = Added.Status == ELyraInventoryAddStatus::NoSpace ? ELyraPickupStatus::NoSpace : ELyraPickupStatus::Busy;
		return Result;
	}
	State.Count -= Added.AddedCount; ++State.Revision;
	Result.Added = Added.AddedCount; Result.Remaining = State.Count;
	Result.Status = State.Count > 0 ? ELyraPickupStatus::Partial : ELyraPickupStatus::Success;
	OnRep_State(); ForceNetUpdate();
	if (State.Count == 0) { SetActorEnableCollision(false); Destroy(); }
	return Result;
}
