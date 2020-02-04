//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon marid
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_marid_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(marid)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(marid,MkII_CIS),
			macro_new_vehicle(marid,MkII_Dark_CIS)
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

	#include "inheritance.hpp"

	class macro_new_vehicle(marid,MkII_CIS):O_APC_Wheeled_02_rcws_v2_F
	{
		displayName = "CIS Trojan IFV";
		textureList[] = {};
		hiddenSelections[] = {"camo1", "camo2", "camo3", "CamoNet", "CamoSlat"};
		forceInGarage = 1;

		crew = "SWOP_CIS_droid_crew";
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(APC)
		vehicleClass = macro_editor_vehicle_type(APC)

		hiddenSelectionsTextures[] = {
			macro_vehicle_textures\marid\maridbody.paa, 
			"",
			macro_vehicle_textures\marid\maridturret.paa,
			""
		};
		

		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				weapons[] = {"Cannon_ATST"};
				magazines[] = {"1000Rnd_Laser_Cannon_Minigun","1000Rnd_Laser_Cannon_Minigun","1000Rnd_Laser_Cannon_Minigun","1000Rnd_Laser_Cannon_Minigun","1000Rnd_Laser_Cannon_Minigun"};	
			
			};
			class CommanderOptics:CommanderOptics
			{
				weapons[] = {"SmokeLauncher"};
				magazines[] = {"SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag","SmokeLauncherMag"};
			};
		};
		class EventHandlers: DefaultEventhandlers {}; 
	};

	class macro_new_vehicle(marid,MkII_Dark_CIS):macro_new_vehicle(marid,MkII_CIS)
	{
		displayName = "CIS Trojan IFV (Dark)";
			hiddenSelectionsTextures[] = {
			macro_vehicle_textures\marid\dwmaridbody.paa, 
			"",
			macro_vehicle_textures\marid\dwmaridturret.paa,
			""
		};
	};
	
};
