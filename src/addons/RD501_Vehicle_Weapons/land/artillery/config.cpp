
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(artillery_cannons)
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
			macro_new_weapon(artillery,av76)
		};
	};
};

class CfgWeapons
{

	class SW_155mm_AMOS;
	class macro_new_weapon(artillery,av76):SW_155mm_AMOS
	{
		magazines[] = {
			"32Rnd_155mm_Mo_shells",
			"4Rnd_155mm_Mo_guided",
			"6Rnd_155mm_Mo_mine",
			"2Rnd_155mm_Mo_Cluster",
			"6Rnd_155mm_Mo_smoke",
			"2Rnd_155mm_Mo_LG",
			"6Rnd_155mm_Mo_AT_mine"
		};
	}
	

}; 

