		scope=2;
		side=0;
		scopeCurator=2;
		forceInGarage = 1;
		armor=300;

		crew=macro_new_unit_class(opfor,B1_crew)
		
		faction = macro_cis_faction
		editorSubcategory = macro_editor_cat(tank)
		vehicleClass = macro_editor_vehicle_type(tank)

		RD501_magclamp_small_offset[] = {0.0,0.0,-3.0};
		RD501_magclamp_large_offset[] = {0.0,0.0,-3.0};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets : Turrets {
					class CommanderOptics : CommanderOptics {
					};
				};
				weapons[] = {"SmokeLauncher",macro_new_weapon(generic,tank_repeater),macro_new_weapon(aat_cannon,king)};
				magazines[] = {"SmokeLauncherMag",macro_new_mag(aat_mbt,10), macro_new_mag(aat_mbt,10),macro_new_mag(generic_aircraft_gun,1000),macro_new_mag(generic_aircraft_gun,1000)};
			};
		};
		class HitPoints: HitPoints
		{
			class HitHull: HitHull {	// Handle internal damage
				armor=4.5;
				material=-1;
				name="telo";
				visual="zbytek";
				passThrough=1;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.12;
			};
			class HitEngine: HitEngine {
				armor=0.75;
				material=-1;
				name="motor";
				passThrough=0.2;
				minimalHit = 0.2;
				explosionShielding = 0.2;
				radius = 0.33;
			};
			class HitLTrack: HitLTrack {
				armor=0.5;
				material=-1;
				name="track_l_hit";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitRTrack: HitRTrack {
				armor=0.5;
				material=-1;
				name="track_r_hit";
				passThrough=0;
				minimalHit = 0.08;
				explosionShielding = 1.44;
				radius = 0.3;
			};
			class HitFuel: HitFuel
			{
				armor = 1.5;
				material = -1;
				name = "palivo";
				passThrough = 0.1;
				minimalHit = 0.1;
				explosionShielding = 0.6;
				radius = 0.25;
			};
		};