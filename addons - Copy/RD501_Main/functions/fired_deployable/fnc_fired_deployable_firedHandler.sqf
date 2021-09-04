params["_unit", "_weapon", "_muzzle", "_mode", "_ammo", "_magazine", "_projectile"];

if(!local _unit) exitWith { diag_log "Fired Deployable not local" };

if (isNull _projectile) then {
	_projectile = nearestObject [_unit, _ammo];
};
private _config = configFile >> "CfgAmmo" >> _ammo;
private _deployable = getNumber (_config >> "rd501_fired_deployable");
private _personal = getNumber (_config >> "rd501_fired_deployable_personal");
private _direction = direction _unit;

if (_deployable == 1) then {
	if(_personal == 1) exitWith {
		["rd501_fired_deployable_personalShieldDeployServer", [_unit, _ammo]] call CBA_fnc_serverEvent;
		deleteVehicle _projectile;
	};
	[
		{
			params["_projectile"];
			private _speed = vectorMagnitude (velocity _projectile);
			!(isNil "_projectile") && (alive _projectile) && _speed <= 0.1
		},
		{
			params["_projectile", "_ammo", "", "", "_direction"];
			private _position = getPosATL _projectile;
			["rd501_fired_deployable_deployServer", [_ammo, _position, _direction]] call CBA_fnc_serverEvent;
			deleteVehicle _projectile;
		},
		[_projectile, _ammo, _magazine, _unit, _direction],
		10,
		{ 
			params["", "", "_magazine", "_unit"];
			systemChat "Something went wrong with your order, we apologise for the inconvenience.";
			systemChat "Please file all complaints with Mirror at the Aux Office.";
			[
				{
					params["_unit", "_mag"];
					_unit addItem _mag;
					systemChat "We've attached a complementary replacement if you had any inventory space.";
				},
				[_unit, _magazine],
				2
			] call CBA_fnc_waitAndExecute;
		}
	] call CBA_fnc_waitUntilAndExecute;
};

