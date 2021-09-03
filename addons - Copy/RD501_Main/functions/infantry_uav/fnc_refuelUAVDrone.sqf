params["_target", "_player", "_params"];
if (!(_this call rd501_fnc_canRefuel)) exitWith {};

private _onFinish = {
    (_this select 0) params ["_target", "_player"];
    _player removeItem "ACE_UAVBattery";
	["ace_common_setFuel", [_target, 1], [_target]] call CBA_fnc_targetEvent;
	[format["Refuelled %1", _target], true, 2, 0] call ace_common_fnc_displayText;
};

private _onFailure = {
    (_this select 0) params ["_target", "_player"];
    [_player, "AmovPknlMstpSrasWrflDnon", 1] call ace_common_fnc_doAnimation;
};

[_player, "AinvPknlMstpSnonWnonDr_medic5", 0] call ace_common_fnc_doAnimation;

[10, [_target, _player], _onFinish, _onFailure, ("Refueling"), {(_this select 0) call rd501_fnc_canRefuel}] call ace_common_fnc_progressBar;