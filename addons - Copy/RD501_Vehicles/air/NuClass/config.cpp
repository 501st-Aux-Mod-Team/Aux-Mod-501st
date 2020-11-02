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
	class 3as_nuclass_f;
	class 3AS_Nuclass : 3as_nuclass_f
	{
		class UserActions;
	};

	class macro_new_vehicle(nuclass,mk1) : 3AS_Nuclass
	{
		scope=2;
		displayName="Republic NuClass Mk.I"
		armor=1300;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_heli)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
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
			#include "user_action.hpp"
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