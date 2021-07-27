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
			macro_new_weapon_nofam(Z1000)
		};
	};
};

class Mode_SemiAuto;
class cfgWeapons 
{	
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
		ACE_Overheating_mrbs = 450000;
		canShootInWater=1;
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
					"RD501_muzzle_flash",
					"RD501_acc_particle_condenser",
					"RD501_acc_particle_accelerator"
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
		recoil="recoil_mxc";
		//recoil="recoil_mmg_02";
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

