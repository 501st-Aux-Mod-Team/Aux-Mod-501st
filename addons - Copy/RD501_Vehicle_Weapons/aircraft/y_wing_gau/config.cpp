
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(y_wing_gau)
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
			macro_new_weapon(voltic,y_wing),
			macro_new_weapon(pylon_voltic,y_wing)
			
		};
	};
};

class CfgWeapons
{
	
	class CannonCore;

	class Gatling_30mm_Plane_CAS_01_F:CannonCore
	{
		class LowROF;
	};
	class macro_new_weapon(voltic,y_wing):Gatling_30mm_Plane_CAS_01_F
	{
		displayName = "GAU-7D Voltic";
		magazines[] = {
			macro_new_mag(voltic,200)
		};
		maxZeroing = 10;
		author= "RD501";
	
		ballisticsComputer = 1;
		
		irLock = 1;
		cmImmunity = 0;
		lockAcquire = 0;
		FCSMaxLeadSpeed = 1500;
		laserLock = 1;
		canLock = 2;
		weaponLockSystem = "2+4+8+16";
		magazineReloadTime=10; 
		
		class LowROF: LowROF
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				soundClosure[] = {"closure", 1};
			};
			class StandardSound
			{
				begin1[] = {"ywing\Bywinglaser1.ogg", 0.8, 1, 3000};
				begin2[] = {"ywing\Bywinglaser2.ogg", 0.8, 1, 3000};
				begin3[] = {"ywing\Bywinglaser3.ogg", 0.8, 1, 3000};
				begin4[] = {"ywing\Bywinglaser4.ogg", 0.8, 1, 3000};
				begin5[] = {"ywing\Bywinglaser5.ogg", 0.8, 1, 3000};
				soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
			};
			burst = 10;
			soundContinuous=0;
			reloadTime = 0.04;
		};
	};
	class macro_new_weapon(pylon_voltic,y_wing) : macro_new_weapon(voltic,y_wing)
	{
		displayName = "Voltic (Pylon)";
		displayNameShort = "Voltic";
		magazines[]={macro_new_mag(pylon_voltic,200)};
		class LowROF: LowROF
		{
			burst = 1;
			soundContinuous=0;
			reloadTime = 0.04;
			dispersion=0.0025;
		};
	};
}; 

