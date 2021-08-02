
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(tank_cannons)
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
			macro_new_weapon(saber_gun,td),
			macro_new_weapon(saber_gun,mbt),
			macro_new_weapon(aat_cannon,mbt),
			macro_new_weapon(aat_cannon,king),
			macro_new_weapon(atte,mbt),
			macro_new_weapon(mynock_cannon,mbt),
			macro_new_weapon(mynock_cannon,td)
		};
	};
};

class CfgWeapons
{
	class 3AS_HeavyGATCannon_Base;
	class 3AS_GATCannon:3AS_HeavyGATCannon_Base
	{
		class manual;
	}
	class macro_new_weapon(aat_cannon,mbt) : 3AS_GATCannon
	{
		
		displayName = "Heavy Laser Cannon";
		dlc = "RD501";
		author= "RD501";

		magazines[] = {
			macro_new_mag(aat_mbt,50)
		};

		ballisticsComputer = 4;
		canLock = 2;
		weaponLockDelay = 3.5;
		weaponLockSystem = 8;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.1;
		reloadTime=2;
		magazineReloadTime = 6;

		modes[] = {"manual","close"};
		class manual: manual
		{
			reloadTime=0.5;
		};
	};

	class macro_new_weapon(aat_cannon,king) : 3AS_GATCannon
	{
		
		displayName = "King Heavy Laser Cannon";
		dlc = "RD501";
		author= "RD501";

		magazines[] = {
			macro_new_mag(aat_mbt,10)
		};

		ballisticsComputer = 4;
		canLock = 2;
		weaponLockDelay = 3.5;
		weaponLockSystem = 8;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.1;

		magazineReloadTime = 6;

		modes[] = {"manual","close"};
		class manual: manual
		{
			recoil = "empty";
			weaponSoundEffect = "DefaultRifle";
			soundContinuous = 0;
			reloadTime = 3;
			magazineReloadTime = 6;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 0;
			dispersion = 0;
		};
		class close: manual
		{
			showToPlayer = 0;
			aiRateOfFire = .5;
			aiRateOfFireDistance = 10000;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 10000;
			maxRangeProbab = 1.0;
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
	};
	
		class macro_new_weapon(mynock_cannon,mbt) : macro_new_weapon(aat_cannon,king)
	{
		
		displayName = "Primary Mass Thrower";
		dlc = "RD501";
		author= "RD501";

		magazines[] = {
			macro_new_mag(mynock_mbt_ap,12),
			macro_new_mag(mynock_mbt_he,12)
		};

		ballisticsComputer = 4;
		canLock = 2;
		weaponLockDelay = 3.5;
		weaponLockSystem = 8;
		ace_overpressure_angle = 30;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 0.1;

		magazineReloadTime = 6;

		modes[] = {"manual","close"};
		class manual: manual
		{
			recoil = "empty";
			weaponSoundEffect = "DefaultRifle";
			soundContinuous = 0;
			reloadTime = 3;
			magazineReloadTime = 6;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 0;
			dispersion = 0;
		};
		class close: manual
		{
			showToPlayer = 0;
			aiRateOfFire = .5;
			aiRateOfFireDistance = 10000;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 10000;
			maxRangeProbab = 1.0;
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
	};

	class macro_new_weapon(mynock_cannon,td) : macro_new_weapon(aat_cannon,king)
	{
		
		displayName = "Quantum Accelerator";
		dlc = "RD501";
		author= "RD501";

		magazines[] = {
			macro_new_mag(mynock_mbt_td,12),
		};

		ballisticsComputer = 4;
		canLock = 2;
		weaponLockDelay = 3.5;
		weaponLockSystem = 8;
		ace_overpressure_angle = 360;
		ace_overpressure_range = 10;
		ace_overpressure_damage = 100;

		magazineReloadTime = 6;

		modes[] = {"manual","close"};
		class manual: manual
		{
			recoil = "empty";
			weaponSoundEffect = "DefaultRifle";
			soundContinuous = 0;
			reloadTime = 12;
			magazineReloadTime = 12;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 0;
			dispersion = 0;
		};
		class close: manual
		{
			showToPlayer = 0;
			aiRateOfFire = .5;
			aiRateOfFireDistance = 10000;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 500;
			midRangeProbab = 0.78;
			maxRange = 10000;
			maxRangeProbab = 1.0;
			aiDispersionCoefX = 2;
			aiDispersionCoefY = 2;
		};
	};
}; 

