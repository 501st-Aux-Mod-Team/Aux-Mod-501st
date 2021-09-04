(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if(_target isEqualTo objNull) exitWith { systemChat "Target is null idk why, hi random citizen <3"; }; 

[_ammo, _target] call rd501_fnc_emp_hitVehicle;