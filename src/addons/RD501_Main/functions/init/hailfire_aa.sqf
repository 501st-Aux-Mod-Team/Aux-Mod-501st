/*#include "../../config_macros.hpp"

//////////////////////////////////////////////////////////////////
// Hailfire AntiAir Script
// Author: CX-P Zatama
//edited by namenai
//////////////////////////////////////////////////////////////////


params[
	["_vic",objNull ,[player]]
];
if(isNull _vic) exitWith {
	
};

//if not the server,exit
if (!isServer) exitWith {};

_Main_Gun = macro_quote(macro_new_vehicle(Spartan_Variants,CIS_Overlord)) createVehicle (getPosASL _vic);
_Main_Gun attachTo [_vic,[0,3,4]];
createVehicleCrew _Main_Gun;
_Main_Gun hideObjectGlobal true;
