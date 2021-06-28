class EventHandlers : DefaultEventhandlers
{
	fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');_this execVM '\RD501_Vehicles\air\LAAT\fired_laser.sqf';";
	init = "[_this select 0] execVM 'RD501_Main\functions\autocrate\autocrate.sqf';";
};

#include "../../common/helicopter_mfd.hpp"

class ACE_SelfActions: ACE_SelfActions
{
	class ACE_Passengers
	{
		condition = "alive _target";
		displayName = "Passengers";
		insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
		statement = "";
	};
	#include "../../common/universal_hud_color_changer.hpp"
};

scope=2;
author="RD501";
forceInGarage = 1;

faction = macro_republic_faction
editorSubcategory = macro_editor_cat_air(Republic_heli)
vehicleClass = macro_editor_vehicle_type_air(Republic)
weaponLockSystem = "2+4+8";

RD501_magclamp_small_forbidden=1;
RD501_magclamp_large_offset[]={0.0,1.6,-7.3};

///Flight model
	liftForceCoef = 2;
	bodyFrictionCoef = 15;//25.5;//0.6777;
	cyclicAsideForceCoef = 4*1.2;
	cyclicForwardForceCoef = 2*1.2;
	maxSpeed=200;
	fuelCapacity = 2800;
	fuelConsumptionRate = 0.8;
///
///dmg properties
	armor=500;
	crewCrashProtection=0;
	epeImpulseDamageCoef=0;
///
weapons[] = {
	macro_basic_air_weapons,
	macro_new_weapon(generic,republic_aircraft_cannon),
	macro_new_weapon(cannon,laat),
	macro_new_weapon(wynd,lgm),
	macro_new_weapon(wynd,a2a),
	macro_new_weapon(wynd,agm),
	"SmokeLauncher",
};
magazines[] = {
	macro_basic_air_mags,
	macro_new_mag(generic_aircraft_gun_green,1000),
	macro_new_mag(laat_cannon,100),
	macro_new_mag(a2a,4),
	macro_new_mag(agm,6),
	macro_new_mag(agm,6),
	macro_new_mag(lgm,4),
	"SmokeLauncherMag",
	"SmokeLauncherMag",
	"SmokeLauncherMag",
	"SmokeLauncherMag",
};
smokeLauncherGrenadeCount=48;
smokeLauncherAngle=360;
smokeLauncherVelocity=14;

#include "../../common/common_pilotCamera.hpp"
class ViewPilot: ViewPilot
{
	initAngleX = 0;
};
class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=500;
							maxRange=4000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=500;
							maxRange=3500;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						typeRecognitionDistance=7500;
						maxTrackableSpeed=600;
						angleRangeHorizontal=60;
						angleRangeVertical=40;
						animDirection="mainGun";
						aimDown=-0.5;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=10000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=7000;
							maxRange=7000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=16000;
						angleRangeHorizontal=360;
						angleRangeVertical=180;
						aimDown=0;
						maxTrackableSpeed=1388.89;
					};
				};
			};
		};
//transport
class TransportWeapons
{
	class _transport_dc15a
	{
		weapon = macro_new_weapon(DC,15a)
		count = 5;
	};
	class _transport_dc15s
	{
		weapon = macro_new_weapon(DC,r15s)
		count = 5;
	};
	class _transport_dc15c
	{
		weapon = macro_new_weapon(DC,15c)
		count = 5;
	};
	class _transport_dc15l
	{
		weapon = macro_new_weapon(DC,15l)
		count = 2;
	};
	class _transport_z6
	{
		weapon = macro_new_weapon_nofam(rz6)
		count = 2;
	};
	class _transport_dc15gl
	{
		weapon = macro_new_weapon(DC,15cgl)
		count = 2;
	};
	class _transport_valken38x
	{
		weapon = macro_new_weapon_nofam(valken38x)
		count = 2;
	};
	class _transport_rps6
	{
		weapon = macro_new_weapon(launcher,rps6)
		count = 2;
	};
	class _transport_rps1
	{
		weapon = macro_new_weapon(launcher,rps1)
		count = 2;
	};
	class _transport_rps4
	{
		weapon = macro_new_weapon(launcher,RPS4)
		count = 2;
	};
	class _transport_plx
	{
		weapon = macro_new_weapon(Launcher,PLX1)
		count = 1;
	};
	class _transport_z1000
	{
		weapon = macro_new_weapon_nofam(z1000)
		count = 1;
	};
	class _transport_dc15x
	{
		weapon = macro_new_weapon(DC,r15x)
		count = 1;
	};
	class _transport_rgl6
	{
		weapon = macro_new_weapon_nofam(rgl6)
		count = 1;
	};
};
class TransportMagazines
{
	class transport_2mw30
	{
		magazine = macro_new_mag(2mw,30);
		count = 15;
	};
	class transport_5mw15
	{
		magazine = macro_new_mag(5mw,10);
		count = 15;
	};
	class transport_5mw60
	{
		magazine = 	macro_new_mag(5mw,60)
		count = 60;
	};
	class transport_10mw30
	{
		magazine = macro_new_mag(10mw,30);
		count = 60;
	};
	class transport_10mw400
	{
		magazine = macro_new_mag(10mw,400);
		count = 15;
	};
	class _transport_20mw20
	{
		magazine = macro_new_mag(20mw,20);
		count = 20;
	};
	class _transport_20mwup20
	{
		magazine =  macro_new_mag(20mwup,20);
		count = 40;
	};		
	class _transport_20mwdp20
	{
		magazine = macro_new_mag(20mwdp,20);
		count = 40;
	};		
	class _transport_20mw240
	{
		magazine = macro_new_mag(20mw,240);
		count = 20;
	};									
	class _transport_30mw10
	{
		magazine = macro_new_mag(30mw,10);
		count = 15;
	}
	class _transport_30mw7
	{
		magazine = macro_new_mag(30mw,7)
		count = 15;
	};
	class _transport_40mw5
	{
		magazine = macro_new_mag(40mw,5)
		count = 10;
	};
	class _transport_stun5
	{
		magazine =  macro_new_mag(stun,5)
		count = 20;
	};
	class _transport_launcher_AT_mags
	{
		magazine =  macro_new_mag(RPS_AT,1)
		count = 20;
	};
	class _transport_launcher_AA_mags
	{
		magazine =  macro_new_mag(RPS_AA,1)
		count = 20;
	};
	class _transport_launcher_RPS4AT_mags
	{
		magazine =  macro_new_mag(rps4heat,1)
		count = 20;
	};
	class _transport_launcher_ARPS4HE_mags
	{
		magazine =  macro_new_mag(rps4he,1)
		count = 20;
	};
	class _transport_launcher_PLXAT_mags
	{
		magazine =  "JLTS_PLX1_AT_mag"
		count = 10;
	};
	class _transport_launcher_PLXAP_mags
	{
		magazine =  "JLTS_PLX1_AP_mag"
		count = 10;
	};
	class _transport_he3
	{
		magazine = macro_new_mag(UGL_HE,3);
		count = 15;
	};
	class _transport_ap2
	{
		magazine = macro_new_mag(UGL_AP,2);
		count = 15;
	};		
	class _transport_emp1
	{
		magazine = macro_new_mag(UGL_EMP,1);
		count = 3;
	};			
	class _transport_HuntIR_M203
	{
		magazine = "ACE_HuntIR_M203";
		count = 15;
	};
	class _transport_C12_Remote_Mag
	{
		magazine = "C12_Remote_Mag";
		count = 2;
	};
	class _transport_RGLHE
	{
		magazine = macro_new_mag(UGL_HE,6)
		count = 10;
	};
	class _transport_RGLAP
	{
		magazine = macro_new_mag(UGL_AP,6)
		count = 10;
	};
	class _transport_RGPEMP
	{
		magazine = macro_new_mag(UGL_EMP,6)
		count = 5;
	};
	class _transport_ShotgunSP
	{
		magazine = macro_new_mag(shotgun_scatter,6)
		count = 20;
	};
	class _transport_ShotgunUO
	{
		magazine = macro_new_mag(shotgun_HE,6)
		count = 20;
	};
	class _transport_ShotgunEMP
	{
		magazine = macro_new_mag(shotgun_EMP,2)
		count = 10;
	};
	class _transport_StaticEweb
	{
		magazine = macro_new_mag(eweb,1000)
		count = 10;
	};
	class _transport_StaticStriker
	{
		magazine = macro_new_mag(ragl40he,40)
		count = 10;
	};
	class _transport_StaticBoomer
	{
		magazine = macro_new_mag(aap,4)
		count = 10;
	};
	class _transport_StaticDriver
	{
		magazine = macro_new_mag(mar,1)
		count = 10;
	};
};
class TransportItems
{
	class _xx_RD_SquadShield_Mag
	{
		name = macro_new_mag(squad_shield_sigma,1)
		count = 2;
	};
	class _xx_ACE_HuntIR_monitor
	{
		name = "ACE_HuntIR_monitor";
		count = 1;
	};
	class _xx_ACE_tourniquet
	{
		name = "ACE_tourniquet";
		count = 15;
	};
	class _xx_ACE_splint
	{
		name = "ACE_splint";
		count = 15;
	};
	class _xx_ACE_plasmaIV_250
	{
		name = "ACE_plasmaIV_250";
		count = 15;
	};
	class _xx_ACE_plasmaIV_500
	{
		name = "ACE_plasmaIV_500";
		count = 15;
	};
	class _xx_ACE_plasmaIV
	{
		name = "ACE_plasmaIV";
		count = 15;
	};
	class _xx_ACE_elasticBandage
	{
		name = "ACE_elasticBandage";
		count = 80;
	};				
	class _xx_ACE_quikclot
	{
		name = "ACE_quikclot";
		count = 80;
	};					
	class _xx_ACE_packingBandage
	{
		name = "ACE_packingBandage";
		count = 80;
	};					
	class _xx_ACE_morphine
	{
		name = "ACE_morphine";
		count = 30;
	};		
	class _xx_ACE_painkiller
	{
		name = "RD501_Painkiller";
		count = 30;
	};								
	class _xx_ACE_epinephrine
	{
		name = "ACE_epinephrine";
		count = 20;
	};				
	class _xx_SmokeShellPurple
	{
		name = "SmokeShellPurple";
		count = 5;
	};
};