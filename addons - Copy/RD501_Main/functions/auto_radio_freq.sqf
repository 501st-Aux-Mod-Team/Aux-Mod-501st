params["_unit"];

_arf_enabled=profileNamespace getVariable ["namenai_use_arf",false];

if(!_arf_enabled) exitWith	{
	["A.R.F script not enabled,ask CX-D Namenai 4 halp", "RD501_Main\ui_icons\arf.paa"] call ace_common_fnc_displayTextPicture;
};

//if(!local _unit) exitWith {};

_lr_list=profileNamespace getVariable ["namenai_lr_freq_list",['35.1','35.2','35.3','35.4','35','36','35.5','42','42']];
for [{_i=0}, {_i<9}, {_i=_i+1}] do
{
    [(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, _i] call TFAR_fnc_setLrChannel;
    [(call TFAR_fnc_activeLrRadio) select 0, (call TFAR_fnc_activeLrRadio) select 1, _lr_list select _i] call TFAR_fnc_setLrFrequency;

};
["Frequencies set, enjoy", "RD501_Main\ui_icons\arf.paa"] call ace_common_fnc_displayTextPicture;
