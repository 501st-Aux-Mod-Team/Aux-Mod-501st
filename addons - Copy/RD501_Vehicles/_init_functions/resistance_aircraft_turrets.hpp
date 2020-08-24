	//Resistance_Air
	class macro_new_vehicle(A_Wing,RZ_2_Mk2) {
        class turret_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,rebel)),[0,6,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
		class swop_init {
			init = "[_this select 0] execVM '\awing\init.sqf';[_this select 0] execVM '\awing\initturbine.sqf';";
		};
		macro_standard_eh
    };

	class macro_new_vehicle(X_wing,T_70_MkII) {
        class turret_script {
            init = [_this select 0,macro_single_quote(macro_new_vehicle(Praetorian_Variant,rebel)),[0,5,-.5]] spawn macro_fnc_name(apply_aircraft_turrets);
        };
		class swop_init {
			init = "[_this select 0] execVM '\XT\init.sqf';[_this select 0] execVM '\XT\initturbine.sqf';";
		};
		macro_standard_eh
    };