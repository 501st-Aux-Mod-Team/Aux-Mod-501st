//Get this addons macro

//get the macro for the air macro_patch_name(vehicles)

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon MTT
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define macro_new_mtt_class(name) vehicle_classname##_##name


class CfgPatches
{
	class macro_patch_name(vehicle_addon)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			"o_swop_mtt_1"
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
	class O_O_SWOP_MTT_base;

	class o_swop_mtt_1 : O_O_SWOP_MTT_base
	{
		class EventHandlers :DefaultEventhandlers{};
		class UserActions
		{
			class deploy_droids
			{
				displayName = "<t color='#00FF00'>DEPLOY THE DROIDS</t>";
				displayNameDefault = "<t color='#00FF00'>DEPLOY THE DROIDS</t>";
				textToolTip = "<t color='#00FF00'>DEPLOY THE DROIDS</t>";
				position = "pilotview";
				radius = 20;
				priority = 21;
				onlyForPlayer = 1;
				condition = "!(this getVariable ['RD501_Deployed',false])";
				statement = "this call RD501_Main_fnc_mtt_deploy_droids";
				shortcut=""
			};
		};

		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)
	};
	


};