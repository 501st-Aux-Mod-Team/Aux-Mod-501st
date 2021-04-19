params["_target"];

private _ehId = _target addEventHandler["HitPart", {
	_this call rd501_fnc_volatile_handleDamage;
}];

_target setVariable ["rd501_volatile_health", 100, true];
_target setVariable ["rd501_volatile_ehId", _ehId];