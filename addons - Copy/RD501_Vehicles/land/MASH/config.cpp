#include "../../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(MASH)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{,
			macro_new_vehicle(MASH,Truck)
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
	class B_Truck_01_box_F;
	class macro_new_vehicle(MASH,Truck):B_Truck_01_box_F
	{
		displayName = "Republic M*A*S*H Truck";
		scope = 2;
		forceInGarage = 1;
		side = 1;

		RD501_magclamp_large_offset[] = {0.0, 0.0, -2.0};
		RD501_magclamp_small_offset[] = {0.0, 2.0, -2.0};

		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat(Transport)
		vehicleClass = macro_editor_vehicle_type(Transport)
		enginePower=300;
		peakTorque=800;
		class ACE_Actions {
            class ACE_MainActions {
                displayName = "Deployable CCP";
                condition = "true";
                distance = 4;
                class rd501_deploy_medical_ccp {
                    displayName = "Deploy";
                    statement = "_this call rd501_fnc_deployCCP";
                    icon = "rd501_main\ui_icons\medical_emblem.paa";
                    exceptions[] = {};
                };
            };
        };
	};
};