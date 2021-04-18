params["_target"];

private _position = getPosATL _target;
private _explosive = createVehicle ["RD501_Explosive_Barrel", _position, [], 0, "CAN_COLLIDE"];
hideObject _explosive;
_explosive setPosATL _position;
_explosive setDamage [1, true];
[{
	params["_target"];
	deleteVehicle _target;
}, [_target], 0.5] call CBA_fnc_waitAndExecute;