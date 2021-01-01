params [
	["_target"], 
	["_player"], 
	["_params"]
];

_position = position _target;
deleteVehicle _target;

[
	{
		params["_position"];
		systemChat format["Deploying CCP"];
		_spawner = rd501_medical_ccp_building createVehicle _position;
	},
	[_position],
	0.1
] call CBA_fnc_waitAndExecute;