		vtol=4;

		airBrakeFrictionCoef = 80.4;
		rudderInfluence = 0.9*2;

		VTOLYawInfluence = 6*4;
		VTOLPitchInfluence = 6*4;
		VTOLRollInfluence = 6*5;
		gearsUpFrictionCoef = 25;

		class EventHandlers{};

		class Turrets:Turrets
		{
			class MainTurret:MainTurret
			{
				isCopilot = 1;
				weapons[] = {
					macro_basic_air_weapons,
					macro_new_weapon(voltic,y_wing),
					macro_new_weapon(generic,republic_aircraft_cannon)
				};
				magazines[] = {
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_new_mag(generic_aircraft_cannon_green,1000),
					macro_new_mag(voltic,200),
					macro_new_mag(voltic,200),
					macro_new_mag(voltic,200),
					macro_new_mag(voltic,200),
					macro_new_mag(voltic,200)
				};
			};
		};

		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName = "WFOV";
					initAngleX = 0;
					minAngleX = 0;
					maxAngleX = 0;
					initAngleY = 0;
					minAngleY = 0;
					maxAngleY = 0;
					initFov = "(75 / 120)";
					minFov = "(75 / 120)";
					maxFov = "(75 / 120)";
					directionStabilized = 1;
					visionMode[] = {"Normal", "NVG", "Ti"};
					thermalMode[] = {0, 1,7};
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[] = {"OpticsCHAbera2", "OpticsBlur2"};
				};
				class Medium: Wide
				{
					opticsDisplayName = "MFOV";
					initFov="0.425/4";//"(30 / 120)";
					minFov="0.425/4";//"(30 / 120)";
					maxFov="0.425/4";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/8";//"(30 / 120)";
					minFov="0.425/8";//"(30 / 120)";
					maxFov="0.425/8";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX16: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/16";//"(30 / 120)";
					minFov="0.425/16";//"(30 / 120)";
					maxFov="0.425/16";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX24: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/24";//"(30 / 120)";
					minFov="0.425/24";//"(30 / 120)";
					maxFov="0.425/24";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX36: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/36";//"(30 / 120)";
					minFov="0.425/36";//"(30 / 120)";
					maxFov="0.425/36";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX48: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/48";//"(30 / 120)";
					minFov="0.425/48";//"(30 / 120)";
					maxFov="0.425/48";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX60: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/60";//"(30 / 120)";
					minFov="0.425/60";//"(30 / 120)";
					maxFov="0.425/60";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX80: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/80";//"(30 / 120)";
					minFov="0.425/80";//"(30 / 120)";
					maxFov="0.425/80";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				class NarrowX100: Wide
				{
					opticsDisplayName = "NFOV";
					initFov="0.425/100";//"(30 / 120)";
					minFov="0.425/100";//"(30 / 120)";
					maxFov="0.425/100";//"(30 / 120)";
					gunnerOpticsModel = "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
			};
			minTurn = -180;
			maxTurn = 180;
			initTurn = 0;
			minElev = -10;
			maxElev = 90;
			initElev = 0;
			maxXRotSpeed = 1;
			maxYRotSpeed = 1;
			maxMouseXRotSpeed = 0.5;
			maxMouseYRotSpeed = 0.5;
			pilotOpticsShowCursor = 1;
			controllable = 1;
		};

        class ACE_SelfActions:ACE_SelfActions
		{
			#include "../../common/universal_hud_color_changer.hpp"
		};

		#include "../../common/universal_mfd.hpp"
     