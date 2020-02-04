
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(missiles)
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
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm),
			macro_new_weapon(wynd,lgm),
			macro_new_weapon(tyrant,aa),
			macro_new_weapon(swarm,aa),
			macro_new_weapon(backflip,aa)

		};
	};
};

class CfgWeapons
{

	class missiles_ASRAAM;

	class MissileLauncher;
	class weapon_rim162Launcher: MissileLauncher
	{
		class LoalDistance;
	};

	class Missile_AGM_02_Plane_CAS_01_F;
	class Rocket_04_AP_Plane_CAS_01_F;
	class missiles_DAGR;
	class missiles_Jian;
	class weapon_rim116Launcher;
	

	class macro_new_weapon(wynd,a2a) : missiles_ASRAAM
	{
		displayName = "Wynd (AA)";
		displayNameShort = "Wynd System";
		magazines[] = {macro_new_mag(a2a,4)};
		soundFly[] = {"\xt\SWrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
	};
	class macro_new_weapon(wynd,agm) : missiles_DAGR//Missile_AGM_02_Plane_CAS_01_F
	{
		displayName = "Wynd (AGM)";
		displayNameShort = "Wynd System";
		canLock = 2;
		magazines[] = {macro_new_mag(agm,6) };
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
	};
	class macro_new_weapon(wynd,ugm) : Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "Wynd (UGM)";
		displayNameShort = "Wynd System";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		magazines[] = {macro_new_mag(ugm,10)};
		autoFire=true;
	};
	class macro_new_weapon(wynd,lgm) : missiles_Jian
	{
		displayName = "Wynd (LGM)";
		displayNameShort = "Wynd System";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		magazines[] = {macro_new_mag(lgm,4)};
	};
	class macro_new_weapon(tyrant,aa) : weapon_rim162Launcher
	{
		displayName = "Tyrant AA";
		magazines[] = {macro_new_mag(centurion,8)};
		aiRateOfFire=35.0;
		aiRateOfFireDispersion=0;
		aiRateOfFireDistance=0;
		class LoalDistance : LoalDistance
		{
			aiRateOfFire=35.0;
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=0;
		};		
	};
	class macro_new_weapon(swarm,aa) : weapon_rim162Launcher
	{
		displayName = "Swarm AA";
		magazines[] = {macro_new_mag(spartan,21)};
		aiRateOfFire=0.02;
		aiRateOfFireDispersion=0;
		cost = 50;
		aiRateOfFireDistance=0;
		reloadTime=0.02; 
		burst = 5;
		magazineReloadTime=30
		class LoalDistance : LoalDistance
		{
			reloadTime=0.2; 
			burst = 1;
			cost = 50;
			aiRateOfFire=0.2;
			magazineReloadTime=30
			aiRateOfFireDispersion=0;
			aiRateOfFireDistance=0;
		};		
	};

	class macro_new_weapon(backflip,aa):weapon_rim116Launcher
	{
		cmImmunity = 0.4;
		weaponLockDelay = 3;
		weaponLockSystem = "0+1+2+4+8+16";
		displayName = "OHM X38 Backflip";//leet
		minRange = 50;
		author= "RD501";
		magazineReloadTime = 3;
		magazines[] = {
			macro_new_mag(backflip,8)
		};

	};

}; 

