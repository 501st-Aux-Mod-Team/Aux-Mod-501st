
	class EventHandlers : DefaultEventhandlers {};
	
	faction = macro_republic_faction
	editorSubcategory = macro_editor_cat_air(Republic_heli)
	vehicleClass = macro_editor_vehicle_type_air(Republic)
	
	maximumLoad = 5000000000;
	slingLoadMaxCargoMass = 5000000000;

	//dmg properties
		armor=600;
		crewCrashProtection=0;
		epeImpulseDamageCoef=0;

	//dust effects
		dustEffect = "";//helidust
		waterEffect = "";//HeliWater

	//Targeting stuff
		ballisticsComputer = 1;
		//show all crosshairs
		showCrewAim = 4;
		showAllTargets = 2;
		radarType = 12;
		weaponLockSystem = 31;//"1+2+4+8+16"
		//!!!!!
		incomingMissileDetectionSystem = 30;//16

	//Weapons
		weapons[] = {
			macro_new_weapon(generic,republic_aircraft_cannon),
			macro_new_weapon(wynd,lgm),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(bomb,cluster),
			macro_basic_air_weapons,
			"SmokeLauncher"
			//macro_new_weapon(cannon,laat)
		};
		magazines[] = {
		
			macro_basic_air_mags,
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			// macro_new_mag(laat_cannon,100),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			macro_new_mag(agm,6),
			macro_new_mag(lgm,4),
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			"SmokeLauncherMag",
			macro_new_mag(cluster_bomb,2)
		};
	

	//The sun
	class Reflectors
	{
		class Right
		{
			color[] = {700, 750, 1000};
			ambient[] = {7000, 7500, 10000};
			intensity = 100;//50
			size = 1;//1
			innerAngle = 0;//15
			outerAngle = 90;//65
			coneFadeCoef = 0;//10
			position = "Light_R_pos";
			direction = "Light_R_dir";
			hitpoint = "Light_R_hitpoint";
			selection = "Light_R";
			useFlare = 1;
			flareSize = 1;//10
			flareMaxDistance = 2000;//250
			dayLight = 0;
			brightness =200; //100;
			class Attenuation
			{
				start = 0;
				constant = 0;//0
				linear = 1;
				quadratic = 1;
				hardLimitStart = 200;//100
				hardLimitEnd = 400;//200
			};
		};
		class Left: Right
		{
			position = "Light_L_pos";
			direction = "Light_L_dir";
			hitpoint = "Light_L_hitpoint";
			selection = "Light_L";
		};
		class Center: Right
		{
			position = "Light_C_pos";
			direction = "Light_C_dir";
			hitpoint = "Light_C_hitpoint";
			selection = "Light_C";
		};
	};

	//Got peek
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
				thermalMode[]={0,1};
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

	#include "sounds.hpp"

	

	//for texture reskins
		hiddenSelections[]=
		{
			"Camo1",
			"Camo2"
		};
	//transport
		class TransportWeapons
		{
			class _xx_SWOP_DC15AGL_RD501
			{
				weapon = macro_new_weapon(DC,15a);
				count = 10;
			};
			class _xx_RD501_DC15_Carbine
			{
				weapon = macro_new_weapon(DC,15s);
				count = 10;
			};
			class _xx_SWOP_DC15ABlasterRifle_mod1_RD501
			{
				weapon =  macro_new_weapon(DC,15a_LE);
				count = 10;
			};
			class _xx_SWOP_DC15ABlasterRifle_mod0_RD501
			{
				weapon = macro_new_weapon(DC,15a_mod_0_rifle)
				count = 10;
			};
			class _xx_SWOP_Z6Blaster
			{
				weapon = macro_new_weapon_nofam(Z6)
				count = 10;
			};
			class _xx_RocketHH15Clone_RD501
			{
				weapon = macro_new_weapon(hh,15)
				count = 10;
			};
		};
		class TransportMagazines
		{
			class _xx_SWOP_DC15ABlasterRifle_Full_Mag
			{
				magazine = macro_new_mag(DC15a_High,15)
				count = 15;
			};
			class _xx_SWOP_DC15ABlasterRifle_Mag
			{
				magazine = macro_new_mag(DC15a_Med,30)
				count = 20;
			};
			class _xx_SWOP_DC15ABlasterRifle_Low_Mag
			{
				magazine = macro_new_mag(DC15a_Low,60)
				count = 20;
			};
			class _xx_DC15s_Carbine
			{
				magazine = macro_new_mag(DC15s,60)
				count = 30;
			};
			class _xx_300Rnd_BlasterLaser_Belt
			{
				magazine = macro_new_mag(z6,400);
				count = 5;
			};
			class _xx_RD501_DC15ABlasterRifleLE_Full_Mag
			{
				magazine = macro_new_mag(DC15a_LE,15)
				count = 10;
			};
			class _xx_SWOP_DC15ABlasterRifle_Low_highcap_box_Mag
			{
				magazine = macro_new_mag(DC15a_box_mag,240);
				count = 10;
			};

			class _xx_DCStun_Mag
			{
				magazine = "DCStun_Mag";
				count = 15;
			};

			class _xx_ACE_HuntIR_M203
			{
				magazine = "ACE_HuntIR_M203";
				count = 310;
			};

			class _xx_5Rnd_HE_Grenade_DC15A
			{
				magazine = macro_new_mag(HE_GL,3)
				count = 10;
			};
			class _xx_1Rnd_AT_Grenade_DC15A
			{
				magazine = macro_new_mag(AT_GL,2)
				count = 10;
			};

			
			class _xx_RocketHH15CloneHEATFF_Mag_RD501
			{
				magazine = macro_new_mag(RPS_AT,1);
				count = 10;
			};
			class _xx_RocketHH15CloneHEATFF_Mag_RD5012
			{
				magazine = macro_new_mag(RPS_AA,1)
				count = 10;
			};
			class _xx_C12_Remote_Mag
			{
				magazine = "C12_Remote_Mag";
				count = 2;
			};
		};
		class TransportItems
		{
			class _xx_swop_dc15a_zoomholoscope_rd501
			{
				name = macro_new_weapon(scope,dc_15a_acog);
				count = 2;
			};
			class _xx_swop_dc15a_zoomscopex6range_rd501
			{
				name = macro_new_weapon(scope,dc_15a_x4_x8);
				count = 2;
			};
			class _xx_swop_dc15a_zoomscope_rd501
			{
				name = macro_new_weapon(scope,dc_15a_x4);
				count = 2;
			};
			class _xx_SW_SquadShield_Mag
			{
				name = "SW_SquadShield_Mag";
				count = 2;
			};
			class _xx_ACE_HuntIR_monitor
			{
				name = "ACE_HuntIR_monitor";
				count = 1;
			};
		};