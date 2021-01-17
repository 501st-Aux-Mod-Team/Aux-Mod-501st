/*
 * Author: M3ales
 *
 * Arguments:
 * Healer
 * Origin To Search from
 * Radius To Search Around for People
 * Return Value:
 * Nothing
 *
 * Example:
 * [player, cursorTarget] call rd501_fnc_bandageAllNearbyCCP
 *
 * Public: No
 */

params["_healer", "_origin", "_radius"];

private _nearbyPatients = _origin nearEntities ["CAManBase", _radius] select {
	[_x] call rd501_fnc_checkInsideCCP &&
	{
		count (_x getVariable ["ace_medical_openWounds", []]) > 0
	}
};

private _args = [_healer, _nearbyPatients, _origin];

if(count _nearbyPatients == 0) exitWith {
	["Nobody to Bandage Inside CCP", true, 2, 0] call ace_common_fnc_displayText;
};

[format["Bandaging %1 Patient(s)", count _nearbyPatients], false, 10, 0] call ace_common_fnc_displayText;

private _onFinish = {
    (_this select 0) params ["_player", "_patients", "_building"];
	{
		if([_x] call rd501_fnc_checkInsideCCP) then {
			[_player, _x] call rd501_fnc_bandageAllWounds;
		};
	} forEach (_patients);
    _building setVariable ["rd501_medical_ccp_bandageProgress", -1, true];
    _building setVariable["rd501_medical_ccp_bandageMembers", [], true];
	[_player, "", 1] call ace_common_fnc_doAnimation;
};

private _onFailure = {
    params["_args", "_progress", "_errorCode"];
    _args params["_healer","_nearbyPatients", "_building"];
    [_healer, "", 1] call ace_common_fnc_doAnimation;
    _bandagers = _building getVariable ["rd501_medical_ccp_bandageMembers", []];
    if(count _bandagers <= 1) then {
        _building setVariable ["rd501_medical_ccp_bandageProgress", -1, true];
        _building setVariable ["rd501_medical_ccp_bandageMembers", [], true];
        _building setVariable ["rd501_medical_ccp_bandageProgressComplete", 100];
    }
    else
    {
        _newArr = _bandagers deleteAt (_bandagers findIf { _x isEqualTo ([] call CBA_fnc_currentUnit)}) select 1;
        _building setVariable["rd501_medical_ccp_bandageMembers", _newArr, true];
    }
};

private _condition = {
    params["_args", "_progress", "_errorCode"];
    _args params["_healer","_nearbyPatients", "_building"];
    if(_progress == -1) exitWith {false};
    if(_healer getVariable ["ACE_Unconscious", false]) exitWith {false};
    alive _healer && alive _building
};

if(_origin getVariable ["rd501_medical_ccp_bandageProgress", -1] == -1) then {
    private _bandageDuration = ((count _nearbyPatients) * rd501_medical_ccp_bandageDurationSeconds);
    _origin setVariable ["rd501_medical_ccp_bandageProgress", 0, true];
    _origin setVariable ["rd501_medical_ccp_bandageMembers", [player], true];
    _origin setVariable ["rd501_medical_ccp_bandageProgressComplete", _bandageDuration, true];
}
else
{
    _bandageMembers = _origin getVariable ["rd501_medical_ccp_bandageMembers", []];
    _bandageMembers append [player];
    _origin setVariable ["rd501_medical_ccp_bandageMembers", _bandageMembers, true];
};

[
    {
        params ["_args", "_handle"];
        _args params ["_healer", "_nearbyPatients", "_origin"];
        _progress = _origin getVariable ["rd501_medical_ccp_bandageProgress", -1];
        _progressComplete = _origin getVariable ["rd501_medical_ccp_bandageProgressComplete", 100];
        if(_progress < 0 || _progress >= _progressComplete) exitWith {
            [_handle] call CBA_fnc_removePerFrameHandler;
        };
        if!(_healer getVariable ["ACE_Unconscious", false]) exitWith {
            ["rd501_medical_ccp_incrementBandage",[_origin, _healer]] call CBA_fnc_serverEvent;
        };
    },
    1,
    _args
] call CBA_fnc_addPerFrameHandler;

[_healer, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

["rd501_medical_ccp_bandageProgress", "rd501_medical_ccp_bandageProgressComplete", _origin, _args, _onFinish, _onFailure, "Bandaging All Patients Inside CCP", _condition] call rd501_fnc_valueProgressBar;