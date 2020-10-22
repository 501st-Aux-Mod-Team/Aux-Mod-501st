	//Republic_Air
    class macro_new_vehicle(ARC_170,MKII) {
        class init_fx {
            init = "[_this select 0] execVM '\arc\init.sqf';[_this select 0] execVM '\arc\initturbine.sqf';";
        }
        class drone_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(drone,Clone_Recon_Droid)),[0,-2.2,1.0]] spawn macro_fnc_name(apply_aircraft_drone);
        };
		macro_standard_eh
    };

    class macro_new_vehicle(v_wing,MKII) {
        class edit_mass {
        	init = "[_this select 0,45000] call RD501_Main_fnc_set_mass;";
        };
		class init_fx {
			init = "[_this select 0] execVM '\Vwing\init.sqf';[_this select 0] execVM '\Vwing\initturbine.sqf';";
		}
        class drone_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(drone,Clone_Recon_Droid)),[0,-0.6,1.4]] spawn macro_fnc_name(apply_aircraft_drone);
        };
		macro_standard_eh
    };

    class macro_new_vehicle(Y_wing,MkII) {
		class init_fx {
			init = "[_this select 0] execVM '\ywing\initturbine.sqf';";
		};
		class drone_script {
			init = [_this select 0,macro_single_quote(macro_new_vehicle(drone,Clone_Recon_Droid)),[0,2.2,0]] spawn macro_fnc_name(apply_aircraft_drone);
		};
		macro_standard_eh
    };	

    class macro_new_vehicle(delta,7a_Mk2) {
        class edit_mass {
            init = "[_this select 0,10200] call RD501_Main_fnc_set_mass;";
        };
		class init_fx {
			init = "[_this select 0] execVM '\delta7\initturbine.sqf';[_this select 0] execVM '\awing\init.sqf';";
		}
        class drone_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(drone,Clone_Recon_Droid)),[-1,2,0]] spawn macro_fnc_name(apply_aircraft_drone);
        };
    };	

    class macro_new_vehicle(delta,7b_Mk2) {
		class edit_mass {
			init = "[_this select 0,10200] call RD501_Main_fnc_set_mass;";
		};
		class init_fx {
			init = "[_this select 0] execVM '\delta7\initturbine.sqf';[_this select 0] execVM '\awing\init.sqf';";
		}
        class drone_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(drone,Clone_Recon_Droid)),[0,1,2]] spawn macro_fnc_name(apply_aircraft_drone);
        };
    };	

    class macro_new_vehicle(eta,lime_Mk2) {
		class edit_mass {
			init = "[_this select 0,15000] call RD501_Main_fnc_set_mass;";
		};
		class init_fx {
			init = "[_this select 0] execVM '\eta2\init.sqf';[_this select 0] execVM '\eta2\initturbine.sqf';";
		}
        class drone_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(drone,Clone_Recon_Droid)),[-0.9,1.3,0.1]] spawn macro_fnc_name(apply_aircraft_drone);
        };
    };	