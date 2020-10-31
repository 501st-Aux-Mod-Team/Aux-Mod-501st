params["_vehicle"];

if (!(driver _vehicle == player)) exitWith{false};
if (!alive _vehicle) exitWith{false};
if (isNull (_vehicle getVariable["RD501_mc_attached_large", objNull])) exitWith{false};
if (_vehicle getVariable["RD501_mc_lastRefuelTick", -1] != -1) exitWith{false};
true