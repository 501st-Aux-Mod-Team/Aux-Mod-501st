#include "function_macros.hpp"
params ["_args", "_handle"];
_args params ["_target"];

LOGF_1("Evaluating PFH %1",_handle);

if(isNil "_target") exitWith {
	LOGF_1("Removing PFH %1, Reason: Null Target",_handle);
	[_handle] call CBA_fnc_removePerFrameHandler;
};

if(!isServer) exitWith {
	LOGF_1("Removing PFH %1, Reason: Not Server",_handle);
	[_handle] call CBA_fnc_removePerFrameHandler;
}; 

if(!alive _target) exitWith {
	LOGF_1("Removing PFH %1, Reason: Droid Dispenser Dead",_handle);
	[_handle] call CBA_fnc_removePerFrameHandler;
};

_group = _target getVariable QGVAR(group);

if(isNil "_group") then 
{
	LOGF_1("PFH %1 Group empty, creating new",_handle);
	_target setVariable [QGVAR(group), createGroup [opfor, true]];
	_group = _target getVariable QGVAR(group);
};

_aliveUnits = ({alive _x} count (units _group));
LOGF_2("Alive units for Droid Dispenser %1 :: %2",_target,_aliveUnits);
if(_aliveUnits < _target getVariable QGVAR(maxUnits)) exitWith 
{
	_possibleUnits = _target getVariable QGVAR(possibleUnits);
	_selectedUnit = selectRandom _possibleUnits;
	if(_selectedUnit == _possibleUnits select 0) then {
		_selectedUnit = selectRandom _possibleUnits; // if its a b2, (first be default atm) random again (requires 2 rolls on b2 to spawn one)
	};
	LOGF_2("%1 spawning in %2",_target,_selectedUnit);
	_unit = _group createUnit [_selectedUnit, position _target, [], 0, "NONE"];
	[{
		params["_unit"];		
		_unit call ace_common_fnc_fixPosition;
		_group = group _unit;
		_group setBehaviour "SAFE";
		_group1 setCombatMode "RED";
		_unit commandMove (_unit getPos [5, 0]);
		{
			_x addCuratorEditableObjects [[_unit], true];
		} forEach allCurators;
	}, _unit] call CBA_fnc_execNextFrame;
};
LOGF_1("%1 not spawning anything",_target);