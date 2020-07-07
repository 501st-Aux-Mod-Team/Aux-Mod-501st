#define COMPONENT DC_15s
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(dc_15s)
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
			macro_new_weapon(DC,15s),
			macro_new_weapon(DC,15s_shield)
		};
	};
};

class cfgWeapons 
{
	class SWOP_B2gun;
	class Rifle_Long_Base_F;
	class SWOP_BlasterRifle_Base:Rifle_Long_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SWOP_DC15: SWOP_BlasterRifle_Base
	{
		class Single;
		class Burst;
		class FullAuto;

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};

		
		
		
	};

	class macro_new_weapon(DC,15s):SWOP_DC15
	{
		DC_Family_Flashlight

		displayName="DC-15s Carbine";
    	scope=2;
		scopeArsenal=2;
		weaponPoolAvailable = 1;
		
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,15s);

		magazines[]={macro_new_mag(DC15s,60),macro_new_mag(DC15_underwater,40)};

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";
		modes[] = {"Single","FullAuto", "close", "short", "medium"};

		class FullAuto:FullAuto
		{
			reloadTime = DC15s_reloadtime_full
        	dispersion = DC15s_accuracy
		};

		class Single:Single
		{
			reloadTime = DC15s_reloadtime_full*2;
        	dispersion = DC15s_accuracy*0.8;
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_15a_acog)
				};

			};
		};
	};

	class Pistol;
	class Pistol_Base_F:Pistol
	{
		class WeaponSlotsInfo;
	};
	
	class SWOP_DC15_sh: Pistol_Base_F
	{
		
		class FullAuto;
		
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		}
		
	};

	
	class macro_new_weapon(DC,15s_shield):SWOP_DC15_sh
	{
		DC_Family_Flashlight
		weaponPoolAvailable = 1;
		displayName="DC-15s Carbine Shield";
    	scope=2;
		scopeArsenal=2;
		canShootInWater = 1;
		magazines[]={macro_new_mag(DC15s,60)};
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,15s_shield);

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

		modes[] = {"FullAuto", "close", "short", "medium"};

		class FullAuto:FullAuto
		{
			reloadTime = DC15s_reloadtime_full
        	dispersion = DC15s_accuracy
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				access = 1;
				compatibleItems[] = 
				{
					macro_new_weapon(scope,dc_15a_acog)
				};

			};
		};
	};

	class macro_new_weapon(DC,15s_shield_212):macro_new_weapon(DC,15s_shield)
	{
		displayname = "DC-15s Carbine Shield (212th Battalion)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SW_CloneWarsWeapons\DCrifles\textures\sh212.paa"};
		baseWeapon = macro_new_weapon(DC,15s_shield_212);
	};

	class macro_new_weapon(DC,15s_shield_cg):macro_new_weapon(DC,15s_shield)
	{
		displayname = "DC-15s Carbine Shield (Corusant Guard)";
		hiddenSelections[] = {"Camo"};
		hiddenSelectionsTextures[] = {"\SW_CloneWarsWeapons\DCrifles\textures\shCG.paa"};
		baseWeapon = macro_new_weapon(DC,15s_shield_cg);
	};
};

