#include "../../config_macros.hpp"

params[
	["_this",objNull,[player]]
];

if(isNull _this) exitWith {
	
};

_this addAction ["<t color='#f4e541'>Engage Magnetic Clamps</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [0,-2,-2.5]]; 
	removeAllActions _vic;

	_vic addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",	{

		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
		removeAllActions _vic;
		_vex= _objects select 1;
		detach _vex;
		_this execVM "RD501_Main\functions\Vehicle_Lift\laatc_lift.sqf";

	},[1],0,true,true,""," driver  _target == _this "];

},[1],0,true,true,""," driver  _target == _this "];

_this addAction ["<t color='#f4a442'>Engage Large Asset Clamps</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [0,-2,-7.5]]; 
	removeAllActions _vic;

	_vic addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",	{

		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship"], 60];
		removeAllActions _vic;
		_vex= _objects select 1;
		detach _vex;
		_this execVM "RD501_Main\functions\Vehicle_Lift\laatc_lift.sqf";

	},[1],0,true,true,""," driver  _target == _this "];

},[1],0,true,true,""," driver  _target == _this "];

_this addAction ["<t color='#FFA500'>Engage ATTE Clamps</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["RD501_turret_atte_stomper"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [0,-2,-7.5]]; 
	removeAllActions _vic;

	_vic addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",	{

		params["_vic"];
		_objects= nearestObjects [player, ["RD501_UGV_01_F"], 60];
		removeAllActions _vic;
		_vex= _objects select 1;
		detach _vex;
		_this execVM "RD501_Main\functions\Vehicle_Lift\laatc_lift.sqf";

	},[1],0,true,true,""," driver  _target == _this "];

},[1],0,true,true,""," driver  _target == _this "];