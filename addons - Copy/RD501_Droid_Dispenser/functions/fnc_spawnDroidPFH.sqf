#include "function_macros.hpp"
params ["_args", "_handle"];
_args params ["_target"];
systemChat format["Evaluating PFH %1",_handle];

if(isNil "_target") exitWith {
	systemChat format["Removing PFH %1 due to null target",_handle];
};

if(!isServer || ! alive _target) exitWith {
	systemChat format["Removing PFH %1",_handle];
	[_handle] call CBA_fnc_removePerFrameHandler;
};
_group = _target getVariable QGVAR(group);

_aliveUnits = ({alive _x} count (units _group));
systemChat format["%1 :: %2",_target,_aliveUnits];
if(_aliveUnits < _target getVariable QGVAR(maxUnits)) exitWith 
{
	_selectedUnit = selectRandom (_target getVariable QGVAR(possibleUnits));
	systemChat format["%1 spawning in %2",_target,_selectedUnit];
	_group createUnit [_selectedUnit, position _target, [], 0, "NONE"];
};
systemChat format["%1 not spawning anything"];