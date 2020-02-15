#define COMPONENT DC_17
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"



class CfgPatches
{
	class macro_patch_name(dc_17)
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
			macro_new_weapon(DC,17),
			macro_new_weapon(DC,17a)
			
		};
	};
};

class cfgWeapons 
{
	
	class Pistol_Base_F;
	class SWOP_DC17Pistol: Pistol_Base_F
	{
		
		class Single;
	};

	class macro_new_weapon(DC,17):SWOP_DC17Pistol
	{
		displayName="DC-17";
		scope=2;
		scopeArsenal=2;
		weaponPoolAvailable = 1;
		selectionFireAnim="zasleh";
		dlc = "RD501";

		author= "RD501";
		baseWeapon = macro_new_weapon(DC,17);
		model="\MRC\JLTS\weapons\DC17SA\DC17SA.p3d";
		hiddenSelections[]=
		{
			"camo1",
			"illum"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\DC17SA\data\DC17SA_co.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"",
			"\a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat"
		};
		DC_Family_Flashlight

		magazines[]={macro_new_mag(DC17,20),"DCStun_Mag"};
		magazineWell[] = {macro_new_magwell(DC17_GL_Mags)};

		ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
		ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
		ACE_Overheating_JamChance = DC15a_Overheat_JamChance
		ACE_overheating_mrbs = DC15a_Overheat_mrbs
		ACE_overheating_allowSwapBarrel = 1;
		ACE_clearJamAction = "ReloadMagazine";

		class Single:Single
		{
			dispersion =DC17_accuracy;
			reloadTime = DC17_reloadtime;
		};
	};

	class macro_new_weapon(DC,17a):macro_new_weapon(DC,17)
	{
		baseWeapon = macro_new_weapon(DC,17a);
		displayName="DC-17a";
		magazines[]+={ macro_new_mag(DC17,40)};
		magazineWell[] = {};
		// recoil="";
		// recoilProne="";
		class Single:Single
		{
			dispersion =DC17_accuracy;
			reloadTime = DC17_reloadtime/2;
			autoFire=1;
		};
	};

	class Pistol_Base_F;
	class SWOP_DC15SAPistol:Pistol_Base_F
	{
		class Single;
	};



	class RD501_DC_15_RB:SWOP_DC15SAPistol
	{
		scope=2;
		author = "RD501";
		displayname = "DC-15 'Razor Blade'";
		descriptionShort = "Namenai is here";
		recoil = macro_new_recoil(dc15_rb)
		magazines[] = {
			macro_new_mag(DC15_razor_blade,9)
		};
		fireSpreadAngle = 3;
		class FlashLight
		{
			color[] = {7000, 7500, 20000};//{7000, 7500, 10000};
			ambient[] = {6, 9, 9};
			intensity = 5;//2.5;
			size = 1;
			innerAngle = 20;
			outerAngle = 80;
			coneFadeCoef = 10;
			position = "flash_dir";
			direction = "flash_pos";
			useFlare = 1;
			flareSize = 1.5;
			flareMaxDistance = "600.0f";
			dayLight = 1;
			class Attenuation
			{
				start = 2;//0.5;
				constant = 1;
				linear = 0;
				quadratic = 0;//1
				hardLimitStart = 200;
				hardLimitEnd = 300;
			};
			scale[] = {0};
		};

		class Single: Single
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_01", 0.158489, 1, 10};
				closure2[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Closure_Rook40_02", 0.158489, 1.1, 10};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"SW_CloneWarsWeapons\DC17M\dc17msniper1.ogg",1.2,1,2000};
				begin2[] = {"SW_CloneWarsWeapons\DC17M\dc17msniper2.ogg",1.2,1,2000};
				begin3[] = {"SW_CloneWarsWeapons\DC17M\dc17msniper3.ogg",1.2,1,2000};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5, "begin3", 0.5};
				class SoundTails
				{
					class TailInterior
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_interior", 1.41254, 1, 1200};
						frequency = 1;
						volume = "interior";
					};
					class TailTrees
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_trees", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*trees";
					};
					class TailForest
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_forest", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*forest";
					};
					class TailMeadows
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_meadows", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailHouses
					{
						sound[] = {"A3\Sounds_F\arsenal\weapons\Pistols\Rook40\Rook40_tail_houses", 1, 1, 1200};
						frequency = 1;
						volume = "(1-interior/1.4)*houses";
					};
				};
			};

			// recoil = "DC_15_RB_Recoil";
			// recoilProne = "DC_15_RB_Recoil";
			reloadTime = 0.5;
			minRange = 5;
			minRangeProbab = 0.3;
			midRange = 25;
			midRangeProbab = 0.6;
			maxRange = 50;
			maxRangeProbab = 0.1;
			aiRateOfFire = 2;
			aiRateOfFireDistance = 25;

			dispersion = 0.0001;
		};
	};

	
};

