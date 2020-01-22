params[
	["_vic",objNull ,[player]]
];

if(isNull _vic) exitWith {
	
};
//if not the server,exit
if (!isServer) exitWith {};
_sheild = "SW_halfshieldObject" createVehicle (position _vic);
_sheild attachTo [_vic, [0, 0, 1.5] ];


