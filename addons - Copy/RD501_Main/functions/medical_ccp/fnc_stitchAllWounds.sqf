/*
 * Author: M3ales
 *
 * Arguments:
 * The player who is performing the action
 * The player who is being healed
 * Return Value:
 * None
 *
 * Example:
 * [player, player] call rd501_fnc_stitchAllWounds
 *
 * Public: No
 */

params["_healer","_patient"];

private _bandagedWounds = _patient getVariable ["ace_medical_bandagedWounds", []];
_patient setVariable ["ace_medical_bandagedWounds", [], true];
_patient setVariable ["ace_medical_stitchedWounds", _bandagedWounds, true];

[_patient] call ace_medical_engine_fnc_updateDamageEffects;