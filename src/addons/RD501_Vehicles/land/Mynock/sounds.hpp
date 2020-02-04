attenuationEffectType = "TankAttenuation";
		soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1};
		soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out", 0.562341, 1, 70};
		soundDammage[] = {"", 0.562341, 1};
		soundEngineOnInt[] = {"ITT\ABRAMS_engine_int_start", "db+1", 1.5, 200};
		soundEngineOffInt[] = {"ITT\ABRAMS_engine_int_stop", "db+1", 1.5, 200};
		soundEngineOnExt[] = {"ITT\ABRAMS_engine_ext_start", "db+1", 1.5, 200};
		soundEngineOffExt[] = {"ITT\ABRAMS_engine_ext_stop", "db+1", 1.5, 200};
		soundBushCollision1[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_1", 0.177828, 1, 100};
		soundBushCollision2[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_2", 0.177828, 1, 100};
		soundBushCollision3[] = {"A3\Sounds_F\vehicles\crashes\helis\Heli_coll_bush_int_3", 0.177828, 1, 100};
		soundBushCrash[] = {"soundBushCollision1", 0.33, "soundBushCollision2", 0.33, "soundBushCollision3", 0.33};
		soundGeneralCollision1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_1", 1, 1, 100};
		soundGeneralCollision2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_2", 1, 1, 100};
		soundGeneralCollision3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_3", 1, 1, 100};
		soundGeneralCollision4[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_crash_default_4", 1, 1, 100};
		soundCrashes[] = {"soundGeneralCollision1", 0.25, "soundGeneralCollision2", 0.25, "soundGeneralCollision3", 0.25, "soundGeneralCollision4", 0.25};
		buildCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_1", 1, 1, 200};
		buildCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_2", 1, 1, 200};
		buildCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_3", 1, 1, 200};
		buildCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_building_4", 1, 1, 200};
		soundBuildingCrash[] = {"buildCrash0", 0.25, "buildCrash1", 0.25, "buildCrash2", 0.25, "buildCrash3", 0.25};
		WoodCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_1", 1, 1, 200};
		WoodCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_2", 1, 1, 200};
		WoodCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_3", 1, 1, 200};
		WoodCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_wood_4", 1, 1, 200};
		soundWoodCrash[] = {"woodCrash0", 0.166, "woodCrash1", 0.166, "woodCrash2", 0.166, "woodCrash3", 0.166};
		ArmorCrash0[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_1", 1, 1, 200};
		ArmorCrash1[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_2", 1, 1, 200};
		ArmorCrash2[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_3", 1, 1, 200};
		ArmorCrash3[] = {"A3\Sounds_F\vehicles\crashes\armors\tank_coll_armor_4", 1, 1, 200};
		soundArmorCrash[] = {"ArmorCrash0", 0.25, "ArmorCrash1", 0.25, "ArmorCrash2", 0.25, "ArmorCrash3", 0.25};
		class Sounds
		{
			class Idle_ext
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\Engine_Idle", 1.51623, 0.5, 100};
				frequency = 1;
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class Engine
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\Engine_Idle", 1.55481, 0.51, 200};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_ext
			{
				sound[] = {"", 0.398107, 1, 200};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_ext
			{
				sound[] = {"", 0.446684, 1, 250};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_ext
			{
				sound[] = {"", 0.501187, 1, 250};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*camPos*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_ext
			{
				sound[] = {"", 0.562341, 1, 300};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume = "engineOn*camPos*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class IdleThrust
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm1", 0.562341, 0.51, 150};
				frequency = 1;
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class EngineThrust
			{
				sound[] = {"", 0.630957, 1, 200};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm2", 0.707946, 0.51, 250};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm3", 0.794328, 0.5, 300};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm4", 0.891251, 0.51, 350};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm5", 1, 0.51, 400};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class Idle_int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\Engine_Idle", 0.251189, 0.51};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class Engine_int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\Engine_Idle", 0.281838, 0.51};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_int
			{
				sound[] = {"", 0.316228, 1};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_int
			{
				sound[] = {"", 0.354813, 1};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_int
			{
				sound[] = {"", 0.398107, 1};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_int
			{
				sound[] = {"", 0.446684, 1};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume = "engineOn*(1-camPos)*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class IdleThrust_Int
			{
				sound[] = {"", 0.562341, 1};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(200/ 2000),(400/ 2000)]) * ((rpm/ 2000) factor[(750/ 2000),( 600/ 2000)]))";
			};
			class EngineThrust_Int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm1", 0.630957, 0.51};
				frequency = "0.9 + ((rpm/ 2000) factor[(600/ 2000),(1000/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(600/ 2000),(730/ 2000)]) * ((rpm/ 2000) factor[(1020/ 2000),( 800/ 2000)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm2", 0.707946, 0.51};
				frequency = "0.9 + ((rpm/ 2000) factor[(800/ 2000),(1300/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(780/ 2000),(1000/ 2000)]) * ((rpm/ 2000) factor[(1300/ 2000),( 1100/ 2000)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm3", 0.794328, 0.51};
				frequency = "0.9 + ((rpm/ 2000) factor[(1080/ 2000),(1560/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1100/ 2000),(1280/ 2000)]) * ((rpm/ 2000) factor[(1570/ 2000),( 1380/ 2000)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm4", 0.891251, 0.51};
				frequency = "0.95 + ((rpm/ 2000) factor[(1380/ 2000),(1860/ 2000)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2000) factor[(1350/ 2000),(1550/ 2000)]) * ((rpm/ 2000) factor[(1870/ 2000),( 1630/ 2000)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"SWOP_vehiclecommon\Speeder\Speederbike\Sounds\SpeederBike_rpm5", 1, 0.51};
				frequency = "0.95 + ((rpm/ 2000) factor[(1630/ 2000),(2000/ 2000)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2000) factor[(1650/ 2000),(1900/ 2000)])";
			};
			class NoiseInt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1", 0.501187, 1};
				frequency = "1";
				volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class NoiseExt
			{
				sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1", 0.630957, 1, 150};
				frequency = "1";
				volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
			};
			class TiresRockOut
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 1.25893, 1, 90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"", 1, 1, 60};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3", 0.501187, 1};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.5])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.5])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.5])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.5])*(Speed Factor[0, 10])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[-0.2, -0.5])*(Speed Factor[2, 10])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(LongSlipDrive Factor[0.2, 0.5])*(Speed Factor[10, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[0.15, 0.5])*(Speed Factor[0, 10])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*camPos*(latSlipDrive Factor[-0.15, -0.5])*(Speed Factor[0, 10])";
			};
			class breaking_int_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.4, -0.6])*(Speed Factor[2, 6])";
			};
			class acceleration_int_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.4, 0.6])*(Speed Factor[10, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.4, 0.6])*(Speed Factor[1, 10])";
			};
			class turn_right_int_road
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.4, -0.6])*(Speed Factor[1, 10])";
			};
			class breaking_int_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[-0.4, -0.6])*(Speed Factor[2, 6])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(LongSlipDrive Factor[0.4, 0.6])*(Speed Factor[10, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[0.4, 0.6])*(Speed Factor[1, 10])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"", 1, 1, 60};
				frequency = 1;
				volume = "engineOn*(1-camPos)*(latSlipDrive Factor[-0.4, -0.6])*(Speed Factor[1, 10])";
			};
		};