
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(staticweapons)
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
			macro_new_weapon(stat,eweb),
			macro_new_weapon(stat,ragl40)
		};
	};
};

class CfgWeapons
{
	class 3AS_HeavyRepeater;
	class 3AS_BlasterTurret_Repeater:3AS_HeavyRepeater
	{
		class manual;
	}
	class macro_new_weapon(stat,eweb):3AS_BlasterTurret_Repeater
	{
		class manual: manual
		{
			dispersion=0.011;
			reloadTime=0.05;
		};
		magazines[]=
		{
			macro_new_mag(eweb,600)
		};
	};
	class macro_new_weapon(stat,ragl40):3AS_BlasterTurret_Repeater
	{
		magazines[]=
		{
			macro_new_mag(ragl40he,40)
		};
	};
	class ace_javelin_Titan_Static;
	class macro_new_weapon(stat,aap4):ace_javelin_Titan_Static
	{
		magazines[]=
		{
			macro_new_mag(aap,4)
		};
	};
};
class CfgMagazines
{
	class 3AS_500_Rnd_BlasterTurret_mag;
	class 40Rnd_20mm_G_belt;
	class 1Rnd_GAT_missiles;
	class macro_new_mag(eweb,600): 3AS_500_Rnd_BlasterTurret_mag
	{
		count=600;
		ammo=macro_new_ammo(z1000)
	};
	class macro_new_mag(ragl40he,40): 40Rnd_20mm_G_belt
	{
		count=40;
		ammo=macro_new_ammo(UGL_HE)
	};
	class macro_new_mag(aap,4): 1Rnd_GAT_missiles
	{
		count=4;
	};
};
class CfgAmmo
{
	
};