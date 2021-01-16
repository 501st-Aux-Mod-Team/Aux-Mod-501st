/*
 * Author: M3ales
 *
 * Arguments:
 * Player or unit to check
 * Return Value:
 * True if they are a doctor (medical level 2+), false otherwise
 *
 * Example:
 * [player] call rd501_fnc_isDoctor
 *
 * Public: No
 */

params["_unit"];

private _class = _unit getVariable ["ace_medical_medicClass", parseNumber (_unit getUnitTrait "medic")];
_class >= 2