#include "../../config_macros.hpp"

params [
	["_unit",player,[player]],
	["_stretcher_object",macro_single_quote(macro_new_vehicle(Stretcher,MkII)),['string']],
	["_stretcher_item",macro_single_quote(macro_new_weapon(Stretcher,Item)),['string']]
];
hint format ["%1 %2 %3",_unit,_stretcher_item,_stretcher_object];

_has_stretcher = [player,_stretcher_item] call ace_common_fnc_hasItem;
if( !_has_stretcher) exitWith {hint 'f';};

_pos = getPosATL _unit;
_azimuth = getDir _unit;
_far = 5; //Distance from the player to the _stretcher_object

_x = (_pos select 0) + (_far * (sin _azimuth));
_y = (_pos select 1) + (_far * (cos _azimuth));

_pos_above = [_pos select 0,_pos select 1, (_pos select 2 )+ 1];
_obj = createVehicle [_stretcher_object, _pos_above, [], _far, 'NONE'];//

if(isNull _obj) exitWith {hint "Failed to deploy";};
_unit removeItem _stretcher_item;
hint "Stretcher Placed";

//[_unit, _obj] call ace_dragging_fnc_startCarry;


