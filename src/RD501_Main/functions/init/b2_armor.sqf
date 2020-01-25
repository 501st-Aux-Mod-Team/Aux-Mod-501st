params[
	["_unit",objNull ,[player]]
];
if(isNull _unit) exitWith {
	
};

_unit setvariable ["ace_medical_unitDamageThreshold", [3,2.1,2.5], true]; //*Zatama 15.06.18

// format: [ HEAD, TORSO, LIMBS ]
// Default values: [1, 1, 1 * 1.7]