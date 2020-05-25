#include "../../config_macros.hpp"

params[
	["_this",objNull,[player]]
];

if(isNull _this) exitWith {
	
};

_this addAction ["<t color='#72ff33'>Engage Right Magnetic Clamp</t>",{

	params["_vic"];
	_objects= nearestObjects [player, ["Car","Tank","Air","Ship","Object"], 20];
	_vex= _objects select 1;
	_vex attachTo [_vic, [7,-2,-2.5]]; 
	removeAllActions _vic;

		_vic addAction ["<t color='#72ff33'>Engage Left Magnetic Clamp</t>",	{
		params["_vic"];
		_objects= nearestObjects [player, ["Car","Tank","Air","Ship","Object"], 20];
		_vex2= _objects select 1;
		_vex2 attachTo [_vic, [-7,-2,-2.5]]; 
		removeAllActions _vic;

			_vic addAction ["<t color='#72ff33'>Engage Internal Magnetic Clamps</t>",	{
			params["_vic"];
			_objects= nearestObjects [player, ["Car","Tank","Air","Ship","Object"], 20];
			_vex2= _objects select 1;
			_vex2 attachTo [_vic, [0,-2,-2]]; 
			removeAllActions _vic;

				_vic addAction ["<t color='#f44167'>Disengage Magnetic Clamps</t>",	{	

					params["_vic"];
					_objects= nearestObjects [player, ["Car","Tank","Air","Ship","Object"], 20];
					removeAllActions _vic;
					_vex= _objects select 1;
					detach _vex;
					_vex2= _objects select 2;
					detach _vex2;
					_vex3= _objects select 3;
					detach _vex3;
					_this execVM "RD501_Main\functions\Vehicle_Lift\laatc_lift.sqf";

					},[1],0,true,true,""," driver  _target == _this "];
				},[1],0,true,true,""," driver  _target == _this "];
			},[1],0,true,true,""," driver  _target == _this "];
		},[1],0,true,true,""," driver  _target == _this "];

_this addAction ["<t color='#33ffd3'>Engage Large Asset Clamps</t>",{

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

_this addAction ["<t color='#ff33f4'>Engage ATTE Clamps</t>",{

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