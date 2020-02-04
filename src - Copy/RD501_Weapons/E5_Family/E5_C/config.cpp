#define COMPONENT E5_C
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(e5_c)
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
			"SWOP_E5C",
			macro_new_weapon(e5,C_aqua)
		};
	};
};
class Mode_FullAuto;
class cfgWeapons 
{
	
	class SWOP_BlasterRifle_Base;
	
	class SWOP_E5C: SWOP_BlasterRifle_Base
	{
		
		displayName="E5 C Heavy Blaster";
		class FullAuto:Mode_FullAuto
		{
			dispersion = E5_C_accuracy
	 		reloadTime = E5_C_reloadtime_auto
		};
		class GunParticles;
	
	};

	class macro_new_weapon(e5,C_aqua): SWOP_E5C
	{
		dlc = "rd501";
		author = "RD501";
		scope = 2;
		displayname = "E5C-A Blaster Rifle";
		baseweapon = "E5C-A Blaster Rifle";
		canShootInWater = 1;
		//magazines[] = {"RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag","RD501_Aqua_E5_Mag"};
		descriptionShort = "Submersible E5 Rifle";
		selectionFireAnim = "muzzleFlash";
		magazines[]={macro_new_mag(E5c_aqua,90)};
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

