
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(spider_weapons)
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
			macro_new_weapon(spider,homing)
		
		};
	};
};

class CfgWeapons
{
	class LMG_RCWS;
	class Cannon_Spiderdroidog9:LMG_RCWS
	{
		class manual;
	};
	class macro_new_weapon(spider,homing):Cannon_Spiderdroidog9
	{
		modes[] = {"manual", "close"};
		displayName = "Laser Cannon";
		magazines[] = {
			macro_new_mag(homing_spider,10)
		};
		scope = 1;
		author= "RD501";
		ballisticsComputer = 1;
		autoFire = 1;
		canLock = 2;
		airLock = 1;
		reloadmagazinetime = 8;
		class manual:manual
		{
			reloadTime = .6;
			soundBurst = 0;
			dispersion = 0.0002;
		}
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			soundContinuous = 0;
			aiRateOfFire =1;
			aiRateOfFireDistance = 4000;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 2000;
			midRangeProbab =1.0;// 0.58;
			maxRange = 4000;
			maxRangeProbab = 1.0;//0.3;
		};
	};

}; 

