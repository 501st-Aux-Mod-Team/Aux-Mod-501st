params[
	["_vic",objNull,[player]]
]; 

if(isNull _vic) exitWith {
	
};

//if not the server,exit
if (!isServer) exitWith {};
_rocket = "RD501_itt_rocket_artillery_CIS" createVehicle [0,0,0]; 
_rocket attachTo [_vic, [0,-1,-0.1]];
_rocket setObjectTextureglobal [0, ""];
createvehiclecrew _rocket;

