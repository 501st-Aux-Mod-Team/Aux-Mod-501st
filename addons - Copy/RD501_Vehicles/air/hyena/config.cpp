//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon hyena
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_hyena_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(hyena)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(hyena,Mk2)
		};
		weapons[]=
		{
			
		};
	};
};

#include "../../common/sensor_templates.hpp"
/*class CfgVehicles
{
	class swop_hbomber;
	class macro_new_vehicle(hyena,Mk2) : swop_hbomber
	{
		scope = 2;
		scopeCurator=2;
		displayName="Hyena Bomber Droid Mk.II";
		forceInGarage=1;
	    altFullForce = 6000;
	    altNoForce = 9000;
		armor = 400;

		crew=macro_new_unit_class(opfor,B1_pilot)

		airBrakeFrictionCoef = 80.4;

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat_air(CIS)
		vehicleClass = macro_editor_vehicle_type_air(CIS)

		class EventHandlers{};

		class UserActions{};

		weapons[] = {
			macro_new_weapon(wynd,agm),
			macro_new_weapon(bomb,cluster),
			macro_new_weapon(bomb,SDB),
			macro_new_weapon(bomb,LGB),
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(agm,6),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(cluster_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(sdb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4),
			macro_new_mag(lgb_bomb,4)
		};
	};
};*/