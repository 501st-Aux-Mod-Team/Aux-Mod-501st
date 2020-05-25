	/*
//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon ship_cannon
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_ship_cannon_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(ship_cannon)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(ship_cannon,republic),
			macro_new_vehicle(ship_cannon,cis),
			macro_new_vehicle(ship_cannon,republic_inv),
			macro_new_vehicle(ship_cannon,cis_inv)
		};
		weapons[]=
		{
			
		};
	};
};

#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;

class CfgVehicles
{

	class LandVehicle;
	class StaticWeapon: LandVehicle
	{
		class turrets;
	};
	class OPTRE_Corvette_M910_Turret: StaticWeapon
	{
		class turrets: turrets
		{
			class mainturret;
		};
	};
	class macro_new_vehicle(ship_cannon,republic): OPTRE_Corvette_M910_Turret
	{
		author = "RD501";
		scope = 2;
		side = 1;
		displayname = "Republic Cruiser Battery";
		scopeCurator = 2;
		crew = "SWOP_L501P1_Fives";

		class turrets: turrets
		{
			class mainturret: mainturret
			{
				memoryPointGun[] = {"z_gunL_chamber","z_gunR_chamber"};
				muzzleEnd[] = {"z_gunL_chamber","z_gunR_chamber"};
				muzzlePos[] = {"z_gunL_chamber","z_gunR_chamber"};
				weapons[] = {"Cannon_TurboLaserx2"};
				magazines[] = {"10000Rnd_Laser_Cannon_TurboLaserx2","10000Rnd_Laser_Cannon_TurboLaserx2"};
			};
		};
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
	};

	class macro_new_vehicle(ship_cannon,cis): macro_new_vehicle(ship_cannon,republic)
	{
		side = 0;
		displayname = "CIS Cruiser Battery";
		crew = "SWOP_CIS_droid_crew";
		faction = macro_cis_faction
	};

	class macro_new_vehicle(ship_cannon,republic_inv): OPTRE_Corvette_M910_Turret_u
	{
		author = "RD501";
		scope = 2;
		side = 1;
		displayname = "Republic Cruiser Battery (Inverted)";
		scopeCurator = 2;
		crew = "SWOP_L501P1_Fives";

		class turrets: turrets
		{
			class mainturret: mainturret
			{
				weapons[] = {"Cannon_TurboLaserx2"};
				magazines[] = {"10000Rnd_Laser_Cannon_TurboLaserx2","10000Rnd_Laser_Cannon_TurboLaserx2"};
			};
		};
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
	};
	
	class macro_new_vehicle(ship_cannon,cis_inv): macro_new_vehicle(ship_cannon,republic_inv)
	{
		side = 0;
		displayname = "CIS Cruiser Battery (Inverted)";
		crew = "SWOP_CIS_droid_crew";
		faction = macro_cis_faction
	};
	
};
*/