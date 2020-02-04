	//Republic_Air
    class macro_new_vehicle(ARC_170,MKII) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,republic)),[0,5,-1.6]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
        class init_fx
        {
            init = "[_this select 0] execVM '\arc\init.sqf';[_this select 0] execVM '\arc\initturbine.sqf';";
        }
    };	
    class macro_new_vehicle(v_wing,MKII) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,republic)),[0,4,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
        class edit_mass_and_fx
        {
             init = "[_this select 0,18000] call RD501_Main_fnc_set_mass;[_this select 0] execVM '\Vwing\init.sqf';[_this select 0] execVM '\Vwing\initturbine.sqf';";
        };
    };	
    // class macro_new_vehicle(Y_wing,MkII) {
    //     class turret_script {
            
    //         init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,republic)),[0,14,-1.6]] spawn macro_fnc_name(apply_aircraft_turrets);
    //     };
    // };	

    class macro_new_vehicle(delta,7a_Mk2) {
        class edit_mass_and_fx
        {
            init = "[_this select 0,10200] call RD501_Main_fnc_set_mass;[_this select 0] execVM '\delta7\initturbine.sqf';[_this select 0] execVM '\awing\init.sqf';";
        };
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,republic)),[0,3,.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	

     class macro_new_vehicle(delta,7b_Mk2) {
        class edit_mass_and_fx
        {
            init = "[_this select 0,10200] call RD501_Main_fnc_set_mass;[_this select 0] execVM '\delta7\initturbine.sqf';[_this select 0] execVM '\awing\init.sqf';";
        };
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,republic)),[0,3,.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	

    class macro_new_vehicle(eta,lime_Mk2) {
        class turret_script {
           
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,republic)),[0,3,-1]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
         class set_mass_and_fx
        {
            init = "[_this select 0,15000] call RD501_Main_fnc_set_mass;[_this select 0] execVM '\eta2\init.sqf';[_this select 0] execVM '\eta2\initturbine.sqf'; ";
        };
    };	