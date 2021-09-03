//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon nuclass
class CfgPatches
{
	class macro_patch_name(nuclass)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(nuclass,mk1)
		};
		weapons[]=
		{
			
		};
	};
};
class CfgVehicles
{
	class 3as_nuclass_base;
	class 3as_nuclass_f: 3as_nuclass_base
	{
		class ViewPilot;
		class UserActions;
	};
	class 3AS_Nuclass : 3as_nuclass_f
	{
		class ViewPilot: ViewPilot{};
		class UserActions: UserActions
		{
			class rampOpen;
			class rampClose;
			class frontrampOpen;
			class frontrampClose;
		};
	};

	class macro_new_vehicle(nuclass,mk1) : 3AS_Nuclass
	{
		scope=2;
		displayName="Republic NuClass Mk.I"
		armor=2300;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_heli)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		transportSoldier=35;
		
		#include "../../common/common_pilotCamera.hpp"

		RD501_magclamp_large[] = {0.0,1.5,-0.5};
		RD501_magclamp_small_forbidden=1;
		RD501_magclamp_large_offset[]={0.0,0.0,-10.0};

		weapons[]=
		{
			"ParticleBeamCannon_Nu",
			"CMFlareLauncher",
			"missiles_DAR",
			macro_new_weapon(generic,kannon),
			"Laserdesignator_pilotCamera"
		};
		magazines[]=
		{
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"Laser_Battery_F",
			"Laser_Battery_F",
			"Laser_Battery_F",
			"24Rnd_missiles",
			"24Rnd_missiles",
			"24Rnd_missiles",
			"24Rnd_missiles",
			macro_new_mag(Kannon,100),
			macro_new_mag(Kannon,100),
			"Laserbatteries"
		};
		class UserActions:UserActions
		{
			class ThrusterEngage
			{
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				position = "pilotview";
				radius = 20;
				priority = 0;
				onlyForPlayer = 1;
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseIncrease.sqf""";
				shortcut="User19"
			};

			class ThrusterDisengage: ThrusterEngage
			{
				priority = 0;
				displayName = "";
				displayNameDefault = "";
				textToolTip = "";
				condition = "((player == driver this) AND (alive this))";
				statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseDecrease.sqf""";
				shortcut="User20"
			};

			class rampOpen: rampOpen
			{
				condition="(this animationSourcePhase 'ramp' == 0) AND (alive this) AND (player in [gunner this, driver this])";
			};
			class rampClose: rampClose
			{
				condition="(this animationSourcePhase 'ramp' == 1) AND (alive this) AND (player in [gunner this, driver this])";
			};
			class frontrampOpen: frontrampOpen
			{
				condition="(this animationSourcePhase 'rampfront' == 0) AND (alive this) AND (player in [gunner this, driver this])";
			};
			class frontrampClose: frontrampClose
			{
				condition="(this animationSourcePhase 'rampfront' == 1) AND (alive this) AND (player in [gunner this, driver this])";
			};
		};
		class ACE_SelfActions
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
		class ViewPilot: ViewPilot
		{	
			initAngleX = 0;
		};
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
	};
};