class cfgPatches {
    class RD501_Radio_Dialog_Selector {
		units[] = {};
		weapons[] = {};
        requiredVersion = 0.1;
		requiredAddons[] = {"task_force_radio"};
    };
};

class Extended_PreInit_EventHandlers {
    class RD501_Radio_Dialog_Selector_pre_init_event {
        init = "call compile preprocessFileLineNumbers 'RD501_RDS\XEH_preInit.sqf'";
    };
};

class cfgFunctions {
	class TFAR {
		class Radio {
			class onLRDialogOpen {
				file = "RD501_RDS\fn_onLRDialogOpen.sqf";
			};
		};
	};
};