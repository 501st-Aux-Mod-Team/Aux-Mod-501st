
#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(jammer_truck)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(cis,jammer_truck),
		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles
{
    class I_Truck_02_ammo_F;

	class macro_new_vehicle(cis,jammer_truck): I_Truck_02_ammo_F
    {
        displayName = "CIS Enigma (Jammer)";
        crew = macro_new_unit_class(opfor,B1_crew)
        side = 0;
        faction = macro_cis_faction
        editorSubcategory = macro_editor_cat(car)
        vehicleClass = macro_editor_vehicle_type(Car)
        scope = 2;
        scopeCurator = 2;
        forceInGarage = 1;
    };
};

class Extended_Init_EventHandlers 
{
	class macro_new_vehicle(cis,jammer_truck)
	{
		class rd501_jammer {
			init = "[_this select 0, 600, 160] call rd501_fnc_jammersAdd";
		};
	}
};