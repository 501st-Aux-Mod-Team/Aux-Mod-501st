#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "../../config_macros.hpp"


//handle button press
macro_grp_fnc_name(magclamp,handle_left_pressed) = {
    if(isNull vehicle player) exitWith {};
    systemChat "left clamp";
};

macro_grp_fnc_name(magclamp,handle_center_pressed) = {
    if(isNull vehicle player) exitWith {};
    systemChat "center clamp";
};

macro_grp_fnc_name(magclamp,handle_right_pressed) = {
    _vehicle = vehicle player;
    if(isNull _vehicle) exitWith {};
    _attached = _vehicle getVariable["RD501_mc_attached_right",objNull];
    if(isNull _attached) then {
    	_objects = nearestObjects [player, ["Car","Tank","Air","Ship","Object"], 20];
	    _target = _objects select 1;
	    _target attachTo [_vehicle, [7,-2,-2.5]];
	    _vehicle setVariable["RD501_mc_attached_right",_target,true];
	} else {
	    detach _attached;
	    _vehicle setVariable["RD501_mc_attached_right",objNull,true];
	}
};


//add keybinds
["RD501 Magclamp","Left Clamp",["Left","Activate/Deactivate left magclamp"],{
    [player] call macro_grp_fnc_name(magclamp,handle_left_pressed);
},"",[DIK_7,[false,false,false]],false] call cba_fnc_addKeybind;
["RD501 Magclamp","Center Clamp",["Center","Activate/Deactivate center magclamp"],{
    [player] call macro_grp_fnc_name(magclamp,handle_center_pressed);
},"",[DIK_8,[false,false,false]],false] call cba_fnc_addKeybind;
["RD501 Magclamp","Right Clamp",["Right","Activate/Deactivate right magclamp"],{
    [player] call macro_grp_fnc_name(magclamp,handle_right_pressed);
},"",[DIK_9,[false,false,false]],false] call cba_fnc_addKeybind;