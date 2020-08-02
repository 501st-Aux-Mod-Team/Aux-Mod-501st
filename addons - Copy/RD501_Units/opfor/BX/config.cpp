#include "../../RD501_main/config_macros.hpp"

class CfgPatches
{
    class macro_patch_name(BX)
    {
        addonRootClass=macro_patch_name(droids_config);
        requiredAddons[] = {
            macro_patch_name(units)
        };
        requiredVersion = 0.1;
        units[] = {
            macro_new_unit_class(opfor,BX),
        };
    };
};

class CfgVehicles
{

    class 3AS_BX_DROID_F;


    class macro_new_unit_class(opfor,BX): 3AS_BX_DROID_F
    {
        displayName = "Commando Droid";
    };
}