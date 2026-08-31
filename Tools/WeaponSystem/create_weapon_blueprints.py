import traceback

import unreal


ROOT = "/Game/WeaponSystem"

SOURCE = {
    "rifle_ability_set": "/ShooterCore/Weapons/Rifle/AbilitySet_ShooterRifle",
    "shotgun_ability_set": "/ShooterCore/Weapons/Shotgun/AbilitySet_ShooterShotgun",
    "rifle_instance": "/ShooterCore/Weapons/Rifle/B_WeaponInstance_Rifle",
    "shotgun_instance": "/ShooterCore/Weapons/Shotgun/B_WeaponInstance_Shotgun",
    "rifle_equipment": "/ShooterCore/Weapons/Rifle/WID_Rifle",
    "shotgun_equipment": "/ShooterCore/Weapons/Shotgun/WID_Shotgun",
    "rifle_item": "/ShooterCore/Weapons/Rifle/ID_Rifle",
    "shotgun_item": "/ShooterCore/Weapons/Shotgun/ID_Shotgun",
    "rifle_pickup": "/ShooterCore/Weapons/Rifle/WeaponPickupData_Rifle",
    "shotgun_pickup": "/ShooterCore/Weapons/Shotgun/WeaponPickupData_Shotgun",
    "rifle_reload_montage": "/Game/Weapons/Rifle/Animations/AM_Weap_Rifle_Reload",
    "shotgun_reload_montage": "/Game/Weapons/Shotgun/Animations/AM_Weap_Shotgun_Reload",
}

DEST = {
    "rifle_reload": ROOT + "/Abilities/GA_WS_Reload_Rifle",
    "shotgun_reload": ROOT + "/Abilities/GA_WS_Reload_Shotgun",
    "rifle_ability_set": ROOT + "/Weapons/Rifle/AbilitySet_WS_Rifle",
    "shotgun_ability_set": ROOT + "/Weapons/Shotgun/AbilitySet_WS_Shotgun",
    "rifle_instance": ROOT + "/Weapons/Rifle/B_WS_WeaponInstance_Rifle",
    "shotgun_instance": ROOT + "/Weapons/Shotgun/B_WS_WeaponInstance_Shotgun",
    "rifle_equipment": ROOT + "/Weapons/Rifle/WID_WS_Rifle",
    "shotgun_equipment": ROOT + "/Weapons/Shotgun/WID_WS_Shotgun",
    "rifle_item": ROOT + "/Weapons/Rifle/ID_WS_Rifle",
    "shotgun_item": ROOT + "/Weapons/Shotgun/ID_WS_Shotgun",
    "rifle_pickup": ROOT + "/Weapons/Rifle/WeaponPickupData_WS_Rifle",
    "shotgun_pickup": ROOT + "/Weapons/Shotgun/WeaponPickupData_WS_Shotgun",
}


def log(message):
    unreal.log_warning("WEAPON_ASSET_CREATE " + message)


def require(value, message):
    if value is None or value is False:
        raise RuntimeError(message)
    return value


def asset_label(value):
    if value is None:
        return "None"
    try:
        return value.get_path_name()
    except Exception:
        return str(value)


def split_asset_path(asset_path):
    folder, name = asset_path.rsplit("/", 1)
    return folder, name


def load_asset(asset_path):
    return require(unreal.EditorAssetLibrary.load_asset(asset_path), "Missing asset: " + asset_path)


def load_blueprint_class(asset_path):
    return require(
        unreal.EditorAssetLibrary.load_blueprint_class(asset_path),
        "Missing Blueprint generated class: " + asset_path,
    )


def compile_blueprint(blueprint):
    require(hasattr(unreal, "BlueprintEditorLibrary"), "BlueprintEditorLibrary is unavailable")
    unreal.BlueprintEditorLibrary.compile_blueprint(blueprint)


def ensure_blueprint(asset_path, parent_class):
    if unreal.EditorAssetLibrary.does_asset_exist(asset_path):
        blueprint = load_asset(asset_path)
        log("REUSE " + asset_path)
    else:
        folder, name = split_asset_path(asset_path)
        unreal.EditorAssetLibrary.make_directory(folder)
        factory = unreal.BlueprintFactory()
        factory.set_editor_property("parent_class", parent_class)
        blueprint = unreal.AssetToolsHelpers.get_asset_tools().create_asset(
            name, folder, unreal.Blueprint, factory
        )
        require(blueprint, "Failed to create Blueprint: " + asset_path)
        log("CREATE " + asset_path)

    compile_blueprint(blueprint)
    return blueprint


def ensure_duplicate(source_path, destination_path):
    if unreal.EditorAssetLibrary.does_asset_exist(destination_path):
        asset = load_asset(destination_path)
        log("REUSE " + destination_path)
        return asset

    folder, _ = split_asset_path(destination_path)
    unreal.EditorAssetLibrary.make_directory(folder)
    asset = unreal.EditorAssetLibrary.duplicate_asset(source_path, destination_path)
    require(asset, "Failed to duplicate {} -> {}".format(source_path, destination_path))
    log("DUPLICATE {} -> {}".format(source_path, destination_path))
    return asset


def save_asset(asset_path):
    require(
        unreal.EditorAssetLibrary.save_asset(asset_path, only_if_is_dirty=False),
        "Failed to save asset: " + asset_path,
    )


def configure_reload_ability(asset_path, montage_path):
    ability_class = load_blueprint_class(asset_path)
    default_object = unreal.get_default_object(ability_class)
    default_object.set_editor_property("activation_policy", unreal.LyraAbilityActivationPolicy.ON_INPUT_TRIGGERED)
    default_object.set_editor_property(
        "activation_group", unreal.LyraAbilityActivationGroup.EXCLUSIVE_REPLACEABLE
    )
    default_object.set_editor_property("reload_montage", load_asset(montage_path))
    save_asset(asset_path)
    log("CONFIG {} Montage={}".format(asset_path, montage_path))
    return ability_class


def configure_ability_set(asset_path, reload_ability_class):
    ability_set = load_asset(asset_path)
    entries = list(ability_set.get_editor_property("granted_gameplay_abilities"))
    require(len(entries) >= 2, asset_path + " must contain the source fire and reload entries")

    # Preserve the source weapon's fire ability and InputTag, replace only reload,
    # and intentionally omit the legacy automatic-reload entry.
    entries[1].set_editor_property("ability", reload_ability_class)
    ability_set.set_editor_property("granted_gameplay_abilities", entries[:2])
    save_asset(asset_path)
    log("CONFIG {} GrantedAbilities=2 Reload={}".format(asset_path, asset_label(reload_ability_class)))
    return ability_set


def configure_weapon_instance(
    asset_path,
    max_ammo,
    max_reserve_ammo,
    reload_time,
    recoil_pitch_min,
    recoil_pitch_max,
    recoil_yaw_min,
    recoil_yaw_max,
    recoil_recovery_rate,
    pellet_count=None,
    spread_angle=None,
):
    weapon_class = load_blueprint_class(asset_path)
    default_object = unreal.get_default_object(weapon_class)
    values = {
        "max_ammo": max_ammo,
        "max_reserve_ammo": max_reserve_ammo,
        "reload_time": reload_time,
        "recoil_pitch_min": recoil_pitch_min,
        "recoil_pitch_max": recoil_pitch_max,
        "recoil_yaw_min": recoil_yaw_min,
        "recoil_yaw_max": recoil_yaw_max,
        "recoil_recovery_rate": recoil_recovery_rate,
    }
    if pellet_count is not None:
        values["pellet_count"] = pellet_count
        values["bullets_per_cartridge"] = pellet_count
    if spread_angle is not None:
        values["spread_angle"] = spread_angle

    for property_name, value in values.items():
        default_object.set_editor_property(property_name, value)

    save_asset(asset_path)
    log("CONFIG {} Ammo={}/{} Reload={} RecoilPitch={}-{}".format(
        asset_path,
        max_ammo,
        max_reserve_ammo,
        reload_time,
        recoil_pitch_min,
        recoil_pitch_max,
    ))
    return weapon_class


def configure_equipment(asset_path, instance_class, ability_set):
    equipment_class = load_blueprint_class(asset_path)
    default_object = unreal.get_default_object(equipment_class)
    default_object.set_editor_property("instance_type", instance_class)
    default_object.set_editor_property("ability_sets_to_grant", [ability_set])
    save_asset(asset_path)
    log("CONFIG {} Instance={} AbilitySet={}".format(
        asset_path, asset_label(instance_class), asset_label(ability_set)
    ))
    return equipment_class


def configure_item(asset_path, equipment_class):
    item_class = load_blueprint_class(asset_path)
    default_object = unreal.get_default_object(item_class)
    fragments = list(default_object.get_editor_property("fragments"))
    configured = False
    for fragment in fragments:
        if fragment and fragment.get_class().get_name() == "InventoryFragment_EquippableItem":
            equippable_type = unreal.get_type_from_class(fragment.get_class())
            equippable_fragment = equippable_type.cast(fragment)
            equippable_fragment.set_editor_property("equipment_definition", equipment_class)
            configured = True
            log("CONFIG {} EquippableFragment={}".format(asset_path, asset_label(equipment_class)))
            break
    require(configured, asset_path + " has no InventoryFragment_EquippableItem")
    save_asset(asset_path)
    return item_class


def configure_pickup(asset_path, item_class):
    pickup = load_asset(asset_path)
    pickup.set_editor_property("inventory_item_definition", item_class)
    save_asset(asset_path)
    log("CONFIG {} InventoryItemDefinition={}".format(asset_path, asset_label(item_class)))


def main():
    reload_parent = require(
        unreal.load_class(None, "/Script/LyraGame.LyraGameplayAbility_Reload"),
        "Missing native class LyraGameplayAbility_Reload",
    )
    shotgun_parent = require(
        unreal.load_class(None, "/Script/LyraGame.LyraShotgunWeaponInstance"),
        "Missing native class LyraShotgunWeaponInstance",
    )

    ensure_blueprint(DEST["rifle_reload"], reload_parent)
    ensure_blueprint(DEST["shotgun_reload"], reload_parent)
    rifle_reload_class = configure_reload_ability(
        DEST["rifle_reload"], SOURCE["rifle_reload_montage"]
    )
    shotgun_reload_class = configure_reload_ability(
        DEST["shotgun_reload"], SOURCE["shotgun_reload_montage"]
    )

    ensure_duplicate(SOURCE["rifle_ability_set"], DEST["rifle_ability_set"])
    ensure_duplicate(SOURCE["shotgun_ability_set"], DEST["shotgun_ability_set"])
    rifle_ability_set = configure_ability_set(DEST["rifle_ability_set"], rifle_reload_class)
    shotgun_ability_set = configure_ability_set(DEST["shotgun_ability_set"], shotgun_reload_class)

    rifle_instance_blueprint = ensure_duplicate(SOURCE["rifle_instance"], DEST["rifle_instance"])
    shotgun_instance_blueprint = ensure_duplicate(SOURCE["shotgun_instance"], DEST["shotgun_instance"])
    unreal.BlueprintEditorLibrary.reparent_blueprint(shotgun_instance_blueprint, shotgun_parent)
    compile_blueprint(rifle_instance_blueprint)
    compile_blueprint(shotgun_instance_blueprint)

    rifle_instance_class = configure_weapon_instance(
        DEST["rifle_instance"], 30, 90, 2.0, 0.3, 0.8, -0.2, 0.2, 6.0
    )
    shotgun_instance_class = configure_weapon_instance(
        DEST["shotgun_instance"], 6, 24, 2.5, 1.2, 2.0, -0.65, 0.65, 5.0, 8, 5.0
    )

    rifle_equipment_blueprint = ensure_duplicate(SOURCE["rifle_equipment"], DEST["rifle_equipment"])
    shotgun_equipment_blueprint = ensure_duplicate(SOURCE["shotgun_equipment"], DEST["shotgun_equipment"])
    compile_blueprint(rifle_equipment_blueprint)
    compile_blueprint(shotgun_equipment_blueprint)
    rifle_equipment_class = configure_equipment(
        DEST["rifle_equipment"], rifle_instance_class, rifle_ability_set
    )
    shotgun_equipment_class = configure_equipment(
        DEST["shotgun_equipment"], shotgun_instance_class, shotgun_ability_set
    )

    rifle_item_blueprint = ensure_duplicate(SOURCE["rifle_item"], DEST["rifle_item"])
    shotgun_item_blueprint = ensure_duplicate(SOURCE["shotgun_item"], DEST["shotgun_item"])
    compile_blueprint(rifle_item_blueprint)
    compile_blueprint(shotgun_item_blueprint)
    rifle_item_class = configure_item(DEST["rifle_item"], rifle_equipment_class)
    shotgun_item_class = configure_item(DEST["shotgun_item"], shotgun_equipment_class)

    ensure_duplicate(SOURCE["rifle_pickup"], DEST["rifle_pickup"])
    ensure_duplicate(SOURCE["shotgun_pickup"], DEST["shotgun_pickup"])
    configure_pickup(DEST["rifle_pickup"], rifle_item_class)
    configure_pickup(DEST["shotgun_pickup"], shotgun_item_class)

    log("COMPLETE Assets={}".format(len(DEST)))


try:
    main()
except Exception:
    unreal.log_error("WEAPON_ASSET_CREATE FAILED\n" + traceback.format_exc())
    raise
