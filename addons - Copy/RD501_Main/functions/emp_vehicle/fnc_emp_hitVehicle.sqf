params["_ammo", "_vehicle"];
if!(local _vehicle) exitWith {
	diag_log format["[RD501][Vehicle EMP] '%1' is REMOTE", _vehicle];
};

private _config = configFile >> "CfgAmmo" >> _ammo;

private _empEnabled = 0;
if(isNumber (_config >> "rd501_emp_vehicle_enabled")) then {
	_empEnabled = getNumber (_config >> "rd501_emp_vehicle_enabled");
};

if(_empEnabled != 1) exitWith { };

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

private _effectiveDuration = _empDuration * (1 + ((-_empResistancePercent)/100));
diag_log format["[RD501][Vehicle EMP] Effective Duration = %1 seconds", _effectiveDuration];

if(_effectiveDuration <= 1) exitWith { diag_log "[RD501][Vehicle EMP] Effective EMP Duration too low, not worth setting. Skipped." };

diag_log format["[RD501][Vehicle EMP] Enabling %1", _vehicle];
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
