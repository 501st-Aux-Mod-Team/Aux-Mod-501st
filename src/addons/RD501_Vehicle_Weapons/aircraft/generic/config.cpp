
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
			
			macro_new_weapon(generic,rebel_aircraft_cannon),
			macro_new_weapon(generic,imperial_aircraft_cannon),
			macro_new_weapon(generic,republic_aircraft_cannon),
			macro_new_weapon(generic,cis_aircraft_cannon),
			macro_new_weapon(generic,ion_aircraft_cannon),
			macro_new_weapon(generic,purple_aircraft_cannon),
			macro_new_weapon(generic,plasma_aircraft_cannon),
			macro_new_weapon(generic,preatorian_gun_opfor),
			macro_new_weapon(aa_gun,aa_gun_base)
		};
	};
};

class CfgWeapons
{
	class Cannon_30mm_Plane_CAS_02_F;
	class SWOP_Cannon_trid:Cannon_30mm_Plane_CAS_02_F
	{
		class LowROF;

	};

	//Laser Guns
	#include "aircraft_laser_gun.hpp"

	//Laser Cannon
	class macro_new_weapon(generic,rebel_aircraft_cannon) : macro_new_weapon(generic,aircraft_laser)
	{
		magazineWell[] = {macro_new_magwell(generic_aircraft_cannon)};
		ballisticsComputer = "1+4";
		displayName = "Aircraft Laser Cannon";
		class LowROF: LowROF
		{
			textureType = "fullAuto";
			burst = 1;
			reloadTime=0.08; 
			class StandardSound
			{
				begin1[] = {"XT\sounds\laser.ogg",1,1,3000};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class macro_new_weapon(generic,imperial_aircraft_cannon) : macro_new_weapon(generic,rebel_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"TIE\Sounds\tielaser1.ogg",1.1,1,3000};
				begin10[] = {"TIE\Sounds\TIELaserCharge.wss",1.1,1,3000};
				begin2[] = {"TIE\Sounds\tielaser2.ogg",1.1,1,3000};
				begin3[] = {"TIE\Sounds\tielaser3.ogg",1.1,1,3000};
				begin4[] = {"TIE\Sounds\TIELaserCharge.wss",1.1,1,3000};
				begin5[] = {"TIE\Sounds\tielaser4.ogg",1.1,1,3000};
				begin6[] = {"TIE\Sounds\tielaser5.ogg",1.1,1,3000};
				begin7[] = {"TIE\Sounds\tielaser6.ogg",1.1,1,3000};
				begin8[] = {"TIE\Sounds\tielaser7.ogg",1.1,1,3000};
				begin9[] = {"TIE\Sounds\tielaser8.ogg",1.1,1,3000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1,"begin9",0.1,"begin10",0.1};
			};
		};
	};

	class macro_new_weapon(generic,republic_aircraft_cannon) : macro_new_weapon(generic,rebel_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"vulture\tridroid\tridroid_gun1.ogg",0.6,1,3000};
				begin2[] = {"vulture\tridroid\tridroid_gun2.ogg",0.6,1,3000};
				begin3[] = {"vulture\tridroid\tridroid_gun3.ogg",0.6,1,3000};
				begin4[] = {"vulture\tridroid\tridroid_gun4.ogg",0.6,1,3000};
				begin5[] = {"vulture\tridroid\tridroid_gun5.ogg",0.6,1,3000};
				soundBegin[] = {"begin1",0.2,"begin2",0.2,"begin3",0.2,"begin4",0.2,"begin5",0.2};
			};
		};
	};

	class macro_new_weapon(generic,cis_aircraft_cannon) : macro_new_weapon(generic,rebel_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"vulture\vulturecannon1.ogg", 0.7, 1, 3000};
				begin2[] = {"vulture\vulturecannon2.ogg", 0.7, 1, 3000};
				begin3[] = {"vulture\vulturecannon3.ogg", 0.7, 1, 3000};
				begin4[] = {"vulture\vulturecannon4.ogg", 0.7, 1, 3000};
				begin5[] = {"vulture\vulturecannon5.ogg", 0.7, 1, 3000};
				soundBegin[] = {"begin1", 0.2, "begin2", 0.2, "begin3", 0.2, "begin4", 0.2, "begin5", 0.2};
			};
		};
	};

	class macro_new_weapon(generic,ion_aircraft_cannon) : macro_new_weapon(generic,rebel_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"TIEdef\ioncanon1.ogg",1.1,1.1,3000};
				begin2[] = {"TIEdef\ioncanon2.ogg",1.1,1.1,3000};
				begin3[] = {"TIEdef\ioncanon3.ogg",1.1,1.1,3000};
				soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
			};
		};
	};

	class macro_new_weapon(generic,purple_aircraft_cannon) : macro_new_weapon(generic,rebel_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			class StandardSound
			{
				begin1[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\canon",1.5,1,2500};
				soundBegin[] = {"begin1",1};
			};
		};
	};

	class macro_new_weapon(generic,plasma_aircraft_cannon) : macro_new_weapon(generic,rebel_aircraft_cannon)
	{
		class LowROF: LowROF
		{
			dispersion = 0;
			class StandardSound
			{
				begin1[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\canon",1.5,1,2500};
			soundBegin[] = {"begin1",1};
			};
		};
	};
	class macro_new_weapon(aa_gun,aa_gun_base) : macro_new_weapon(generic,rebel_aircraft_cannon)
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
	class macro_new_weapon(generic,preatorian_gun_opfor): macro_new_weapon(generic,purple_aircraft_laser)
	{
		displayName = "B.E.A.R.D";
		magazines[] = {
			macro_new_mag(generic_aircraft_gun_preatorian,1000)
		};
		
		class LowROF: LowROF
		{
			burst = 1;
			class StandardSound
			{
				begin1[] = {"SW_EmpireWeapons\e11\e1.ogg", 0.7, 1, 3000};
				soundBegin[] = {"begin1", 0.2};
			};
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
			sounds[] = {"StandardSound"};
			dispersion = 0.00001;
			autoFire=true;
			aiRateOfFire = 0.4;
			reloadTime=0.4; 
			burst = 1;
			class StandardSound
			{
				begin1[] = {macro_soundpath\Kannon_Trail_1.ogg,50,1,3000};
				begin2[] = {macro_soundpath\Kannon_1.ogg,50,1,3000};
				begin3[] = {macro_soundpath\Kannon_2.ogg,50,1,3000};
				begin4[] = {macro_soundpath\Kannon_3.ogg,50,1,3000};
				begin5[] = {macro_soundpath\Kannon_Trail_2.ogg,50,1,3000};
				begin6[] = {macro_soundpath\Kannon_4.ogg,50,1,3000};
				begin7[] = {macro_soundpath\Kannon_5.ogg,50,1,3000};
				begin8[] = {macro_soundpath\Kannon_Trail_3.ogg,50,1,3000};
				soundBegin[] = {"begin1",0.1,"begin2",0.1,"begin3",0.1,"begin4",0.1,"begin5",0.1,"begin6",0.1,"begin7",0.1,"begin8",0.1};
			};		
		};
	};
	

}; 

