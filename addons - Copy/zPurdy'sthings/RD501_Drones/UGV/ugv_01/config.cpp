class CfgPatches
{
	class A3_Drones_F_Soft_F_Gamma_UGV_01
	{
		addonRootClass="A3_Drones_F";
		requiredAddons[]=
		{
			"A3_Drones_F"
		};
		requiredVersion=0.1;
		units[]=
		{
			"B_UGV_01_F",
			"B_UGV_01_rcws_F",
			"I_UGV_01_F",
			"I_UGV_01_rcws_F",
			"O_UGV_01_F",
			"O_UGV_01_rcws_F"
		};
		weapons[]={};
	};
};
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class DefaultEventHandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class CfgVehicles
{
	class LandVehicle;
	class Car: LandVehicle
	{
		class NewTurret;
	};
	class Car_F: Car
	{
		class ViewOptics;
		class HitPoints
		{
			class HitLFWheel;
			class HitLBWheel;
			class HitLMWheel;
			class HitLF2Wheel;
			class HitRFWheel;
			class HitRBWheel;
			class HitRMWheel;
			class HitRF2Wheel;
		};
		class NewTurret;
		class Turrets
		{
			class MainTurret: NewTurret
			{
				class ViewOptics;
			};
		};
		class AnimationSources;
		class Components;
	};
	class UGV_01_base_F: Car_F
	{
		features="Randomization: No						<br />Camo selections: 3 - main body, wheels and accessories, turret						<br />Script door sources: None						<br />Script animations: TurretHide						<br />Executed scripts: None						<br />Firing from vehicles: No						<br />Slingload: Slingloadable						<br />Cargo proxy indexes: None";
		author="$STR_A3_Bohemia_Interactive";
		class SpeechVariants
		{
			class Default
			{
				speechSingular[]=
				{
					"veh_vehicle_UGV_s"
				};
				speechPlural[]=
				{
					"veh_vehicle_UGV_p"
				};
			};
		};
		textSingular="$STR_A3_nameSound_veh_vehicle_UGV_s";
		textPlural="$STR_A3_nameSound_veh_vehicle_UGV_p";
		nameSound="veh_vehicle_UGV_s";
		_generalMacro="UGV_01_base_F";
		attenuationEffectType="CarAttenuation";
		soundGetIn[]=
		{
			"",
			0.56234133,
			1
		};
		soundGetOut[]=
		{
			"",
			0.56234133,
			1,
			20
		};
		soundDammage[]=
		{
			"",
			0.56234133,
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_start",
			0.70794576,
			0.80000001
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_start",
			0.70794576,
			0.80000001,
			200
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_stop",
			0.70794576,
			0.80000001
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_stop",
			0.70794576,
			0.80000001,
			200
		};
		buildCrash0[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_building_01",
			1.7782794,
			1,
			200
		};
		buildCrash1[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_building_02",
			1.7782794,
			1,
			200
		};
		buildCrash2[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_building_03",
			1.7782794,
			1,
			200
		};
		buildCrash3[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_building_04",
			1.7782794,
			1,
			200
		};
		soundBuildingCrash[]=
		{
			"buildCrash0",
			0.25,
			"buildCrash1",
			0.25,
			"buildCrash2",
			0.25,
			"buildCrash3",
			0.25
		};
		WoodCrash0[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_wood_01",
			1.7782794,
			1,
			200
		};
		WoodCrash1[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_wood_02",
			1.7782794,
			1,
			200
		};
		WoodCrash2[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_wood_03",
			1.7782794,
			1,
			200
		};
		WoodCrash3[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_wood_04",
			1.7782794,
			1,
			200
		};
		soundWoodCrash[]=
		{
			"woodCrash0",
			0.25,
			"woodCrash1",
			0.25,
			"woodCrash2",
			0.25,
			"woodCrash3",
			0.25
		};
		ArmorCrash0[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_01",
			1.7782794,
			1,
			200
		};
		ArmorCrash1[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_02",
			1.7782794,
			1,
			200
		};
		ArmorCrash2[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_03",
			1.7782794,
			1,
			200
		};
		ArmorCrash3[]=
		{
			"A3\sounds_f\Vehicles\armor\noises\tank_vehicle_04",
			1.7782794,
			1,
			200
		};
		soundArmorCrash[]=
		{
			"ArmorCrash0",
			0.25,
			"ArmorCrash1",
			0.25,
			"ArmorCrash2",
			0.25,
			"ArmorCrash3",
			0.25
		};
		soundBushCollision1[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1",
			1,
			1,
			100
		};
		soundBushCollision2[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2",
			1,
			1,
			100
		};
		soundBushCollision3[]=
		{
			"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3",
			1,
			1,
			100
		};
		soundBushCrash[]=
		{
			"soundBushCollision1",
			0.33000001,
			"soundBushCollision2",
			0.33000001,
			"soundBushCollision3",
			0.33000001
		};
		Crash0[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_1",
			1,
			1,
			900
		};
		Crash1[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_2",
			1,
			1,
			900
		};
		Crash2[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_3",
			1,
			1,
			900
		};
		Crash3[]=
		{
			"A3\Sounds_F\vehicles\crashes\cars\cars_coll_big_default_ext_4",
			1,
			1,
			900
		};
		soundCrashes[]=
		{
			"Crash0",
			0.25,
			"Crash1",
			0.25,
			"Crash2",
			0.25,
			"Crash3",
			0.25
		};
		class Sounds
		{
			class Idle_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_0800",
					0.56234133,
					0.80000001,
					200
				};
				frequency="0.95	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume="engineOn*camPos*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};
			class Engine
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1000rpm",
					0.63095737,
					0.80000001,
					200
				};
				frequency="0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume="engineOn*camPos*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};
			class Engine1_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1400rpm",
					0.70794576,
					0.80000001,
					200
				};
				frequency="0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume="engineOn*camPos*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};
			class Engine2_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2000rpm",
					0.79432821,
					0.80000001,
					250
				};
				frequency="0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume="engineOn*camPos*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};
			class Engine3_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2400rpm",
					1.1220185,
					0.80000001,
					300
				};
				frequency="0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume="engineOn*camPos*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};
			class Engine4_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2600rpm",
					1.4125376,
					0.80000001,
					350
				};
				frequency="0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume="engineOn*camPos*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};
			class Engine5_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_3200rpm",
					1.7782794,
					0.80000001,
					400
				};
				frequency="0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume="engineOn*camPos*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};
			class IdleThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_0800_exhaust",
					1,
					0.80000001,
					250
				};
				frequency="0.8	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};
			class EngineThrust
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1000rpm_exhaust",
					1.2589254,
					0.80000001,
					300
				};
				frequency="0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_1400rpm_exhaust",
					1.4125376,
					0.80000001,
					350
				};
				frequency="0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2000rpm_exhaust",
					1.5848932,
					0.80000001,
					400
				};
				frequency="0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2400rpm_exhaust",
					1.9952624,
					0.80000001,
					450
				};
				frequency="0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_2600rpm_exhaust",
					1.9952624,
					0.80000001,
					450
				};
				frequency="0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_ext_3200rpm_exhaust",
					2.2387211,
					0.80000001,
					500
				};
				frequency="0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume="engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};
			class Idle_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_0800",
					0.39810717,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};
			class Engine_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1000rpm",
					0.44668359,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};
			class Engine1_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1400rpm",
					0.50118721,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};
			class Engine2_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2000rpm",
					0.50118721,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};
			class Engine3_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2400rpm",
					0.56234133,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};
			class Engine4_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2600rpm",
					0.56234133,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume="engineOn*(1-camPos)*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};
			class Engine5_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_3200rpm",
					0.63095737,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume="engineOn*(1-camPos)*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};
			class IdleThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_0800_exhaust",
					0.50118721,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(300/	3200),(950/	3200)])*0.15";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(300/	3200),(600/	3200)])	*	((rpm/	3200) factor[(960/	3200),(800/	3200)]))";
			};
			class EngineThrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1000rpm_exhaust",
					0.56234133,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(800/	3200),(1500/	3200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(800/	3200),(900/	3200)])	*	((rpm/	3200) factor[(1500/	3200),(1100/	3200)]))";
			};
			class Engine1_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_1400rpm_exhaust",
					0.63095737,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(1100/	3200),(1950/	3200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1050/	3200),(1450/	3200)])	*	((rpm/	3200) factor[(1900/	3200),(1600/	3200)]))";
			};
			class Engine2_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2000rpm_exhaust",
					0.63095737,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(1600/	3200),(2300/	3200)])*0.2";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1560/	3200),(1880/	3200)])	*	((rpm/	3200) factor[(2350/	3200),(2000/	3200)]))";
			};
			class Engine3_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2400rpm_exhaust",
					0.70794576,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(2000/	3200),(2650/	3200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(1980/	3200),(2300/	3200)])	*	((rpm/	3200) factor[(2660/	3200),(2400/	3200)]))";
			};
			class Engine4_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_2600rpm_exhaust",
					0.79432821,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(2400/	3200),(3000/	3200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3200) factor[(2380/	3200),(2640/	3200)])	*	((rpm/	3200) factor[(2990/	3200),(2770/	3200)]))";
			};
			class Engine5_Thrust_int
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\UGV_01_int_3200rpm_exhaust",
					1,
					0.80000001
				};
				frequency="0.8	+	((rpm/	3200) factor[(2700/	3200),(3200/	3200)])*0.1";
				volume="engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3200) factor[(2700/	3200),(2900/	3200)])";
			};
			class Movement
			{
				sound="soundEnviron";
				frequency="1";
				volume="0";
			};
			class TiresRockOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",
					1,
					1,
					60
				};
				frequency=1;
				volume="camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",
					1,
					1,
					60
				};
				frequency=1;
				volume="camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",
					1,
					1,
					60
				};
				frequency=1;
				volume="camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",
					1,
					1,
					60
				};
				frequency=1;
				volume="camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",
					1,
					1,
					60
				};
				frequency=1;
				volume="camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",
					1,
					1,
					60
				};
				frequency=1;
				volume="camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					1,
					1,
					90
				};
				frequency=1;
				volume="camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",
					0.70794576,
					1
				};
				frequency=1;
				volume="(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",
					0.70794576,
					1
				};
				frequency=1;
				volume="(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[-0.2, -0.4])*(speed factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[0.2, 0.4])*(speed factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[0.15, 0.4])*(speed factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[-0.15, -0.4])*(speed factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[-0.2, -0.4])*(speed factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(LongSlipDrive factor[0.2, 0.4])*(speed factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[0.15, 0.4])*(speed factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",
					1,
					1,
					100
				};
				frequency=1;
				volume="engineOn*camPos*(latSlipDrive factor[-0.15, -0.4])*(speed factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[-0.4, -0.8])*(speed factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[0.4, 0.8])*(speed factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.4])*(speed factor[0, 10])";
			};
			class turn_right_int_road
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.4])*(speed factor[0, 10])";
			};
			class breaking_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[-0.4, -0.8])*(speed factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(LongSlipDrive factor[0.4, 0.8])*(speed factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[0.15, 0.4])*(speed factor[1, 10])";
			};
			class turn_right_int_dirt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",
					1,
					1
				};
				frequency=1;
				volume="engineOn*(1-camPos)*(latSlipDrive factor[-0.15, -0.4])*(speed factor[1, 10])";
			};
			class RainExt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[]=
				{
					"A3\Sounds_F\vehicles\noises\rain2_ext",
					1,
					1,
					100
				};
				frequency=1;
				volume="(1-camPos)*(rain - rotorSpeed/2)*2";
			};
		};
		thrustDelay=0.1;
		brakeIdleSpeed=1.78;
		fuelCapacity=4500;
		wheelCircumference=3.1600001;
		antiRollbarForceCoef=10;
		antiRollbarForceLimit=10;
		antiRollbarSpeedMin=0;
		antiRollbarSpeedMax=30;
		idleRpm=800;
		redRpm=3200;
		class complexGearbox
		{
			GearboxRatios[]=
			{
				"R1",
				-3.1819999,
				"N",
				0,
				"D1",
				4.1820002,
				"D2",
				3.3180001,
				"D3",
				2.1500001
			};
			TransmissionRatios[]=
			{
				"High",
				5.539
			};
			gearBoxMode="auto";
			moveOffGear=1;
			driveString="D";
			neutralString="N";
			reverseString="R";
		};
		simulation="carx";
		dampersBumpCoef=0.1;
		differentialType="all_limited";
		frontRearSplit=0.5;
		frontBias=1.3;
		rearBias=1.3;
		centreBias=1.3;
		clutchStrength=55;
		enginePower=80;
		maxOmega=320;
		peakTorque=500;
		dampingRateFullThrottle=0.079999998;
		dampingRateZeroThrottleClutchEngaged=2;
		dampingRateZeroThrottleClutchDisengaged=0.34999999;
		torqueCurve[]=
		{
			{0,0.2},
			{0.278,0.5},
			{0.34999999,0.85000002},
			{0.461,1},
			{0.60000002,0.94999999},
			{0.69999999,0.85000002},
			{0.80000001,0.69999999},
			{1,0.5}
		};
		changeGearMinEffectivity[]={0.94999999,0.15000001,0.94999999,0.94999999,0.94999999};
		switchTime=0.1;
		latency=1;
		class Wheels
		{
			class L1
			{
				side="left";
				suspTravelDirection[]={-0.125,-1,0};
				boneName="wheel_1_1_damper";
				steering=1;
				center="wheel_1_1_axis";
				boundary="wheel_1_1_bound";
				width="0.2";
				mass=40;
				MOI=20;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=5000;
				maxHandBrakeTorque=0;
				suspForceAppPointOffset="wheel_1_1_axis";
				tireForceAppPointOffset="wheel_1_1_axis";
				maxCompression=0.15000001;
				maxDroop=0.15000001;
				sprungMass=700;
				springStrength=36750;
				springDamperRate=10000;
				longitudinalStiffnessPerUnitGravity=10000;
				latStiffX=25;
				latStiffY=180;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};
			class L2: L1
			{
				boneName="wheel_1_2_damper";
				steering=0;
				center="wheel_1_2_axis";
				boundary="wheel_1_2_bound";
				suspForceAppPointOffset="wheel_1_2_axis";
				tireForceAppPointOffset="wheel_1_2_axis";
			};
			class L3: L1
			{
				boneName="wheel_1_3_damper";
				steering=0;
				center="wheel_1_3_axis";
				boundary="wheel_1_3_bound";
				suspForceAppPointOffset="wheel_1_3_axis";
				tireForceAppPointOffset="wheel_1_3_axis";
				maxHandBrakeTorque=300000;
			};
			class R1: L1
			{
				side="right";
				suspTravelDirection[]={0.125,-1,0};
				boneName="wheel_2_1_damper";
				center="wheel_2_1_axis";
				boundary="wheel_2_1_bound";
				suspForceAppPointOffset="wheel_2_1_axis";
				tireForceAppPointOffset="wheel_2_1_axis";
			};
			class R2: R1
			{
				boneName="wheel_2_2_damper";
				steering=0;
				center="wheel_2_2_axis";
				boundary="wheel_2_2_bound";
				suspForceAppPointOffset="wheel_2_2_axis";
				tireForceAppPointOffset="wheel_2_2_axis";
			};
			class R3: R1
			{
				boneName="wheel_2_3_damper";
				steering=0;
				center="wheel_2_3_axis";
				boundary="wheel_2_3_bound";
				suspForceAppPointOffset="wheel_2_3_axis";
				tireForceAppPointOffset="wheel_2_3_axis";
				maxHandBrakeTorque=300000;
			};
		};
		displayName="$STR_A3_CfgVehicles_UGV_01_Base0";
		class Library
		{
			libTextDesc="$STR_A3_CfgVehicles_UGV_01_Base_Library0";
		};
		vehicleClass="Autonomous";
		model="\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
		editorSubcategory="EdSubcat_Drones";
		picture="\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_CA.paa";
		Icon="\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_CA.paa";
		cost=200000;
		unitInfoType="RscOptics_AV_driverNoWeapon";
		radarType=8;
		driverCanSee="2+4+8+16+32";
		gunnerCanSee="2+4+8+16+32";
		memoryPointTaskMarker="TaskMarker_1_pos";
		slingLoadCargoMemoryPoints[]=
		{
			"SlingLoadCargo1",
			"SlingLoadCargo2",
			"SlingLoadCargo3",
			"SlingLoadCargo4"
		};
		isUav=1;
		uavCameraDriverPos="PiP0_pos";
		uavCameraDriverDir="PiP0_dir";
		maxFordingDepth=-0.5;
		class AnimationSources: AnimationSources
		{
			class Turret
			{
				source="user";
				animPeriod=1;
				initPhase=1;
			};
			class MainTurret: Turret
			{
			};
			class MainGun: Turret
			{
			};
			class muzzle_rot_MG
			{
				source="ammorandom";
				weapon="HMG_127_UGV";
			};
			class muzzle_rot_GMG
			{
				source="ammorandom";
				weapon="GMG_40mm";
			};
			class muzzle_hide_MG
			{
				source="reload";
				weapon="HMG_127_UGV";
			};
			class muzzle_hide_GMG
			{
				source="reload";
				weapon="GMG_40mm";
			};
		};
		cargoCanControlUAV=0;
		maxSpeed=45;
		terrainCoef=1.2;
		turnCoef=4;
		steerAheadSimul=0.5;
		steerAheadPlan=0.34999999;
		predictTurnPlan=0.80000001;
		predictTurnSimul=0.60000002;
		precision=20;
		brakeDistance=3;
		acceleration=15;
		class PlayerSteeringCoefficients
		{
			turnIncreaseConst=1;
			turnIncreaseLinear=3;
			turnIncreaseTime=0;
			turnDecreaseConst=8;
			turnDecreaseLinear=0;
			turnDecreaseTime=0;
			maxTurnHundred=1;
		};
		armor=30;
		armorStructural=4;
		damageResistance=0.0071899998;
		canFloat=0;
		enableGPS=1;
		killFriendlyExpCoef=0.1;
		fuelExplosionPower=2;
		wheelDamageThreshold=0.69999999;
		wheelDestroyThreshold=0.99000001;
		wheelDamageRadiusCoef=0.94999999;
		wheelDestroyRadiusCoef=0.75;
		transportSoldier=0;
		commanderCanSee=31;
		radarTargetSize=0.69999999;
		visualTargetSize=0.69999999;
		irTargetSize=0.5;
		reportOwnPosition=1;
		driverAction="Disabled";
		cargoAction[]=
		{
			"driver_ugv_01"
		};
		showNVGCargo[]={1};
		driverForceOptics=1;
		driverOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Driver_F.p3d";
		memoryPointDriverOptics="PiP0_pos";
		driverCompartments="Compartment3";
		cargoCompartments[]=
		{
			"Compartment2"
		};
		forceHideDriver=1;
		class ViewOptics: ViewOptics
		{
			visionMode[]=
			{
				"Normal",
				"NVG"
			};
			initFov=0.85000002;
			minFov=0.85000002;
			maxFov=0.85000002;
		};
		cargoIsCoDriver[]={0,0};
		ejectDeadGunner=0;
		ejectDeadCargo=0;
		ejectDeadDriver=0;
		ejectDeadCommander=0;
		smokeLauncherGrenadeCount=8;
		smokeLauncherVelocity=14;
		smokeLauncherOnTurret=0;
		smokeLauncherAngle=360;
		class HitPoints: HitPoints
		{
			class HitBody
			{
				armor=0.69999999;
				material=50;
				name="karoserie";
				visual="zbytek";
				passThrough=1;
			};
			class HitEngine
			{
				armor=2;
				material=-1;
				name="motor";
				passThrough=0;
			};
			class HitFuel
			{
				armor=1;
				material=-1;
				name="palivo";
				passThrough=0;
			};
			class HitLFWheel: HitLFWheel
			{
				armor=0.5;
				name="wheel_1_1";
			};
			class HitLF2Wheel: HitLF2Wheel
			{
				armor=0.5;
				name="wheel_1_2";
			};
			class HitLMWheel: HitLMWheel
			{
				armor=0.5;
				name="wheel_1_3";
			};
			class HitRFWheel: HitRFWheel
			{
				armor=0.5;
				name="wheel_2_1";
			};
			class HitRF2Wheel: HitRF2Wheel
			{
				armor=0.5;
				name="wheel_2_2";
			};
			class HitRMWheel: HitRMWheel
			{
				armor=0.5;
				name="wheel_2_3";
			};
		};
		class VehicleTransport
		{
			class Cargo
			{
				parachuteHeightLimit=5;
				canBeTransported=1;
				parachuteClass="B_Parachute_02_F";
				dimensions[]=
				{
					"BBox_1_1_pos",
					"BBox_1_2_pos"
				};
			};
		};
		weapons[]={};
		magazines[]={};
		threat[]={0.30000001,0.2,0.30000001};
		hiddenSelections[]=
		{
			"camo1",
			"camo2",
			"camo3"
		};
		transportMaxWeapons=8;
		transportMaxMagazines=64;
		transportMaxBackpacks=6;
		maximumLoad=1000;
		class TransportBackpacks
		{
		};
		class TransportMagazines
		{
		};
		class TransportWeapons
		{
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=4;
			};
		};
		class Reflectors
		{
			class Left
			{
				color[]={1900,1800,1700};
				ambient[]={5,5,5};
				position="Light_L";
				direction="Light_L_end";
				hitpoint="Light_L";
				selection="Light_L";
				size=1;
				innerAngle=100;
				outerAngle=179;
				coneFadeCoef=10;
				intensity=1;
				useFlare=0;
				dayLight=0;
				flareSize=1;
				class Attenuation
				{
					start=1;
					constant=0;
					linear=0;
					quadratic=0.25;
					hardLimitStart=30;
					hardLimitEnd=60;
				};
			};
			class Right: Left
			{
				position="Light_R";
				direction="Light_R_end";
				hitpoint="Light_R";
				selection="Light_R";
			};
			class Right2: Right
			{
				position="light_R_flare";
				useFlare=1;
			};
			class Left2: Left
			{
				position="light_L_flare";
				useFlare=1;
			};
			class Left3: Left2
			{
				position="light_L_flare2";
				flareSize=0.30000001;
			};
		};
		aggregateReflectors[]=
		{
			
			{
				"Left",
				"Left2",
				"Left3",
				"Right",
				"Right2"
			}
		};
		class Damage
		{
			tex[]={};
			mat[]=
			{
				"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext.rvmat",
				"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_damage.rvmat",
				"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_ext_destruct.rvmat",
				"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int.rvmat",
				"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_damage.rvmat",
				"A3\Drones_F\soft_f_gamma\UGV_01\Data\UGV_01_int_destruct.rvmat"
			};
		};
		class Components: Components
		{
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				class components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class UAVDisplay
					{
						componentType="UAVFeedDisplayComponent";
					};
				};
			};
		};
		cargoProxyIndexes[]={1};
		getInProxyOrder[]={1};
		class CargoTurret;
		class Turrets: Turrets
		{
			class CargoTurret_01: CargoTurret
			{
				gunnerAction="passenger_flatground_4";
				memoryPointsGetInGunner="pos cargo";
				memoryPointsGetInGunnerDir="pos cargo dir";
				gunnerName="$STR_GETIN_POS_PASSENGER";
				gunnerCompartments="Compartment2";
				proxyIndex=1;
				maxElev=45;
				minElev=-5;
				maxTurn=95;
				minTurn=-60;
				isPersonTurret=1;
			};
		};
		class TextureSources
		{
			class Indep
			{
				displayName="$STR_A3_TEXTURESOURCES_INDEP0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_INDP_co.paa",
					"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_INDP_co.paa",
					"\A3\Data_F\Vehicles\Turret_INDP_co.paa"
				};
				factions[]=
				{
					"IND_F"
				};
			};
			class Opfor
			{
				displayName="$STR_A3_TEXTURESOURCES_OPFOR0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_OPFOR_co.paa",
					"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_OPFOR_co.paa",
					"\A3\Data_F\Vehicles\Turret_OPFOR_co.paa"
				};
				factions[]=
				{
					"OPF_F"
				};
			};
			class Blufor
			{
				displayName="$STR_A3_TEXTURESOURCES_BLU0";
				author="$STR_A3_Bohemia_Interactive";
				textures[]=
				{
					"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
					"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
					"\A3\Data_F\Vehicles\Turret_co.paa"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
	};
	class UGV_01_rcws_base_F: UGV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		_generalMacro="UGV_01_rcws_base_F";
		weaponsGroup1=2;
		weaponsGroup2="1 + 		4";
		weaponsGroup3="8 + 	16 + 	32";
		weaponsGroup4="64 + 		128";
		displayName="$STR_A3_CfgVehicles_UGV_01_RCWS_Base0";
		class Library
		{
			libTextDesc="$str_a3_cfgvehicles_ugv_01_base_library0";
		};
		model="\A3\Drones_F\soft_f_gamma\UGV_01\UGV_01_F";
		picture="\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\portrait_UGV_01_RCWS_CA.paa";
		Icon="\A3\Drones_F\soft_f_gamma\UGV_01\Data\UI\map_UGV_01_RCWS_CA.paa";
		cost=250000;
		threat[]={1,0.80000001,0.60000002};
		unitInfoType="RscOptics_AV_driver";
		uavCameraGunnerPos="PiP1_pos";
		uavCameraGunnerDir="PiP1_dir";
		class AnimationSources: AnimationSources
		{
			class Turret
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			delete MainGun;
			delete MainTurret;
		};
		class Turrets: Turrets
		{
			class MainTurret: NewTurret
			{
				class HitPoints
				{
					class HitTurret
					{
						armor=2;
						material=-1;
						name="otochlaven";
						visual="otochlaven";
						passThrough=0;
						explosionShielding=0.40000001;
						minimalHit=0.0099999998;
						radius=0.25;
					};
					class HitGun
					{
						armor=2;
						material=-1;
						name="otochlaven";
						visual="otochlaven";
						passThrough=0;
						explosionShielding=0.40000001;
						minimalHit=0.0099999998;
						radius=0.25;
					};
				};
				isCopilot=0;
				dontCreateAI=0;
				body="mainTurret";
				gun="mainGun";
				memoryPointGunnerOptics="PiP1_pos";
				memoryPointGun="machinegun";
				gunnerForceOptics=1;
				gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_F.p3d";
				turretInfoType="RscOptics_UGV_gunner";
				weapons[]=
				{
					"HMG_127_UGV",
					"GMG_40mm"
				};
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Red",
					"500Rnd_127x99_mag_Tracer_Red",
					"200Rnd_40mm_G_belt"
				};
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner",
					0.31622776,
					1,
					30
				};
				soundServoVertical[]=
				{
					"A3\Sounds_F\vehicles\soft\UGV_01\Servo_UGV_gunner_vertical",
					0.31622776,
					1,
					30
				};
				minElev=-10;
				maxElev=60;
				forceHideGunner=1;
				outGunnerMayFire=1;
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				discreteDistanceInitIndex=2;
				stabilizedInAxes=3;
				gunnerInAction="Disabled";
				gunnerAction="Disabled";
				class ViewOptics: RCWSOptics
				{
					visionMode[]=
					{
						"Normal",
						"TI"
					};
					initFov=0.46669999;
					maxFov=0.46669999;
					minFov=0.035;
					directionStabilized=1;
				};
				class Components
				{
					class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
					{
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
						};
					};
					class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
					{
						class components
						{
							class EmptyDisplay
							{
								componentType="EmptyDisplayComponent";
							};
							class MinimapDisplay
							{
								componentType="MinimapDisplayComponent";
								resource="RscCustomInfoMiniMap";
							};
							class UAVDisplay
							{
								componentType="UAVFeedDisplayComponent";
							};
						};
					};
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
	class B_UGV_01_F: UGV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_1_3",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"wheel_2_3",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"turrethide",
					1
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.5
				},
				
				{
					"wheel_2_1_damper",
					0.47999999
				},
				
				{
					"wheel_1_3_damper",
					0.51999998
				},
				
				{
					"wheel_2_3_damper",
					0.51999998
				},
				
				{
					"wheel_1_2_damper",
					0.51999998
				},
				
				{
					"wheel_2_2_damper",
					0.51999998
				},
				
				{
					"mg_muzzle",
					0
				},
				
				{
					"gmg_muzzle",
					0
				},
				
				{
					"muzzleflashrot",
					0
				},
				
				{
					"muzzleflashrot_2",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.939;
			verticalOffsetWorld=-0.138;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UGV_01_F.jpg";
		_generalMacro="B_UGV_01_F";
		scope=2;
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"\A3\Data_F\Vehicles\Turret_co.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
	};
	class O_UGV_01_F: UGV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_1_3",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"wheel_2_3",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"turrethide",
					1
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.5
				},
				
				{
					"wheel_2_1_damper",
					0.47999999
				},
				
				{
					"wheel_1_3_damper",
					0.51999998
				},
				
				{
					"wheel_2_3_damper",
					0.51999998
				},
				
				{
					"wheel_1_2_damper",
					0.51999998
				},
				
				{
					"wheel_2_2_damper",
					0.51999998
				},
				
				{
					"mg_muzzle",
					0
				},
				
				{
					"gmg_muzzle",
					0
				},
				
				{
					"muzzleflashrot",
					0
				},
				
				{
					"muzzleflashrot_2",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.939;
			verticalOffsetWorld=-0.138;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UGV_01_F.jpg";
		_generalMacro="O_UGV_01_F";
		displayName="$STR_A3_CFGVEHICLES_O_UGV_01_F";
		scope=2;
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		side=0;
		faction="OPF_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_OPFOR_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_OPFOR_co.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_co.paa"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
	};
	class I_UGV_01_F: UGV_01_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_1_3",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"wheel_2_3",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"turrethide",
					1
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.5
				},
				
				{
					"wheel_2_1_damper",
					0.47999999
				},
				
				{
					"wheel_1_3_damper",
					0.51999998
				},
				
				{
					"wheel_2_3_damper",
					0.51999998
				},
				
				{
					"wheel_1_2_damper",
					0.51999998
				},
				
				{
					"wheel_2_2_damper",
					0.51999998
				},
				
				{
					"mg_muzzle",
					0
				},
				
				{
					"gmg_muzzle",
					0
				},
				
				{
					"muzzleflashrot",
					0
				},
				
				{
					"muzzleflashrot_2",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.939;
			verticalOffsetWorld=-0.138;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UGV_01_F.jpg";
		_generalMacro="I_UGV_01_F";
		scope=2;
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		side=2;
		faction="IND_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_INDP_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_INDP_co.paa",
			"\A3\Data_F\Vehicles\Turret_INDP_co.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
	};
	class B_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_1_3",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"wheel_2_3",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"turrethide",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.5
				},
				
				{
					"wheel_2_1_damper",
					0.47999999
				},
				
				{
					"wheel_1_3_damper",
					0.51999998
				},
				
				{
					"wheel_2_3_damper",
					0.51999998
				},
				
				{
					"wheel_1_2_damper",
					0.51999998
				},
				
				{
					"wheel_2_2_damper",
					0.51999998
				},
				
				{
					"mg_muzzle",
					0
				},
				
				{
					"gmg_muzzle",
					0
				},
				
				{
					"muzzleflashrot",
					0
				},
				
				{
					"muzzleflashrot_2",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.939;
			verticalOffsetWorld=-0.138;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\B_UGV_01_rcws_F.jpg";
		_generalMacro="B_UGV_01_rcws_F";
		scope=2;
		crew="B_UAV_AI";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		faction="BLU_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_co.paa",
			"\A3\Data_F\Vehicles\Turret_co.paa"
		};
		textureList[]=
		{
			"Blufor",
			1
		};
		forceInGarage=1;
	};
	class O_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_1_3",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"wheel_2_3",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"turrethide",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.5
				},
				
				{
					"wheel_2_1_damper",
					0.47999999
				},
				
				{
					"wheel_1_3_damper",
					0.51999998
				},
				
				{
					"wheel_2_3_damper",
					0.51999998
				},
				
				{
					"wheel_1_2_damper",
					0.51999998
				},
				
				{
					"wheel_2_2_damper",
					0.51999998
				},
				
				{
					"mg_muzzle",
					0
				},
				
				{
					"gmg_muzzle",
					0
				},
				
				{
					"muzzleflashrot",
					0
				},
				
				{
					"muzzleflashrot_2",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.939;
			verticalOffsetWorld=-0.138;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\O_UGV_01_rcws_F.jpg";
		_generalMacro="O_UGV_01_rcws_F";
		displayName="$STR_A3_CFGVEHICLES_O_UGV_01_RCWS_F";
		scope=2;
		crew="O_UAV_AI";
		typicalCargo[]=
		{
			"O_Soldier_F"
		};
		side=0;
		faction="OPF_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_OPFOR_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_OPFOR_co.paa",
			"\A3\Data_F\Vehicles\Turret_OPFOR_co.paa"
		};
		textureList[]=
		{
			"Opfor",
			1
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Green",
					"500Rnd_127x99_mag_Tracer_Green",
					"200Rnd_40mm_G_belt"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
	class I_UGV_01_rcws_F: UGV_01_rcws_base_F
	{
		author="$STR_A3_Bohemia_Interactive";
		class SimpleObject
		{
			eden=1;
			animate[]=
			{
				
				{
					"damagehide",
					0
				},
				
				{
					"damagehidevez",
					0
				},
				
				{
					"damagehidehlaven",
					0
				},
				
				{
					"wheel_1_1_destruct",
					0
				},
				
				{
					"wheel_1_2_destruct",
					0
				},
				
				{
					"wheel_1_3_destruct",
					0
				},
				
				{
					"wheel_1_4_destruct",
					0
				},
				
				{
					"wheel_2_1_destruct",
					0
				},
				
				{
					"wheel_2_2_destruct",
					0
				},
				
				{
					"wheel_2_3_destruct",
					0
				},
				
				{
					"wheel_2_4_destruct",
					0
				},
				
				{
					"wheel_1_1_destruct_unhide",
					0
				},
				
				{
					"wheel_1_2_destruct_unhide",
					0
				},
				
				{
					"wheel_1_3_destruct_unhide",
					0
				},
				
				{
					"wheel_1_4_destruct_unhide",
					0
				},
				
				{
					"wheel_2_1_destruct_unhide",
					0
				},
				
				{
					"wheel_2_2_destruct_unhide",
					0
				},
				
				{
					"wheel_2_3_destruct_unhide",
					0
				},
				
				{
					"wheel_2_4_destruct_unhide",
					0
				},
				
				{
					"glass1_destruct",
					0
				},
				
				{
					"glass2_destruct",
					0
				},
				
				{
					"glass3_destruct",
					0
				},
				
				{
					"glass4_destruct",
					0
				},
				
				{
					"glass5_destruct",
					0
				},
				
				{
					"wheel_1_1",
					0
				},
				
				{
					"wheel_2_1",
					0
				},
				
				{
					"wheel_1_2",
					1
				},
				
				{
					"wheel_1_3",
					1
				},
				
				{
					"wheel_2_2",
					1
				},
				
				{
					"wheel_2_3",
					1
				},
				
				{
					"daylights",
					0
				},
				
				{
					"reverse_light",
					0
				},
				
				{
					"wheel_1_1_damage",
					0
				},
				
				{
					"wheel_1_2_damage",
					0
				},
				
				{
					"wheel_1_3_damage",
					0
				},
				
				{
					"wheel_1_4_damage",
					0
				},
				
				{
					"wheel_2_1_damage",
					0
				},
				
				{
					"wheel_2_2_damage",
					0
				},
				
				{
					"wheel_2_3_damage",
					0
				},
				
				{
					"wheel_2_4_damage",
					0
				},
				
				{
					"wheel_1_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_1_4_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_1_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_2_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_3_damper_damage_backanim",
					0
				},
				
				{
					"wheel_2_4_damper_damage_backanim",
					0
				},
				
				{
					"vehicletransported_antenna_hide",
					0
				},
				
				{
					"turrethide",
					0
				},
				
				{
					"damagehlaven",
					0
				},
				
				{
					"wheel_1_1_damper",
					0.5
				},
				
				{
					"wheel_2_1_damper",
					0.47999999
				},
				
				{
					"wheel_1_3_damper",
					0.51999998
				},
				
				{
					"wheel_2_3_damper",
					0.51999998
				},
				
				{
					"wheel_1_2_damper",
					0.51999998
				},
				
				{
					"wheel_2_2_damper",
					0.51999998
				},
				
				{
					"mg_muzzle",
					0
				},
				
				{
					"gmg_muzzle",
					0
				},
				
				{
					"muzzleflashrot",
					0
				},
				
				{
					"muzzleflashrot_2",
					0
				}
			};
			hide[]=
			{
				"zasleh",
				"light_l",
				"light_r",
				"zadni svetlo",
				"brzdove svetlo",
				"clan",
				"podsvit pristroju",
				"poskozeni"
			};
			verticalOffset=1.939;
			verticalOffsetWorld=-0.138;
			init="[this, '', []] call bis_fnc_initVehicle";
		};
		editorPreview="\A3\EditorPreviews_F\Data\CfgVehicles\I_UGV_01_rcws_F.jpg";
		_generalMacro="I_UGV_01_rcws_F";
		scope=2;
		crew="I_UAV_AI";
		typicalCargo[]=
		{
			"I_Soldier_lite_F"
		};
		side=2;
		faction="IND_F";
		hiddenSelectionsTextures[]=
		{
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_ext_INDP_co.paa",
			"\A3\Drones_F\soft_f_gamma\UGV_01\data\UGV_01_int_INDP_co.paa",
			"\A3\Data_F\Vehicles\Turret_INDP_co.paa"
		};
		textureList[]=
		{
			"Indep",
			1
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				magazines[]=
				{
					"500Rnd_127x99_mag_Tracer_Yellow",
					"500Rnd_127x99_mag_Tracer_Yellow",
					"200Rnd_40mm_G_belt"
				};
			};
			class CargoTurret_01: CargoTurret_01
			{
			};
		};
	};
};
