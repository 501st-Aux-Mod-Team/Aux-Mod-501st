params ["_unit"];

private _hitEH = _unit addEventHandler ["HitPart", { 
	(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];
	[{
		params["_unit"];
		private _ehId = _unit getVariable ["rd501_dekashield_hitEH", -1];
		if(alive _unit && _ehId != -1) then {
			private _position = getPosATL _unit;
			private _shield = "RD501_Droideka_Shield" createVehicle _position;
			_unit setVariable ["rd501_dekashield_attached", _shield, true];
			_shield setPosATL _position;
			_shield attachTo [_unit, [0,0,0]];
			[{
				params["_shield"];
				deleteVehicle _shield;
			}, [_shield], 60] call CBA_fnc_waitAndExecute;
			_unit setVariable ["rd501_dekashield_hitEH", -1, true];
			_unit removeEventHandler ["HitPart", _ehId];
		};
	}, [_target], 1] call CBA_fnc_waitAndExecute;
}];

_unit setVariable ["rd501_dekashield_hitEH", _hitEH, false];