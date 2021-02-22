#include "function_macros.hpp"

params["_functionToExecute","_functionParams"];

if(isNil "zen_dialog_fnc_create") exitWith {
	LOG_ERROR("zen_dialog_fnc_create is Nil, invoking module directly.");
	_functionParams call _functionToExecute;
};
LOG("Found zen_dialog_fnc_create, building dialog");
private _content =  [
        [ "CHECKBOX", ["Ignore Custom Selection", "Spawns the default list of units if checked, meaning anything you check here will be ignored."], [ false ], false ],
        [ "CHECKBOX", ["B1", "Will allow B1s to be spawned by new factories."], [ true ], false ],
        [ "CHECKBOX", ["B1 Heavy", "Will allow Heavy B1s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Shotgun", "Will allow Shotgun B1s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Grenadier", "Will allow Grenadier B1s to be spawned by new factories."], [ true ], false ],
        [ "CHECKBOX", ["B1 Marksman", "Will allow BX Commandos to be spawned by new factories."], [ true ], false ],
        [ "CHECKBOX", ["B1 Light AT", "Will allow Light AT B1s to be spawned by new factories."], [ true ], false ],
        [ "CHECKBOX", ["B1 Heavy AT", "Will allow Heavy AT B1s to be spawned by new factories."], [ true ], false ],
        [ "CHECKBOX", ["B2", "Will allow B2s to be spawned by new factories."], [ true ], false ],
        [ "CHECKBOX", ["Super B2", "Will allow Super B2s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Jammer", "Will allow Jammer B1s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["BX Commando", "Will allow BX Commandos to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Spec Ops", "Will allow Spec Ops B1s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Anti Air", "Will allow Anti Air B1s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Security", "Will allow Security B1s to be spawned by new factories."], [ false ], false ],
        [ "CHECKBOX", ["B1 Marine", "Will allow Marine B1s to be spawned by new factories."], [ false ], false ],
        [ "SLIDER", ["Maximum Droids to Deploy", "Maximum number of droids any one dispenser will keep up at any time. This is not the total droids spawned, but how many will be spawned before it decides to stop."], [ 0, 40, 20, 0 ], false ],
        [ "SLIDER", ["Rate of Deployment", "How many seconds between each droid spawn."], [ 4, 60, 8, 0 ], false ]
];

private _fnc_onConfirm = {
	// On Confirm
	params["_dialogValues", "_args"];
	LOGF_2("On Confirm for %1 -|- %2", _dialogValues,_args);
	_dialogValues params [
		"_ignoreList",
		"_b1",
		"_b1_heavy",
		"_b1_shotgun",
		"_b1_grenadier",
		"_b1_marksman",
		"_b1_light_at",
		"_b1_heavy_at",
		"_b2",
		"_b2_super",
		"_b1_jammer",
		"_bx",
		"_b1_spec_ops",
		"_b1_aa",
		"_b1_security",
		"_b1_marine",
		"_numDroids",
		"_deployDelay"
	];

	private _selectedTypes = [];
	if!(_ignoreList) then {
		if(_b1) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1";
		};
		if(_b1_heavy) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_heavy";
		};
		if(_b1_shotgun) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_shotgun";
		};
		if(_b1_grenadier) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_grenadier";
		};
		if(_b1_marksman) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_marksman";
		};
		if(_b1_light_at) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_AT_light";
		};
		if(_b1_heavy_at) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_AT_heavy";
		};
		if(_b2) then {
			_selectedTypes pushBack "RD501_opfor_unit_B2_droid_Standard";
		};
		if(_b2_super) then {
			_selectedTypes pushBack "RD501_opfor_unit_B2_droid_Super";
		};
		if(_b1_jammer) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_jammer";
		};
		if(_b1_spec_ops) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_prototype";
		};
		if(_bx) then {
			_selectedTypes pushBack "RD501_opfor_unit_bx";
		};
		if(_b1_aa) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_aa";
		};
		if(_b1_security) then {
			_selectedTypes pushBack "RD501_opfor_unit_B1_security";
		};
	}
	else
	{
		_selectedTypes = [
			"RD501_opfor_unit_B2_droid_Standard",
			"RD501_opfor_unit_b1_grenadier",
			"RD501_opfor_unit_B1_AT_heavy",
			"RD501_opfor_unit_B1",
			"RD501_opfor_unit_B1_marksman",
			"RD501_opfor_unit_B1_AT_light"
		];
	};
	[QUOTE(GVAR(droidDispenserUpdateGlobals)), [_selectedTypes, _numDroids, _deployDelay]] call CBA_fnc_serverEvent;
	_args params["_functionToExecute","_functionParams"];
	_functionParams call _functionToExecute;
};

private _fnc_onCancel = {
		// On Cancel
		params["_dialogValues", "_args"];
		_args params ["_logic"];
		deleteVehicle _logic;
};
private _args = [_functionToExecute, _functionParams];

private _saveName = "";

_created = [
	"Configure Droid Factory",
	_content,
	_fnc_onConfirm,
	_fnc_onCancel,
	_args,
	_saveName
] call zen_dialog_fnc_create;
_created;