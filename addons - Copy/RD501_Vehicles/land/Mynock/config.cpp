//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Mynock
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_Mynock_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(mynock)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Longbow,Republic),
			macro_new_vehicle(av7,republic),
			macro_new_vehicle(rocketartillery,Republic)
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
	class Land;
	class LandVehicle: Land
	{
		class NewTurret;
	};
	class Tank: LandVehicle
	{
		class NewTurret;
		class Sounds;
		class HitPoints;
		class CommanderOptics;
	};
	class Tank_F: Tank
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class 442_rx200_base:Tank_F
	{
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class Turrets
				{
					class CommanderOptics;
				};
			};
		};
	};
	class macro_new_vehicle(rocketartillery,Republic):442_rx200_base
	{
		scope=2;
		armor = 1000;
		displayName = "Republic RX200 Rocket Artillery"
		crew = "SWOP_Clonetrooper_P1";
        side = 1;
        faction = macro_republic_faction
        editorSubcategory = macro_editor_cat(arty)
        vehicleClass = macro_editor_vehicle_type(arty)
        scopeCurator = 2;
        forceInGarage = 1;
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[]=
				{
					"rockets_230mm_GAT",
					"SmokeLauncher"
				};
				magazines[]=
				{
					"12Rnd_230mm_rockets",
					"12Rnd_230mm_rockets",
					"SmokeLauncherMag"
				};
			};
		};
	};
	class 442_rx200_aa;
	class macro_new_vehicle(Longbow,Republic):442_rx200_aa
	{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic Longbow AA"
		crew = "SWOP_Clonetrooper_P1";
		author="RD501"
		faction = macro_republic_faction
        editorSubcategory = macro_editor_cat(aa)
        vehicleClass = macro_editor_vehicle_type(aa)
		
		#include "../../common/smallvehiclekit.hpp"

	};	
	class 3as_01_arty_base_F;
	class macro_new_vehicle(av7,republic):3as_01_arty_base_F
	{
		scope=2;
		side=1;
		scopeCurator=2;
		forceInGarage = 1;
		displayName="Republic AV7"
		crew = "SWOP_Clonetrooper_P1";
		author="RD501"
		faction = macro_republic_faction
        editorSubcategory = macro_editor_cat(arty)
        vehicleClass = macro_editor_vehicle_type(arty)
	};
};
