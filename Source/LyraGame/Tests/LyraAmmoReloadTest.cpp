// Copyright Epic Games, Inc. All Rights Reserved.

#include "Misc/AutomationTest.h"
#include "Inventory/LyraInventoryItemInstance.h"
#include "Weapons/LyraRangedWeaponInstance.h"
#include "Weapons/LyraShotgunWeaponInstance.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FLyraRangedWeaponAmmoTest,
	"Lyra.Weapons.Ranged.Ammo",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter
)

/**
 * 步枪弹药状态机的 Mock 单元测试。
 *
 * 不依赖 World / Pawn,直接构造一个瞬态 ULyraRangedWeaponInstance,
 * 验证开火 + 有限备弹换弹流程的关键状态机契约:
 *   - 装备后弹匣是满的, CanFire() 返回 true
 *   - ConsumeAmmo(1) 每次扣 1 发, 钳制在 0
 *   - 弹匣打空后 CanFire() 翻转为 false (这是 ULyraGameplayAbility_RangedWeapon::CanActivateAbility 的拦截条件)
 *   - ReloadAmmo() 按 Min(弹匣缺口, 当前备弹) 转移弹药
 *   - 备弹不足时全部装入弹匣, 备弹耗尽后禁止换弹
 *
 * 不调用 OnEquipped(): 基类 ULyraEquipmentInstance::OnEquipped 依赖 Instigator/SpawnArea,
 * 在隔离单元测试中不安全。CDO 默认值 MaxAmmo=30 / CurrentAmmo=30 已等价于"刚装备"状态。
 */
bool FLyraRangedWeaponAmmoTest::RunTest(const FString& Parameters)
{
	ULyraRangedWeaponInstance* Weapon = NewObject<ULyraRangedWeaponInstance>(GetTransientPackage());
	TestNotNull(TEXT("应当能在无 World 环境下构造武器实例"), Weapon);
	if (!Weapon)
	{
		return false;
	}
	Weapon->SetFiniteAmmoSystemEnabled(true);

	// --- 阶段 0: 初始状态 ---------------------------------------------------------
	TestEqual(TEXT("步枪弹匣容量默认应为 30"), Weapon->GetMaxAmmo(), 30);
	TestEqual(TEXT("步枪初始弹匣应为 30"), Weapon->GetCurrentAmmo(), 30);
	TestEqual(TEXT("步枪备弹容量默认应为 90"), Weapon->GetMaxReserveAmmo(), 90);
	TestEqual(TEXT("步枪初始备弹应为 90"), Weapon->GetCurrentReserveAmmo(), 90);
	TestTrue(TEXT("满弹状态下应当可以开火"), Weapon->CanFire());
	TestFalse(TEXT("满弹状态下不应允许换弹"), Weapon->CanReload());

	// --- 阶段 1: 部分弹匣换弹 -----------------------------------------------------
	Weapon->ConsumeAmmo(10);
	TestEqual(TEXT("开 10 枪后 CurrentAmmo 应为 20"), Weapon->GetCurrentAmmo(), 20);
	TestTrue(TEXT("弹匣存在缺口且有备弹时应允许换弹"), Weapon->CanReload());
	TestEqual(TEXT("部分换弹应装入缺少的 10 发"), Weapon->ReloadAmmo(), 10);
	TestEqual(TEXT("部分换弹后弹匣应回到 30"), Weapon->GetCurrentAmmo(), 30);
	TestEqual(TEXT("部分换弹后备弹应降为 80"), Weapon->GetCurrentReserveAmmo(), 80);

	// --- 阶段 2: 连续整弹匣换弹 ---------------------------------------------------
	Weapon->ConsumeAmmo(30);
	TestEqual(TEXT("第一次打空后应装入 30 发"), Weapon->ReloadAmmo(), 30);
	TestEqual(TEXT("第一次整弹匣换弹后备弹应为 50"), Weapon->GetCurrentReserveAmmo(), 50);

	Weapon->ConsumeAmmo(30);
	TestEqual(TEXT("第二次打空后应装入 30 发"), Weapon->ReloadAmmo(), 30);
	TestEqual(TEXT("第二次整弹匣换弹后备弹应为 20"), Weapon->GetCurrentReserveAmmo(), 20);

	// --- 阶段 3: 备弹不足时全部装入 -----------------------------------------------
	Weapon->ConsumeAmmo(30);
	TestEqual(TEXT("备弹不足时应把剩余 20 发全部装入"), Weapon->ReloadAmmo(), 20);
	TestEqual(TEXT("最后一次换弹后弹匣应为 20"), Weapon->GetCurrentAmmo(), 20);
	TestEqual(TEXT("最后一次换弹后备弹应为 0"), Weapon->GetCurrentReserveAmmo(), 0);
	TestFalse(TEXT("备弹耗尽后不应允许换弹"), Weapon->CanReload());

	// --- 阶段 4: 总弹药耗尽与边界 -------------------------------------------------
	Weapon->ConsumeAmmo(100);
	TestEqual(TEXT("过量消耗应把弹匣钳制在 0"), Weapon->GetCurrentAmmo(), 0);
	TestFalse(TEXT("总弹药耗尽后不应允许开火"), Weapon->CanFire());
	TestEqual(TEXT("无备弹时 ReloadAmmo 应装入 0 发"), Weapon->ReloadAmmo(), 0);
	Weapon->ConsumeAmmo(0);
	Weapon->ConsumeAmmo(-1);
	TestEqual(TEXT("非正数消耗应为 no-op"), Weapon->GetCurrentAmmo(), 0);

	// --- 阶段 5: 数值配置健全性 ---------------------------------------------------
	TestEqual(TEXT("默认 ReloadTime 应为 2.0 秒"), Weapon->GetReloadTime(), 2.0f);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FLyraRangedWeaponInventoryAmmoSyncTest,
	"Lyra.Weapons.Ranged.InventoryAmmoSync",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter
)

/**
 * 回归测试：Lyra 原生开火 Cost 使用 InventoryItem 的 MagazineAmmo 标签，
 * 自定义换弹使用武器实例的 CurrentAmmo。两者必须在换弹后保持一致，
 * 否则界面虽然显示满弹，开火仍会在换弹前的旧数量处被 Cost 拦截。
 */
bool FLyraRangedWeaponInventoryAmmoSyncTest::RunTest(const FString& Parameters)
{
	ULyraRangedWeaponInstance* Weapon = NewObject<ULyraRangedWeaponInstance>(GetTransientPackage());
	ULyraInventoryItemInstance* Item = NewObject<ULyraInventoryItemInstance>(GetTransientPackage());
	TestNotNull(TEXT("应当能构造武器实例"), Weapon);
	TestNotNull(TEXT("应当能构造库存物品实例"), Item);
	if (!Weapon || !Item)
	{
		return false;
	}
	Weapon->SetFiniteAmmoSystemEnabled(true);

	const FGameplayTag MagazineAmmoTag = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineAmmo"));
	const FGameplayTag MagazineSizeTag = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.MagazineSize"));
	const FGameplayTag SpareAmmoTag = FGameplayTag::RequestGameplayTag(TEXT("Lyra.ShooterGame.Weapon.SpareAmmo"));

	Item->AddStatTagStack(MagazineAmmoTag, 30);
	Item->AddStatTagStack(MagazineSizeTag, 30);
	Item->AddStatTagStack(SpareAmmoTag, 90);
	Weapon->SetInstigator(Item);

	// 模拟原生 Cost 与武器实例共同处理前 16 次开火，剩余 14 发。
	for (int32 ShotIndex = 0; ShotIndex < 16; ++ShotIndex)
	{
		Item->RemoveStatTagStack(MagazineAmmoTag, 1);
		Weapon->ConsumeAmmo(1);
	}
	TestEqual(TEXT("换弹前武器实例应剩余 14 发"), Weapon->GetCurrentAmmo(), 14);
	TestEqual(TEXT("换弹前原生 Cost 标签应剩余 14 发"), Item->GetStatTagStackCount(MagazineAmmoTag), 14);

	TestEqual(TEXT("换弹应装入 16 发"), Weapon->ReloadAmmo(), 16);
	TestEqual(TEXT("换弹后武器实例应为 30 发"), Weapon->GetCurrentAmmo(), 30);
	TestEqual(TEXT("换弹后原生 Cost 标签也必须恢复为 30 发"), Item->GetStatTagStackCount(MagazineAmmoTag), 30);
	TestEqual(TEXT("换弹后备弹标签应同步为 74 发"), Item->GetStatTagStackCount(SpareAmmoTag), 74);

	// 逐发模拟原生 Cost：换弹后的 30 发都必须能够通过检查并被消费。
	for (int32 ShotIndex = 0; ShotIndex < 30; ++ShotIndex)
	{
		TestTrue(FString::Printf(TEXT("换弹后第 %d 发开火前原生 Cost 应仍有弹药"), ShotIndex + 1),
			Item->GetStatTagStackCount(MagazineAmmoTag) >= 1);
		Item->RemoveStatTagStack(MagazineAmmoTag, 1);
		Weapon->ConsumeAmmo(1);
	}

	TestEqual(TEXT("换弹后的 30 发应全部能够打完"), Weapon->GetCurrentAmmo(), 0);
	TestEqual(TEXT("打完后原生 Cost 标签也应为 0"), Item->GetStatTagStackCount(MagazineAmmoTag), 0);

	// 模拟切走后重新创建 EquipmentInstance；备弹必须从同一个 InventoryItem 恢复，而不是回满。
	ULyraRangedWeaponInstance* ReequippedWeapon = NewObject<ULyraRangedWeaponInstance>(GetTransientPackage());
	ReequippedWeapon->SetFiniteAmmoSystemEnabled(true);
	ReequippedWeapon->SetInstigator(Item);
	TestEqual(TEXT("重新装备后空弹匣状态应保持"), ReequippedWeapon->GetCurrentAmmo(), 0);
	TestEqual(TEXT("重新装备后备弹应保持 74，不能自动恢复为 90"), ReequippedWeapon->GetCurrentReserveAmmo(), 74);

	// 回归保护：普通手枪仍使用自己的库存标签，不能被基类默认的 30/90 覆盖。
	ULyraRangedWeaponInstance* PistolWeapon = NewObject<ULyraRangedWeaponInstance>(GetTransientPackage());
	ULyraInventoryItemInstance* PistolItem = NewObject<ULyraInventoryItemInstance>(GetTransientPackage());
	PistolItem->AddStatTagStack(MagazineAmmoTag, 12);
	PistolItem->AddStatTagStack(MagazineSizeTag, 12);
	PistolItem->AddStatTagStack(SpareAmmoTag, 36);
	PistolWeapon->SetInstigator(PistolItem);
	TestEqual(TEXT("手枪装备后应保持自己的 12 发弹匣"), PistolWeapon->GetCurrentAmmo(), 12);
	PistolItem->RemoveStatTagStack(MagazineAmmoTag, 1);
	PistolWeapon->ConsumeAmmo(1);
	TestEqual(TEXT("手枪开火后应剩余 11 发"), PistolItem->GetStatTagStackCount(MagazineAmmoTag), 11);
	TestEqual(TEXT("手枪弹匣容量不能被覆盖为 30"), PistolItem->GetStatTagStackCount(MagazineSizeTag), 12);
	TestEqual(TEXT("手枪备弹不能被覆盖为 90"), PistolItem->GetStatTagStackCount(SpareAmmoTag), 36);

	return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
	FLyraShotgunDefaultsTest,
	"Lyra.Weapons.Shotgun.Defaults",
	EAutomationTestFlags::ApplicationContextMask | EAutomationTestFlags::ProductFilter
)

/**
 * 霰弹枪构造默认值的单元测试。
 *
 * 验证 ULyraShotgunWeaponInstance 构造函数默认值符合设计规格:
 *   - PelletCount = 8
 *   - SpreadAngle = 5.0 度
 *   - MaxAmmo = 6 (比步枪更小的弹匣)
 *   - MaxReserveAmmo = 24
 *   - ReloadTime = 2.5 秒 (比步枪略长)
 *
 * 不调用 OnEquipped(): 它依赖基类的装备/Pawn 状态;
 * 构造函数已经把 PelletCount -> BulletsPerCartridge 同步, 并种子化 HeatToSpreadCurve,
 * 这些是开火能力 (ULyraGameplayAbility_RangedWeapon) 消费的数据级契约。
 */
bool FLyraShotgunDefaultsTest::RunTest(const FString& Parameters)
{
	ULyraShotgunWeaponInstance* Shotgun = NewObject<ULyraShotgunWeaponInstance>(GetTransientPackage());
	TestNotNull(TEXT("霰弹枪实例应当可构造"), Shotgun);
	if (!Shotgun)
	{
		return false;
	}

	TestEqual(TEXT("PelletCount 默认值应为 8"), Shotgun->PelletCount, 8);
	TestEqual(TEXT("SpreadAngle 默认值应为 5.0 度"), Shotgun->SpreadAngle, 5.0f);
	TestEqual(TEXT("霰弹枪 MaxAmmo 默认值应为 6"), Shotgun->GetMaxAmmo(), 6);
	TestEqual(TEXT("霰弹枪 MaxReserveAmmo 默认值应为 24"), Shotgun->GetMaxReserveAmmo(), 24);
	TestEqual(TEXT("霰弹枪 ReloadTime 默认值应为 2.5 秒"), Shotgun->GetReloadTime(), 2.5f);
	TestEqual(TEXT("BulletsPerCartridge 应在构造函数中镜像 PelletCount"), Shotgun->GetBulletsPerCartridge(), Shotgun->PelletCount);

	// 派生类构造后运行时弹药必须与霰弹枪容量保持一致。
	TestEqual(TEXT("霰弹枪初始弹匣应为 6"), Shotgun->GetCurrentAmmo(), 6);
	TestEqual(TEXT("霰弹枪初始备弹应为 24"), Shotgun->GetCurrentReserveAmmo(), 24);
	TestTrue(TEXT("霰弹枪在默认 CurrentAmmo 下 CanFire() 应为 true"), Shotgun->CanFire());
	Shotgun->ConsumeAmmo(1);
	TestEqual(TEXT("开 1 枪霰弹后 CurrentAmmo 应为 5"), Shotgun->GetCurrentAmmo(), 5);
	TestEqual(TEXT("霰弹枪部分换弹应装入 1 发"), Shotgun->ReloadAmmo(), 1);
	TestEqual(TEXT("霰弹枪部分换弹后备弹应为 23"), Shotgun->GetCurrentReserveAmmo(), 23);

	// 打空再换弹, 确认继承的有限备弹流程对霰弹枪同样有效。
	Shotgun->ConsumeAmmo(6);
	TestEqual(TEXT("打空后 CurrentAmmo 应为 0"), Shotgun->GetCurrentAmmo(), 0);
	TestFalse(TEXT("霰弹枪空弹匣时 CanFire() 应为 false"), Shotgun->CanFire());
	TestEqual(TEXT("霰弹枪整弹匣换弹应装入 6 发"), Shotgun->ReloadAmmo(), 6);
	TestEqual(TEXT("霰弹枪换弹后 CurrentAmmo 应恢复为 6"), Shotgun->GetCurrentAmmo(), 6);
	TestEqual(TEXT("霰弹枪换弹后备弹应为 17"), Shotgun->GetCurrentReserveAmmo(), 17);

	return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
