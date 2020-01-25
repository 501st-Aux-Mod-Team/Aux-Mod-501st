params[
	["_unit",objNull ,[player]]
];

if(isNull _unit) exitWith {
	
};

_unit setUnitAbility 100; 
_unit setskill ["aimingAccuracy",100]; 
_unit setskill ["aimingShake",100]; 
_unit setskill ["aimingSpeed",100]; 
_unit setskill ["spotDistance",100]; 
_unit setskill ["spotTime",100]; 
_unit setskill ["courage",100]; 
_unit setskill ["reloadSpeed",100]; 
_unit setSkill ["general", 200]; 
_unit setAnimSpeedCoef 1.35; 
