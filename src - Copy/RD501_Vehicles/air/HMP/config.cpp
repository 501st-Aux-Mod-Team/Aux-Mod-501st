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
	

	class swop_HMP_droidgunship;

	class swop_HMP_droidgunship_transport;

	class macro_new_vehicle(HMP,gunship):swop_HMP_droidgunship
	{
		scope=2;
		scopeCurator=2;
		forceInGarage=1;
		displayName = "H.M.P Gunship Mk.I";
		forceInGarage = 1;
		altFullForce = 6000;
	    altNoForce = 9000;
		armor = 650;
		

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

	class macro_new_vehicle(HMP,transport): swop_HMP_droidgunship_transport//macro_new_vehicle(HMP,gunship)
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

		#include "common.hpp"
	};
};