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
				weapons[] = {"SmokeLauncher","Cannon_EWEBSWBFgun",macro_new_weapon(aat_cannon,king)};
				magazines[] = {"SmokeLauncherMag",macro_new_mag(aat_mbt,10), macro_new_mag(aat_mbt,10),"1000Rnd_Laser_Cannon_EWEBSWBF","1000Rnd_Laser_Cannon_EWEBSWBF"};
			};
		};