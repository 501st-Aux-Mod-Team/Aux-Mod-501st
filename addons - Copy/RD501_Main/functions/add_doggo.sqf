#include "../config_macros.hpp"


params[
	["_vic",objNull ,[player]]
];

if(isNull _vic) exitWith {
	
};

//if not the server,exit
if (!isServer) exitWith {};

_dog = createAgent [macro_quote(macro_new_vehicle(doggo,medic)), getPos _vic, [], 5, "CAN_COLLIDE"];
_dog attachTo [_vic, [0, 0, -1] ]; 

_dog addAction ["<t color='#00FF00'>HEAL ME DOGGO PLOX</t>","call ace_medical_fnc_treatmentAdvanced_fullHeal;"]; 
 
 
