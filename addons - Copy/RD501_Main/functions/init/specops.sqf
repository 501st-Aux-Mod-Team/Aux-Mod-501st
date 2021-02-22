params[
	["_unit",objNull ,[player]]
];

if(isNull _unit) exitWith {
	
};

_unit setUnitAbility 75; 
_unit setskill ["aimingAccuracy",80]; 
_unit setskill ["aimingShake",80]; 
_unit setskill ["aimingSpeed",80]; 
_unit setskill ["spotDistance",80]; 
_unit setskill ["spotTime",75]; 
_unit setskill ["courage",70]; 
_unit setskill ["reloadSpeed",70]; 
_unit setSkill ["general", 170]; 
_unit setAnimSpeedCoef 1.35; 
