
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
	class cannon_120mm;
	class Cannon_TX130m1_mc:cannon_120mm
	{
		modes[] = {"player","close"};
		class player;
	};

	class Cannon_TX130m2_mc:cannon_120mm
	{
		class player;
	}

	#include "_saber.hpp"

	class CannonCore;
	class Cannon_TurboLaser:CannonCore
	{
		class manual;
	};

	class macro_new_weapon(aat_cannon,mbt) : Cannon_TurboLaser
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

		magazineReloadTime = 6;

		modes[] = {"manual","close"};
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"AAT\sounds\aat1.ogg", 2, 1, 2000};
				begin2[] = {"AAT\sounds\aat2.ogg", 2, 1, 2000};
				begin3[] = {"AAT\sounds\aat3.ogg", 2, 1, 2000};
				soundBegin[] = {"begin1", 33, "begin2", 34, "begin3", 33};
			};
			
			reloadTime = 5;
			magazineReloadTime = 6;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			dispersion = 0;//0.0001;
			autoFire = 0;
		};
		class close: manual
		{
			showToPlayer = 0;
			aiRateOfFire = .5;
			aiRateOfFireDistance = 6000;
			minRange = 0;
			minRangeProbab = 1.0;//0.35;
			midRange = 3000;
			midRangeProbab = 1.0;//0.78;
			maxRange = 6000;
			maxRangeProbab = 1.0;
			aiDispersionCoefX = 10;
			aiDispersionCoefY = 10;
		};
	};

	class macro_new_weapon(aat_cannon,king) : Cannon_TurboLaser
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
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"AAT\sounds\aat1.ogg", 2, 1, 2000};
				begin2[] = {"AAT\sounds\aat2.ogg", 2, 1, 2000};
				begin3[] = {"AAT\sounds\aat3.ogg", 2, 1, 2000};
				soundBegin[] = {"begin1", 33, "begin2", 34, "begin3", 33};
			};
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
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"AAT\sounds\aat1.ogg", 2, 1, 1000};
				begin2[] = {"AAT\sounds\aat2.ogg", 2, 1, 1000};
				begin3[] = {"AAT\sounds\aat3.ogg", 2, 1, 1000};
				soundBegin[] = {"begin1", 33, "begin2", 34, "begin3", 33};
			};
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
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"AAT\sounds\aat1.ogg", 2, 1, 1000};
				begin2[] = {"AAT\sounds\aat2.ogg", 2, 1, 1000};
				begin3[] = {"AAT\sounds\aat3.ogg", 2, 1, 1000};
				soundBegin[] = {"begin1", 1, "begin2", 1, "begin3", 1};
			};
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

	class macro_new_weapon(atte,mbt):macro_new_weapon(saber_gun,mbt)
	{
		magazines[] = {
			macro_new_mag(atte_mbt,10)
		};
		displayName = "Heavy ATTE cannon";
		class player: player
		{
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"SW_Droides_2\ATTE\atte_fire.ogg", 3, 1, 3000};
				soundBegin[] = {"begin1", 1};
			};
			recoil = "empty";
			weaponSoundEffect = "DefaultRifle";
			soundContinuous = 0;
			reloadTime = 2;
			magazineReloadTime = 10;//6;
			autoReload = 1;
			ballisticsComputer = 1;
			canLock = 2;
			autoFire = 1;
			dispersion=0.0001;
		};
		class close: player
		{
			showToPlayer = 0;
			aiRateOfFire = 3;
			aiRateOfFireDistance = 5000;
			minRange = 0;
			minRangeProbab = 0.35;
			midRange = 2500;
			midRangeProbab =1.0;// 0.78;
			maxRange = 5000;
			maxRangeProbab = 1.0;
			aiDispersionCoefX = 6;
			aiDispersionCoefY = 6;
		};
	};
}; 

