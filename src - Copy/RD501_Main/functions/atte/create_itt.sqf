    #include "../../config_macros.hpp"
	params[
		["_vic",objNull ,[player]],
		["_attach_pos",[0,0,0],[[1,2,3]],3]
	];

	//if we cant use sleep ,spawn this cript
	if (!canSuspend) exitWith {
		_vic spawn macro_fnc_name(atte_uav_init);
	};

	//if not the server,exit
    if (!isServer) exitWith {};

	//give some time for stomper to spawn
	sleep 1;

	//check if still alive or if deleted
	if(isNull _vic || !(alive _vic)) exitWith {
		
	};

    // ITT for troop transport;	
	_atte_mens = createVehicle [macro_quote(macro_new_vehicle(atte_itt,cabin)), getPosASL _vic, [], 0, ""];
    // Set the name and attach it to the Stomper;
	_atte_mens attachTo [_vic,_attach_pos];
    // make it invisible;	
	//(_atte_mens) setobjecttextureglobal [0,""]; 
    // make it invulnerable remove the ammo 
    //_atte_mens hideObjectGlobal true;
	_atte_mens allowDamage false;
	_atte_mens setvehicleammo 0;
	_atte_mens lockDriver true;
	[_atte_mens, 20] call ace_cargo_fnc_setSpace;
	//[_atte_mens, true] remoteExec ["hideObjectglobal", 0];