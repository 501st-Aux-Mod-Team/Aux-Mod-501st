    #include "../../config_macros.hpp"
	params[
		["_vic",objNull ,[player]],
		["_new_turret",macro_quote(macro_new_vehicle(turret_ATTE,Rear_UAV)) ,['string']],
		["_attach_pos",[0,0,0],[[1,2,3]],3],
		["_direction_face",0,[180]]
	];

	//if we cant use sleep ,spawn this cript
	if (!canSuspend) exitWith {
		_vic spawn macro_fnc_name(atte_uav_init);
	};

	//if not the server,exit
    if (!isServer) exitWith {};

	//check if still alive or if deleted
	if(isNull _vic || !(alive _vic)) exitWith {
		
	};

	if(_new_turret isEqualTo '') exitWith {
		
	};

    _atte_turret =  _new_turret createVehicle (getPosASL _vic);
	_atte_turret attachTo [_vic,_attach_pos]; 
	
	createVehicleCrew _atte_turret;
	_atte_turret allowCrewInImmobile true;
	_atte_turret setdir _direction_face;
	//_atte_turret hideObjectGlobal true;
	_atte_turret disableAI "target";
	[_atte_turret, true] remoteExec ["hideObjectglobal", 0];