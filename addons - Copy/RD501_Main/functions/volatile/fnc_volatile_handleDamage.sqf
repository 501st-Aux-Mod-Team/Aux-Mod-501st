(_this select 0) params ["_target", "_shooter", "_projectile", "_position", "_velocity", "_selection", "_ammo", "_vector", "_radius", "_surfaceType", "_isDirect"];

if(_target isEqualTo objNull) exitWith { systemChat "Target is null idk why"; }; 

private _health = _target getVariable ["rd501_volatile_health", false];

if(_health isEqualTo false) exitWith { systemChat "Health not found"; };
_ammo params ["_directHit", "_indirectHit", "_indirectRange", "_explosionHit", "_ammoClass"];
private _hit = _directHit + (_indirectHit/(_indirectRange max 0.1)) + _explosionHit;
private _result = _health - _hit;

if(_result <= 0) then {
	_target setVariable ["rd501_volatile_health", _result, true];
	private _ehId = _target getVariable ["rd501_volatile_ehId", -1];
	["rd501_volatile_destroy", [_target], _target] call cba_fnc_targetEvent;
	_target  removeEventHandler ["HitPart", _ehId];
}
else
{
	// Set locally only to reduce network traffic
	_target setVariable ["rd501_volatile_health", _result];
};