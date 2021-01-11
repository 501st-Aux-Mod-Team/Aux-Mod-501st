
params["_healer","_patient"];

private _bandagedWounds = _patient getVariable ["ace_medical_bandagedWounds", []];
private _stitchedWounds = _patient getVariable ["ace_medical_stitchedWounds", []];
_patient setVariable ["ace_medical_bandagedWounds", [], true];
_patient setVariable ["ace_medical_stitchedWounds", _stitchedWounds, true];
[_patient] call ace_medical_engine_fnc_updateDamageEffects; 