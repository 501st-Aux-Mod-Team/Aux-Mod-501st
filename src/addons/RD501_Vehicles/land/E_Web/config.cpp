//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon E_Web
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_E_Web_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(E_Web)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(e_web,shield_uav),
			macro_new_vehicle(e_web,shield),
			macro_new_vehicle(e_web,uav),
			"SW_halfshieldObject",
			macro_new_vehicle(e_web,cis),
			macro_new_vehicle(e_web,heavy)
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

	class House_F;
	class StaticMGWeapon
	{
		class turrets;
	};
	class EWEBSWBF: StaticMGWeapon
	{
		class turrets: turrets
		{
			class mainturret;
		};
	};
	class SW_halfshieldObject:House_F
	{
		faction = "Default";
		side = 3;
		scope = 2;
		scopeCurator = 2;
		displayName = "Half Shield";
		editorCategory = "SWOP_EditorCategory_Objects";
		editorSubcategory = "SWOP_EditorSubcategory_Other";	
	
	};
	class macro_new_vehicle(e_web,shield): EWEBSWBF
	{
		
		author = "RD501";
		armor = 90;
		displayName = "Shielded E-Web";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)

		crew = "SWOP_CIS_droid_crew";
		typicalCargo[] = {"SWOP_CIS_droid_crew"};

		
		class EventHandlers :DefaultEventhandlers {};

	};


	class macro_new_vehicle(e_web,shield_uav) : macro_new_vehicle(e_web,shield)
	{
		displayName = "Shielded E-Web (UAV)";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
	    isUav=1;
		uavCameraGunnerPos = "PiP0_pos";
		uavCameraGunnerDir = "PiP0_dir";

		class EventHandlers :DefaultEventhandlers {};
	};
	

	class macro_new_vehicle(e_web,uav): EWEBSWBF
	{
		displayName = "E-Web (UAV)";
		crew = "O_UAV_AI";
		typicalCargo[] = {"O_UAV_AI"};
	    isUav=1;
		uavCameraGunnerPos = "PiP0_pos";
		uavCameraGunnerDir = "PiP0_dir";
		author = "RD501";

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)

		class EventHandlers :DefaultEventhandlers {};
	};

	class macro_new_vehicle(e_web,cis): EWEBSWBF
	{
		author = "RD501";
		scope = 2;
		displayname =" E-WEB (CIS)";
		scopeCurator = 2;
		mapSize = 4;
		crew = "SWOP_CIS_droid_crew";
		
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)

		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "";
			dissasembleTo[] = {"RD501_cis_backpacks_eweb_bag"};
		};

		class EventHandlers :DefaultEventhandlers {};
	};
	
	class macro_new_vehicle(e_web,heavy): EWEBSWBF
	{
		author = "RD501";
		scope = 2;
		side = 1;
		displayname = "[PROTOTYPE] Heavy E-WEB Cannon";
		scopeCurator = 2;
		mapSize = 4;
		crew = "SWOP_L501P1_Fives";

		class turrets: turrets
		{
			class mainturret: mainturret
			{
				weapons[] = 
				{
					"RD501_RAMER"
				};
				magazines[] = 
				{
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag",
					"RD501_RAMER_x6_mag"
				};
			};
		};
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(turrets)
		vehicleClass = macro_editor_vehicle_type(turrets)
		class EventHandlers :DefaultEventhandlers 
		{
			init = "[_this select 0] execVM 'RD501_Vehicles\land\E_Web\setmass.sqf'";
		};
		class assembleInfo
		{
			primary = 1;
			base = "";
			assembleTo = "";
			displayName = "E-Web Cannon Backpack";
			dissasembleTo[] = {macro_new_backpack_class(blufor,eweb_bag)};
		};
	};
};