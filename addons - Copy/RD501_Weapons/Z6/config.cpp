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
	class Rifle_Base_F;
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

	};
	class LMG_Mk200_F;
	class JLTS_Z6:LMG_Mk200_F
	{
		class manual;
	};
	class macro_new_weapon_nofam(rZ6):JLTS_Z6
	{
		scope=2;
        scopeArsenal=2;
		recoil="recoil_mmg_02"
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
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			//reloadTime = 0.1;
			reloadTime = Z6_burst_reload
			//soundContinuous = 1;
			burst = 25;
			textureType = "fastAuto";
		};

	};
	class 3AS_Chaingun;
    class macro_new_weapon_nofam(z1000): 3AS_Chaingun
    {
        scope=2;
        scopeArsenal=2;
		recoil="recoil_mmg_01";
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

	/*class OPTRE_UnguidedLauncher_Base;
	class OPTRE_M41_SSR:OPTRE_UnguidedLauncher_Base
	{
		class Single;
	};
	class macro_new_weapon(chaingun,z6x): OPTRE_M41_SSR
	{
		baseWeapon = macro_new_weapon(chaingun,z6x);
		recoil = macro_new_recoil(chaingun);
		displayName = "Z-6X";
		magazines[] = {macro_new_mag(chaingun_z6x,1000)};

		ace_overpressure_priority = 1;
		ace_overpressure_angle = 0;
		ace_overpressure_range = 0;
		ace_overpressure_damage = 0;

		descriptionshort = "Ur mom gay :)";

		class GunParticles
		{
			class effect1
			{
				positionName = "muzzleEnd2";
				directionName = "muzzlePos2";
				effectName = "";
			};
		};
		
		modelOptics = "Scope\4x_xm8.p3d";
		class OpticsModes
		{
		
			class StepScope
			{
				
				opticsID = 1;
				useModelOptics = 1;
				opticsPPEffects[] = {"OpticsCHAbera1", "OpticsBlur1"};
				opticsFlare = 0;
				opticsZoomMin = 0.125;
				opticsZoomMax = 0.125/2;
				opticsZoomInit = 0.125;
				distanceZoomMin = 300;
				distanceZoomMax = 300;
				memoryPointCamera = "eye";
				cameraDir = "look";
				visionMode[] = {"Normal", "NVG", "Ti"};
				thermalMode[] = {0, 1};
				opticsDisablePeripherialVision = 1;
				discretefov[] = {0.125, 0.125/4, 0.125/8};
				discreteInitIndex = 0;
			};
		};

		modes[] = {"Single"};
		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
			};
			class StandardSound: BaseSoundModeType
			{
				// begin1[] = {"OPTRE_Weapons\Rockets\data\sounds\rocket_1.wss", 2.5, 1, 1500};
				// soundBegin[] = {"begin1", 1};
				begin1[] = {"SW_CloneWarsWeapons\SW_Z6\sound\fire1z6.ogg", 0.9, 3, 2000};
				begin2[] = {"SW_CloneWarsWeapons\SW_Z6\sound\fire1z6.ogg", 0.9, 3, 2000};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};

				// begin1[] = {"SW_CloneWarsWeapons\DC17\DC171.ogg", 1, 3, 1200};
				// begin2[] = {"SW_CloneWarsWeapons\DC17\DC172.ogg", 1, 3, 1200};
				// begin3[] = {"SW_CloneWarsWeapons\DC17\DC173.ogg", 1, 3, 1200};
				// begin4[] = {"SW_CloneWarsWeapons\DC17\DC174.ogg", 1, 3, 1200};
				// begin5[] = {"SW_CloneWarsWeapons\DC17\DC175.ogg", 1, 3, 1200};
				// soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
			};
			recoil = "recoil_empty";
			//reloadtime = 1;
			reloadTime = 0.03;
			dispersion = 0.0015;
			autoFire=1;
			burst = 1;
			aiRateOfFire = 7;
			aiRateOfFireDistance = 600;
			minRange = 10;
			minRangeProbab = 0.3;
			midRange = 400;
			midRangeProbab = 0.8;
			maxRange = 600;
			maxRangeProbab = 0.1;
		};
	};*/

};

