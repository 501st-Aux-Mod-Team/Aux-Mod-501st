
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(super_mg)
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
			macro_new_weapon(super_mg,z6),
			macro_new_weapon(super_mg,dlt19)
		};
	};
};

class CfgWeapons
{

	class SW_Z6_base_F;
	class SWOP_Z6BLASTER:SW_Z6_base_F
	{
		
		class FullAuto1;
		class FullAuto2;
	};
	class macro_new_weapon(super_mg,z6) : SWOP_Z6BLASTER
	{
		scopeArsenal = 0; 
		scope=2;
		magazineReloadTime=10;
		modes[] = {"FullAuto1", "medium1", "medium2", "far1", "far2"};
		dlc="RD501"
		author= "RD501";
		baseWeapon = macro_new_weapon(super_mg,z6) ;
		displayName = "Z6 Super Charged Rotary Blaster.";
		descriptionShort = "Super Charged Z6 for vehicle mounts";
		magazines[] = {
			macro_new_mag(supercharged_z6,400)
		};
		modes[] = {"FullAuto1", "medium1", "medium2", "far1", "far2"};

		class FullAuto1:FullAuto1
		{
			dispersion =0.0085;
			reloadTime = 0.03;
		};
	};

	class SWOP_BlasterRifle_Base;
	class SWOP_DLT19BlasterRifle:SWOP_BlasterRifle_Base
	{
		modes[] = {"Single", "FullAuto", "close", "short", "medium"};
		class FullAuto;
	};
	class macro_new_weapon(super_mg,dlt19) : SWOP_DLT19BlasterRifle
	{
		scopeArsenal = 0; 
		magazineReloadTime=10;
		modes[] = {"FullAuto", "close", "short", "medium"};
		dlc="RD501"
		author= "RD501";
		baseWeapon = macro_new_weapon(super_mg,z6) ;
		displayName = "DLT-19 Super Charged Blaster Rifle.";
		descriptionShort = "Super Charged DLT-19 for vehicle mounts";
		magazines[] = {
			macro_new_mag(supercharged_dlt19,200)
		};
		modes[] = {"FullAuto1", "medium1", "medium2", "far1", "far2"};

		class FullAuto:FullAuto
		{
			dispersion =0.0017;
			reloadTime = 0.04;
		};
	};
	



	

}; 

