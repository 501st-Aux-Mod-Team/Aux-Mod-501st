//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon heavy_ordinance_tank
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_hot_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(heavy_ordinance_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(heavy_ordinance_tank,republic),
			macro_new_vehicle(heavy_ordinance_tank,CIS)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers ;

class CfgVehicles
{

	#include "inheritance.hpp"
	class macro_new_vehicle(heavy_ordinance_tank,republic) : B_MBT_01_arty_F
	{
		displayName = "Republic Trebuchet";
		crew = "SWOP_Clonetrooper_P1";	
		scope = 2;
		side=1;
		scopeCurator=2;

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)


		forceInGarage=1;
		author = "RD501";
		class TransportItems
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons 
		{
		};
		class EventHandlers :DefaultEventhandlers 
		{
			scope = 2;
			scopeCurator = 2;
			init = "if (local (_this select 0)) then {[(_this select 0), """", [], false] call bis_fnc_initVehicle;};";
			
		};
		
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] = {
					
							macro_basic_air_weapons,
							"SmokeLauncher",
						
							macro_new_weapon(generic,plasma_aircraft_cannon)
						};
						magazines[] = {
						
							macro_basic_air_mags,
							"SmokeLauncherMag",
					
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000)
						};
					};

					

				};
		
				weapons[] = {
					"mortar_155mm_AMOS",
					"Cannon_ARCback",
					"cannon_125mm"
				};
				magazines[] = {
					"32Rnd_155mm_Mo_shells", "4Rnd_155mm_Mo_guided", "6Rnd_155mm_Mo_mine", "2Rnd_155mm_Mo_Cluster", "6Rnd_155mm_Mo_smoke", "2Rnd_155mm_Mo_LG", "6Rnd_155mm_Mo_AT_mine",
					"500Rnd_Cannon_ARCback",
					"24Rnd_125mm_APFSDS_T_Red"
				};
			};
		};

		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa,
			macro_vehicle_textures\Fast_Infantry_Transport\FAT.paa
		};


	};
	class macro_new_vehicle(heavy_ordinance_tank,CIS) : macro_new_vehicle(heavy_ordinance_tank,republic)
	{
		displayName = "CIS Trebuchet";
		crew = "SWOP_CIS_droid_crew";
		scope = 2;
		side=0;
		scopeCurator=2;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(arty)
		vehicleClass = macro_editor_vehicle_type(arty)

		author = "RD501";
		forceInGarage=1;
	
		class turrets : turrets
		{
			class MainTurret : Mainturret
			{
				class Turrets : Turrets
				{
					class CommanderOptics : CommanderOptics
					{
						weapons[] = {
					
							macro_basic_air_weapons,
							"SmokeLauncher",
							macro_new_weapon(generic,plasma_aircraft_cannon)
						};
						magazines[] = {
						
							macro_basic_air_mags,
							"SmokeLauncherMag",
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000),
							macro_new_mag(generic_aircraft_cannon_plasma_red,1000)
						};
					};
				};
			};
		};
		textureList[] = {};
		hiddenSelectionsTextures[] = 
		{
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa",
			"awing\t_awing_03_cw.paa"
		};

	};

	
};
