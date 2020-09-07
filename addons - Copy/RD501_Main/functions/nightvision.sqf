#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "../config_macros.hpp"

//handle loadout changed
macro_grp_fnc_name(nightvision,handle_change) = {
    params["_unit", "_loadout"];

    _nv_gear = _loadout select 9 select 5;
    _RD501_isNV = (configFile >> "cfgWeapons" >> _nv_gear >> "RD501_isNV") call BIS_fnc_getCfgDataBool;
    player setVariable["RD501_isNV",_RD501_isNV,true];

    if (!_RD501_isNV) then {
        call macro_grp_fnc_name(nightvision,switch_off);
    };
};

//switch nightvision on
macro_grp_fnc_name(nightvision,switch_on) = {
    setApertureNew [0.7, 0.7, 0.7, 1];
    player setVariable["RD501_NV_on",true,true];
};

//switch nightvision off
macro_grp_fnc_name(nightvision,switch_off) = {
    setAperture -1;
    player setVariable["RD501_NV_on",false,true];
};

//handle button press
macro_grp_fnc_name(nightvision,handle_switch) = {
    _RD501_isNV = player getVariable["RD501_isNV",false];
    _RD501_NV_on = player getVariable["RD501_NV_on",false];
    if (_RD501_isNV && !_RD501_NV_on) then {
        call macro_grp_fnc_name(nightvision,switch_on);
    } else {
        call macro_grp_fnc_name(nightvision,switch_off);
    };
};

//add eventhandler
["loadout", macro_grp_fnc_name(nightvision,handle_change)] call CBA_fnc_addPlayerEventHandler;

//add keybinds
["RD501 Nightvision","Cycle",["Cycle","Switch Nightvision on/off"],{
    [player] call macro_grp_fnc_name(nightvision,handle_switch);
},"",[DIK_N,[false,true,false]],false] call cba_fnc_addKeybind;
