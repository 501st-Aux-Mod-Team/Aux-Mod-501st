
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(bombs)
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
			macro_new_weapon(bomb,cluster),
			macro_new_weapon(bomb,cluster_emp),
			macro_new_weapon(bomb,SDB),
			macro_new_weapon(bomb,LGB)
		};
	};
};

class CfgWeapons
{
	

	class BombCluster_02_F;
	class weapon_SDBLauncher;//RD501_Bomb_Cluster_Launcher
	class GBU12BombLauncher;
	class macro_new_weapon(bomb,cluster): BombCluster_02_F
	{
		magazines[] = {macro_new_mag(cluster_bomb,4),macro_new_mag(cluster_bomb,2)};
		DisplayName = "Rayne Delivery System";
		displayNameShort  = "Rayne System";
		salvo = 4;
		magazineReloadTime = 5;
	};
	class macro_new_weapon(bomb,cluster_emp): macro_new_weapon(bomb,cluster)
	{
		magazines[] = {macro_new_mag(cluster_emp,2)};
	};
	class macro_new_weapon(bomb,SDB) : weapon_SDBLauncher //RD501_Bomb_SDB_Launcher
	{
		magazines[] = {macro_new_mag(sdb_bomb,4)};
		DisplayName = "Rayne Delivery System";
		displayNameShort  = "Rayne System";
		salvo = 4;
		magazineReloadTime = 5;
	};
	class macro_new_weapon(bomb,LGB) : GBU12BombLauncher//RD501_Bomb_LGB_Launcher
	{
		magazines[] = {macro_new_mag(lgb_bomb,4)};
		DisplayName = "Rayne Delivery System";
		displayNameShort  = "Rayne System";
		salvo = 4;
		magazineReloadTime = 5;
	};

	class RocketPods;
	class Mk82BombLauncher;
	class macro_new_weapon(bomb,carpet_I) : Mk82BombLauncher
	{
		displayName = "Mk 9002/E 'Slagger'";
		descriptionShort = "Carpet Bomb";
		author = "RD501";

		magazines[] = {macro_new_mag(carpet_I_bomb_mag,20)};
		canLock = 2;
		salvo = 10;
		magazineReloadTime = 5;

		modes[] = {"BurstSlow"};

		class BurstSlow: RocketPods
		{
			displayName = "FullAuto Carpet Mode";
			textureType = "fullAuto";
			burst = 1;
			autoFire = 1;
			soundContinuous = 0;
			lockingTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_1", 0.562341, 1};
			lockedTargetSound[] = {"A3\Sounds_F\weapons\Rockets\locked_3", 0.562341, 1.5};
			sounds[] = {"StandardSound"};
			class StandardSound
			{
				begin1[] = {"A3\Sounds_F\weapons\Rockets\missile_1", 1, 1, 2000};
				soundBegin[] = {"begin1", 1};
			};
			salvo = 2;
			reloadTime = .4;
			dispersion = 0.015;
			aiRateOfFire = 1;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
	}


}; 

