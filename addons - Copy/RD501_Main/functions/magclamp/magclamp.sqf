#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "../../config_macros.hpp"

macro_grp_fnc_name(magclamp,handle_universal) = {
    params ["_mc_pos", "_attached_var", "_forbid_param", "_offset_param"];

    if (isNull objectParent player) exitWith {};
    private _vehicle = vehicle player;
    if !((driver _vehicle) == player or (gunner _vehicle) == player) exitWith {};

    private _position = (configFile >> "CfgVehicles" >> (typeOf _vehicle) >> _mc_pos) call BIS_fnc_getCfgDataArray;
    if (count _position == 0) exitWith {};
    private _attached = _vehicle getVariable[_attached_var,objNull];

    if(isNull _attached) then {
    	private _objects = nearestObjects [player, ["Car","Tank","Motorcycle","StaticWeapon","Air","Ship","Object","Thing"], 20];

    	private _target_index = 0;
	    private _target = _objects select _target_index;
	    private _is_attached = _target getVariable["RD501_mc_is_attached",false];
	    private _cant_be_clamped = (configFile >> "CfgVehicles" >> (typeOf _target) >> _forbid_param) call BIS_fnc_getCfgDataBool;

	    while {_target == _vehicle || _target isKindOf "Man" || _is_attached || _cant_be_clamped} do {
	        _target_index = _target_index + 1;
	        _target = _objects select _target_index;
	        _is_attached = _target getVariable["RD501_mc_is_attached",false];
	        _cant_be_clamped = (configFile >> "CfgVehicles" >> (typeOf _target) >> _forbid_param) call BIS_fnc_getCfgDataBool;
        };

        if (isNull _target) exitWith {};

	    private _offset = (configFile >> "CfgVehicles" >> (typeOf _target) >> _offset_param) call BIS_fnc_getCfgDataArray;
	    if (count _offset == 3) then {
	        _position = [(_position select 0) + (_offset select 0), (_position select 1) + (_offset select 1), (_position select 2) + (_offset select 2)];
	    };

	    _target attachTo [_vehicle, _position];
	    _vehicle setVariable[_attached_var,_target,true];
	    _target setVariable["RD501_mc_is_attached",true,true];
	} else {
	    detach _attached;
	    _vehicle setVariable[_attached_var,objNull,true];
        if (_mc_pos == "RD501_magclamp_large") then
        {
            _vehicle setVariable["RD501_mc_stop_refuel",true,true];
        };
	    _attached setVariable["RD501_mc_is_attached",false,true];
	};
};

macro_grp_fnc_name(magclamp,handle_small_1_pressed) = {
    ["RD501_magclamp_small_1",
     "RD501_mc_attached_small_1",
     "RD501_magclamp_small_forbidden",
     "RD501_magclamp_small_offset"] call macro_grp_fnc_name(magclamp,handle_universal);
};

macro_grp_fnc_name(magclamp,handle_large_pressed) = {
    ["RD501_magclamp_large",
     "RD501_mc_attached_large",
     "RD501_magclamp_large_forbidden",
     "RD501_magclamp_large_offset"] call macro_grp_fnc_name(magclamp,handle_universal);
};

macro_grp_fnc_name(magclamp,handle_small_2_pressed) = {
    ["RD501_magclamp_small_2",
     "RD501_mc_attached_small_2",
     "RD501_magclamp_small_forbidden",
     "RD501_magclamp_small_offset"] call macro_grp_fnc_name(magclamp,handle_universal);
};

macro_grp_fnc_name(magclamp,handle_drop_all) = {
    if (isNull objectParent player) exitWith {};
    private _vehicle = vehicle player;
    if !((driver _vehicle) == player or (gunner _vehicle) == player) exitWith {};
    private _attached = _vehicle getVariable["RD501_mc_attached_small_1",objNull];
    if(isNull _attached) then {} else {
	    detach _attached;
	    _vehicle setVariable["RD501_mc_attached_small_1",objNull,true];
	    _attached setVariable["RD501_mc_is_attached",false,true];
    };
    _attached = _vehicle getVariable["RD501_mc_attached_large",objNull];
    if(isNull _attached) then {} else {
	    detach _attached;
        _vehicle setVariable["RD501_mc_stop_refuel",true,true];
	    _vehicle setVariable["RD501_mc_attached_large",objNull,true];
	    _attached setVariable["RD501_mc_is_attached",false,true];
    };
    _attached = _vehicle getVariable["RD501_mc_attached_small_2",objNull];
    if(isNull _attached) then {} else {
	    detach _attached;
	    _vehicle setVariable["RD501_mc_attached_small_2",objNull,true];
	    _attached setVariable["RD501_mc_is_attached",false,true];
    };
};

// add keybinds
["RD501 Magclamp","small_1",["First Small Clamp (Laat/I, Laat/C Left)","Activate/Deactivate left Magclamp on Laat/C or main Magclamp on Laat/I"],{
    [player] call macro_grp_fnc_name(magclamp,handle_small_1_pressed);
},"",[DIK_7,[false,false,false]],false] call cba_fnc_addKeybind;
["RD501 Magclamp","large",["Large Clamp (Laat/C Center)","Activate/Deactivate center Magclamp on Laat/C"],{
    [player] call macro_grp_fnc_name(magclamp,handle_large_pressed);
},"",[DIK_8,[false,false,false]],false] call cba_fnc_addKeybind;
["RD501 Magclamp","small_2",["Second Small Clamp (Laat/C Right)","Activate/Deactivate right Magclamp on Laat/C"],{
    [player] call macro_grp_fnc_name(magclamp,handle_small_2_pressed);
},"",[DIK_9,[false,false,false]],false] call cba_fnc_addKeybind;
["RD501 Magclamp","detach_all",["Detach All","Detach all clamped vehicles"],{
    [player] call macro_grp_fnc_name(magclamp,handle_drop_all);
},"",[DIK_0,[false,false,false]],false] call cba_fnc_addKeybind;

// refuel target function
["RD501_mc_set_fuel", {
    _vehicle = (vehicle this);
    if (isNull _vehicle) exitWith {};
    _vehicle setFuel _this;
}, []] call CBA_fnc_addEventHandlerArgs;
