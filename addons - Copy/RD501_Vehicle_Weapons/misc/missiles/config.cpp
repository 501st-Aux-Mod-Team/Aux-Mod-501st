
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
		};
	};
};

class CfgWeapons
{

	class missiles_ASRAAM;
	class Rocket_04_AP_Plane_CAS_01_F;
	class missiles_DAGR;
	class missiles_Jian;
	class Missile_AGM_01_Plane_CAS_02_F;
	

	class macro_new_weapon(wynd,a2a) : missiles_ASRAAM
	{
		displayName = "Zephyr (AA)";
		displayNameShort = "Zephyr";
		magazines[] = {macro_new_mag(a2a,4)};
		soundFly[] = {"\xt\SWrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
	};
	class macro_new_weapon(wynd,agm) : missiles_DAGR
	{
		displayName = "Torrent (AGM)";
		displayNameShort = "Torrent";
		canLock = 2;
		magazines[] = {macro_new_mag(agm,6)};
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
	};
	class macro_new_weapon(wynd,ugm) : Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "Hurricane (UGM)";
		displayNameShort = "Hurricane";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		magazines[] = {macro_new_mag(ugm,10)};
		autoFire=true;
	};
	class macro_new_weapon(wynd,lgm) : missiles_Jian
	{
		displayName = "Flashfire (LGM)";
		displayNameShort = "Flashfire";
		soundfly[] = {"\rd501_vehicle_weapons\_sounds\proton_torp.ogg",3,1,800};
		magazines[] = {macro_new_mag(lgm,4)};
	};
	class macro_new_weapon(wynd,lgm1) : missiles_Jian
	{
		displayName = "Flashfire (LGM)";
		displayNameShort = "Flashfire";
		soundfly[] = {"\rd501_vehicle_weapons\_sounds\proton_torp.ogg",3,1,800};
		magazines[] = {macro_new_mag(lgm,1)};
	};
	class macro_new_weapon(pylon,agm):missiles_DAGR
	{
		displayName = "Torrent(Pylon)";
		displayNameShort = "Torrent";
		canLock = 2;
		magazines[] = {
			macro_new_mag(pylon_agm,6)
		};
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};	
	};
	class macro_new_weapon(pylon,a2a) : missiles_ASRAAM
	{
		displayName = "Zephyr Pylon)";
		displayNameShort = "Zephyr";
		magazines[] = {macro_new_mag(pylon_aa,4)};
		soundFly[] = {"\xt\SWrocketloop.ogg",3,1,800};
		lockedTargetSound[] = {"TIE\LockedOn_2.ogg",0.7,1};
		lockingTargetSound[] = {"TIE\Locking_Beep1.ogg",1,1};
	};
	class macro_new_weapon(pylon,ugm) : Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "Hurricane(Pylon)";
		displayNameShort = "Hurricane";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		magazines[] = {macro_new_mag(pylon_ugm,10)};
		autoFire=true;
	};
	class macro_new_weapon(pylon,spark) : Rocket_04_AP_Plane_CAS_01_F
	{
		displayName = "Spark(Pylon)";
		displayNameShort = "Spark";
		soundfly[] = {"\xt\SWionrocketloop.ogg",3,1,800};
		magazines[] = {macro_new_mag(pylon_spark,6)};
		autoFire=true;
	};
	class macro_new_weapon(pylon,lgm) : missiles_Jian
	{
		displayName = "Flashfire (Pylon)";
		displayNameShort = "Flashfire";
		soundfly[] = {"\rd501_vehicle_weapons\_sounds\proton_torp.ogg",3,1,800};
		magazines[] = {macro_new_mag(pylon_lgm,4)};
	};
}; 

