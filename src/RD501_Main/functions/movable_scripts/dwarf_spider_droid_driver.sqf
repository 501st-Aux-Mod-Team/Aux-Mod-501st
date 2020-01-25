#include "../../config_macros.hpp"

// Created by Rexi to make things move
params[
	["_vic",objNull,[player]]
]; 

if(isNull _vic) exitWith {
	
};
if (isServer) then {
	_group = createGroup east;
	_aidrive = _group createUnit ["O_Soldier_VR_F", position _vic, [], 0, "CAN_COLLIDE"];
	_aidrive allowDamage false;
	_vic attachTo [_aidrive,[0,-0.3,1.45]]; 
	//_aidrive AddUniform "SWOP_tacticdroid_black_F_spec";
	_aidrive setUnitPos "down";
	_aidrive setBehaviour "CARELESS";
	[_aidrive, true] remoteExec ["hideObjectGlobal", 0];
	_vic addEventHandler ["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
			[_unit] spawn macro_fnc_name(remove_attached_objects)
			
	}];

	_vic addMPEventHandler  ["MPKilled", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
			[_unit] spawn macro_fnc_name(remove_attached_objects)
			
	}];
};