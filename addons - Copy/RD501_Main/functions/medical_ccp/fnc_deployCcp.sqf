params ["_target", "_player", "_params"];
//_target is the box in an ace interact
_position = position _target;
deleteVehicle _target;

[
	{
		params["_position"];
		systemChat format["Creating CCP at %1", _position];
		_spawner = rd501_medical_ccp_building createVehicle _position;
	},
	[_position],
	0.1
] call CBA_fnc_waitAndExecute;