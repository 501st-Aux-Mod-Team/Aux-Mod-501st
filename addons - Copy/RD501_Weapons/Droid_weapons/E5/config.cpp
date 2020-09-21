#define COMPONENT E5
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(e5)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			//macro_new_weapon(e5,c)
			macro_new_weapon(e5,aqua)
		};
	};
};
class Mode_FullAuto;
class cfgWeapons 
{
	
	class SWOP_BlasterRifle_Base;

	class SWOP_E5:SWOP_BlasterRifle_Base
	{
		class GunParticles;
	};
	class macro_new_weapon(e5,aqua): SWOP_E5
	{
		dlc = "rd501";
		author = "RD501";
		scope = 2;
		displayname = "E5-A Blaster Rifle";
		baseweapon = "E5-A Blaster Rifle";
		canShootInWater = 1;
		//magazines[] = {"RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag"};
		descriptionShort = "Submersible E5 Rifle";
		selectionFireAnim = "muzzleFlash";
		
		magazines[]={macro_new_mag(E5_aqua,60)};
		class GunParticles : GunParticles
		{	class SecondEffect
			{
				effectName = "ShotUnderwater";
				positionName = "barrel";
				directionName = "Tip";
			};
		};
	};

};

