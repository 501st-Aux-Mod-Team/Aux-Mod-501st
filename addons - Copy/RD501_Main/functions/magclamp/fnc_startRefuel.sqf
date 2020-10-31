params["_vehicle"];

private _rate = 10;

private _attached = _vehicle getVariable["RD501_mc_attached_large", objNull];
_vehicle setVariable["RD501_mc_stop_refuel", false, true];

_maxFuelSource = getNumber (configFile >> "CfgVehicles" >> typeOf _vehicle >> "fuelCapacity");
_maxFuelTarget = getNumber (configFile >> "CfgVehicles" >> typeOf _attached >> "fuelCapacity");

private _firstTick = 0;
if (isMultiplayer) then
{
    _firstTick = serverTime;
} else
{
    _firstTick = time;
};

hint "Refueling started";

_vehicle setVariable["RD501_mc_lastRefuelTick", _firstTick, true];
_vehicle setVariable["RD501_mc_nextRefuelUpdate", 0.1, true];

[{
    params ["_args", "_pfID"];
    _args params ["_target", "_source", "_rate", "_maxFuelSource", "_maxFuelTarget"];

    if (!alive _source || {!alive _sink}) then 
    {
        _source setVariable["RD501_mc_lastRefuelTick", nil, true];
        _source setVariable["RD501_mc_nextRefuelUpdate", nil, true];
        _source setVariable["RD501_mc_lastTargetFuelAmount", nil, true];
        [_pfID] call CBA_fnc_removePerFrameHandler;
    };

    if (_source getVariable["RD501_mc_stop_refuel", false]) then
    {
        hint "Refueling stopped";
        _source setVariable["RD501_mc_lastRefuelTick", nil, true];
        _source setVariable["RD501_mc_nextRefuelUpdate", nil, true];
        _source setVariable["RD501_mc_lastTargetFuelAmount", nil, true];
        [_pfID] call CBA_fnc_removePerFrameHandler;
    };

    private _currentTime = 0;
    if (isMultiplayer) then
    {
        _currentTime = serverTime;
    } else
    {
        _currentTime = time;
    };
    
    private _target_fuel = (fuel _target) * _maxFuelTarget;
    private _source_fuel = (fuel _source) * _maxFuelSource;

    // if last ticks have not been applied yet, act as if they have
    private _last_target_fuel = (_source getVariable["RD501_mc_lastTargetFuelAmount", 0]) * _maxFuelTarget;
    if (_last_target_fuel > _target_fuel) then
    {
        _target_fuel = _last_target_fuel;
    };

    private _deltaT = _currentTime - (_source getVariable["RD501_mc_lastRefuelTick", 0]);
    private _transfer = _rate * _deltaT;

    private _target_new_fuel = ((_target_fuel + _transfer) / _maxFuelTarget);
    private _source_new_fuel = ((_source_fuel - _transfer) / _maxFuelSource);

    private _last_update = _source getVariable["RD501_mc_nextRefuelUpdate", 0];

    if (_target_new_fuel >= 1.0) then
    {
        _target_new_fuel = 1.0;
        hint "Refueling complete";
        _source setVariable["RD501_mc_lastRefuelTick", nil, true];
        _source setVariable["RD501_mc_nextRefuelUpdate", nil, true];
        _source setVariable["RD501_mc_lastTargetFuelAmount", nil, true];
        [_pfID] call CBA_fnc_removePerFrameHandler;
    } else 
    {
        if (_target_new_fuel >= _last_update) then
        {
            _last_update = round(_target_new_fuel * 10) / 10;
            hint format ["Refueling at %1 percent", str (_last_update*100)];
            _source setVariable["RD501_mc_nextRefuelUpdate", _last_update+0.1, true];
        };
    };

    ["RD501_mc_set_fuel", _target_new_fuel, _target] call CBA_fnc_targetEvent;
    _source setVariable["RD501_mc_lastTargetFuelAmount", _target_new_fuel, true];

    _source setFuel _source_new_fuel;
    _source setVariable["RD501_mc_lastRefuelTick", _currentTime, true];

}, 1, [_attached, _vehicle, _rate, _maxFuelSource, _maxFuelTarget]] call CBA_fnc_addPerFrameHandler;