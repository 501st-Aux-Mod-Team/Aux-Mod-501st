#include "../../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(ARC_170X)
	{
		addonRootClass=macro_patch_name(vehicles)
		requiredAddons[]=
		{
			macro_patch_name(vehicles),
			"3as_arc_170"
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(arc_170,razor),
			macro_new_vehicle(arc_170,blue),
			macro_new_vehicle(arc_170,red),
			macro_new_vehicle(arc_170,orange)
		};
		weapons[]={};
	};
};
class CfgVehicles
{
	#include "arc170_inheritance.hpp"

	class macro_new_vehicle(arc_170,blue): 3as_arc_170_blue
	{
		displayName="ARC-170 (Blue)";
		#include "../../common/universal_mfd.hpp"
		#include "arc170_common.hpp"
	};
	class macro_new_vehicle(arc_170,razor): 3as_arc_170_razor
	{
		displayName="ARC-170 (Green)";
		#include "../../common/universal_mfd.hpp"
		#include "arc170_common.hpp"
	};
	class macro_new_vehicle(arc_170,red): 3as_arc_170_red
	{
		displayName="ARC-170 (Red)";
		#include "../../common/universal_mfd.hpp"
		#include "arc170_common.hpp"
	};
	class macro_new_vehicle(arc_170,orange): 3as_arc_170_orange
	{
		displayName="ARC-175 Bomber";
		#include "../../common/universal_mfd.hpp"
		scope = 2;
		scopeCurator = 2;
		scopeArsenal = 2;
		stallSpeed=5;
		draconicTorqueYCoef[]={1.5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		draconicForceYCoef=6;
		envelope[] = {0.5,2.11,2.43,1.97,1.72,2.69,3.87,5.27,6.89,8.72,9.7,9.6,9.2,8.5,8.2,8};
		faction="RD501_Republic_Faction";
		editorSubcategory="RD501_Editor_Category_Air_Republic_vtol";
		/*class ACE_SelfActions: ACE_SelfActions
		{
			#include "../../common/universal_hud_color_changer.hpp"
		};*/
				maxSpeed=680;
				aileronSensitivity=0.41;
				elevatorSensitivity=0.21;
				airBrakeFrictionCoef=120;

				brakeDistance = 140;
				noseDownCoef = 0;
				acceleration = 100;
		class Components: Components
		{
			class TransportPylonsComponent
			{
				uiPicture = "\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";

				class Pylons
				{};

				class Presets
				{};
			};
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
			weapons[] = {
				macro_basic_air_weapons,
				macro_new_weapon(voltic,y_wing),
				macro_new_weapon(wynd,agm),
				macro_new_weapon(wynd,lgm),
				macro_new_weapon(bomb,SDB),
				macro_new_weapon(bomb,LGB),
				macro_new_weapon(bomb,cluster),
				macro_new_weapon(bomb,cluster_emp),
				macro_new_weapon(bomb,carpet_I)
			};
			magazines[] = {
				macro_basic_air_mags,
				macro_new_mag(voltic,200),
				macro_new_mag(voltic,200),
				macro_new_mag(voltic,200),
				macro_new_mag(voltic,200),
				macro_new_mag(voltic,200),
				macro_new_mag(agm,6),
				macro_new_mag(agm,6),
				macro_new_mag(agm,6),
				macro_new_mag(agm,6),
				macro_new_mag(agm,6),
				macro_new_mag(lgm,4),
				macro_new_mag(lgm,4),
				macro_new_mag(lgm,4),
				macro_new_mag(carpet_I_bomb_mag,20),
				macro_new_mag(carpet_I_bomb_mag,20),
				macro_new_mag(cluster_bomb,4),
				macro_new_mag(cluster_bomb,4),
				macro_new_mag(cluster_bomb,4),
				macro_new_mag(cluster_emp,2),
				macro_new_mag(sdb_bomb,4),
				macro_new_mag(sdb_bomb,4),
				macro_new_mag(sdb_bomb,4),
				macro_new_mag(lgb_bomb,4),
				macro_new_mag(lgb_bomb,4),
				macro_new_mag(lgb_bomb,4)
			};
		};
	};