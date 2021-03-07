
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
	class CannonCore;

	class Gatling_30mm_Plane_CAS_01_F:CannonCore
	{
		class LowROF;
	};
	class macro_new_weapon(cannon,laat): Gatling_30mm_Plane_CAS_01_F//Cannon_TurboLaserx2_RD501//Cannon_LAAT
	{
		author= "RD501";
		displayName="LAAT Laser Cannon";
		magazines[]=
			{
				macro_new_mag(laat_cannon,100),
				macro_new_mag(laat_cannon_double,100)
			};
		scope=2;
		initSpeed = 2000;
		ballisticsComputer = 4;
		canLock = 2;
		FCSMaxLeadSpeed = 1500;
		magazineReloadTime=6;
		autoFire=0;
		burst=1;
		class LowROF: LowROF
		{
			sounds[]=
			{
				"StandardSound"
			};
			class StandardSound
			{
				begin1[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					0.89999998,
					6000
				};
				begin2[]=
				{
					"3AS\3AS_AAT\data\sounds\AAT_Cannon.wss",
					1,
					0.89999998,
					6000
				};
				soundBegin[]=
				{
					"begin1",
					0.1,
					"begin2",
					0.5
				};
				class SoundTails
				{
					class TailForest
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_forest",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*forest";
					};
					class TailHouses
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_houses",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*houses";
					};
					class TailInterior
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_interior",
							1.99526,
							1,
							2200
						};
						frequency=1;
						volume="interior";
					};
					class TailMeadows
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_meadows",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*(meadows/2 max sea/2)";
					};
					class TailTrees
					{
						sound[]=
						{
							"A3\Sounds_F\arsenal\weapons\LongRangeRifles\GM6_Lynx\GM6_tail_trees",
							1,
							1,
							2200
						};
						frequency=1;
						volume="(1-interior/1.4)*trees";
					};
				};
			};
			multiplier=1;
			ballisticscomputer = 4;
			soundContinuous=1;
			autoFire=1;
			flash="gunfire";
			flashSize=0.1;
			recoil="Empty";
			ffMagnitude=0.5;
			ffFrequency=11;
			ffCount=6;
			burst=1;
			showToPlayer=1;
			reloadTime = 0.4;
			dispersion = 0.00001;
			aiRateOfFire=1;
			aiRateOfFireDistance=10;
			minRange=0;
			minRangeProbab=0.0099999998;
			midRange=1;
			midRangeProbab=0.0099999998;
			maxRange=2;
			maxRangeProbab=0.0099999998;
		};
	};


}; 

