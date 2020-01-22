	//Empire_Air
    class macro_new_vehicle(TIE,stryker_MkII) {
        class turret_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[0,-2,-2.2]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,interceptor_MkII) {
        class turret_script {         
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[-.4,-.2,-1.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,fighter_MkII) {
        class turret_script  { 
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[0,1,-1]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,defender_MkII) {
        class turret_script {

            init =  [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[0,-.2,-1]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,bomber_MkII) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[-.4,2,-.9]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,x1_MkII) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[-.4,2,-.9]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };		

    class macro_new_vehicle(TIE,fo) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[0,1,-1]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,sf) {
        class turret_script {
           
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[0,1,-1]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	
    class macro_new_vehicle(TIE,silencer) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,imperial)),[-.4,0,-.9]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };