
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(generic_aircraft_weapons)
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
			macro_new_weapon(generic,aircraft_laser),
			macro_new_weapon(generic,rebel_aircraft_laser),
			macro_new_weapon(generic,ion_aircraft_laser),
			macro_new_weapon(generic,tie_aircraft_laser),
			macro_new_weapon(generic,purple_aircraft_laser),
			macro_new_weapon(generic,plasma_aircraft_laser),
			macro_new_weapon(generic,tank_repeater),
			macro_new_weapon(generic,rebel_aircraft_cannon),
			macro_new_weapon(generic,imperial_aircraft_cannon),
			macro_new_weapon(generic,republic_aircraft_cannon),
			macro_new_weapon(generic,cis_aircraft_cannon),
			macro_new_weapon(generic,purple_aircraft_cannon),
			macro_new_weapon(generic,plasma_aircraft_cannon),
			macro_new_weapon(generic,preatorian_gun_opfor),
			macro_new_weapon(aa_gun,aa_gun_base),
			macro_new_weapon(generic,blue_dual_aircraft_laser),
			macro_new_weapon(generic,green_dual_aircraft_laser),
			macro_new_weapon(generic,preatorian_turret_opfor)
		};
	};
};

class CfgWeapons
{
	class CannonCore;
	class Cannon_30mm_Plane_CAS_02_F:CannonCore
	{
		class LowROF;

	};

	class Gatling_30mm_Plane_CAS_01_F:CannonCore
	{
		class LowROF;
	};
	//Laser Guns
	#include "aircraft_laser_gun.hpp"

	//Laser Cannon
	class macro_new_weapon(generic,republic_aircraft_cannon) : macro_new_weapon(generic,aircraft_laser)
	{
		magazines[] = {macro_new_mag(generic_aircraft_gun_green,1000)};
		displayName = "Laser Cannon";
		burst = 1;
		class LowROF: LowROF
		{
			textureType = "fullAuto";
			burst = 1;
			reloadTime=0.04; 
			dispersion=0;
		};
	};

	class macro_new_weapon(generic,cis_aircraft_cannon) : macro_new_weapon(generic,aircraft_laser)
	{
		magazines[] = {macro_new_mag(generic_aircraft_cannon_red,1000)};
		class LowROF: LowROF
		{
			textureType = "fullAuto";
			burst = 1;
			reloadTime=0.04; 
			dispersion=0;
		};
	};
	class macro_new_weapon(generic,blue_aircraft_cannon) : macro_new_weapon(generic,aircraft_laser)
	{
		magazines[] = {macro_new_mag(generic_aircraft_cannon_blue,1000)};
		class LowROF: LowROF
		{
			textureType = "fullAuto";
			burst = 1;
			reloadTime=0.04; 
			dispersion=0;
		};
	};

	class macro_new_weapon(generic,green_dual_aircraft_laser): macro_new_weapon(generic,aircraft_laser)
	{
		scope=2;
		canLock = 1;
		ballisticsComputer = 4;
		weaponLockSystem = 0;
		magazines[] = {macro_new_mag(generic_aircraft_gun_dual_green,1000),macro_new_mag(generic_aircraft_gun_asg,3000)};
		class LowROF: LowROF
		{
            displayName = "Aircraft Laser Gun";
            dispersion = 0.012;
            autoFire=true;
            aiRateOfFire = 0.001;
            reloadTime=0.06;

            aiRateOfFireDispersion = 0.0;
            aiRateOfFireDistance = 0;

            minRange = 0;
            minRangeProbab = 1;
            midRange = 7500;
            midRangeProbab = 1;
            maxRange = 15000;
            maxRangeProbab = 1;

            weaponLockDelay = 0;
            weaponLockSystem = 0;
            lockAcquire = 1;
            FCSMaxLeadSpeed = 1000;
            burst = 10;//30;
		};
	};

	class macro_new_weapon(generic,purple_aircraft_cannon) :macro_new_weapon(generic,republic_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class macro_new_weapon(generic,plasma_aircraft_cannon) : macro_new_weapon(generic,republic_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			dispersion = 0;
			class StandardSound
			{
			soundBegin[] = {"begin1",1};
			};
		};
	};
	class macro_new_weapon(aa_gun,aa_gun_base) : macro_new_weapon(generic,republic_aircraft_cannon)
	{
		displayName = "PPTG2AC"
		magazines[] = {macro_new_mag(AA_Gun_Base,1000)};
		class LowROF: LowROF
		{
			dispersion = 0;
			class StandardSound
			{
				begin1[] = {"TIEdef\ioncanon1.ogg",1.1,1.1,3000};
				begin2[] = {"TIEdef\ioncanon2.ogg",1.1,1.1,3000};
				begin3[] = {"TIEdef\ioncanon3.ogg",1.1,1.1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
	};
	//Preatorian gun
	class autocannon_35mm;
	class macro_new_weapon(generic,preatorian_gun_opfor): autocannon_35mm
	{
		displayName = "B.E.A.R.D";
		magazines[] = {
			macro_new_mag(generic_aircraft_gun_preatorian,1000)
		};
	};
	class macro_new_weapon(generic,preatorian_turret_opfor): autocannon_35mm
	{
		displayName = "Heavy Turret";
		magazines[] = {
			macro_new_mag(generic_aircraft_gun,1000)
		};
		
	};

	//Kannon
	class macro_new_weapon(generic,kannon) : macro_new_weapon(generic,republic_aircraft_cannon)
	{
		scope = 1;
		displayName = "SIN-C 'Rage'";
		magazines[] = {
			macro_new_mag(Kannon,100)
		};
		modes[] = {"LowROF"};
		dispersion = 0.00001;
		aiRateOfFire = 0.4;
		reloadTime=0.4; 
		burst = 1;
		class LowROF: LowROF
		{
			displayName = "SIN-C 'Rage'";
			multiplier=1;
			dispersion = 0.00001;
			autoFire=true;
			aiRateOfFire = 0.4;
			reloadTime=0.4; 
			burst = 1;
		};
	};
	
	class macro_new_weapon(generic,tank_repeater) : macro_new_weapon(generic,aircraft_laser)
	{
		scope = 1;
		displayName = "CIS Heavy Repeater";
		magazines[] = {macro_new_mag(generic_aircraft_gun,1000)};
		modes[] = {"LowROF"};
		dispersion = 0.01;
		aiRateOfFire = 0.1;
		reloadTime=0.1; 
		burst = 1;
		class LowROF: LowROF
		{
			displayName = "CIS Heavy Repeater";
			multiplier=1;
			dispersion = 0.00001;
			autoFire=true;
			aiRateOfFire = 0.1;
			reloadTime=0.1; 
			burst = 1;
		};
	};

}; 

