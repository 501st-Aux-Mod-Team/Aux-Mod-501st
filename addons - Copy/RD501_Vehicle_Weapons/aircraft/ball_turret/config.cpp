
#include "../../../RD501_main/config_macros.hpp"
#include "../../_common/common.hpp"


class CfgPatches
{
	class macro_patch_name(ball_turret)
	{
		author=DANKAUTHORS;
		addonRootClass= macro_patch_name(vehicle_weapons)
		requiredAddons[]=
		{
			macro_patch_name(vehicle_weapons),
			"3AS_LAAT"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(turret,laat_ball_beam_l),
			macro_new_weapon(turret,laat_ball_beam_r)
		};
	};
};

class CfgWeapons
{
	class 3as_LAAT_autocannon_30mm;
	class ParticleBeamCannon_F: 3as_LAAT_autocannon_30mm
	{
		class HE;
	};
	class ParticleBeamCannon: ParticleBeamCannon_F{};
	class macro_new_weapon(turret,laat_ball_beam_l): ParticleBeamCannon
	{
		displayName = "BeamRider Mk-I";
		author = DANKAUTHORS;

		magazines[] = {macro_new_mag(laat_ball_beam,300), "Laser_Battery_F"};
		class HE: HE
		{
			displayName = "BeamRider Mk-I";
			magazines[] = {macro_new_mag(laat_ball_beam,300), "Laser_Battery_F"};
		};

		stabilizedInAxes = 3;
		ballisticsComputer = 1;
		canLock = 2;
		magazineReloadTime=10;
	};
	class macro_new_weapon(turret,laat_ball_beam_r): macro_new_weapon(turret,laat_ball_beam_l){};

	class LMG_RCWS;
	class Cannon_Portableun:LMG_RCWS
	{
		class manual;
	};

	class macro_new_weapon(turret,laat_ball_turret):Cannon_Portableun
	{
		displayName = "BeamRider Mk-III";
		magazines[] = {macro_new_mag(laat_ball_turret,200)};

		stabilizedInAxes = 3;
		ballisticsComputer = 1;
		canLock = 2;
		magazineReloadTime=10; 

		dlc = "RD501";
		author= "RD501";

		modes[] = {"manual", "close"};
		class manual: manual
		{
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {};
				soundClosure[] = {};
			};
			displayName = "Laat Ball Turret";
			reloadTime = 0.0009;
			class StandardSound
			{
				weaponSoundEffect = "DefaultRifle";
				begin1[] = {"Uwing\uwingcannon.ogg", 0.8, 0.5, 2000};
				soundBegin[] = {"begin1", 1};
			};
			autoFire = 1;
			recoil = "Empty";
			dispersion = 0;
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
			aiRateOfFire = 0.05;
			aiRateOfFireDistance = 2000;
			minRange = 0;
			minRangeProbab = 0.05;
			midRange = 1000;
			midRangeProbab = 0.58;
			maxRange = 8000;
			maxRangeProbab = 0.04;
		};
	};
}; 

