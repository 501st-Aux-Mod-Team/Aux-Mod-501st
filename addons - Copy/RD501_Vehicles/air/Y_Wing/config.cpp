//Get this addons macro

//get the macro for the air subaddon

//get generlized macros
#include "../../../RD501_main/config_macros.hpp"

//General name of the vehicle
#define vehicle_addon Y_Wing
#define patch_name MODNAME##vehicle_addon##_Patches
#define vehicle_classname MODNAME##_##vehicle_addon

#define new_y_wing_class(name) vehicle_classname##_##name

class CfgPatches
{
	class macro_patch_name(Y_Wing)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(Y_wing,MkII)
		};
		weapons[]=
		{
			
		};
	};
};

/*#include "../../common/sensor_templates.hpp"
class CfgVehicles
{
	class Plane_Base_F;
	class swop_ywing_base: Plane_Base_F
	{
		class Turrets;
	};
	class swop_ywclones: swop_ywing_base
	{
		class Turrets:Turrets
		{
			class MainTurret;
		};
		class AnimationSources;
		class ViewCargo;
		class NewTurret;
		class ACE_SelfActions;
	};

	class macro_new_vehicle(Y_wing,MkII):swop_ywclones
	{
		side=1;
		scope=2;
		displayName = "Y-Wing";
		forceInGarage = 1;
		armor=300;
		
		faction = macro_republic_faction
		editorSubcategory = macro_editor_cat_air(Republic_vtol)
		vehicleClass = macro_editor_vehicle_type_air(Republic)

		class UserActions
		{
			class fRepulsorBrake
			{
				condition = "";
				displayName = "";
				displayNameDefault = "";
				hideonuse = 1;
				onlyForPlayer = 0;
				position = "";
				priority = 1e+011;
				radius = ;
				shortcut = "";
				statement = """";
				textToolTip = "";
				userActionID = ;
			};
			#include "../../common/universal_dmg_report.hpp"
		};	

		#include "common.hpp"
		class Sounds;
		class SoundsExt;
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
};*/
