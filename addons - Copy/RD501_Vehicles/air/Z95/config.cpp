#include "../../../RD501_main/config_macros.hpp"


class CfgPatches
{
	class macro_patch_name(Z95)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(z95,blue)
		};
		weapons[]=
		{
			
		};
	};
};


class CfgVehicles
{
	/*class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};*/
	class Plane_Fighter_03_base_F;/*: Plane_Base_F
	{
		class Turrets
		{
			class MainTurret;
		};
	};*/
	class Plane_Fighter_03_dynamicLoadout_base_F:Plane_Fighter_03_base_F
	{
		class Components;
		/*class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};*/
	};
	class 3as_Z95_base: Plane_Fighter_03_dynamicLoadout_base_F
	{
		class Components: Components
		{
			class TransportPylonsComponent;
		};
		class ACE_SelfActions;
	};
	class macro_new_vehicle(z95,blue):3as_Z95_base
	{
		scope=2;
		scopeCurator=2;
		forceInGarage = 1;
		side=1;
		stallSpeed=5;
		displayName = "Republic Z95 'Headhunter'"
		author = "RD501"
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		RD501_magclamp_large_offset[]={0.0,0.0,-2.0};	
		stallSpeed=5;
		draconicTorqueYCoef[]={1.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		draconicForceYCoef=6;
		envelope[] = {0.5,2.11,2.43,1.97,1.72,2.69,3.87,5.27,6.89,8.72,9.7,9.6,9.2,8.5,8.2,8};
		aileronSensitivity=2.9;
		aileronControlsSensitivityCoef=4;
		#include "../../common/universal_mfd.hpp"
		class ACE_SelfActions: ACE_SelfActions
		{
			#include "../../common/universal_hud_color_changer.hpp"
		};
		#include "../../common/common_pilotCamera.hpp"
		weaponLockSystem = "2+4+8";
		weapons[]=
		{
			"CMFlareLauncher",
			"Laserdesignator_pilotCamera",
			//macro_new_weapon(generic,green_dual_aircraft_laser)
		};
		magazines[]=
		{
			"Laserbatteries",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			"120Rnd_CMFlare_Chaff_Magazine",
			//macro_new_mag(pylon_generic_aircraft_gun_asg,3000)
		};
		hiddenselections[]=
		{
			"camo",
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3AS\3as_Z95\Data\blue_co.paa",
			"3AS\3as_Z95\Data\cockpit_co.paa",
			"3AS\3as_saber\data\glass\glass_ca"
		};
		class Components: Components
		{
			class TransportPylonsComponent:TransportPylonsComponent
			{
				class pylons
				{
					class pylons1
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=10;
						maxweight=300;
						UIposition[]={0.60000002,0.44999999};
					};
					class pylons2: pylons1
					{
						UIposition[]={0.050000001,0.44999999};
						mirroredMissilePos=1;
					};
					class pylons3: pylons1
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=9;
						maxweight=2500;
						UIposition[]={0.55000001,0.34999999};
					};
					class pylons4: pylons3
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=13;
						maxweight=5000;
						UIposition[]={0.1,0.34999999};
						mirroredMissilePos=3;
					};
					class pylons5: pylons1
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=7;
						maxweight=5000;
						UIposition[]={0.5,0.25};
					};
					class pylons6: pylons5
					{
						hardpoints[]=
						{
							"RD501_Universal_rail"
						};
						attachment=macro_new_mag(pylon_agm,6)
						priority=12;
						maxweight=5000;
						UIposition[]={0.15000001,0.25};
						mirroredMissilePos=5;
					};
					class Pylons7
					{
						hardpoints[]=
						{
							"RD501_Gun_rail"
						};
						priority=5;
						attachment=macro_new_mag(pylon_voltic,200)
						maxweight=4000;
						UIposition[]={0.32499999,0.15000001};
					};
				};
			}
		};
	};
};