params[
	["_unit",objNull ,[player]]
];
if(isNull _unit) exitWith {
	
};

(_unit) enableFatigue false;
(_unit) forceWalk true;
(_unit) setUnitPos "UP";