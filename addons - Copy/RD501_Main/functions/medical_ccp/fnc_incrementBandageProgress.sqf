/*
 * Author: M3ales
 *
 * Arguments:
 * Building or object to increment variable on
 * The player who is performing the action
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget, player] call rd501_fnc_incrementBandageProgress
 *
 * Public: No
 */

params["_origin", "_healer"];
_progress = _origin getVariable["rd501_medical_ccp_bandageProgress", -1];
if(_progress >= 0) then {
	_origin setVariable["rd501_medical_ccp_bandageProgress", _progress + 1, true];
};