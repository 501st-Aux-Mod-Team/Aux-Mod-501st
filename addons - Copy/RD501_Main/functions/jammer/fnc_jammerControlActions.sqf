params["_jammer", "_object", ["_useMainActions", true]];

private _fnc_rootCondition = {
	params ["_target", "_player", "_params"];
	if(!alive _target) exitWith { false };
	_params	params["_jammer"];
	_jammer != objNull && !isNil "_jammer" && alive _jammer && {missionNamespace getVariable ["rd501_jammers", []] findIf {_x select 0 == _jammer} != -1}
};
if(_useMainActions) then {
_action = ["rd501_jammer", "Jammer", "", { }, _fnc_rootCondition, {["ACE_MainActions"]}] call ace_interact_menu_fnc_createAction;
}
else {
	_action = ["rd501_jammer", "Jammer", "", { }, _fnc_rootCondition, {[]}] call ace_interact_menu_fnc_createAction;
};
[_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

private _fnc_destroyCondition = {
	params ["_target", "_player", "_params"];
	if(!alive _target) exitWith { false };
	_params params["_jammer"];
	_jammer == objNull || isNil "_jammer" || !alive _jammer || {missionNamespace getVariable ["rd501_jammers", []] findIf {_x select 0 == _jammer} == -1}
};

if(_useMainActions) then {
	_action = ["rd501_jammer_destroyed", "Jammer (Destroyed)", "", { }, _fnc_destroyCondition, {["ACE_MainActions"]}, [_jammer]] call ace_interact_menu_fnc_createAction;
}
else {
	_action = ["rd501_jammer_destroyed", "Jammer (Destroyed)", "", { }, _fnc_destroyCondition, {[]}, [_jammer]] call ace_interact_menu_fnc_createAction;
};
[_object, 0, [], _action] call ace_interact_menu_fnc_addActionToObject;

//Enable Jammer

_fnc_enableCondition = {
		params["","","_params"];
		_params params["_jammer"];
		private _jammers = missionNamespace getVariable ["rd501_jammers", []];
		private _index = _jammers findIf {_x select 0 == _jammer};
		if(_index == -1) exitWith { false };
		(_jammers select _index) params ["","","","","_active"];
		!_active
};

private _enableStatement = {
	params ["_target", "_player", "_params"];
	_params params["_jammer"];
	private _jammers = missionNamespace getVariable ["rd501_jammers", []];
	private _index = _jammers findIf {_x select 0 == _jammer};
	if(_index == -1) exitWith { };
	(_jammers select _index) set [4, true];
};

_action = ["rd501_jammer_enable", "Enable Jammer", "", _enableStatement, _fnc_enableCondition, {[]}, [_jammer]] call ace_interact_menu_fnc_createAction;
[_object, 0, ["rd501_jammer"], _action] call ace_interact_menu_fnc_addActionToObject;

// Disable Jammer

private _fnc_disableCondition = {
	params["","","_params"];
	_params params["_jammer"];
	private _jammers = missionNamespace getVariable ["rd501_jammers", []];
	private _index = _jammers findIf {_x select 0 == _jammer};
	if(_index == -1) exitWith { false };
	(_jammers select _index) params ["","","","","_active"];
	_active
};
private _fnc_disableStatement = {
	params ["_target", "_player", "_params"];
	_params params["_jammer"];
	private _jammers = missionNamespace getVariable ["rd501_jammers", []];
	private _index = _jammers findIf {_x select 0 == _jammer};
	if(_index == -1) exitWith { };
	(_jammers select _index) set [4, false];
};

_action = ["rd501_jammer_disable", "Disable Jammer", "", _fnc_disableStatement, _fnc_disableCondition, {[]}, [_jammer]] call ace_interact_menu_fnc_createAction;
[_object, 0, ["rd501_jammer"], _action] call ace_interact_menu_fnc_addActionToObject;