#include "../../config_macros.hpp"

params[
	["_unit",player,[player]],
	["_stretcher_object",objNull ,[player]]
];
 
if(isNull _stretcher_object) exitWith {
	hint  "Cant lift u is weak, F";
};

_stretcher_object attachTo [_unit, [0, 1.5, 2]];