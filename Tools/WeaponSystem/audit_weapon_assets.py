import unreal


ASSET_PATHS = {
    "input_config": "/Game/Input/InputData_Hero.InputData_Hero",
    "keyboard_mapping": "/Game/Input/Mappings/IMC_Default_KBM.IMC_Default_KBM",
    "reload_action": "/Game/Input/Actions/IA_Weapon_Reload.IA_Weapon_Reload",
    "rifle_ability_set": "/ShooterCore/Weapons/Rifle/AbilitySet_ShooterRifle.AbilitySet_ShooterRifle",
    "shotgun_ability_set": "/ShooterCore/Weapons/Shotgun/AbilitySet_ShooterShotgun.AbilitySet_ShooterShotgun",
    "rifle_equipment": "/ShooterCore/Weapons/Rifle/WID_Rifle.WID_Rifle_C",
    "shotgun_equipment": "/ShooterCore/Weapons/Shotgun/WID_Shotgun.WID_Shotgun_C",
    "rifle_instance_blueprint": "/ShooterCore/Weapons/Rifle/B_WeaponInstance_Rifle.B_WeaponInstance_Rifle",
    "shotgun_instance_blueprint": "/ShooterCore/Weapons/Shotgun/B_WeaponInstance_Shotgun.B_WeaponInstance_Shotgun",
    "rifle_equipment_blueprint": "/ShooterCore/Weapons/Rifle/WID_Rifle.WID_Rifle",
    "shotgun_equipment_blueprint": "/ShooterCore/Weapons/Shotgun/WID_Shotgun.WID_Shotgun",
    "rifle_item_blueprint": "/ShooterCore/Weapons/Rifle/ID_Rifle.ID_Rifle",
    "shotgun_item_blueprint": "/ShooterCore/Weapons/Shotgun/ID_Shotgun.ID_Shotgun",
    "rifle_pickup": "/ShooterCore/Weapons/Rifle/WeaponPickupData_Rifle.WeaponPickupData_Rifle",
    "shotgun_pickup": "/ShooterCore/Weapons/Shotgun/WeaponPickupData_Shotgun.WeaponPickupData_Shotgun",
}


def asset_label(value):
    if value is None:
        return "None"
    try:
        return value.get_path_name()
    except Exception:
        return str(value)


def read_struct_property(value, property_name):
    try:
        return value.get_editor_property(property_name)
    except Exception:
        return getattr(value, property_name, None)


def struct_name(value, property_name):
    nested_value = read_struct_property(value, property_name)
    if nested_value is not None:
        return str(nested_value)
    return str(value)


def log(message):
    unreal.log_warning("WEAPON_ASSET_AUDIT " + message)


def audit_input_config(asset):
    actions = asset.get_editor_property("ability_input_actions")
    log("InputConfig.AbilityInputActions.Count={}".format(len(actions)))
    for index, entry in enumerate(actions):
        action = read_struct_property(entry, "input_action")
        input_tag = read_struct_property(entry, "input_tag")
        log("InputConfig.AbilityInputActions[{}] Action={} Tag={}".format(
            index, asset_label(action), struct_name(input_tag, "tag_name")
        ))


def audit_mapping_context(asset):
    mappings = asset.get_editor_property("mappings")
    log("IMC.Mappings.Count={}".format(len(mappings)))
    for index, entry in enumerate(mappings):
        action = read_struct_property(entry, "action")
        key = read_struct_property(entry, "key")
        action_path = asset_label(action)
        if "IA_Weapon_Reload" in action_path:
            log("IMC.ReloadMapping[{}] Action={} Key={}".format(
                index, action_path, struct_name(key, "key_name")
            ))


def audit_ability_set(label, asset):
    abilities = asset.get_editor_property("granted_gameplay_abilities")
    log("{}.GrantedAbilities.Count={}".format(label, len(abilities)))
    for index, entry in enumerate(abilities):
        ability = read_struct_property(entry, "ability")
        input_tag = read_struct_property(entry, "input_tag")
        log("{}.GrantedAbilities[{}] Ability={} Tag={}".format(
            label, index, asset_label(ability), struct_name(input_tag, "tag_name")
        ))


def audit_blueprint(label, blueprint):
    generated_class = unreal.EditorAssetLibrary.load_blueprint_class(blueprint.get_path_name())
    try:
        parent_class = generated_class.get_super_class()
    except Exception:
        parent_class = None
    log("{}.ParentClass={} GeneratedClass={}".format(
        label, asset_label(parent_class), asset_label(generated_class)
    ))
    return unreal.get_default_object(generated_class)


def audit_equipment(label, default_object):
    log("{}.InstanceType={}".format(
        label, asset_label(default_object.get_editor_property("instance_type"))
    ))
    ability_sets = default_object.get_editor_property("ability_sets_to_grant")
    for index, ability_set in enumerate(ability_sets):
        log("{}.AbilitySetsToGrant[{}]={}".format(label, index, asset_label(ability_set)))


def audit_item(label, default_object):
    fragments = default_object.get_editor_property("fragments")
    for index, fragment in enumerate(fragments):
        log("{}.Fragments[{}].Class={}".format(label, index, asset_label(fragment.get_class())))
        try:
            equipment_definition = fragment.get_editor_property("equipment_definition")
            log("{}.Fragments[{}].EquipmentDefinition={}".format(
                label, index, asset_label(equipment_definition)
            ))
        except Exception:
            pass


def main():
    loaded_assets = {}
    for label, object_path in ASSET_PATHS.items():
        asset = unreal.load_object(None, object_path)
        loaded_assets[label] = asset
        log("{} Path={} Class={}".format(label, object_path, asset_label(asset.get_class()) if asset else "MISSING"))

    if loaded_assets["input_config"]:
        audit_input_config(loaded_assets["input_config"])
    if loaded_assets["keyboard_mapping"]:
        audit_mapping_context(loaded_assets["keyboard_mapping"])
    if loaded_assets["rifle_ability_set"]:
        audit_ability_set("RifleAbilitySet", loaded_assets["rifle_ability_set"])
    if loaded_assets["shotgun_ability_set"]:
        audit_ability_set("ShotgunAbilitySet", loaded_assets["shotgun_ability_set"])

    rifle_instance_cdo = audit_blueprint("RifleInstanceBlueprint", loaded_assets["rifle_instance_blueprint"])
    shotgun_instance_cdo = audit_blueprint("ShotgunInstanceBlueprint", loaded_assets["shotgun_instance_blueprint"])
    log("RifleInstance.MaxAmmo={} ReloadTime={}".format(
        rifle_instance_cdo.get_editor_property("max_ammo"),
        rifle_instance_cdo.get_editor_property("reload_time")
    ))
    log("ShotgunInstance.MaxAmmo={} ReloadTime={}".format(
        shotgun_instance_cdo.get_editor_property("max_ammo"),
        shotgun_instance_cdo.get_editor_property("reload_time")
    ))

    rifle_equipment_cdo = audit_blueprint("RifleEquipmentBlueprint", loaded_assets["rifle_equipment_blueprint"])
    shotgun_equipment_cdo = audit_blueprint("ShotgunEquipmentBlueprint", loaded_assets["shotgun_equipment_blueprint"])
    audit_equipment("RifleEquipment", rifle_equipment_cdo)
    audit_equipment("ShotgunEquipment", shotgun_equipment_cdo)

    rifle_item_cdo = audit_blueprint("RifleItemBlueprint", loaded_assets["rifle_item_blueprint"])
    shotgun_item_cdo = audit_blueprint("ShotgunItemBlueprint", loaded_assets["shotgun_item_blueprint"])
    audit_item("RifleItem", rifle_item_cdo)
    audit_item("ShotgunItem", shotgun_item_cdo)

    log("RiflePickup.InventoryItemDefinition={}".format(
        asset_label(loaded_assets["rifle_pickup"].get_editor_property("inventory_item_definition"))
    ))
    log("ShotgunPickup.InventoryItemDefinition={}".format(
        asset_label(loaded_assets["shotgun_pickup"].get_editor_property("inventory_item_definition"))
    ))

    log("COMPLETE")


main()
