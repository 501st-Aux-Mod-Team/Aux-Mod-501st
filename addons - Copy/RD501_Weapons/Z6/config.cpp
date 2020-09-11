#define COMPONENT z6_patch
#include "../../RD501_main/config_macros.hpp"
#include "../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(z6)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(weapons)
		requiredAddons[]=
		{
			macro_patch_name(weapons),
			"3AS_Weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon_nofam(Z6),
			macro_new_weapon_nofam(rZ6),
			"SWOP_Valken38XAuto_XD",
			macro_new_weapon_nofam(Z1000)
		};
	};
};

class Mode_SemiAuto;
class cfgWeapons 
{	
	/*class Rifle_Base_F;
	class Mode_FullAuto;
	class SW_Z6_base_F:Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};

	class SWOP_Z6Blaster:SW_Z6_base_F
	{

		displayName="Z6 Rotary Cannon";
		class FullAuto1;
		class FullAuto2;

		class WeaponSlotsInfo:WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};

	class macro_new_weapon_nofam(Z6):SWOP_Z6Blaster
	{
		displayName="Z6 Rotary Cannon";
		scope=2;
		scopeArsenal=2;

		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon_nofam(Z6)

		modes[] = {"FullAuto1", "overcharge_burst", "medium1", "medium2", "far1", "far2"};

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

		magazines[] = {macro_new_mag(z6,400)};

		class FullAuto1:FullAuto1
		{	
			dispersion = Z6_accuracy
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			reloadTime = Z6_fullauto_reload
		};

		class overcharge_burst:FullAuto1
		{

			dispersion = Z6_accuracy_burst
			displayName = "Over Charge Auto";
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			//reloadTime = 0.1;
			reloadTime = Z6_burst_reload
			//soundContinuous = 1;
			burst = 25;
			textureType = "fastAuto";
		};

		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class CowsSlot: CowsSlot
			{
				compatibleItems[] = {
					macro_new_weapon(scope,dc_15a_acog)
				};
			};
		};

	};*/
	class LMG_Mk200_F;
	class JLTS_Z6:LMG_Mk200_F
	{
		class manual;
		class WeaponSlotsInfo
		{
			class MuzzleSlot;
		};
	};
	class macro_new_weapon_nofam(rZ6):JLTS_Z6
	{
		scope=2;
        scopeArsenal=2;
		JLTS_hasElectronics=0;
		recoil="recoil_lim"
		baseWeapon=macro_new_weapon_nofam(rZ6)
        displayName="Republic Z6 Chaingun";
		magazines[]=
		{
			macro_new_mag(10mw,400)
		};
		modes[] = {"manual", "Overcharge"};
		class manual:manual
		{
		reloadTime=0.059;
		};
		class Overcharge:manual
		{
			dispersion = Z6_accuracy_burst
			displayName = "Over Charge Auto";
			reloadTime = Z6_burst_reload
			burst = 25;
			textureType = "fastAuto";
		};
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			mass = 30;
			class MuzzleSlot: MuzzleSlot
			{
				linkProxy="\A3\data_f\proxies\weapon_slots\MUZZLE";
				displayName="$str_a3_cfgweapons_abr_base_f_weaponslotsinfo_muzzleslot0";
				compatibleItems[]=
				{
					"RD501_muzzle_flash"
				};
				iconPicture="\A3\Weapons_F\Data\UI\attachment_muzzle.paa";
				iconPinpoint="Center";
			};
		};
		class HitEffects
		{
			Hit_Foliage_green="";
			Hit_Foliage_Dead="";
			Hit_Foliage_Green_big="";
			Hit_Foliage_Palm="";
			Hit_Foliage_Pine="";
			hitFoliage="";
			hitGlass="";
			hitGlassArmored="";
			hitWood="";
			hitHay="";
			hitMetal="";
			hitMetalPlate="";
			hitBuilding="";
			hitPlastic="";
			hitRubber="";
			hitConcrete="";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="";
			hitGroundRed="";
			hitGroundHard="";
			hitWater="";
			hitVirtual="";
		};
	};
	class 3AS_Chaingun;
    class macro_new_weapon_nofam(z1000): 3AS_Chaingun
    {
        scope=2;
        scopeArsenal=2;
		recoil="recoil_mmg_02";
        displayName="Republic Z1000 Chaingun";
		picture = "\RD501_Weapons\Z6\chaingun_icon.paa";
		RD501_Empty_Weapon = macro_quote(macro_new_weapon_nofam(z1000u));
		magazines[]=
		{
			macro_new_mag(z1000,3000)
		};
		class EventHandlers {
			fired = macro_quote(_this call macro_fnc_name(onWeaponFiredSwapToEmpty));
		};
		class HitEffects
		{
			Hit_Foliage_green="";
			Hit_Foliage_Dead="";
			Hit_Foliage_Green_big="";
			Hit_Foliage_Palm="";
			Hit_Foliage_Pine="";
			hitFoliage="";
			hitGlass="";
			hitGlassArmored="";
			hitWood="";
			hitHay="";
			hitMetal="";
			hitMetalPlate="";
			hitBuilding="";
			hitPlastic="";
			hitRubber="";
			hitConcrete="";
			hitMan="ImpactEffectsBlood";
			hitGroundSoft="";
			hitGroundRed="";
			hitGroundHard="";
			hitWater="";
			hitVirtual="";
		};
    };
	class macro_new_weapon_nofam(z1000u): 3AS_Chaingun
    {
        scope=1;
        scopeArsenal=1;
        displayName="Z1000 Chaingun (Used)";
		picture = "\RD501_Weapons\Z6\chaingun_icon.paa";
        _generalMacro="launch_RPG32_F";
		magazines[]=
		{
			"none"
		};
    };
};

