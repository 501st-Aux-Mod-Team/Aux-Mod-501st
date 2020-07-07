#define COMPONENT DC_15x
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dc_15x)
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
			macro_new_weapon(DC,15x)
			
		};
	};
};

class cfgWeapons 
{
	
	class SWOP_BlasterRifle_Base;

	class SWOP_dc15xBlasterRifle: SWOP_BlasterRifle_Base
	{
	
		class OpticsModes;

		class Single;

	};

	class macro_new_weapon(DC,15x_base):SWOP_dc15xBlasterRifle
	{
		class OpticsModes:OpticsModes
		{
			class Snip;
			class Iron;
		};

		class Single:Single
		{
			dispersion = DC15x_accuracy
			reloadTime = DC15x_reloadtime
		};

		DC_Family_Flashlight

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

	};


	class macro_new_weapon(DC,15x):macro_new_weapon(DC,15x_base)
	{	
		displayName="DC-15 Xtreme Engagement";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable = 1;
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,15x);

		modelOptics = "\scope\DLT19XL.p3d";
		magazines[]={macro_new_mag(DC15x,6)};
		class OpticsModes:OpticsModes
		{
			
			class Snip:Snip
			{
				opticsZoomMin = scope_magnification(24);
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				discretefov[] = {scope_magnification(12),scope_magnification(24)};

				modelOptics = "\scope\DLT19XL.p3d";
				visionMode[] = {"Normal", "NVG", "TI"};
				thermalMode[] = {1,7};
			};
			class Iron:Iron
			{
				
			};
		};

	};




	
};

