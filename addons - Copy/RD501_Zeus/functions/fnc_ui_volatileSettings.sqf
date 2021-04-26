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
    private _jammerInit = _logic getVariable ["rd501_ui_volatileInit", [100]];
    if(_idc == 58502) then {
        // Health
        private _curVal = _jammerInit select 0;
        _slider ctrlSetTooltip format ["%1%3 (default %2%3)", round(sliderPosition _slider), round(_curVal), " hitpoints"];
    };
};

private _logic = missionNamespace getVariable["BIS_fnc_initCuratorAttributes_target",objNull];
private _init = _logic getVariable ["rd501_ui_volatileInit", [100]];

private _slider = _display displayCtrl 58502;
_slider sliderSetRange [10, 1000];
_slider sliderSetSpeed [1,100];
_slider sliderSetPosition (_init select 0);
_slider ctrlAddEventHandler ["SliderPosChanged", _fnc_sliderMove];
_slider call _fnc_sliderMove;

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
    _logic setVariable ["rd501_ui_volatileInit", [sliderPosition (_display displayCtrl 58502)]];
    [_logic] call rd501_zeus_fnc_moduleVolatile;
};

_display displayAddEventHandler ["unload", _fnc_onUnload];
_ctrlButtonOK ctrlAddEventHandler ["buttonclick", _fnc_onConfirm];