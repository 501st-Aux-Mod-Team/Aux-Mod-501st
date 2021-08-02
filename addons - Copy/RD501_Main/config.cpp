#define COMPONENT main
#include "config_macros.hpp" // my config macro lib
#include "_cba_patches.hpp"


class CfgPatches
{
	class macro_patch_name(main)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			//"sci_APC",
			"A3_Data_F_Enoch_Loadorder",//Load all of arma first
			cba_patches ,//cba stuff
			//cancer_pbos ,//all of swop pbos
			//"212th_Engineer"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={};
		RD501_patches[]= {macro_root_req,macro_lvl1_req,macro_lvl2_req,macro_lvl3_req,macro_lvl4_req,macro_lvl5_req};
	};
};

class cfgFunctions
{
	class concat_function(scripts)//This will be the name of the mods functions,in functionViewer.
	{
		tag=ADDON;

		class concat_function(functions)
		{		
			
			class laatc_lift
			{
				file=macro_mod_script_path\vehicle_lift\laatc_lift.sqf
			};	
		};
	};	

	class rd501_scripts//This will be the name of the mods functions,in functionViewer.
	{
		tag="RD501";

		class rd501_test_fnc
		{
			// class test_fnc
			// {
			// 	file = "RD501_Main\functions\test_fnc_midnight.sqf";	
			// 	postinit=1;
			// };
			class auto_radio_freq
			{
				file = "RD501_Main\functions\auto_radio_freq.sqf";	
				
			};
			class enable_arf
			{
				file = "RD501_Main\functions\auto_radio_freq_enabler.sqf";	
				
			};//[player,['35.1','35.2','35.3','35.4','35','36','35.5','42','42'] ]call rd501_fnc_enable_arf
		};
		
		class the_cleanman
		{
			class ya_yeet_man
			{
				
				postInit = 1;
				file = macro_mod_script_path\add_radio_freq_shower.sqf	
			};
		
		};


	};

	

	class GEARF
	{
		class vectorFunctions
		{
			file="RD501_Main\functions\sling_helmet\Vectors";
			class rotateObject
			{
			};
		};
		class helmetFunctions
		{
			file="RD501_Main\functions\sling_helmet\Helmet";
			class slingHelmet
			{
			};
			class unslingHelmet
			{
			};
			class hideSlungHelmet
			{
			};
		};
	};
};

class Extended_Init_EventHandlers 
{
    class CAManBase 
	{
        class RD501_MedNotif 
		{
            init = call macro_fnc_name(add_med_notification);
        };
    };
};

//Run once at a point in time before all the mission units and vehicles have their own init event handlers processed
class Extended_PreInit_EventHandlers
{
	class RD501_PREINIT
	{
		init="call compile preprocessFileLineNumbers 'RD501_Main\XEH_preInit.sqf'";
	};
};

//run once and after all the units and vehicles have had both their init event handlers and the code in the mission editor "init" lines processed
class Extended_PostInit_EventHandlers {
    class RD501_POSTINIT {
        init = "call compile preprocessFileLineNumbers 'RD501_Main\XEH_postinit.sqf'";
    };
};


class cfgFactionClasses
{
	class macro_cis_faction
	{
		displayName="RD501 C.I.S Faction";
		priority=3;
		side=0;
	};

	class macro_republic_faction
	{
		displayName="RD501 Republic Faction";
		priority= 3;
		side=1;
	};
	class macro_ind_faction
	{
		displayName="RD501 Independent Faction";
		priority=3;
		side= 2;
	};
	class macro_civ_faction
	{
		displayName="RD501 Civillian Faction";
		priority=3;
		side= 3;
	};

	
};

class CfgEditorCategories
{
	class RD501_Aux
	{
		displayName = "501st Aux Mod";
	};

	class macro_editor_cat(suppplies)
	{
		displayName= "RD501 Supplies"
	};

	class macro_editor_cat(statics)
	{
		displayName = "RD501 Static Objects";
	};

	class macro_editor_cat(Speeders)
	{
		displayName = "Speeders";
	};
	
};


class CfgInGameUI
{
	class FLIRModeNames
	{
		FLIRModeName[] = {
			"WHOT",//0
			"BHOT",
			"GHOT",//2
			"BHOT",
			"OHOT",//4
			"BHOT",
			"WHOT",//6
			"RAINBOW",
			"YHOT"//8
		};
	};
};
class CfgCoreData
{
	textureTIConversionDX11 = "RD501_Main\textures\thermal\custom_thermals.png";
};


class CfgEditorSubcategories
{
	class macro_editor_cat(aqua)
	{
		displayName = "Aqua";
	};
	
	class macro_editor_cat(car)
	{
		displayname = "Cars"
	};
	class macro_editor_cat(CIS_speeders)
	{
		displayName = "CIS Speeders";
	};
	class macro_editor_cat(B2)
	{
		displayName = "B2 Variants";
	};
	class macro_editor_cat(tank)
	{
		displayName = "Tanks";
	};
	class macro_editor_cat(resupply)
	{
		displayName= "Resupply"
	}
	class macro_editor_cat(IFV)
	{
		displayName = "IFV's";
	};
		class macro_editor_cat(APC)
	{
		displayName = "APC's";
	};
	class macro_editor_cat(AA)
	{
		displayName = "Anti Air";
	};

	class macro_editor_cat(heavy_armored_infantry)
	{
		displayName = "Heavy Armored Infantry";
	};
	class macro_editor_cat(bounty_hunters)
	{
		displayName = "Bounty Hunters";
	};
	class macro_editor_cat(syndicate)
	{
		displayName = "Syndicate";
	};
	class macro_editor_cat(arty)
	{
		displayName = "Artillery";
	};
	class macro_editor_cat(civ)
	{
		displayName = "Star Wars Civillians";
	};
	class macro_editor_cat(B1)
	{
		displayName = "B1 Droids";
	};
	class macro_editor_cat(Transport)
	{
		displayName = "Transports";
	};
	class macro_editor_cat(B1_lowpoly)
	{
		displayName = "Low Poly B1 Droids";
	};
	class macro_editor_cat(CIS_SpecOps)
	{
		displayName = "Special Forces";
	};
	class macro_editor_cat(CIS_Humans)
	{
		displayName = "Humans";
	};
	class macro_editor_cat(posters)
	{
		displayName = "Star Wars Posters";
	};
	class macro_editor_cat(static_ships)
	{
		displayName = "Static Ships";
	};

	class macro_editor_cat(wall)
	{
		displayName = "Shield Walls";
	};

	class macro_editor_cat(static_msc)
	{
		displayName = "Static Objects";
	};
	class macro_editor_cat(turrets)
	{
		displayName = "Turrets";
	};
	class macro_editor_cat(static_turrets)
	{
		displayName = "Static Emplacements";
	};



	class macro_editor_cat_air(Empire_vtol)
	{
		displayName = "Empire Aircraft";
	};
	class macro_editor_cat_air(First_Order)
	{
		displayName = "First Order Aircraft";
	};
	class macro_editor_cat_air(CIS)
	{
		displayName = "CIS Aircraft";
	};
	class macro_editor_cat_air(CIS_heli)
	{
		displayName = "CIS Helicopters";
	};
	class macro_editor_cat_air(Rebel_vtol)
	{
		displayName = "Rebel Aircraft";
	};
	class macro_editor_cat_air(Rebel_heli)
	{
		displayName = "Rebel Helicopters";
	};
	class macro_editor_cat_air(Republic_heli)
	{
		displayName = "Republic Helicopters";
	};
	class macro_editor_cat_air(Republic_vtol)
	{
		displayName = "Republic Aircraft";
	};
	class macro_editor_cat_air(Resistance)
	{
		displayName = "Resistance Aircraft";
	};

	class macro_editor_cat_air(vtol)
	{
		displayName = "Repulsorlift";
	};
	class macro_editor_cat_air(heli)
	{
		displayName = "Starfighter";
	};

};


class CfgVehicleClasses
{
	class macro_editor_vehicle_type(Car)
	{
		displayName = "Cars"
	};
	class macro_editor_vehicle_type(turrets)
	{
		displayName = "turrets";
	};

	class macro_editor_vehicle_type(speeders)
	{
		displayName = "speeeeeders";
	};
	class macro_editor_vehicle_type_air(Empire)
	{
		displayName = "X Empire Aircraft";
	};
	class macro_editor_vehicle_type_air(First_Order)
	{
		displayName = "X First Order Aircraft";
	};
	class macro_editor_vehicle_type_air(CIS)
	{
		displayName = "X CIS Aircraft";
	};
	class macro_editor_vehicle_type_air(Rebel)
	{
		displayName = "X Rebel Aircraft";
	};
	class macro_editor_vehicle_type_air(Republic)
	{
		displayName = "X Republic Aircraft";
	};
	class macro_editor_vehicle_type_air(Resistance)
	{
		displayName = "X Resistance Aircraft";
	};

	class macro_editor_vehicle_type(tank)
	{
		displayName = "Tanks";
	};

	class macro_editor_vehicle_type(AA)
	{
		displayName = "Anti Air";
	};

	class macro_editor_vehicle_type(doggo)
	{
		displayName = "doggie";
	};

	class macro_editor_vehicle_type(heavy_armored_infantry)
	{
		displayName = "Heavy Armored Infantry";
	};

	class macro_editor_vehicle_type(IFV)
	{
		displayName = "IFV";
	};

	class macro_editor_vehicle_type(APC)
	{
		displayName = "APC";
	};

	class macro_editor_vehicle_type(arty)
	{
		displayName = "arty";
	};

	class macro_editor_vehicle_type(static_turrets)
	{
		displayName = "Static Emplacements";
	};

	class macro_editor_vehicle_type(statics)
	{
		displayName = "RD501 Static Walls";
	};

	

};

class CfgVehicles
{
	class LandVehicle;
	class Car : LandVehicle
	{
		class ACE_Actions {
			class ACE_MainActions {
				class rd501_flip_vehicle_flip {
					displayName = "Flip Vehicle";
					condition = "[_player] call rd501_fnc_canFlipVehicle";
					statement = "[_target] call rd501_fnc_flipVehicle";
					exceptions[] = {};
					icon = "rd501_main\ui_icons\mynock_flip_ace_icon.paa";
				};
			};
		};
	};
	class Tank : LandVehicle
	{
		class ACE_Actions {
			class ACE_MainActions {
				class rd501_flip_vehicle_flip {
					displayName = "Flip Vehicle";
					condition = "[_player] call rd501_fnc_canFlipVehicle";
					statement = "[_target] call rd501_fnc_flipVehicle";
					exceptions[] = {};
					icon = "rd501_main\ui_icons\mynock_flip_ace_icon.paa";
				};
			};
		};
	};
	class StaticWeapon: LandVehicle {
		class ACE_Actions {
			class ACE_MainActions {
				class rd501_external_reload {
					displayName = "Reload";
					condition = "_this call rd501_fnc_canReloadExternal";
					statement = "_this call rd501_fnc_reloadExternal";
					exceptions[] = {};
					runOnHover = 0;
				};
			};
		};
	};
	class Man;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class slingHelmet
				{
					displayName="Sling Helmet";
					icon="RD501_Main\ui_icons\helmet_ca.paa";
					priority=3;
					condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
					class slingLeft
					{
						displayName="Sling Left";
						icon="RD501_Main\ui_icons\helmet_ca.paa";
						priority=3;
						condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
						statement="[_player, 'left'] call GEARF_fnc_slingHelmet";
					};
					class slingRight
					{
						displayName="Sling Right";
						icon="RD501_Main\ui_icons\helmet_ca.paa";
						priority=3;
						condition="!(_player getVariable ['GEARF_HelmetAttached', false])";
						statement="[_player, 'right'] call GEARF_fnc_slingHelmet";
					};
				};
				class unslingHelmet
				{
					displayName="Unsling Helmet";
					icon="RD501_Main\ui_icons\helmet_ca.paa";
					priority=3;
					condition="_player getVariable ['GEARF_HelmetAttached', false]";
					statement="[_player] call GEARF_fnc_unslingHelmet";
				};
				class RD501_Auto_Radio_Freq
				{
					displayName = "A.R.F setter";
					exceptions[] = {"isNotInside", "isNotSwimming", "isNotSitting"};
					condition = "call TFAR_fnc_haveLRRadio";
					showDisabled = 0;
					priority = 2.5;
					icon = "RD501_Main\ui_icons\arf.paa";
					statement = "[_player] call rd501_fnc_auto_radio_freq";
					runOnHover = 0;
				};
			};
		};
		class EventHandlers
		{
			init="(_this select 0) setVariable ['GEARF_HelmetAttached', false]; (_this select 0) setVariable ['GEARF_HelmetAttachedClass','']; (_this select 0) setVariable ['GEARF_HelmetAdditionalClass',''];";
			killed="(_this select 0) setVariable ['GEARF_HelmetAttached', false]; (_this select 0) setVariable ['GEARF_HelmetAttachedClass','']; (_this select 0) setVariable ['GEARF_HelmetAdditionalClass',''];";
			getInMan="[(_this select 0), true] call GEARF_fnc_hideSlungHelmet";
			getOutMan="[(_this select 0), false] call GEARF_fnc_hideSlungHelmet;";
		};
	};
};