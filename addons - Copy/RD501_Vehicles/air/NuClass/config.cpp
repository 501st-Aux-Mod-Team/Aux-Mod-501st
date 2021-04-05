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
		class UserActions;
	};
	class 3AS_Nuclass : 3as_nuclass_f
	{
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
		armor=1300;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_heli)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		
		#include "../../common/common_pilotCamera.hpp"

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
		};
	};
};