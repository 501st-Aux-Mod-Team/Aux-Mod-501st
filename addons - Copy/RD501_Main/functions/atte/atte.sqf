	#include "../../config_macros.hpp"
	params[
		["_vic",objNull ,[player]]
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
	
	//give some time for stomper to spawn
	sleep 1;

	//check if still alive or if deleted agin
	if(isNull _vic || !(alive _vic)) exitWith {
		
	};
	
	//create and check AT-TE
	_atte_tank =  createVehicle [macro_quote(macro_new_vehicle(ATTE,MkII)), getPosASL _vic, [], 0, 'CAN_COLLIDE'];
	if(isNull _atte_tank) exitWith {
		
	};
	
	
	//adds the ability to check how much dmg the at-te has taken
	_atte_tank addAction ["<t color='#00FF00'>Hull Damage Report</t>",
	{
		hint parseText format["<t color='#0099FF'> Hull Integrity is :%1%2</t>",((1-(damage (_this  select 0)))*100),"%"];

	}];


	//add EH to delete all on death
	_vic call macro_fnc_name(add_remove_attached_EH);

	[_vic, -1] call ace_cargo_fnc_setSpace;

	// _vic setHitIndex [20, 1];
	// _vic setHitIndex [21, 1];
	// _vic setHitIndex [22, 1];
	// _vic setHitIndex [23, 1];
	// _vic setHitIndex [24, 1];	

	_vic allowDamage false;  	
	_vic lockTurret [[1], true];

	clearMagazineCargoGlobal _vic;
	clearItemCargoGlobal _vic;
	_vic addItemCargoGlobal ["ACE_elasticBandage", 40];
	_vic addItemCargoGlobal ["ACE_quikclot", 40];
	_vic addItemCargoGlobal ["ACE_morphine", 15];
	_vic addItemCargoGlobal ["ACE_epinephrine", 15];
	_vic addItemCargoGlobal ["ACE_plasmaIV_500", 40];
	_vic addItemCargoGlobal ["ACE_packingBandage", 20];
	_vic addItemCargoGlobal ["SW_SquadShield_Mag", 3];
	_vic addItemCargoGlobal ["B_UavTerminal", 5];
	
	//sleep .1;

	//finally put AT-TE on stomper
	_atte_tank attachTo [_vic,[0,0,-1.9]];
	

	//sleep 1;
	// create the ai crew to allow you to control the uav;
	
	// make invis,the uav that is; 0,1,2,3
	// for [{_i=0}, {_i<(4)}, {_i=_i+1}] do
	// {
	// 	_vic setobjecttextureglobal [_i,""];  
	// };
	// remove cargo space of uav;
	

	
                                                                                                      

	// create the infantry cargo;
	
	// _atte_tank addMagazineCargoGlobal ["SWOP_DC15ABlasterRifle_Low_Mag", 40];
	// _atte_tank addMagazineCargoGlobal ["SWOP_DC15ABlasterRifle_Full_Mag", 10];
	// _atte_tank addMagazineCargoGlobal ["SWOP_DC15ABlasterRifle_Mag", 20];
	// _atte_tank addMagazineCargoGlobal ["SWOP_DC15_Mag", 10];
	
	

	//_vic attachTo [_atte_tank,[0,-0.5,-2]];
	





	[_vic,[0,-4.2,1.9]] spawn macro_fnc_name(create_itt);
	[_vic,[0,3.2,1.9]] spawn macro_fnc_name(create_itt);







// // "remote desig,commanders laz dezer";	
// 	_atte_mens = "swclonerecondroid501" createVehicle (getPosASL _vic);
// // Set the name and attach it to the Stomper;
// 	_atte_mens attachTo [_atte_tank,[0,0.9,8.8]]; 
// 	_atte_mens allowDamage false;
// 	createVehicleCrew _atte_mens; 
// 	[_atte_mens, true] remoteExec ["hideObjectglobal", 0];

	[
		_atte_tank,
		macro_quote(macro_new_vehicle(turret_ATTE,Front_Right_UAV)),
		[1.25,4.5,4]
	] spawn macro_fnc_name(create_atte_turrets);

	[
		_atte_tank,
		macro_quote(macro_new_vehicle(turret_ATTE,Front_Left_UAV)),
		[-1.05,4.5,4]
	] spawn macro_fnc_name(create_atte_turrets);

	[
		_atte_tank,
		macro_quote(macro_new_vehicle(turret_ATTE,Rear_UAV)),
		[-0.75,-7.8,3.733],
		180
	] spawn macro_fnc_name(create_atte_turrets);


	



	