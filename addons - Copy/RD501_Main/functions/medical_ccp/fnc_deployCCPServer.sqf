params["_target"];

_position = position _target;
deleteVehicle _target;
_spawner = rd501_medical_ccp_building createVehicle _position;
systemChat format["Deployed CCP"];

["rd501_medical_ccp_deployCCPLocal", [_spawner]] call CBA_fnc_globalEventJIP; // raise on all clients (we should be on server)