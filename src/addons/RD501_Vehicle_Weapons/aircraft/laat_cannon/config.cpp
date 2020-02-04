
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(laat_cannons)
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
			macro_new_weapon(cannon,laat)
			
		};
	};
};

class CfgWeapons
{
	class Cannon_30mm_Plane_CAS_02_F;
	class Cannon_LAAT:Cannon_30mm_Plane_CAS_02_F
	{
		class LowROF;
	}
	class macro_new_weapon(cannon,laat): Cannon_LAAT//Cannon_TurboLaserx2_RD501//Cannon_LAAT
	{
		author= "RD501";
		displayName = "LAAT Laser Cannon";
		
		magazines[] = {
			macro_new_mag(laat_cannon,100)
		};

		
		
		initSpeed = 2000;
		ballisticsComputer = 1;
		canLock = 2;
		FCSMaxLeadSpeed = 1500;
		magazineReloadTime=6;
		modes[] = {"manual", "close"};
		class manual: LowROF//manual//LowROF
		{
			
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				soundClosure[] = {};
			};
			class StandardSound
			{
				begin1[] = {"SW_Droides_2\ATTE\atte_laserx2.ogg", 1.5, 1, 2000};
				soundBegin[] = {"begin1", 1};
				closure1[] = {};
				soundClosure[] = {"closure1", 1};
			};
			
			reloadTime = 0.4;
			dispersion = 0.00001;
			
			
			autoFire = 1;
			recoil = "Empty";
		
			showToPlayer = 1;
			burst = 1;
			ballisticscomputer = 1;
			minRange = 1;
			minRangeProbab = 0.1;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 1200;
			maxRangeProbab = 0.04;
			aiDispersionCoefY = 7;
			aiDispersionCoefX = 7;
			aiRateOfFire = 0.3;
			aiRateOfFireDistance = 1500;
			maxLeadSpeed = 600;
		};
		class close: manual
		{
			showToPlayer = 0;
			soundBurst = 0;
			burst = 12;
			aiRateOfFire = .4;
			aiRateOfFireDistance = 200;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 2000;
			maxRangeProbab = 0.04;
		};
		
	
	};


}; 

