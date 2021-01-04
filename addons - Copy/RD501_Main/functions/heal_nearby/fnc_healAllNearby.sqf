params["_healer", "_origin", "_radius"];

{ 
    if(_x isKindOf "Man") then {
        [_x, _x] call ace_medical_treatment_fnc_fullHeal; 
    };
} forEach (_origin nearEntities _radius);