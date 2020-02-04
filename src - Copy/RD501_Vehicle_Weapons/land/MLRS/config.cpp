
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(MRLS)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(vehicle_weapons)
		requiredAddons[]=
		{
			macro_patch_name(vehicle_weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(MLRS,M80)
		};
	};
};

class CfgWeapons
{



	//Not Used
	class OPTRE_M79_MLRS;
	class macro_new_weapon(MLRS,M80) : OPTRE_M79_MLRS
	{
		magazines[] = {
			macro_new_mag(MRLS_M80,2)
		};
	};
	



	

}; 

