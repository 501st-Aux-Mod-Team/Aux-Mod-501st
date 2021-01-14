/*
 * Author: M3ales
 *
 * Arguments:
 * Healer
 * Patient
 * Return Value:
 * Nothing
 *
 * Example:
 * [player, cursorTarget] call rd501_fnc_bandageAllWounds
 *
 * Public: No
 */

params ["_healer", "_patient"];

private _openWounds = (_patient getVariable ["ace_medical_openWounds", []]);
if (_openWounds isEqualTo []) exitWith {};

{
	_x params ["_classId", "_bodyPartN", "_amountOf", "_bloodloss", "_damage"];
	_x set [2,0];
}forEach(_openWounds);

_patient setVariable ["ace_medical_openWounds", _openWounds, true];

[_patient] call ace_medical_status_fnc_updateWoundBloodLoss;
[_patient] call ace_medical_engine_fnc_updateDamageEffects;

private _nearPlayers = (_patient nearEntities ["CAManBase", 6]) select {_x call ace_common_fnc_isPlayer};
["ace_interact_menu_clearConditionCaches", [], _nearPlayers] call CBA_fnc_targetEvent;