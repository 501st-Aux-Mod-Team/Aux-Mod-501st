params ["_target", "_player", "_params"];
//_target is the box in an ace interact
if(vehicle _target != _target) exitWith { };
_position = position _target;
_spawner = rd501_medical_ccp_building createVehicle _position;
deleteVehicle _target;