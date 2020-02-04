params[
	["_unit",objNull ,[player]]
];
if(isNull _unit) exitWith {
	
};

_unit setSkill 1;
_unit setAnimSpeedCoef 1.45;
_unit setvariable ["ace_medical_unitDamageThreshold", [64,81,81], true]; //*Zatama 15.06.18
_unit setUnitAbility 100; 
_unit setskill ["aimingAccuracy",1]; 
_unit setskill ["aimingShake",1]; 
_unit setskill ["aimingSpeed",1]; 
_unit setskill ["spotDistance",1];
_unit setUnitRecoilCoefficient 0; 
_unit setskill ["spotTime",1]; 
_unit setskill ["courage",1]; 
_unit setskill ["reloadSpeed",1]; 
_unit setunitpos "auto"; //Zatama 15/06/18
_unit setSkill ["general", 1]; 

for [{_i=0}, {_i<(5)}, {_i=_i+1}] do
{
	_unit addItemToUniform "ACE_tourniquet";
	_unit addItemToUniform "ACE_quikclot";
	_unit addItemToUniform "ACE_CableTie";
	_unit addItemToUniform "ACE_fieldDressing";
};


for [{_i=0}, {_i<2}, {_i=_i+1}] do
{
	_unit addItemToUniform  "ACE_epinephrine";
	_unit addItemToUniform "ACE_morphine";
};    

