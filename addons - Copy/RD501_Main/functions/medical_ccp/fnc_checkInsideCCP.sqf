/*
 * Author: M3ales
 *
 * Arguments:
 * Unit to check for
 * Return Value:
 * True if inside the bounds of a given structure
 *
 * Example:
 * [player] call rd501_fnc_checkInsideCCP
 *
 * Public: No
 */

params ["_unit"];

private _fnc_check = {
    private _position = _unit modelToWorldVisual [0, 0, eyePos _unit select 2];
     
    (
        (lineIntersectsWith [_position, _position vectorAdd [0, 0, 10], _unit]) findIf {
            typeOf _x in rd501_medical_ccp_classes || {_x getVariable ["rd501_medical_ccp_inside", false]}
        } != -1
    )
    || {
        ((_unit nearObjects 7.5) findIf {
            typeOf _x in rd501_medical_ccp_classes || {_x getVariable ["rd501_medical_ccp_inside", false]}
        } != -1)
    }
};

[[], _fnc_check, _unit, "rd501_medical_ccp_insideCache", 1] call ace_common_fnc_cachedCall;