import traceback

import unreal


SOURCE_MAP = "/ShooterCore/Maps/L_ShooterGym"
DESTINATION_MAP = "/Game/WeaponSystem/Maps/L_WS_WeaponTest"
RIFLE_PICKUP = "/Game/WeaponSystem/Weapons/Rifle/WeaponPickupData_WS_Rifle.WeaponPickupData_WS_Rifle"
SHOTGUN_PICKUP = "/Game/WeaponSystem/Weapons/Shotgun/WeaponPickupData_WS_Shotgun.WeaponPickupData_WS_Shotgun"


def log(message):
    unreal.log_warning("WEAPON_TEST_MAP " + message)


def require(value, message):
    if value is None or value is False:
        raise RuntimeError(message)
    return value


def is_weapon_spawner(actor, spawner_type):
    actor_type = unreal.get_type_from_class(actor.get_class())
    return issubclass(actor_type, spawner_type)


def main():
    if unreal.EditorAssetLibrary.does_asset_exist(DESTINATION_MAP):
        log("REUSE " + DESTINATION_MAP)
    else:
        unreal.EditorAssetLibrary.make_directory("/Game/WeaponSystem/Maps")
        require(
            unreal.EditorAssetLibrary.duplicate_asset(SOURCE_MAP, DESTINATION_MAP),
            "Failed to duplicate {} -> {}".format(SOURCE_MAP, DESTINATION_MAP),
        )
        log("DUPLICATE {} -> {}".format(SOURCE_MAP, DESTINATION_MAP))

    require(unreal.EditorLevelLibrary.load_level(DESTINATION_MAP),
            "Failed to load " + DESTINATION_MAP)

    spawner_class = require(
        unreal.load_class(None, "/Script/LyraGame.LyraWeaponSpawner"),
        "Missing LyraWeaponSpawner class",
    )
    spawner_type = unreal.get_type_from_class(spawner_class)
    rifle_pickup = require(unreal.load_object(None, RIFLE_PICKUP), "Missing " + RIFLE_PICKUP)
    shotgun_pickup = require(unreal.load_object(None, SHOTGUN_PICKUP), "Missing " + SHOTGUN_PICKUP)

    actors = list(unreal.EditorLevelLibrary.get_all_level_actors())
    existing_spawners = [actor for actor in actors if is_weapon_spawner(actor, spawner_type)]
    player_starts = [actor for actor in actors if actor.get_class().get_name() == "PlayerStart"]

    by_label = {actor.get_actor_label(): actor for actor in existing_spawners}
    custom_spawners = []
    for label in ("WS_Rifle_Pickup", "WS_Shotgun_Pickup"):
        if label in by_label:
            custom_spawners.append(by_label[label])

    available_spawners = [actor for actor in existing_spawners if actor not in custom_spawners]
    while len(custom_spawners) < 2 and available_spawners:
        custom_spawners.append(available_spawners.pop(0))

    if player_starts:
        base_location = player_starts[0].get_actor_location()
    elif existing_spawners:
        base_location = existing_spawners[0].get_actor_location()
    else:
        base_location = unreal.Vector(0.0, 0.0, 100.0)

    spawn_offsets = (
        unreal.Vector(300.0, -150.0, 0.0),
        unreal.Vector(300.0, 150.0, 0.0),
    )
    while len(custom_spawners) < 2:
        index = len(custom_spawners)
        actor = unreal.EditorLevelLibrary.spawn_actor_from_class(
            spawner_class,
            base_location + spawn_offsets[index],
            unreal.Rotator(0.0, 0.0, 0.0),
        )
        custom_spawners.append(require(actor, "Failed to spawn LyraWeaponSpawner"))

    configuration = (
        (custom_spawners[0], "WS_Rifle_Pickup", rifle_pickup),
        (custom_spawners[1], "WS_Shotgun_Pickup", shotgun_pickup),
    )
    for actor, label, pickup in configuration:
        typed_actor = spawner_type.cast(actor)
        typed_actor.set_actor_label(label, mark_dirty=True)
        typed_actor.set_editor_property("weapon_definition", pickup)
        log("CONFIG {} Location={} Pickup={}".format(
            label, typed_actor.get_actor_location(), pickup.get_path_name()
        ))

    require(unreal.EditorLevelLibrary.save_current_level(), "Failed to save test level")
    log("COMPLETE Map={} ExistingSpawners={} PlayerStarts={}".format(
        DESTINATION_MAP, len(existing_spawners), len(player_starts)
    ))


try:
    main()
except Exception:
    unreal.log_error("WEAPON_TEST_MAP FAILED\n" + traceback.format_exc())
    raise
