//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon HMP
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_hmp_class(name) vehicle_classname##_##name

class CBA_Extended_EventHandlers_base;

class CfgPatches
{
	class macro_patch_name(HMP)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(HMP,gunship),
			macro_new_vehicle(HMP,transport)
		};
		weapons[]=
		{
			
		};
	};
};


#include "../../common/sensor_templates.hpp"

class CfgVehicles
{
	class 442_hmp;//swop_HMP_droidgunship;

	class 442_hmp_transport;//swop_HMP_droidgunship_transport;

	class macro_new_vehicle(HMP,gunship):442_hmp//swop_HMP_droidgunship
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName = "H.M.P Gunship Mk.I";
		forceInGarage = 1;
		altFullForce = 6000;
	    altNoForce = 9000;
		armor = 650;

		crew=macro_new_unit_class(opfor,B1_pilot)

		#include "common.hpp"

		weapons[] = {
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
		};
		magazines[] = {
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000)
		};

	};

	class macro_new_vehicle(HMP,transport): 442_hmp_transport//swop_HMP_droidgunship_transport
	{
		displayName = "H.M.P Transport Mk.I";
		forceInGarage = 1;
		maxSpeed=220;
		armor = 650;
		armorStructural = 2;
		armorLights = 1;
		liftForceCoef = 1;
		bodyFrictionCoef = 0.6777;
		scope=2;
		scopeCurator=2;

		RD501_magclamp_small_1[] = {-0.3,0.0,-2.5};

		crew=macro_new_unit_class(opfor,B1_pilot)

		#include "common.hpp"
		
		weapons[] = {
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons,
			macro_new_weapon(generic,cis_aircraft_cannon)
		};
		magazines[] = {
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_cannon_red,1000),
			macro_new_mag(generic_aircraft_cannon_red,1000)
		};
	};
};