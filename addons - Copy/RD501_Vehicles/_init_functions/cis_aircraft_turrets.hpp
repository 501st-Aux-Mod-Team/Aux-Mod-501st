
//CIS_Air
	class macro_new_vehicle(cis,vulture) {
        class turret_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[0,1.5,-.6]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };
    

    class macro_new_vehicle(hyena,Mk2) {
        class turret_1 {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[-1,1.5,-0.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
		class turret_2 {
			init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[1,1.5,-0.5]] spawn macro_fnc_name(apply_aircraft_turrets);
		};
    };

    class macro_new_vehicle(HMP,gunship) {
		class turret1 {
			init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[0,5,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
		};
		class turret2 {
			init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[5,0,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
		};
		class turret3 {
			init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[-5,0,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
		};
		macro_standard_eh
        class swop_init {
			init = "[_this select 0] execVM '\SW_Droides_2\DroidGunship\initturbine.sqf';";
        };
    };

    class macro_new_vehicle(HMP,transport) {
		class turret1 {
			init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,opfor)),[0,5,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
		};
		macro_standard_eh
		class swop_init {
			init = "[_this select 0] execVM '\SW_Droides_2\DroidGunship\initturbine.sqf';";
		};
    };
