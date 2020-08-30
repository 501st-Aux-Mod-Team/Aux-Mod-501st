/*
 * Author: MrClock
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Type <STRING>
 *
 * Example:
 * [Bob,"HUMAN"] call JLTS_fnc_showHintEMP;
 *
 * Return Value:
 * true - if completed without errors
 */

if (!hasInterface) exitWith {};

params["_unit","_type"];

private _player = JLTS_playerControlled;


if (_unit == _player) then {
	if (JLTS_settings_EMP_notifyPlayer) then {
		if (toUpper _type == "DROID") then {
			[
				["JLTS_ordnance","EMP","EMP_sub_droid"], 
				20, 
				nil, 
				30, 
				nil, 
				true, 
				true, 
				false, 
				true
			] call BIS_fnc_advHint;
		} else {
			if (toUpper _type == "HUMAN" && JLTS_settings_EMP_EMPEffectScope > 0) then {
				[
					["RD501_ordnance","EMP","EMP_sub_fry"],
					20, 
					nil, 
					30, 
					nil, 
					true, 
					true, 
					false, 
					true
				] call BIS_fnc_advHint;
			} else {};
		};
	};
};