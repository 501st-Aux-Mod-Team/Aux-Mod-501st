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

_vehicle setVariable["RD501_mc_lastRefuelTick", _firstTick, true];

[{
    params ["_args", "_pfID"];
    _args params ["_target", "_source", "_rate", "_maxFuelSource", "_maxFuelTarget"];

    private _currentTime = 0;
    if (isMultiplayer) then
    {
        _currentTime = serverTime;
    } else
    {
        _currentTime = time;
    };
    private _lastTick = _source getVariable["RD501_mc_lastRefuelTick",objNull];
    private _deltaT = _currentTime - _lastTick;

    private _target_fuel = (fuel _target) * _maxFuelTarget;
    private _source_fuel = (fuel _source) * _maxFuelSource;

    private _transfer = _rate * _deltaT;

    private _target_new_fuel = ((_target_fuel + _transfer) / _maxFuelTarget);
    private _source_new_fuel = ((_source_fuel - _transfer) / _maxFuelSource);

    _target setVariable ["RD501_mc_targetFuel", _target_new_fuel];
    ["RD501_mc_set_fuel", [], _target] call CBA_fnc_targetEvent;

    _source setFuel _source_new_fuel;
    _source setVariable["RD501_mc_lastRefuelTick", _currentTime, true];

    private _stop = _source getVariable["RD501_mc_stop_refuel", false];
    if (_stop) then
    {
        [_pfID] call CBA_fnc_removePerFrameHandler;
    };
}, 1, [_attached, _vehicle, _rate, _maxFuelSource, _maxFuelTarget]] call CBA_fnc_addPerFrameHandler;