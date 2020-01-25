    class macro_new_vehicle(vulture,MKII) {
    	
        class turret_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,normal)),[0,1.5,-.6]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };
    
    class macro_new_vehicle(trifighter,MKII) {
        class turret_script2 {
            init =  "[_this select 0,18000] call RD501_Main_fnc_set_mass;";
        };
        class turret_script {
            init =  [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,normal)),[0,1,-1]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
       
    };

    class macro_new_vehicle(hyena,Mk2) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,normal)),[-1,1.5,-0.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };

    class macro_new_vehicle(HMP,gunship) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,normal)),[0,5,-1.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };

    class macro_new_vehicle(HMP,transport) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,normal)),[0,5,-1.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };

    class macro_new_vehicle(scimitar,Mk2) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,normal)),[-.4,13,0]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };

    class macro_new_vehicle(nantex,Mk2) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,Purple)),[0,3,.6]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };