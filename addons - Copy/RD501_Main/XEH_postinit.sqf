#include "config_macros.hpp"

//Run the jumppack script
[] spawn {
	[] spawn compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack.sqf';
	sleep 0.5;
	call compile preprocessFileLineNumbers 'macro_mod_script_path\jumppack\jumppack_effects.sqf';
};

// Add nightvision event handler
call macro_fnc_name(nightvision);

#define QWEAP_NOFAM(name) macro_quote(macro_new_weapon_nofam(name))
#define QWEAP_LAUNCH(name) macro_quote(macro_new_weapon(launcher,name))

// Drone Recharge
RD501_DRONE_BATTERY = "lightsaberG_swing";

//Force Walk
RD501_FORCE_WALK_WEAPONS = [macro_quote(macro_new_weapon_nofam(z1000))];
["weapon", macro_fnc_name(heavyWeaponHandlePlayerWeaponChanged)] call CBA_fnc_addPlayerEventHandler;

//Auto Reload On Equip
RD501_AUTO_RELOAD_ON_EQUIP = [QWEAP_NOFAM(z1000),QWEAP_LAUNCH(rps1)];
["weapon", macro_fnc_name(reloadWeaponOnFirstSelected)] call CBA_fnc_addPlayerEventHandler;

// Magclamp
call macro_fnc_name(magclamp);

// Check every second for if the Loading Screen is still up and forcibly end it.
_fnc_endLoadingScreen = {
	params ["_args", "_handle"];
	systemChat format["Ending LoadingScreen [Handle %1]", _handle];
	endLoadingScreen;
	_stillLoading = call BIS_fnc_isLoading;
	if(!_stillLoading) exitWith {
		[_handle] call CBA_fnc_removePerFrameHandler;
	};
};
[_fnc_endLoadingScreen, 5, []] call CBA_fnc_addPerFrameHandler;
// Flip Backpack
rd501_flip_vehicle_validBackpacks = ["RD501_JLTS_Clone_Flip_backpack"];
["rd501_external_reload", { _this call rd501_fnc_onReloadExternalHandler }, []] call CBA_fnc_addEventHandlerArgs;

// Fortify Tool Adjustments
call macro_fnc_name(fortify_tool);

// Medical CCP Building
rd501_medical_ccp_building = "Land_Medevac_house_V1_F";
rd501_medical_ccp_classes = ["Land_Medevac_house_V1_F"];
rd501_medical_ccp_stitchDurationSeconds = 10;
rd501_medical_ccp_bandageDurationSeconds = 10;

["rd501_medical_ccp_incrementStitch",{ 
	_this call rd501_fnc_incrementStitchProgress 
}] call CBA_fnc_addEventHandler;

["rd501_medical_ccp_incrementBandage",{
	_this call rd501_fnc_incrementBandageProgress
}] call CBA_fnc_addEventHandler;

["rd501_medical_ccp_deployCCPLocal", {
	_this call rd501_fnc_deployCCPLocal;
}] call CBA_fnc_addEventHandler;

["rd501_medical_ccp_deployCCPServer", {
	_this call rd501_fnc_deployCCPServer;
}] call CBA_fnc_addEventHandler;

// Surrender stun
call macro_fnc_name(stun);

// Jammers
["rd501_addJammerLocal", {
	_this call rd501_fnc_addJammerLocal
}] call CBA_fnc_addEventHandler;

["rd501_jammerServerPFH", {
	[{
		_this call rd501_fnc_jammersServerPFH
	}, 1] call CBA_fnc_addPerFrameHandler;
}] call CBA_fnc_addEventHandler;