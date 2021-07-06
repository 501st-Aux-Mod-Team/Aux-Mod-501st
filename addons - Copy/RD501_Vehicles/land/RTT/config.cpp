#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(rtt)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(gar,rtt)
		};
		weapons[]={};
	};
};

class CfgVehicles
{
    class 3as_RTT_Base;
    class macro_new_vehicle(gar,rtt): 3as_RTT_Base {
            side = 1;
		    scope = 2;
		    scopeCurator = 2;
		    displayName = "Republic RTT";
		    forceInGarage = 1;
            faction = macro_republic_faction
            editorSubcategory = macro_editor_cat(APC)
            vehicleClass = macro_editor_vehicle_type(APC)

            RD501_magclamp_large_offset[] = {0.0, 0.0, -4.0};
            RD501_magclamp_small_offset[] = {0.0, 0.0, -4.0};

            hiddenSelections[] = {"camo1"};
            hiddenSelectionsTextures[] = {"3as\3as_rtt\data\rtt\exterior_CO.paa"};
    };
};