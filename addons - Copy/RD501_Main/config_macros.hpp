//---Basic Definitions---
	//I learned all of this from this weeb mod lol https://steamcommunity.com/sharedfiles/filedetails/?id=1620525773
	#define StabilizedInAxesNone 0
	#define StabilizedInAxisX 1
	#define StabilizedInAxisY 2
	#define StabilizedInAxesBoth 3

	#define MACRO_AUTHOR "RD501"
	#define MACRO_AUTHOR_PPL "Namenai"
	#define MODNAME RD501

//---Basic Functions---
	#define ADDON UNDERSCORE_CONCAT(MODNAME,COMPONENT)

	#define UNDERSCORE_CONCAT(var1,var2) ##var1##_##var2
	// #define CONCAT(var1,var2) ##var1##var2
	#define ADDON_NICE Research & Development 501
	#define DANKAUTHORS RD501

	//Adds the mod prefix to watever, used for classnames and such
	#define ADD_PREFIX(NAME)UNDERSCORE_CONCAT(MODNAME,NAME)

	#define concat_function(var) UNDERSCORE_CONCAT(ADDON,var)

	// #define quote_this(thing) #thing
	#define macro_single_quote(thing) '##thing##'
	#define macro_quote(thing) #thing

	#define macro_new_config_prop(name) MODNAME##_##name

//Faction names,classes,and catagories
	#define macro_republic_faction MODNAME##_Republic_Faction
	#define macro_rebel_faction MODNAME##_Rebel_Faction
	#define macro_resistance_faction MODNAME##_Resistance_Faction

	#define macro_cis_faction MODNAME##_CIS_Faction
	#define macro_empire_faction MODNAME##_Empire_Faction
	
	#define macro_first_order_faction MODNAME##_First_Order
	#define macro_ind_faction MODNAME##_Independent_Faction
	#define macro_civ_faction MODNAME##_Civ_Faction

	#define macro_editor_cat(name) MODNAME##_Editor_Category_##name
	#define macro_editor_cat_air(name) MODNAME##_Editor_Category_Air_##name

	#define macro_editor_vehicle_type(name) MODNAME##_Vehicle_Class_##name
	#define macro_editor_vehicle_type_air(name) MODNAME##_Air_Vehicle_Class_##name

//---Functions---
	#define macro_mod_script_path RD501_Main\functions
	#define post_init_fnc(name)\
				class name\
				{\
					postInit = 1;\
					file = function_path(name)	\
				};

	#define normal_fnc(name)\
				class name\
				{\
					file = function_path(name)	\
				};

	#define function_path(scriptname) quote_this(ADDON\scripts\scriptname.sqf)

	#define hud_changer_interaction_icons MODNAME##_Main\textures\interaction_Icons

	#define macro_fnc_name(title) MODNAME##_fnc_##title
	#define macro_grp_fnc_name(grp,title) MODNAME##_##grp##_fnc_##title

	#define macro_preprocess_fnc(file)\
	call compileFinal preprocessFileLineNumbers 'COMPONENT##\##file'
	


//---Patches---
	#define macro_patch_name(component) MODNAME##_patch_##component
	#define macro_A3_patch "A3_Data_F_Tank_Loadorder"
	#define macro_root_req macro_patch_name(main)
	#define macro_lvl2_req macro_patch_name(weapons),macro_patch_name(jumppack),macro_patch_name(helmets),macro_patch_name(vehicle_weapons)
	#define macro_lvl3_req macro_patch_name(units),macro_patch_name(vehicles),macro_patch_name(zeus)
	#define macro_lvl1_req macro_patch_name(particle_effects),RD501_patch_VenatorMK2,macro_patch_name(emp)
	#define macro_lvl4_req macro_patch_name(droids_config),macro_patch_name(laat_variants)
	#define macro_lvl5_req macro_patch_name(legacy_classnames)
	#define macro_end_patches macro_lvl5_req

	

//---Weapons, Mags, and Ammo
	
	#define macro_scope_magnification(zoom) 0.25/zoom

	#define macro_new_scope(scopename) macro_modname##_weapon_scope_##scopename

	#define macro_new_weapon(family,name) MODNAME##_##family##_##name

	#define macro_new_weapon_nofam(name) MODNAME##_##name

	#define macro_new_ammo(name) MODNAME##_##name##_ammo

	#define macro_new_mag(name,count) MODNAME##_##name##_x##count##_mag

	#define macro_new_magwell(name) MODNAME##_##name##_magwell

	#define macro_new_magwell_array(name) MODNAME##_##name##_magwell[]

	#define macro_no_muzzle_impulse muzzleImpulseFactor[] = {0.00, 0.00};

	#define macro_new_recoil(name) MODNAME##_##name##_recoil



//---Vehicles---

	#define macro_basic_air_weapons "Laserdesignator_pilotCamera","CMFlareLauncher"
	#define macro_basic_air_mags "Laserbatteries","300Rnd_CMFlare_Chaff_Magazine","300Rnd_CMFlare_Chaff_Magazine"

	#define macro_new_vehicle(group,name) MODNAME##_##group##_##name

//----uniforms,units,vests
	//wat we see in arsenal,weapon
	#define macro_new_uniform_class(side,name) MODNAME##_##side##_uniform_##name
	//vests
	#define macro_new_vest_class(side,name) MODNAME##_##side##_vest_##name
	//actualyt skin of uniforms,vehicle
	#define macro_new_uniform_skin_class(side,name) MODNAME##_##side##_uniform_skin_##name
	//wat we see in zeus,vehicle
	#define macro_new_unit_class(side,name) MODNAME##_##side##_unit_##name
	//backpak
	#define macro_new_backpack_class(side,name)MODNAME##_##side##_##name##_backpack
	//compositions
	#define macro_new_composition(side,name) MODNAME##_##side##_composition_##name

	//backpack presets
	#define macro_b1_at_backpack_inv \
	class _xx_MAAWS_HE \
	{\
		magazine = "MRAWS_HE_F";\
		count = 3;\
	};\
	class _xx_MAAWS_HEAT\
	{\
		magazine = "MRAWS_HEAT_F";\
		count = 2;\
	};


	#define macro_b1_aa_backpack_inv \
			class _xx_Titan_AA\
			{\
				magazine = "Titan_AA";\
				count = 6;\
			};


//---Ordanance---
	#define macro_new_ordnance(name) MODNAME##_Ordnance_##name
	#define macro_new_ordnance_ammo(name) MODNAME##_Ordnance_Ammo_##name

//---helmets
	#define macro_custom_helmet_textures \RD501_Helmets\_textures
	#define macro_new_helmet(group,name) MODNAME##_##group##_helmet_##name
	#define macro_new_helmet_jlts(group,name) MODNAME##_##group##_helmet_##name

	#define macro_clone_helmet_hitpoints\
	class HitpointsProtectionInfo\
	{\
		class Head\
		{\
			hitpointName = "HitHead";\
			armor = 50;\
			passThrough = 0.6;\
		};\
	};

	#define macro_clone_other_armor_values\
		explosionShielding = 2.2;\
		minimalHit = 0.01;\
		passThrough = 0.01;

	#define macro_ace_hearing_helmet_setting\
	ace_hearing_protection = 0.85; \
	ace_hearing_lowerVolume = 0.6; 


	#define macro_rebreather_armor_stuff\
		containerClass = "Supply100";\
		mass = 20;\
		vestType = "Rebreather";

	#define macro_clone_armor_hitpoints \
		class HitpointsProtectionInfo\
		{\
			class Neck\
			{\
				hitpointName = "HitNeck";\
				armor = 8;\
				passThrough = 0.6;\
			};\
			class Arms\
			{\
				hitpointName = "HitArms";\
				armor = 16;\
				passThrough = 0.6;\
			};\
			class Chest\
			{\
				hitpointName = "HitChest";\
				armor = 32;\
				passThrough = 0.6;\
			};\
			class Diaphragm\
			{\
				hitpointName = "HitDiaphragm";\
				armor = 32;\
				passThrough = 0.6;\
			};\
			class Abdomen\
			{\
				hitpointName = "HitAbdomen";\
				armor = 16;\
				passThrough = 0.6;\
			};\
			class Pelvis\
			{\
				hitpointName = "HitPelvis";\
				armor = 16;\
				passThrough = 0.6;\
			};\
			class Body\
			{\
				hitpointName = "HitBody";\
				passThrough = 0.6;\
			};\
		};

//---textures
	#define macro_unit_skin_textures RD501_Units\textures
	#define macro_vehicle_textures RD501_Vehicles\textures
	#define macro_b1_textures MRC\JLTS\characters\DroidArmor\data


//---XEH prep---
	#define macro_prep_xeh(SCRIPT,name)\
	[macro_quote(macro_mod_script_path\SCRIPT),macro_quote(macro_fnc_name(name))] call CBA_fnc_compileFunction;

//---particle efffects---
	#define macro_new_cloudlet(name) MODNAME##_cloudlet_##name
	#define macro_new_complex_effect(name) MODNAME##_particle_effect_##name
	#define macro_new_light(name) MODNAME##_light_##name

//---NVG----
	#define macro_thermal_nvg_default \
	thermalMode[] = {8};
