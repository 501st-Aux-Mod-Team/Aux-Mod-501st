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
 * [player, cursorTarget] call rd501_fnc_stitchAllNearbyCCP
 *
 * Public: No
 */
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
 * [player, cursorTarget] call rd501_fnc_stitchAllNearbyCCP
 *
 * Public: No
 */

params["_healer", "_origin", "_radius"];

private _nearbyPatients = _origin nearEntities ["CAManBase", _radius] select {
	[_x] call rd501_fnc_checkInsideCCP &&
	{
		count (_x getVariable ["ace_medical_bandagedWounds", []]) > 0
	}
};

private _args = [_healer, _nearbyPatients, _origin];

if(count _nearbyPatients == 0) exitWith {
	["Nobody to Stitch Inside CCP", true, 2, 0] call ace_common_fnc_displayText;
};

[format["Stitching %1 Patient(s)", count _nearbyPatients], false, 10, 0] call ace_common_fnc_displayText;

private _onFinish = {
    (_this select 0) params ["_player", "_patients", "_building"];
	{
		if([_x] call rd501_fnc_checkInsideCCP) then {
			[_player, _x] call rd501_fnc_stitchAllWounds;
		};
	} forEach (_patients);
    _building setVariable ["rd501_medical_ccp_stitchProgress", -1, true];
    _building setVariable["rd501_medical_ccp_stitchMembers", [], true];
	[_player, "", 1] call ace_common_fnc_doAnimation;
};

private _onFailure = {
    params["_args", "_progress", "_errorCode"];
    _args params["_healer","_nearbyPatients", "_building"];
    [_healer, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
    _stitchers = _building getVariable ["rd501_medical_ccp_stitchMembers", []];
    diag_log format["_stitchers %1", _stitchers];
    if(count _stitchers <= 1) then {
        _building setVariable ["rd501_medical_ccp_stitchProgress", -1, true];
        _building setVariable["rd501_medical_ccp_stitchMembers", [], true];
    }
    else
    {
        _newArr = _stitchers deleteAt (_stitchers findIf { _x isEqualTo ([] call CBA_fnc_currentUnit)}) select 1;
        _building setVariable["rd501_medical_ccp_stitchMembers", _newArr, true];
    }
};

private _condition = {
    params["_args", "_progress", "_errorCode"];
    _args params["_healer","_nearbyPatients", "_building"];
    if(_progress == -1) exitWith {false};
    if(_healer getVariable ["ACE_Unconscious", false]) exitWith {false};
    alive _healer && alive _building
};

if(_origin getVariable ["rd501_medical_ccp_stitchProgress", -1] == -1) then {
    _origin setVariable ["rd501_medical_ccp_stitchProgress", 0, true];
    _origin setVariable ["rd501_medical_ccp_stitchMembers", [player], true];
}
else
{
    _stitchMembers = _origin getVariable ["rd501_medical_ccp_stitchMembers", []];
    _stitchMembers append [player];
    _origin setVariable ["rd501_medical_ccp_stitchMembers", _stitchMembers, true];
};

[
    {
        params ["_args", "_handle"];
        _args params ["_healer", "_nearbyPatients", "_origin"];
        _progress = _origin getVariable ["rd501_medical_ccp_stitchProgress", -1];
        if(_progress > 100 || _progress < 0) exitWith {
            diag_log "EH Exit";
            [_handle] call CBA_fnc_removePerFrameHandler;
        };
        if!(_healer getVariable ["ACE_Unconscious", false]) exitWith {
            diag_log "EH Increment";
            [_origin, _healer] call rd501_fnc_incrementStitchProgress;
        };
    },
    0.5,
    _args
] call CBA_fnc_addPerFrameHandler;

[_healer, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[_origin, _args, _onFinish, _onFailure, "Stitching All Patients Inside CCP", _condition] call rd501_fnc_valueProgressBar;