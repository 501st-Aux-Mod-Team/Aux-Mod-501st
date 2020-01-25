#include "../../config_macros.hpp"

params[
	["_this",objNull,[player]]
];

if(isNull _this) exitWith {
	
};

_this addAction ["<t color='#f4e541'>Engage Tow Cable</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [0,-11,0]]; 
	removeAllActions _vic;

	_vic addAction ["<t color='#f44167'>Disengage Tow Cable</t>",	{

		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
		removeAllActions _vic;
		_vex= _objects select 1;
		detach _vex;
		_this call macro_fnc_name(warden_tow);

	},[1],0,true,true,""," driver  _target == _this "];

},[1],0,true,true,""," driver  _target == _this "];

_this addAction ["<t color='#f4a442'>Engage Long Tow Cable</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [0,-22,0]]; 
	removeAllActions _vic;

	_vic addAction ["<t color='#f44167'>Disengage Long Tow Cable</t>",	{

		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 60];
		removeAllActions _vic;
		_vex= _objects select 1;
		detach _vex;
		_this call macro_fnc_name(warden_tow);

	},[1],0,true,true,""," driver  _target == _this "];

},[1],0,true,true,""," driver  _target == _this "];