#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(V19)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(v19,MKI)
		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles
{
	class 3as_V19_base;

	class macro_new_vehicle(v19,MKI):3as_V19_base
	{
		side=1;
		scope=2;
		scopeCurator=2;
		displayName = "Republic V19 Torrent";
		forceInGarage = 1;
		//dmg stuff
		armor=1925;
		armorStructural = 1;
		vtol = 4;
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)
		ballisticsComputer = 1+8;
		visualTarget = 1; 
		visualTargetSize = 1;
		reportOwnPosition = true;
		radarTargetSize = 1;
		radarTarget = 1;
		nvTarget = 1;
		laserTarget = 1;
		laserScanner = 0;
		irTarget = 1;
		irTargetSize = 1;
		countermeasureActivationRadius = 2000;
		
		RD501_magclamp_large_offset[] = {0.0, 0.0, -6.0};
		RD501_magclamp_small_forbidden = 1;

		//flight model
		acceleration=500;
		maxSpeed=1750;
		stallSpeed=5;
		draconicTorqueYCoef[]={1.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		draconicForceYCoef=6;
		envelope[] = {0.5,2.11,2.43,1.97,1.72,2.69,3.87,5.27,6.89,8.72,9.7,9.6,9.2,8.5,8.2,8};
		thrustCoef[] = {3.0,3.0,3.2,3.6,4,5,6,7,9,4,3.4,3,2.2,2,2,2};

		class EventHandlers{};

		#include "../../common/universal_mfd.hpp"
		/*class ViewPilot: ViewPilot
		{
			initAngleX = 0;
		};*/
		weapons[] = {
			macro_new_weapon(laser,v_wing),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,ugm),
			macro_basic_air_weapons
		};
		magazines[] = {
			macro_basic_air_mags,
			macro_new_mag(generic_aircraft_gun_asg,3000),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(a2a,4),
			macro_new_mag(ugm,10)
		};

		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=-10;
					maxAngleX=90;
					initAngleY=0;
					minAngleY=-90;
					maxAngleY=90;
					initFov=0.425;//"(30 / 120)";
					minFov=0.425;//"(30 / 120)";
					maxFov=0.425;//"(30 / 120)";
					directionStabilized=1;
					thermalMode[] = {0,1,2,3,4,5};
					visionMode[]=
					{
						"Normal",
						"NVG",
						"Ti"
					};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class zoomx4: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.425/4)";//"(3.75 / 120)";
					minFov="(0.425/4)";//"(3.75 / 120)";
					maxFov="(0.425/4)";//"(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX8: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/8)";//"(.375 / 120)";
					minFov="(0.42/8)";//"(.375 / 120)";
					maxFov="(0.42/8)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX20: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/20)";//"(.375 / 120)";
					minFov="(0.42/20)";//"(.375 / 120)";
					maxFov="(0.42/20)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX50: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/50)";//"(.375 / 120)";
					minFov="(0.42/50)";//"(.375 / 120)";
					maxFov="(0.42/50)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class zoomX70: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(0.42/70)";//"(.375 / 120)";
					minFov="(0.42/70)";//"(.375 / 120)";
					maxFov="(0.42/70)";//"(.375 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};

				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=1;
			};
			minTurn=-180;
			maxTurn=180;

			initTurn=0;
			minElev=-10;
			maxElev=90;
			initElev=-10;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
	};
};