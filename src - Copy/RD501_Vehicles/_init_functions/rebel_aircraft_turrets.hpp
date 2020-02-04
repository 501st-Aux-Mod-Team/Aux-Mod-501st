	//Rebellion_Air
    class macro_new_vehicle(A_Wing,RZ_1_Mk2) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,rebel)),[0,5,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };
    

    class macro_new_vehicle(X_wing,T_65_MkII) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,rebel)),[-.4,5,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };


    class macro_new_vehicle(Y_wing,Rebels_MkII) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,rebel)),[0,11,-1.7]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };
    class macro_new_vehicle(shuttle,Millenium_Falcon) {
        class turret_script {
            
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,rebel)),[0,1,1.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
    };	