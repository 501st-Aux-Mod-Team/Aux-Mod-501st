	class Sounds
	{
		class EngineExt
		{
			sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1.25893, 1, 400};
			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, .05};
			frequency = "rotorSpeed";
			volume = "camPos*((rotorSpeed-0.72)*4)";
		};
		class RotorExt
		{
				sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1, 1, 4000};
			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, .05, 4000};
			frequency = "rotorSpeed * (1-rotorThrust/5)";
			volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			cone[] = {1.6, 3.14, 1.6, 0.95};
		};
		class RotorNoiseExt
		{
			sound[] = {"", "db0", 1, 400};
			frequency = 1;
			volume = "(camPos*(rotorThrust factor [0.6, 1]))";
			cone[] = {0.7, 1.3, 1, 0};
		};
		class EngineInt
		{
				sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, .05};
			frequency = "rotorSpeed";
			volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
		};
		class RotorInt
		{
			sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
			frequency = "rotorSpeed * (1-rotorThrust/5)";
			volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
		};
		class TransmissionDamageExt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageExt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", "db0", 1, 150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class damageAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-10", 1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
		};
		class damageAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-13", 1, 20};
			frequency = 1;
			volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
		};
		class rotorLowAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-10", 1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class rotorLowAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-13", 1, 20};
			frequency = 1;
			volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
			frequency = 1;
			volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubLandExt
		{
			sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
			frequency = 1;
			volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingExt
		{
			sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
		};
		class scrubTreeInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", "db0", 1, 100};
			frequency = 1;
			volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
		};
		class scrubTreeExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * ((scrubTree) factor [0, 0.01])";
		};
		class RainExt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", "db0", 1, 100};
			frequency = 1;
			volume = "camPos * (rain - rotorSpeed/2) * 2";
		};
		class RainInt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", "db0", 1, 100};
			frequency = 1;
			volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
		};
		class SlingLoadDownExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", "db0", 1, 500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", "db0", 1, 500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,1])";
		};
		class SlingLoadDownInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", "db0", 1, 500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", "db0", 1, 500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,1])";
		};
		class WindInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", "db-7", 1, 50};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
		};
		class GStress
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e", "db-8", 1, 50};
			frequency = 1;
			volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
		};
	};
	class SoundsExt
	{
		class SoundEvents
		{
		};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1.25893, 1, 400};
				//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, 1, 3000};
				//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, .05, 3000};
				frequency = "rotorSpeed";
				volume = "camPos*((rotorSpeed-0.72)*4)";
			};
			class RotorExt
			{
				sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1, 1, 4000};
				//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, .05, 4000};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
				cone[] = {1.6, 3.14, 1.6, 0.95};
			};
			class RotorNoiseExt
			{
				sound[] = {"", "db0", 1, 400};
				frequency = 1;
				volume = "(camPos*(rotorThrust factor [0.6, 1]))";
				cone[] = {0.7, 1.3, 1, 0};
			};
			class EngineInt
			{
				sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
				//sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, .05};
				frequency = "rotorSpeed";
				volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
				frequency = "rotorSpeed * (1-rotorThrust/5)";
				volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2", "db0", 1, 150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-10", 1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_opfor", "db-13", 1, 20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-10", 1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low", "db-13", 1, 20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt", "db0", 1, 100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"A3\Sounds_F\dummysound", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt", "db0", 1, 100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext", "db0", 1, 100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int", "db0", 1, 100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT", "db0", 1, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT", "db0", 1, 500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT", "db0", 1, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT", "db0", 1, 500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed", "db-10", 1, 50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2e", "db-10", 1, 50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
		};
	};

	// class Sounds:Sounds
	// {
	// 	class EngineExt
	// 	{
	// 		sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1.25893, 1, 400};
	// 		//sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, .05};
	// 		frequency = "rotorSpeed";
	// 		volume = "camPos*((rotorSpeed-0.72)*4)";
	// 	};
	// 	class RotorExt
	// 	{
	// 		 sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1, 1, 4000};
	// 		//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, .05, 4000};
	// 		frequency = "rotorSpeed * (1-rotorThrust/5)";
	// 		volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
	// 		cone[] = {1.6, 3.14, 1.6, 0.95};
	// 	};
	// 	class RotorNoiseExt
	// 	{
	// 		sound[] = {"", "db0", 1, 400};
	// 		frequency = 1;
	// 		volume = "(camPos*(rotorThrust factor [0.6, 1]))";
	// 		cone[] = {0.7, 1.3, 1, 0};
	// 	};
	// 	class EngineInt
	// 	{
	// 		 sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
	// 		//sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, .05};
	// 		frequency = "rotorSpeed";
	// 		volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
	// 	};
	// 	class RotorInt
	// 	{
	// 		sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
	// 		frequency = "rotorSpeed * (1-rotorThrust/5)";
	// 		volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
	// 	};
	// };
	// class SoundsExt:SoundsExt
	// {
		
	// 	class Sounds:Sounds
	// 	{
	// 		class EngineExt
	// 		{
	// 			sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1.25893, 1, 400};
	// 			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, 1, 3000};
	// 			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, .05, 3000};
	// 			frequency = "rotorSpeed";
	// 			volume = "camPos*((rotorSpeed-0.72)*4)";
	// 		};
	// 		class RotorExt
	// 		{
	// 			sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 1, 1, 4000};
	// 			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 1, .05, 4000};
	// 			frequency = "rotorSpeed * (1-rotorThrust/5)";
	// 			volume = "camPos*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
	// 			cone[] = {1.6, 3.14, 1.6, 0.95};
	// 		};
	// 		class RotorNoiseExt
	// 		{
	// 			sound[] = {"", "db0", 1, 400};
	// 			frequency = 1;
	// 			volume = "(camPos*(rotorThrust factor [0.6, 1]))";
	// 			cone[] = {0.7, 1.3, 1, 0};
	// 		};
	// 		class EngineInt
	// 		{
	// 			sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
	// 			//sound[] = {"LAAT\sounds\laatengine_new.ogg", 0.3, .05};
	// 			frequency = "rotorSpeed";
	// 			volume = "2 * (1-camPos)*(rotorSpeed factor[0.4,1])";
	// 		};
	// 		class RotorInt
	// 		{
	// 			sound[] = {"RD501_Vehicles\sounds\LAAT\laat_Idle.ogg", 0.3, 1};
	// 			frequency = "rotorSpeed * (1-rotorThrust/5)";
	// 			volume = "(1-camPos) * (rotorSpeed factor[0.3, 1]) * (1 + rotorThrust)";
	// 		};
	// 	};
	// };