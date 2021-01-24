params ["_control"];

private _display = ctrlParent _control;
private _ctrlButtonOK = _display displayCtrl 1;
private _logic = missionNamespace getVariable ["BIS_fnc_initCuratorAttributes_target",objNull];

_control ctrlRemoveAllEventHandlers "setFocus";

private _fnc_sliderMove = {
    params ["_slider"];
    private _idc = ctrlIDC _slider;
    private _logic = missionNamespace getVariable["BIS_fnc_initCuratorAttributes_target",objNull];
    if (isNull _logic) exitWith {};
    private _jammerInit = _logic getVariable ["rd501_ui_jammerInit", [300,160]];
    if(_idc == 58402) then {
        // Radius
        private _curVal = _jammerInit select 0;
        _slider ctrlSetTooltip format ["%1%3 (default %2%3)", round(sliderPosition _slider), round(_curVal), " metres"];
    };
    if(_idc == 58403) then {
        // Strength
        private _curVal = _jammerInit select 1;
        _slider ctrlSetTooltip format ["%1%3 (default %2%3)", round(sliderPosition _slider), round(_curVal), " MW"];
    };
};

private _logic = missionNamespace getVariable["BIS_fnc_initCuratorAttributes_target",objNull];
private _jammerInit = _logic getVariable ["rd501_ui_jammerInit", [300,160]];
{
    private _slider = _display displayCtrl _x;
    _slider sliderSetRange [0, 2000];
    _slider sliderSetSpeed [1,10];
    _slider sliderSetPosition (_jammerInit select _forEachIndex);
    _slider ctrlAddEventHandler ["SliderPosChanged", _fnc_sliderMove];
    _slider call _fnc_sliderMove;
} forEach [58402, 58403];

private _fnc_onUnload = {
    private _logic =  missionNamespace getVariable ["BIS_fnc_initCuratorAttributes_target",objNull];
    if (isNull _logic) exitWith { };
    deleteVehicle _logic;
};

private _fnc_onConfirm = {
    params [["_ctrlButtonOK", controlNull, [controlNull]]];

    private _display = ctrlparent _ctrlButtonOK;
    if (isNull _display) exitWith { };
    private _logic = missionNamespace getVariable["BIS_fnc_initCuratorAttributes_target",objNull];
    if (isNull _logic) exitWith { };
    private _jammerInit = _logic setVariable ["rd501_ui_jammerInit", [sliderPosition (_display displayCtrl 58402), sliderPosition (_display displayCtrl 58403)]];
    [_logic] call rd501_zeus_fnc_moduleJammerSettings;
};

_display displayAddEventHandler ["unload", _fnc_onUnload];
_ctrlButtonOK ctrlAddEventHandler ["buttonclick", _fnc_onConfirm];