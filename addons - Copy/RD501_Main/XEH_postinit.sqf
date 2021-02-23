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
RD501_DRONE_BATTERY = "RD501_10mw_x30_mag";

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

// Grenade Deployables
["ace_firedPlayer", {
    params["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

    if (isNull _projectile) then {
        _projectile = nearestObject [_unit, _ammo];
    };
    private _config = configFile >> "CfgAmmo" >> _ammo;
    if (getNumber (_config >> "rd501_grenade_deployable") == 1) then {
        private _deployable = getText (_config >> "rd501_grenade_deployable_object");
        private _ttl = getNumber (_config >> "rd501_grenade_deployable_timeToLive");
        if(isNil "_ttl") then {
            _ttl = -1;
        };
        [
            {
                params["_projectile", "_deployable"];
                private _speed = vectorMagnitude (velocity _projectile);
                !(isNil "_projectile") && (alive _projectile) && _speed <= 0.1
            }, 
            {
                params["_projectile", "_deployable", "_timeToLive"];
                private _position = getPosATL _projectile;
                private _deployed = createVehicle [_deployable, _position, [], 0, "CAN_COLLIDE"];
				_deployed setPosATL _position;
                deleteVehicle _projectile;
                if(_timeToLive > 0) then {
                    [
                        {
                            params["_deployed"];
                            deleteVehicle _deployed;
                        },
                        [_deployed],
                        _timeToLive
                    ] call CBA_fnc_waitAndExecute;
                };
            },
            [_projectile, _deployable, _ttl, _magazine, _unit],
            10, 
            { 
                params["", "", "", "_magazine", "_unit"];
				systemChat "Something went wrong with your order, we apologise for the inconvenience.";
				systemChat "Please file all complaints with Mirror at the Aux Office.";
				[
					{
						params["_unit", "_mag"];
						_unit addItem _mag;
						systemChat "We've attached a complementary replacement if you had any inventory space.";
					},
					[_unit, _magazine],
					2
				] call CBA_fnc_waitAndExecute;
			}
        ] call CBA_fnc_waitUntilAndExecute;
    };
}] call CBA_fnc_addEventHandler;

// Prevent Dismount on all Zeus Placed Items
{
	private _idx = _x addEventHandler ["CuratorObjectPlaced", {
		params ["_curator","_entity"];
		if(!(_entity isKindOf "Man") && (side _entity) == east) then {
			_entity allowCrewInImmobile true;
			_entity setVehicleLock "LOCKED";
		};
	}];
	_x setVariable ["rd501_curator_dismount_disable_index", _idx, false];
} forEach allCurators;