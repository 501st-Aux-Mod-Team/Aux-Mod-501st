params["_ammo", "_vehicle"];

private _config = configFile >> "CfgAmmo" >> _ammo;

private _empEnabled = 10;
if(isNumber (_config >> "rd501_emp_vehicle_duration")) then {
	_empEnabled = getNumber (_config >> "rd501_emp_vehicle_duration");
};

private _empDuration = 10;
if(isNumber (_config >> "rd501_emp_vehicle_duration")) then {
	_empDuration = getNumber (_config >> "rd501_emp_vehicle_duration");
};

_config = configFile >> "CfgVehicles" >> (typeOf _vehicle);
private _empResistancePercent = 0;
if(isNumber (_config >> "rd501_emp_vehicle_resistance_percent")) then {
	_empResistancePercent = getNumber (_config >> "rd501_emp_vehicle_resistance_percent");
	_empResistancePercent = _empResistancePercent max 100;
};

private _effectiveDuration = _empDuration * (1 + ((- _empResistancePercent)/100));

if(_effectiveDuration <= 1) exitWith { diag_log "[RD501][Vehicle EMP] Effective EMP Duration too low, not worth setting. Skipped." };

[_vehicle] call rd501_fnc_emp_disableVehicle;
[
	{
		params["_vehicle"];
		if(alive _vehicle) then {
			[_vehicle] call rd501_fnc_emp_enableVehicle;
		};
	},
	[_vehicle],
	_effectiveDuration
] call CBA_fnc_waitAndExecute;