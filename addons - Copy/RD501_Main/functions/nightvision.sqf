#include "\a3\editor_f\Data\Scripts\dikCodes.h"
#include "../config_macros.hpp"

RD501_isNV = false;
RD501_NV_on = false;

//handle loadout changed
macro_grp_fnc_name(nightvision,handle_change) = {
    params["_unit", "_loadout"];

    systemChat "changed";
    _nv_gear = _loadout select 9 select 5;
    systemChat str _nv_gear;
    RD501_isNV = (configFile >> "cfgWeapons" >> _nv_gear >> "RD501_isNV") call BIS_fnc_getCfgDataBool;
    systemChat str RD501_isNV;

    if (!RD501_isNV) then {
        call macro_grp_fnc_name(nightvision,switch_off);
    };
};

//switch nightvision on
macro_grp_fnc_name(nightvision,switch_on) = {
    setApertureNew [1, 1.5, 2, 1];
    RD501_NV_on = true;
};

//switch nightvision off
macro_grp_fnc_name(nightvision,switch_off) = {
    setAperture -1;
    RD501_NV_on = false;
};

//handle button press
macro_grp_fnc_name(nightvision,handle_switch) = {
    systemChat "switched";
    systemChat str RD501_isNV;
    if (RD501_isNV && !RD501_NV_on) then {
        call macro_grp_fnc_name(nightvision,switch_on);
    } else {
        call macro_grp_fnc_name(nightvision,switch_off);
    };
};

systemChat "adding event handlers";

//add eventhandler
["loadout", macro_grp_fnc_name(nightvision,handle_change)] call CBA_fnc_addPlayerEventHandler;

//add keybinds
["RD501 Nightvision Mod","Cycle",["Cycle","Press to Cycle"],{
    [player] call macro_grp_fnc_name(nightvision,handle_switch);
},"",[DIK_N,[false,true,false]],false] call cba_fnc_addKeybind;
