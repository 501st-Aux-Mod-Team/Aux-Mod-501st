
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
			dispersion=0.007;
			reloadTime=0.01;
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
};
class CfgMagazines
{
	class 3AS_500_Rnd_BlasterTurret_mag;
	class macro_new_mag(eweb,600): 3AS_500_Rnd_BlasterTurret_mag
	{
		count=600;
		ammo=macro_new_ammo(z1000)
	};
	class macro_new_mag(ragl40he,40): 3AS_500_Rnd_BlasterTurret_mag
	{
		count=40;
		ammo=macro_new_ammo(UGL_HE)
	};
};
class CfgAmmo
{
	
};