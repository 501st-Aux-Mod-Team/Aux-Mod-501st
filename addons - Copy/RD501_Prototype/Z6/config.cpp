#include "../config_macros.hpp" 
#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(Z6_proto)
	{
		author=macro_authors_ppl;
		addonRootClass= macro_patch_name(weapon_prototypes)
		requiredAddons[]=
		{
			macro_patch_name(weapon_prototypes)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(proto,z6)
		};
	};
};
class CowsSlot;
class Mode_SemiAuto;
class cfgWeapons 
{	
	

	class Rifle_Base_F;
	class SCI_arifle_z6_Base_F:Rifle_Base_F
	{
		class WeaponSlotsInfo;
	};
	class SCI_arifle_z6_F:SCI_arifle_z6_Base_F
	{
		class FullAuto;
		class Burst;
		class WeaponSlotsInfo: WeaponSlotsInfo
		{
			class CowsSlot;
		};
	};

	class macro_new_weapon(proto,z6):SCI_arifle_z6_F
	{
		model="\MRC\JLTS\weapons\Z6\Z6.p3d";
		selectionFireAnim="zasleh";
		hiddenSelections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenSelectionsTextures[]=
		{
			"\MRC\JLTS\weapons\Z6\data\Z6_1_co.paa",
			"\MRC\JLTS\weapons\Z6\data\Z6_2_co.paa"
		};
		handAnim[]=
		{
			"OFP2_ManSkeleton",
			"\MRC\JLTS\weapons\Z6\anims\Z6_handanim.rtm"
		};
		
		scope=2;
		scopeArsenal=2;

		dlc = "RD501";
		author= "RD501";

		//changes
		picture="\MRC\JLTS\weapons\Z6\data\ui\Z6_ui_ca.paa";
		UiPicture = "\SW_CloneWarsWeapons\SW_Z6\UI\z6.paa";
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(proto_z6,300)};
		modelOptics="sci_weaponsMain\Data\A3_2d_optic.p3d";
		class OpticsModes
		{
			class Ironsights
			{
				opticsID=1;
				useModelOptics=0;
				opticsFlare="true";
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};

				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin=macro_scope_magnification(1);
				opticsZoomMax=1.1;
				opticsZoomInit=0.75;
				memoryPointCamera="eye";
				visionMode[]={};
				distanceZoomMin=100;
				distanceZoomMax=100;
				cameraDir="";
				discreteinitIndex = 0;
			};
			class Scope: Ironsights
			{
				opticsID=2;
				useModelOptics=1;
				opticsPPEffects[]=
				{
					"OpticsCHAbera5",
					"OpticsBlur5"
				};
				opticsDisablePeripherialVision=0.67000002;
				opticsZoomMin = macro_scope_magnification(4);
				opticsZoomMax = macro_scope_magnification(1);
				opticsZoomInit = macro_scope_magnification(4);
				discretefov[] = {macro_scope_magnification(4)};
				memoryPointCamera="opticView";
				visionMode[]=
				{
					"Normal",
					"NVG"
				};
				opticsFlare="true";
				distanceZoomMin=300;
				distanceZoomMax=300;
			};
		};
		baseWeapon = macro_new_weapon(proto,z6)
		modes[] = {"FullAuto1"};
		macro_ace_heating
		recoil = macro_new_recoil(z6)//"recoil_pdw";
		// initSpeed=-1.2;
		displayName="[PROTOTYPE] Z6";
		muzzles[] = {"this"};//SixBarrleBlast
		class FullAuto1:FullAuto
		{	
			class BaseSoundModeType
			{
				closure1[] = {"SW_CloneWarsWeapons\SW_Z6\sound\closure.wav", 0.9, 1, 30};
				closure2[] = {"SW_CloneWarsWeapons\SW_Z6\sound\no.wav", 0, 1, 30};
				closure3[] = {"SW_CloneWarsWeapons\SW_Z6\sound\no.wav", 0, 1, 30};
				closure4[] = {"SW_CloneWarsWeapons\SW_Z6\sound\closure.wav", 0.9, 1, 30};
				closure5[] = {"SW_CloneWarsWeapons\SW_Z6\sound\no.wav", 0, 1, 30};
				closure6[] = {"SW_CloneWarsWeapons\SW_Z6\sound\no.wav", 0, 1, 30};
				closure7[] = {"SW_CloneWarsWeapons\SW_Z6\sound\closure.wav", 0.9, 1, 30};
				closure8[] = {"SW_CloneWarsWeapons\SW_Z6\sound\no.wav", 0, 1, 30};
				closure9[] = {"SW_CloneWarsWeapons\SW_Z6\sound\no.wav", 0, 1, 30};
				soundClosure[] = {"closure1", 0.5, "closure2", 0.5, "closure3", 0.5, "closure4", 0.5, "closure5", 0.5, "closure6", 0.5, "closure7", 0.5, "closure8", 0.5, "closure9", 0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"SW_CloneWarsWeapons\SW_Z6\sound\fire1z6.ogg", 0.9, 1, 2000};
				begin2[] = {"SW_CloneWarsWeapons\SW_Z6\sound\fire1z6.ogg", 0.9, 1, 2000};
				soundBegin[] = {"begin1", 0.5, "begin2", 0.5};
			};

			dispersion = macro_z6_acc
			recoil = "recoil_single_smg_02";
			recoilProne = "recoil_single_prone_smg_02";
			reloadTime = macro_z6_rof
		};

		// class SixBarrleBlast: SCI_arifle_z6_F
		// {
		// 	displayName = "Z6 Six Barrel Barrage";
			
		// 	magazines[] = {macro_new_mag(shotgun_test,20)};
			
		// 	modes[] = {"Single"};
		// 	class Single: Mode_SemiAuto
		// 	{
				
		// 		sounds[] = {"StandardSound"};
		// 		class StandardSound
		// 		{
		// 			soundSetShot[] = {"Msbs65_01_Shotgun_Shot_SoundSet", "Msbs65_01_Shotgun_Tail_SoundSet"};
		// 		};
		// 		reloadTime = 0.2;
		// 		dispersion = 0.01245;
		// 		minRange = 2;
		// 		minRangeProbab = 0.95;
		// 		midRange = 30;
		// 		midRangeProbab = 0.95;
		// 		maxRange = 100;
		// 		maxRangeProbab = 0.3;
		// 		aiRateOfFire = 1;
		// 		aiRateOfFireDistance = 30;
		// 		autoFire = 1;
		// 	};
		// };
		// class overcharge_burst:FullAuto1
		// {

		// 	dispersion = macro_z6_acc
		// 	displayName = "Over Charge Auto";
		// 	recoil = "recoil_single_smg_02";
		// 	recoilProne = "recoil_single_prone_smg_02";
		// 	//reloadTime = 0.1;
		// 	reloadTime = macro_z6_super_rof
		// 	//soundContinuous = 1;
		// 	burst = 25;
		// 	textureType = "fastAuto";
		// };


	};
};

