#include "config_macros.hpp"

//add eweb shield
macro_prep_xeh(init\e_web_shield.sqf,eweb_shield)

//stretcher
macro_prep_xeh(stretcher\deploy_stretcher.sqf,deploy_stretcher)
macro_prep_xeh(stretcher\put_stretcher_in_backpack.sqf,put_stretcher_in_backpack)
macro_prep_xeh(stretcher\drop_stretcher.sqf,drop_stretcher)
macro_prep_xeh(stretcher\carry_stretcher.sqf,carry_stretcher)

//Zatamas aircraft turrets
macro_prep_xeh(attach_turrets\apply_turrets.sqf,apply_aircraft_turrets)
macro_prep_xeh(attach_turrets\remove_attached_objects.sqf,remove_attached_objects)

//Zatamas aircraft drones
macro_prep_xeh(attach_drones\apply_drones.sqf,apply_aircraft_drone)

//set mass 
macro_prep_xeh(mass_changer\set_mass.sqf,set_mass)

//HSD move
macro_prep_xeh(movable_scripts\og10drive.sqf,og10_move)

//droidekka move
macro_prep_xeh(movable_scripts\droideka_driver.sqf,droidekka_move)

//dwarf move
macro_prep_xeh(movable_scripts\dwarf_spider_droid_driver.sqf,dwarf_move)

//hailfire init
macro_prep_xeh(init\hailfire_aa.sqf,hailfire_init)

//hemtt rocket arty
macro_prep_xeh(init\hemtt_rocket_arty.sqf,hemtt_rocket_arty)

//add healing option
macro_prep_xeh(add_healing_action.sqf,add_heal_action)

//add dog
macro_prep_xeh(add_doggo.sqf,add_doggo)

//ATTE UAV init
macro_prep_xeh(atte\atte.sqf,atte_uav_init)
macro_prep_xeh(atte\create_itt.sqf,create_itt)
macro_prep_xeh(atte\create_turrets.sqf,create_atte_turrets)

//adds the killed and MPkilled EH to remove attached objects on death.
macro_prep_xeh(remove_attached_on_death\add_remove_attached_EH.sqf,add_remove_attached_EH)
macro_prep_xeh(remove_attached_on_death\remove_attached.sqf,remove_attached)

//warden tow
macro_prep_xeh(init\tow.sqf,warden_tow)

//init
macro_prep_xeh(init\random_sw_civ.sqf,random_starwars_civ)
macro_prep_xeh(init\force_b2_walk.sqf,force_b2_walk)
macro_prep_xeh(init\specops.sqf,b1_specop_apply_skill)
macro_prep_xeh(init\ig88.sqf,ig88_apply_skill)
macro_prep_xeh(init\b2_armor.sqf,b2_apply_armor)
macro_prep_xeh(init\magna.sqf,magna_apply_skill)
macro_prep_xeh(init\jam_sandwich.sqf,apply_jammer)
macro_prep_xeh(init\aat.sqf,aatInit)

//HUD color
macro_prep_xeh(hud_color_change.sqf,change_hud_color)

//showe dmg
macro_prep_xeh(show_damage_report.sqf,add_show_dmg_report)

//Yeet them out
call compile preprocessFileLineNumbers 'macro_mod_script_path\add_radio_freq_shower.sqf';

//Mirrors medical menu thingy
["RD501_MedNotif_Message",
        "EDITBOX",
        [
                "Message",
                "Message to show to other players, keep it clean. %1 is used as a placeholder for your name."
        ],
        "RD501 Medical Notification",
        call {profileNamespace getVariable ["RD501_MedNotif_Message", "%1 is asking that you kindly hold still."]}
 ] call cba_settings_fnc_init;
 diag_log format["RD501_MedNotif[DEBUG]: %1", "Settings Added"];
macro_prep_xeh(medical_notification\add_med_notification.sqf,add_med_notification)