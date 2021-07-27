
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(v_wing_laser)
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
			macro_new_weapon(laser,v_wing)

		};
	};
};

class CfgWeapons
{
	class CannonCore;
	class Cannon_30mm_Plane_CAS_02_F: CannonCore
	{
		class LowROF;
	};
	class macro_new_weapon(laser,v_wing):Cannon_30mm_Plane_CAS_02_F
	{
		scope=2;
		displayName="Aircraft Laser Gun";
		modes[]=
		{
			"LowROF"
		};
		canLock=1;
		ballisticsComputer=1;
		weaponLockSystem=0;
		magazines[]=
		{
			macro_new_mag(generic_aircraft_gun_asg,3000)
		};
		magazineWell[]=
		{
			"RD501_generic_aircraft_laser_magwell"
		};
		class LowROF: LowROF
		{
			displayName="Energy Laser";
			multiplier=1;
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"SW_RebelWeapons\A300\A280CFE1.ogg",
						1.1,
						1,
						1800
				};
				begin2[]=
				{
					"SW_RebelWeapons\A300\A280CFE2.ogg",
						1.1,
						1,
						1800
				};
				begin3[]=
				{
					"SW_RebelWeapons\A300\A280CFE3.ogg",
						1.1,
						1,
						1800
				};
				begin4[]=
				{
					"SW_RebelWeapons\A300\A280CFE4.ogg",
						1.1,
						1,
						1800
				};
				begin5[]=
				{
					"SW_RebelWeapons\A300\A280CFE5.ogg",
						1.1,
						1,
						1800
				};
				soundBegin[]=
				{
					"begin1",
						0.2,
						"begin2",
						0.2,
						"begin3",
						0.2,
						"begin4",
						0.2,
						"begin5",
						0.2
				};
			};
			flashSize=1;
			dispersion=0.002;
			autoFire="true";
			aiRateOfFire=0.001;
			reloadTime=0.02;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=0;
			minRange=0;
			minRangeProbab=1;
			midRange=7500;
			midRangeProbab=1;
			maxRange=15000;
			maxRangeProbab=1;
			weaponLockDelay=0;
			weaponLockSystem=0;
			lockAcquire=1;
			FCSMaxLeadSpeed=1000;
			burst=2;
		};
	};
};

