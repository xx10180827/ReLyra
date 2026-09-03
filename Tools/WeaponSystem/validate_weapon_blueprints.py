import math
import traceback

import unreal


ROOT = "/Game/WeaponSystem"

PATHS = {
    "input_config": "/Game/Input/InputData_Hero.InputData_Hero",
    "keyboard_mapping": "/Game/Input/Mappings/IMC_Default_KBM.IMC_Default_KBM",
    "reload_action": "/Game/Input/Actions/IA_Weapon_Reload.IA_Weapon_Reload",
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
    "test_map": ROOT + "/Maps/L_WS_WeaponTest",
    "rifle_reload_montage": "/Game/Weapons/Rifle/Animations/AM_MM_Rifle_Reload.AM_MM_Rifle_Reload",
    "shotgun_reload_montage": "/Game/Weapons/Shotgun/Animations/AM_MM_Shotgun_Reload.AM_MM_Shotgun_Reload",
    "shotgun_hold_layer": "/Game/Characters/Heroes/Mannequin/Animations/Locomotion/Shotgun/ABP_ShotgunAnimLayers",
    "shotgun_hold_layer_feminine": "/Game/Characters/Heroes/Mannequin/Animations/Locomotion/Shotgun/ABP_ShotgunAnimLayers_Feminine",
}


def log(message):
    unreal.log_warning("WEAPON_ASSET_VALIDATE " + message)


def require(condition, message):
    if not condition:
        raise AssertionError(message)


def path_name(value):
    if value is None:
        return "None"
    return value.get_path_name()


def struct_name(value, property_name):
    return str(value.get_editor_property(property_name))


def load_asset(asset_path):
    leaf = asset_path.rsplit("/", 1)[-1]
    object_path = asset_path if "." in leaf else asset_path + "." + leaf
    asset = unreal.load_object(None, object_path)
    require(asset is not None, "Missing asset: " + asset_path)
    return asset


def load_class(asset_path):
    generated_class = unreal.EditorAssetLibrary.load_blueprint_class(asset_path)
    require(generated_class is not None, "Missing Blueprint class: " + asset_path)
    return generated_class


def check_equal(label, actual, expected):
    require(actual == expected, "{} expected {!r}, got {!r}".format(label, expected, actual))
    log("PASS {}={}".format(label, actual))


def check_float(label, actual, expected):
    require(math.isclose(float(actual), float(expected), rel_tol=0.0, abs_tol=0.0001),
            "{} expected {}, got {}".format(label, expected, actual))
    log("PASS {}={}".format(label, actual))


def check_child(label, generated_class, native_path):
    native_class = unreal.load_class(None, native_path)
    require(native_class is not None, "Missing native class: " + native_path)
    generated_type = unreal.get_type_from_class(generated_class)
    native_type = unreal.get_type_from_class(native_class)
    require(issubclass(generated_type, native_type),
            "{} is not a child of {}".format(path_name(generated_class), native_path))
    log("PASS {} child-of {}".format(label, native_path))


def validate_input():
    input_config = load_asset(PATHS["input_config"])
    reload_action_path = path_name(load_asset(PATHS["reload_action"]))
    matching_tags = []
    for entry in input_config.get_editor_property("ability_input_actions"):
        action = entry.get_editor_property("input_action")
        if action and path_name(action) == reload_action_path:
            matching_tags.append(struct_name(entry.get_editor_property("input_tag"), "tag_name"))
    check_equal("Input.ReloadActionCount", len(matching_tags), 1)
    check_equal("Input.ReloadTag", matching_tags[0], "InputTag.Weapon.Reload")

    mapping_context = load_asset(PATHS["keyboard_mapping"])
    reload_keys = []
    for mapping in mapping_context.get_editor_property("mappings"):
        action = mapping.get_editor_property("action")
        if action and path_name(action) == reload_action_path:
            reload_keys.append(struct_name(mapping.get_editor_property("key"), "key_name"))
    require("R" in reload_keys, "IA_Weapon_Reload is not mapped to R")
    log("PASS Input.ReloadKeys={}".format(reload_keys))


def validate_reload_ability(label, asset_path, montage_path):
    blueprint = load_asset(asset_path)
    unreal.BlueprintEditorLibrary.compile_blueprint(blueprint)
    generated_class = load_class(asset_path)
    check_child(label, generated_class, "/Script/LyraGame.LyraGameplayAbility_Reload")
    default_object = unreal.get_default_object(generated_class)
    check_equal(label + ".ActivationPolicy",
                default_object.get_editor_property("activation_policy"),
                unreal.LyraAbilityActivationPolicy.ON_INPUT_TRIGGERED)
    check_equal(label + ".ActivationGroup",
                default_object.get_editor_property("activation_group"),
                unreal.LyraAbilityActivationGroup.EXCLUSIVE_REPLACEABLE)
    check_equal(label + ".ReloadMontage",
                path_name(default_object.get_editor_property("reload_montage")),
                path_name(load_asset(montage_path)))
    return generated_class


def validate_ability_set(label, asset_path, reload_class):
    ability_set = load_asset(asset_path)
    entries = list(ability_set.get_editor_property("granted_gameplay_abilities"))
    check_equal(label + ".AbilityCount", len(entries), 2)
    require("GA_Weapon_Fire" in path_name(entries[0].get_editor_property("ability")),
            label + " fire ability is missing")
    check_equal(label + ".FireTag",
                struct_name(entries[0].get_editor_property("input_tag"), "tag_name"),
                "InputTag.Weapon.FireAuto")
    check_equal(label + ".ReloadAbility",
                path_name(entries[1].get_editor_property("ability")), path_name(reload_class))
    check_equal(label + ".ReloadTag",
                struct_name(entries[1].get_editor_property("input_tag"), "tag_name"),
                "InputTag.Weapon.Reload")
    return ability_set


def validate_weapon_instance(label, asset_path, native_path, expected):
    blueprint = load_asset(asset_path)
    unreal.BlueprintEditorLibrary.compile_blueprint(blueprint)
    generated_class = load_class(asset_path)
    check_child(label, generated_class, native_path)
    default_object = unreal.get_default_object(generated_class)
    for property_name, expected_value in expected.items():
        actual = default_object.get_editor_property(property_name)
        if isinstance(expected_value, float):
            check_float(label + "." + property_name, actual, expected_value)
        else:
            check_equal(label + "." + property_name, actual, expected_value)
    return generated_class


def validate_equipment(label, asset_path, instance_class, ability_set):
    blueprint = load_asset(asset_path)
    unreal.BlueprintEditorLibrary.compile_blueprint(blueprint)
    generated_class = load_class(asset_path)
    default_object = unreal.get_default_object(generated_class)
    check_equal(label + ".InstanceType",
                path_name(default_object.get_editor_property("instance_type")),
                path_name(instance_class))
    ability_sets = list(default_object.get_editor_property("ability_sets_to_grant"))
    check_equal(label + ".AbilitySetCount", len(ability_sets), 1)
    check_equal(label + ".AbilitySet", path_name(ability_sets[0]), path_name(ability_set))
    return generated_class


def validate_item(label, asset_path, equipment_class):
    blueprint = load_asset(asset_path)
    unreal.BlueprintEditorLibrary.compile_blueprint(blueprint)
    generated_class = load_class(asset_path)
    default_object = unreal.get_default_object(generated_class)
    found = False
    for fragment in default_object.get_editor_property("fragments"):
        if fragment and fragment.get_class().get_name() == "InventoryFragment_EquippableItem":
            fragment_type = unreal.get_type_from_class(fragment.get_class())
            typed_fragment = fragment_type.cast(fragment)
            check_equal(label + ".EquipmentDefinition",
                        path_name(typed_fragment.get_editor_property("equipment_definition")),
                        path_name(equipment_class))
            found = True
            break
    require(found, label + " has no equippable fragment")
    return generated_class


def validate_shotgun_hold_layers(shotgun_class):
    default_object = unreal.get_default_object(shotgun_class)
    equipped_set = default_object.get_editor_property("equipped_anim_set")
    check_equal(
        "ShotgunInstance.HoldDefaultLayer",
        path_name(equipped_set.get_editor_property("default_layer")),
        path_name(load_class(PATHS["shotgun_hold_layer"])),
    )
    rules = list(equipped_set.get_editor_property("layer_rules"))
    check_equal("ShotgunInstance.HoldLayerRuleCount", len(rules), 1)
    check_equal(
        "ShotgunInstance.HoldFeminineLayer",
        path_name(rules[0].get_editor_property("layer")),
        path_name(load_class(PATHS["shotgun_hold_layer_feminine"])),
    )


def validate_pickup(label, asset_path, item_class):
    pickup = load_asset(asset_path)
    check_equal(label + ".InventoryItemDefinition",
                path_name(pickup.get_editor_property("inventory_item_definition")),
                path_name(item_class))


def validate_test_map():
    require(unreal.EditorLevelLibrary.load_level(PATHS["test_map"]),
            "Failed to load test map")
    actors = list(unreal.EditorLevelLibrary.get_all_level_actors())
    spawner_class = unreal.load_class(None, "/Script/LyraGame.LyraWeaponSpawner")
    player_start_class = unreal.load_class(None, "/Script/Engine.PlayerStart")
    spawner_type = unreal.get_type_from_class(spawner_class)
    player_start_type = unreal.get_type_from_class(player_start_class)

    spawners = {}
    player_start_count = 0
    for actor in actors:
        actor_type = unreal.get_type_from_class(actor.get_class())
        if issubclass(actor_type, spawner_type):
            spawners[actor.get_actor_label()] = spawner_type.cast(actor)
        if issubclass(actor_type, player_start_type):
            player_start_count += 1

    check_equal("TestMap.RiflePickup",
                path_name(spawners["WS_Rifle_Pickup"].get_editor_property("weapon_definition")),
                path_name(load_asset(PATHS["rifle_pickup"])))
    check_equal("TestMap.ShotgunPickup",
                path_name(spawners["WS_Shotgun_Pickup"].get_editor_property("weapon_definition")),
                path_name(load_asset(PATHS["shotgun_pickup"])))
    require(player_start_count > 0, "Test map has no PlayerStart-derived actor")
    log("PASS TestMap.PlayerStarts={}".format(player_start_count))


def main():
    validate_input()

    rifle_reload = validate_reload_ability(
        "RifleReload", PATHS["rifle_reload"], PATHS["rifle_reload_montage"]
    )
    shotgun_reload = validate_reload_ability(
        "ShotgunReload", PATHS["shotgun_reload"], PATHS["shotgun_reload_montage"]
    )
    rifle_ability_set = validate_ability_set(
        "RifleAbilitySet", PATHS["rifle_ability_set"], rifle_reload
    )
    shotgun_ability_set = validate_ability_set(
        "ShotgunAbilitySet", PATHS["shotgun_ability_set"], shotgun_reload
    )

    rifle_instance = validate_weapon_instance(
        "RifleInstance", PATHS["rifle_instance"],
        "/Script/LyraGame.LyraRangedWeaponInstance",
        {
            "use_finite_ammo_system": True,
            "max_ammo": 30,
            "max_reserve_ammo": 90,
            "reload_time": 2.0,
            "recoil_pitch_min": 0.3,
            "recoil_pitch_max": 0.8,
            "recoil_yaw_min": -0.2,
            "recoil_yaw_max": 0.2,
            "recoil_recovery_rate": 6.0,
        },
    )
    shotgun_instance = validate_weapon_instance(
        "ShotgunInstance", PATHS["shotgun_instance"],
        "/Script/LyraGame.LyraShotgunWeaponInstance",
        {
            "use_finite_ammo_system": True,
            "max_ammo": 6,
            "max_reserve_ammo": 24,
            "reload_time": 2.5,
            "pellet_count": 8,
            "bullets_per_cartridge": 8,
            "spread_angle": 5.0,
            "recoil_pitch_min": 1.2,
            "recoil_pitch_max": 2.0,
            "recoil_yaw_min": -0.65,
            "recoil_yaw_max": 0.65,
            "recoil_recovery_rate": 5.0,
        },
    )
    validate_shotgun_hold_layers(shotgun_instance)

    rifle_equipment = validate_equipment(
        "RifleEquipment", PATHS["rifle_equipment"], rifle_instance, rifle_ability_set
    )
    shotgun_equipment = validate_equipment(
        "ShotgunEquipment", PATHS["shotgun_equipment"], shotgun_instance, shotgun_ability_set
    )
    rifle_item = validate_item("RifleItem", PATHS["rifle_item"], rifle_equipment)
    shotgun_item = validate_item("ShotgunItem", PATHS["shotgun_item"], shotgun_equipment)
    validate_pickup("RiflePickup", PATHS["rifle_pickup"], rifle_item)
    validate_pickup("ShotgunPickup", PATHS["shotgun_pickup"], shotgun_item)
    validate_test_map()

    log("COMPLETE")


try:
    main()
except Exception:
    unreal.log_error("WEAPON_ASSET_VALIDATE FAILED\n" + traceback.format_exc())
    raise
