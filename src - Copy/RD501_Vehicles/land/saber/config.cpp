//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon saber
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_saber_class(name) vehicle_classname##_##name

#define macro_republic_skin hiddenSelectionsTextures[] = {"tx130s\imp_tank_rep_a_c.paa"};

//common mag-weap
#define macro_common_weap\
		"Laserdesignator_pilotCamera"

#define macro_common_mag\
		"Laserbatteries"

//super saber mag-weap
#define macro_super_saber_weap\
		macro_common_weap,\
		macro_new_weapon(saber_gun,mbt)

#define macro_super_saber_mag\
		macro_common_mag,\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),

//normal saber mag-weap
#define macro_saber_weap\
		macro_common_weap,\
		macro_new_weapon(super_mg,z6)

#define macro_saber_mag\
		macro_common_mag,\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400),\
		macro_new_mag(supercharged_z6,400)

#define macro_saber_weap_imperial\
		macro_common_weap,\
		macro_new_weapon(super_mg,dlt19)

#define macro_saber_mag_imperial\
		macro_common_mag,\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200),\
		macro_new_mag(supercharged_dlt19,200)

#define macro_saber_main_weap\
		macro_common_weap,\
		macro_new_weapon(saber_gun,td),\
		"SmokeLauncher"

#define macro_saber_main_mag\
		macro_common_mag,\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		macro_new_mag(saber_tx130,10),\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag",\
		"smokelaunchermag"
		
#define macro_saber_driver\
		weapons[] = {"SmokeLauncher","Laserdesignator_pilotCamera","CMFlareLauncher"};\
		magazines[] = {"300Rnd_CMFlare_Chaff_Magazine","Laserbatteries","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag","smokelaunchermag"};

#define macro_command_saber_smoke\
		smokeLauncherGrenadeCount = 12;\
		smokeLauncherVelocity = 14;\
		smokeLauncherOnTurret = 1;\
		smokeLauncherAngle = 360;

#define macro_saber_smoke\
		smokeLauncherGrenadeCount = 24;\
		smokeLauncherVelocity = 14;\
		smokeLauncherOnTurret = 0;\
		smokeLauncherAngle = 160;

class CfgPatches
{
	class macro_patch_name(saber)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(saber,empire_super_saber_MkII),
			macro_new_vehicle(saber,empire_saber_MkII),
			macro_new_vehicle(saber,empire_command_saber_MkII),
			macro_new_vehicle(saber,republic_super_saber_MkII),
			macro_new_vehicle(saber,republic_saber_MkII),
			macro_new_vehicle(saber,republic_command_saber_MkII)
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
	//O_JM_TX130_1  empire command
	//O_JM_TX130m1_1 normal
	//O_JM_TX130m2_1 super

	 #include "inheritance.hpp"

	
	//empire
	class macro_new_vehicle(saber,empire_super_saber_MkII):O_JM_TX130m2_1
	{
		scope=2
		forceInGarage = 1;
		displayName = "Super Saber Mk.II (Empire)";
		macro_saber_smoke
		macro_saber_driver

		side=0;

		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				
				weapons[] = {
					macro_super_saber_weap
				};
				magazines[] = {
					macro_super_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,empire_saber_MkII):O_JM_TX130m1_1
	{
		scope=2
		scopeCurator=2;
		
		forceInGarage = 1;
		displayName = "Saber Mk.II (Empire)";
		macro_saber_smoke
		armor =1100;
		
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		side=0;
		weapons[] = {
			macro_saber_main_weap
		};
		magazines[] = {
			macro_saber_main_mag
		};
		side=0;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				
				weapons[] = {
					macro_saber_weap_imperial
				};
				magazines[] = {
					macro_saber_mag_imperial
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,empire_command_saber_MkII):O_JM_TX130_1//O_JM_TX130r_1
	{
		scope=2
		scopeCurator=2;
		forceInGarage = 1;
		displayName = "Saber (Command) Mk.II (Empire)";

		armor = 750;
		macro_command_saber_smoke
		macro_saber_driver
		side=0;
		faction = macro_empire_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
	
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_saber_weap_imperial
				};
				magazines[] = {
					macro_saber_mag_imperial
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	//republic
	class macro_new_vehicle(saber,republic_super_saber_MkII):O_JM_TX130m2_1
	{
		scope=2
		side=1;
		forceInGarage = 1;
		displayName = "Super Saber Mk.II (Republic)";
		macro_republic_skin
		crew = "SWOP_Clonetrooper_P1";

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)

		macro_saber_driver
		macro_saber_smoke
		armor = 600;

		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_super_saber_weap
				};
				magazines[] = {
					macro_super_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,republic_saber_MkII):O_JM_TX130m1_1
	{
		scope=2
		forceInGarage = 1;
		displayName = "Saber Mk.II (Republic)";
		macro_republic_skin

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		
		crew = "SWOP_Clonetrooper_P1";
		armor =1100;
		macro_saber_smoke
		weapons[] = {
			macro_saber_main_weap
		};
		magazines[] = {
			macro_saber_main_mag
		};


		side=1;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_saber_weap
				};
				magazines[] = {
					macro_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(saber,republic_command_saber_MkII):O_JM_TX130_1
	{
		scope=2
		forceInGarage = 1;
		displayName = "Saber (Command) Mk.II (Republic)";
		macro_republic_skin

		macro_saber_driver
		macro_command_saber_smoke
		armor = 750;

		crew = "SWOP_Clonetrooper_P1";
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
		side=1;
		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {
					macro_saber_weap
				};
				magazines[] = {
					macro_saber_mag
				};
			};
		};
		class EventHandlers :DefaultEventhandlers {};
	};



};