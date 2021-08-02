// Created by Rexi to make things move
#include "../../config_macros.hpp"

params[
	["_vic",objNull,[player]]
]; 

if(isNull _vic) exitWith {
	
};
if (isServer) then {
	_group = createGroup east;
	_aidrive = _group createUnit ["O_Soldier_VR_F", position _vic, [], 0, "CAN_COLLIDE"];
	_vic attachTo [_aidrive,[0,-0.3,1]]; 
	_aidrive allowDamage false;
	_aidrive setUnitPos "down";
	_aidrive setBehaviour "CARELESS";
	[_aidrive, true] remoteExec ["hideObjectGlobal", 0];

	_curators = objectCurators _vic;	
	{ _x addCuratorEditableObjects [[_aidrive], true] } forEach _curators;

	_vic addEventHandler ["Killed", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
			[_unit] spawn macro_fnc_name(remove_attached_objects)
			
	}];

	_vic addMPEventHandler  ["MPKilled", {
		params ["_unit", "_killer", "_instigator", "_useEffects"];
			[_unit] spawn macro_fnc_name(remove_attached_objects)
			
	}];
};