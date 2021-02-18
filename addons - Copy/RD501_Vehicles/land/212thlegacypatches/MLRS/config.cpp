#include "../../../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(rocket_ordinance_tank)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(rocket_ordinance_tank,Mynock),
			macro_new_vehicle(rocket_ordinance_tank,republic),
			macro_new_vehicle(rocket_ordinance_tank,CIS)
		};
		weapons[]=
		{
			
		};
	};
};