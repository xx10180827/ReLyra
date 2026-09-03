// Copyright Epic Games, Inc. All Rights Reserved.

#include "LyraRangedWeaponInstance.h"
#include "NativeGameplayTags.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "Camera/LyraCameraComponent.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Physics/PhysicalMaterialWithTags.h"
#include "Weapons/LyraWeaponInstance.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(LyraRangedWeaponInstance)

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_Weapon_SteadyAimingCamera, "Lyra.Weapon.SteadyAimingCamera");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_ShooterGame_Weapon_MagazineAmmo, "Lyra.ShooterGame.Weapon.MagazineAmmo");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_ShooterGame_Weapon_MagazineSize, "Lyra.ShooterGame.Weapon.MagazineSize");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Lyra_ShooterGame_Weapon_SpareAmmo, "Lyra.ShooterGame.Weapon.SpareAmmo");

ULyraRangedWeaponInstance::ULyraRangedWeaponInstance(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	HeatToHeatPerShotCurve.EditorCurveData.AddKey(0.0f, 1.0f);
	HeatToCoolDownPerSecondCurve.EditorCurveData.AddKey(0.0f, 2.0f);
}

void ULyraRangedWeaponInstance::PostLoad()
{
	Super::PostLoad();

#if WITH_EDITOR
	UpdateDebugVisualization();
#endif
}

#if WITH_EDITOR
void ULyraRangedWeaponInstance::PostEditChangeProperty(struct FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);
	UpdateDebugVisualization();
}

void ULyraRangedWeaponInstance::UpdateDebugVisualization()
{
	ComputeHeatRange(/*out*/ Debug_MinHeat, /*out*/ Debug_MaxHeat);
	ComputeSpreadRange(/*out*/ Debug_MinSpreadAngle, /*out*/ Debug_MaxSpreadAngle);
	Debug_CurrentHeat = CurrentHeat;
	Debug_CurrentSpreadAngle = CurrentSpreadAngle;
	Debug_CurrentSpreadAngleMultiplier = CurrentSpreadAngleMultiplier;
}
#endif

void ULyraRangedWeaponInstance::OnEquipped()
{
	Super::OnEquipped();
	StopRecoilRecoveryTimer();

	// Start heat in the middle
	float MinHeatRange;
	float MaxHeatRange;
	ComputeHeatRange(/*out*/ MinHeatRange, /*out*/ MaxHeatRange);
	CurrentHeat = (MinHeatRange + MaxHeatRange) * 0.5f;

	// Derive spread
	CurrentSpreadAngle = HeatToSpreadCurve.GetRichCurveConst()->Eval(CurrentHeat);

	// Default the multipliers to 1x
	CurrentSpreadAngleMultiplier = 1.0f;
	StandingStillMultiplier = 1.0f;
	JumpFallMultiplier = 1.0f;
	CrouchingMultiplier = 1.0f;

	// Start with a full magazine and the configured finite reserve.
	ResetAmmoState();
	PendingRecoilPitch = 0.0f;
	PendingRecoilYaw = 0.0f;
}

void ULyraRangedWeaponInstance::ConsumeAmmo(int32 Amount)
{
	if (Amount <= 0)
	{
		return;
	}

	if (ULyraInventoryItemInstance* ItemInstance = GetAssociatedInventoryItem())
	{
		// GA_Weapon_Fire 的原生 Cost 已经先扣除了 MagazineAmmo。
		// 这里只把权威库存值镜像到武器实例，不能再次写回或重复扣弹。
		CurrentAmmo = FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_MagazineAmmo));
		CurrentReserveAmmo = FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_SpareAmmo));
	}
	else
	{
		// 保留无 InventoryItem 的隔离测试与特殊武器实例行为。
		CurrentAmmo = FMath::Max(0, CurrentAmmo - Amount);
	}
}

int32 ULyraRangedWeaponInstance::ReloadAmmo()
{
	if (!bUseFiniteAmmoSystem)
	{
		return 0;
	}

	// 库存标签是唯一持久弹药来源；切枪后新建的 EquipmentInstance 也会读取同一份数据。
	CurrentAmmo = GetCurrentAmmo();
	CurrentReserveAmmo = GetCurrentReserveAmmo();

	const int32 MissingAmmo = FMath::Max(0, MaxAmmo - CurrentAmmo);
	const int32 LoadedAmmo = FMath::Min(MissingAmmo, CurrentReserveAmmo);

	CurrentAmmo += LoadedAmmo;
	CurrentReserveAmmo -= LoadedAmmo;

	if (ULyraInventoryItemInstance* ItemInstance = GetAssociatedInventoryItem())
	{
		SetInventoryStatTagCount(ItemInstance, TAG_Lyra_ShooterGame_Weapon_MagazineSize, MaxAmmo);
		SetInventoryStatTagCount(ItemInstance, TAG_Lyra_ShooterGame_Weapon_MagazineAmmo, CurrentAmmo);
		SetInventoryStatTagCount(ItemInstance, TAG_Lyra_ShooterGame_Weapon_SpareAmmo, CurrentReserveAmmo);
	}

	return LoadedAmmo;
}

void ULyraRangedWeaponInstance::ResetAmmoState()
{
	CurrentAmmo = FMath::Max(0, MaxAmmo);
	CurrentReserveAmmo = FMath::Max(0, MaxReserveAmmo);
}

ULyraInventoryItemInstance* ULyraRangedWeaponInstance::GetAssociatedInventoryItem() const
{
	return Cast<ULyraInventoryItemInstance>(GetInstigator());
}

bool ULyraRangedWeaponInstance::CanFire() const
{
	return GetCurrentAmmo() > 0;
}

bool ULyraRangedWeaponInstance::CanReload() const
{
	return bUseFiniteAmmoSystem && (GetCurrentAmmo() < MaxAmmo) && (GetCurrentReserveAmmo() > 0);
}

int32 ULyraRangedWeaponInstance::GetCurrentAmmo() const
{
	if (ULyraInventoryItemInstance* ItemInstance = GetAssociatedInventoryItem())
	{
		return FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_MagazineAmmo));
	}

	return CurrentAmmo;
}

int32 ULyraRangedWeaponInstance::GetCurrentReserveAmmo() const
{
	if (const ULyraInventoryItemInstance* ItemInstance = GetAssociatedInventoryItem())
	{
		return FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_SpareAmmo));
	}

	return CurrentReserveAmmo;
}

void ULyraRangedWeaponInstance::OnInstigatorChanged()
{
	Super::OnInstigatorChanged();

	if (ULyraInventoryItemInstance* ItemInstance = GetAssociatedInventoryItem())
	{
		const int32 InventoryMagazineAmmo = FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_MagazineAmmo));
		const int32 InventoryMagazineSize = FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_MagazineSize));
		const int32 InventorySpareAmmo = FMath::Max(0, ItemInstance->GetStatTagStackCount(TAG_Lyra_ShooterGame_Weapon_SpareAmmo));

		if (bUseFiniteAmmoSystem)
		{
			// 自定义物品最初复制自 Lyra 资源（例如 999 备弹，或霰弹枪 5 发容量）。
			// 仅首次发现容量不匹配/备弹超限时规范化；以后切枪则保留库存里的剩余值。
			const bool bNeedsInitialNormalization = (InventoryMagazineSize != MaxAmmo) || (InventorySpareAmmo > MaxReserveAmmo);
			CurrentAmmo = bNeedsInitialNormalization ? MaxAmmo : FMath::Min(InventoryMagazineAmmo, MaxAmmo);
			CurrentReserveAmmo = bNeedsInitialNormalization ? MaxReserveAmmo : FMath::Min(InventorySpareAmmo, MaxReserveAmmo);

			SetInventoryStatTagCount(ItemInstance, TAG_Lyra_ShooterGame_Weapon_MagazineSize, MaxAmmo);
			SetInventoryStatTagCount(ItemInstance, TAG_Lyra_ShooterGame_Weapon_MagazineAmmo, CurrentAmmo);
			SetInventoryStatTagCount(ItemInstance, TAG_Lyra_ShooterGame_Weapon_SpareAmmo, CurrentReserveAmmo);
		}
		else
		{
			// 原版手枪等武器只镜像自己的库存数值，绝不写入 30/90 默认配置。
			CurrentAmmo = InventoryMagazineAmmo;
			CurrentReserveAmmo = InventorySpareAmmo;
		}
	}
}

void ULyraRangedWeaponInstance::SetInventoryStatTagCount(ULyraInventoryItemInstance* ItemInstance, FGameplayTag Tag, int32 DesiredCount) const
{
	if ((ItemInstance == nullptr) || !Tag.IsValid())
	{
		return;
	}

	const int32 ClampedDesiredCount = FMath::Max(0, DesiredCount);
	const int32 ExistingCount = ItemInstance->GetStatTagStackCount(Tag);
	const int32 Delta = ClampedDesiredCount - ExistingCount;

	if (Delta > 0)
	{
		ItemInstance->AddStatTagStack(Tag, Delta);
	}
	else if (Delta < 0)
	{
		ItemInstance->RemoveStatTagStack(Tag, -Delta);
	}
}

void ULyraRangedWeaponInstance::OnUnequipped()
{
	StopRecoilRecoveryTimer();
	PendingRecoilPitch = 0.0f;
	PendingRecoilYaw = 0.0f;

	Super::OnUnequipped();
}

void ULyraRangedWeaponInstance::Tick(float DeltaSeconds)
{
	APawn* Pawn = GetPawn();
	check(Pawn != nullptr);

	const bool bMinSpread = UpdateSpread(DeltaSeconds);
	const bool bMinMultipliers = UpdateMultipliers(DeltaSeconds);

	bHasFirstShotAccuracy = bAllowFirstShotAccuracy && bMinMultipliers && bMinSpread;

#if WITH_EDITOR
	UpdateDebugVisualization();
#endif
}

void ULyraRangedWeaponInstance::ComputeHeatRange(float& MinHeat, float& MaxHeat)
{
	float Min1;
	float Max1;
	HeatToHeatPerShotCurve.GetRichCurveConst()->GetTimeRange(/*out*/ Min1, /*out*/ Max1);

	float Min2;
	float Max2;
	HeatToCoolDownPerSecondCurve.GetRichCurveConst()->GetTimeRange(/*out*/ Min2, /*out*/ Max2);

	float Min3;
	float Max3;
	HeatToSpreadCurve.GetRichCurveConst()->GetTimeRange(/*out*/ Min3, /*out*/ Max3);

	MinHeat = FMath::Min(FMath::Min(Min1, Min2), Min3);
	MaxHeat = FMath::Max(FMath::Max(Max1, Max2), Max3);
}

void ULyraRangedWeaponInstance::ComputeSpreadRange(float& MinSpread, float& MaxSpread)
{
	HeatToSpreadCurve.GetRichCurveConst()->GetValueRange(/*out*/ MinSpread, /*out*/ MaxSpread);
}

void ULyraRangedWeaponInstance::AddSpread()
{
	// Sample the heat up curve
	const float HeatPerShot = HeatToHeatPerShotCurve.GetRichCurveConst()->Eval(CurrentHeat);
	CurrentHeat = ClampHeat(CurrentHeat + HeatPerShot);

	// Map the heat to the spread angle
	CurrentSpreadAngle = HeatToSpreadCurve.GetRichCurveConst()->Eval(CurrentHeat);

#if WITH_EDITOR
	UpdateDebugVisualization();
#endif
}

float ULyraRangedWeaponInstance::GetDistanceAttenuation(float Distance, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags) const
{
	const FRichCurve* Curve = DistanceDamageFalloff.GetRichCurveConst();
	return Curve->HasAnyData() ? Curve->Eval(Distance) : 1.0f;
}

float ULyraRangedWeaponInstance::GetPhysicalMaterialAttenuation(const UPhysicalMaterial* PhysicalMaterial, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags) const
{
	float CombinedMultiplier = 1.0f;
	if (const UPhysicalMaterialWithTags* PhysMatWithTags = Cast<const UPhysicalMaterialWithTags>(PhysicalMaterial))
	{
		for (const FGameplayTag MaterialTag : PhysMatWithTags->Tags)
		{
			if (const float* pTagMultiplier = MaterialDamageMultiplier.Find(MaterialTag))
			{
				CombinedMultiplier *= *pTagMultiplier;
			}
		}
	}

	return CombinedMultiplier;
}

bool ULyraRangedWeaponInstance::UpdateSpread(float DeltaSeconds)
{
	const float TimeSinceFired = GetWorld()->TimeSince(LastFireTime);

	if (TimeSinceFired > SpreadRecoveryCooldownDelay)
	{
		const float CooldownRate = HeatToCoolDownPerSecondCurve.GetRichCurveConst()->Eval(CurrentHeat);
		CurrentHeat = ClampHeat(CurrentHeat - (CooldownRate * DeltaSeconds));
		CurrentSpreadAngle = HeatToSpreadCurve.GetRichCurveConst()->Eval(CurrentHeat);
	}
	
	float MinSpread;
	float MaxSpread;
	ComputeSpreadRange(/*out*/ MinSpread, /*out*/ MaxSpread);

	return FMath::IsNearlyEqual(CurrentSpreadAngle, MinSpread, KINDA_SMALL_NUMBER);
}

bool ULyraRangedWeaponInstance::UpdateMultipliers(float DeltaSeconds)
{
	const float MultiplierNearlyEqualThreshold = 0.05f;

	APawn* Pawn = GetPawn();
	check(Pawn != nullptr);
	UCharacterMovementComponent* CharMovementComp = Cast<UCharacterMovementComponent>(Pawn->GetMovementComponent());

	// See if we are standing still, and if so, smoothly apply the bonus
	const float PawnSpeed = Pawn->GetVelocity().Size();
	const float MovementTargetValue = FMath::GetMappedRangeValueClamped(
		/*InputRange=*/ FVector2D(StandingStillSpeedThreshold, StandingStillSpeedThreshold + StandingStillToMovingSpeedRange),
		/*OutputRange=*/ FVector2D(SpreadAngleMultiplier_StandingStill, 1.0f),
		/*Alpha=*/ PawnSpeed);
	StandingStillMultiplier = FMath::FInterpTo(StandingStillMultiplier, MovementTargetValue, DeltaSeconds, TransitionRate_StandingStill);
	const bool bStandingStillMultiplierAtMin = FMath::IsNearlyEqual(StandingStillMultiplier, SpreadAngleMultiplier_StandingStill, SpreadAngleMultiplier_StandingStill*0.1f);

	// See if we are crouching, and if so, smoothly apply the bonus
	const bool bIsCrouching = (CharMovementComp != nullptr) && CharMovementComp->IsCrouching();
	const float CrouchingTargetValue = bIsCrouching ? SpreadAngleMultiplier_Crouching : 1.0f;
	CrouchingMultiplier = FMath::FInterpTo(CrouchingMultiplier, CrouchingTargetValue, DeltaSeconds, TransitionRate_Crouching);
	const bool bCrouchingMultiplierAtTarget = FMath::IsNearlyEqual(CrouchingMultiplier, CrouchingTargetValue, MultiplierNearlyEqualThreshold);

	// See if we are in the air (jumping/falling), and if so, smoothly apply the penalty
	const bool bIsJumpingOrFalling = (CharMovementComp != nullptr) && CharMovementComp->IsFalling();
	const float JumpFallTargetValue = bIsJumpingOrFalling ? SpreadAngleMultiplier_JumpingOrFalling : 1.0f;
	JumpFallMultiplier = FMath::FInterpTo(JumpFallMultiplier, JumpFallTargetValue, DeltaSeconds, TransitionRate_JumpingOrFalling);
	const bool bJumpFallMultiplerIs1 = FMath::IsNearlyEqual(JumpFallMultiplier, 1.0f, MultiplierNearlyEqualThreshold);

	// Determine if we are aiming down sights, and apply the bonus based on how far into the camera transition we are
	float AimingAlpha = 0.0f;
	if (const ULyraCameraComponent* CameraComponent = ULyraCameraComponent::FindCameraComponent(Pawn))
	{
		float TopCameraWeight;
		FGameplayTag TopCameraTag;
		CameraComponent->GetBlendInfo(/*out*/ TopCameraWeight, /*out*/ TopCameraTag);

		AimingAlpha = (TopCameraTag == TAG_Lyra_Weapon_SteadyAimingCamera) ? TopCameraWeight : 0.0f;
	}
	const float AimingMultiplier = FMath::GetMappedRangeValueClamped(
		/*InputRange=*/ FVector2D(0.0f, 1.0f),
		/*OutputRange=*/ FVector2D(1.0f, SpreadAngleMultiplier_Aiming),
		/*Alpha=*/ AimingAlpha);
	const bool bAimingMultiplierAtTarget = FMath::IsNearlyEqual(AimingMultiplier, SpreadAngleMultiplier_Aiming, KINDA_SMALL_NUMBER);

	// Combine all the multipliers
	const float CombinedMultiplier = AimingMultiplier * StandingStillMultiplier * CrouchingMultiplier * JumpFallMultiplier;
	CurrentSpreadAngleMultiplier = CombinedMultiplier;

	// need to handle these spread multipliers indicating we are not at min spread
	return bStandingStillMultiplierAtMin && bCrouchingMultiplierAtTarget && bJumpFallMultiplerIs1 && bAimingMultiplierAtTarget;
}

void ULyraRangedWeaponInstance::ApplyRecoil()
{
	APawn* Pawn = GetPawn();
	if (Pawn == nullptr)
	{
		return;
	}

	// Recoil is a local-view-only effect: it only applies to locally-controlled players with a real PlayerController.
	APlayerController* PC = Cast<APlayerController>(Pawn->GetController());
	if (PC == nullptr || !PC->IsLocalController())
	{
		return;
	}

	const float PitchDelta = FMath::FRandRange(RecoilPitchMin, RecoilPitchMax);
	const float YawDelta = FMath::FRandRange(RecoilYawMin, RecoilYawMax);

	// 直接修改 ControlRotation，确保配置值始终表示真实角度，不受输入缩放、
	// 控制台焦点或输入处理 Tick 顺序影响。UE 中负 Pitch 表示视角向上。
	FRotator NewControlRotation = PC->GetControlRotation();
	NewControlRotation.Pitch -= PitchDelta;
	NewControlRotation.Yaw += YawDelta;
	NewControlRotation.Normalize();
	PC->SetControlRotation(NewControlRotation);

	// 累计待回弹的量(始终为正值,代表视角被向上推开的幅度),
	// 供 UpdateRecoilRecovery 在后续若干帧里反向施加 +PitchRecover 把视角拉回原位。
	PendingRecoilPitch += PitchDelta;
	PendingRecoilYaw += YawDelta;
	StartRecoilRecoveryTimer();
}

void ULyraRangedWeaponInstance::UpdateRecoilRecovery(float DeltaSeconds)
{
	if (!HasPendingRecoil() || (DeltaSeconds <= 0.0f))
	{
		return;
	}

	APawn* Pawn = GetPawn();
	if (Pawn == nullptr)
	{
		return;
	}

	APlayerController* PC = Cast<APlayerController>(Pawn->GetController());
	if (PC == nullptr || !PC->IsLocalController())
	{
		// Non-local controller (e.g. simulated proxy or AI) - just decay the pending amounts without applying inputs.
		PendingRecoilPitch = FMath::FInterpTo(PendingRecoilPitch, 0.0f, DeltaSeconds, RecoilRecoveryRate);
		PendingRecoilYaw = FMath::FInterpTo(PendingRecoilYaw, 0.0f, DeltaSeconds, RecoilRecoveryRate);
		return;
	}

	// 计算本帧应当回弹的量(Pending 向 0 衰减的差值)。
	const float NewPendingPitch = FMath::FInterpTo(PendingRecoilPitch, 0.0f, DeltaSeconds, RecoilRecoveryRate);
	const float NewPendingYaw = FMath::FInterpTo(PendingRecoilYaw, 0.0f, DeltaSeconds, RecoilRecoveryRate);

	const float PitchRecover = PendingRecoilPitch - NewPendingPitch;
	const float YawRecover = PendingRecoilYaw - NewPendingYaw;

	// ApplyRecoil 使用 -PitchDelta / +YawDelta，因此恢复使用相反的实际角度。
	FRotator NewControlRotation = PC->GetControlRotation();
	NewControlRotation.Pitch += PitchRecover;
	NewControlRotation.Yaw -= YawRecover;
	NewControlRotation.Normalize();
	PC->SetControlRotation(NewControlRotation);

	PendingRecoilPitch = NewPendingPitch;
	PendingRecoilYaw = NewPendingYaw;

	if (FMath::IsNearlyZero(PendingRecoilPitch, 0.001f) && FMath::IsNearlyZero(PendingRecoilYaw, 0.001f))
	{
		PendingRecoilPitch = 0.0f;
		PendingRecoilYaw = 0.0f;
		StopRecoilRecoveryTimer();
	}
}

void ULyraRangedWeaponInstance::StartRecoilRecoveryTimer()
{
	if (UWorld* World = GetWorld())
	{
		FTimerManager& TimerManager = World->GetTimerManager();
		if (!TimerManager.IsTimerActive(RecoilRecoveryTimerHandle))
		{
			TimerManager.SetTimer(
				RecoilRecoveryTimerHandle,
				this,
				&ThisClass::OnRecoilRecoveryTimerTick,
				RecoilRecoveryTickInterval,
				/*bLoop=*/ true);
		}
	}
}

void ULyraRangedWeaponInstance::StopRecoilRecoveryTimer()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(RecoilRecoveryTimerHandle);
	}
	else
	{
		RecoilRecoveryTimerHandle.Invalidate();
	}
}

void ULyraRangedWeaponInstance::OnRecoilRecoveryTimerTick()
{
	if (UWorld* World = GetWorld())
	{
		UpdateRecoilRecovery(World->GetDeltaSeconds());
	}
	else
	{
		StopRecoilRecoveryTimer();
	}
}

