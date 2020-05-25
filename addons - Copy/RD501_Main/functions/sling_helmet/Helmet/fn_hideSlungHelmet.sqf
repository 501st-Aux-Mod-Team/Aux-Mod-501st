_unit = _this select 0;
_state = _this select 1;
_helmetAttached = _unit getVariable ["GEARF_HelmetAttached", false];

switch (_helmetAttached) do {
  case true: {
    if (_state) then {
      {
        if (typeOf _x == "GroundWeaponHolder") then {_x hideObjectGlobal true;};
      } forEach (attachedObjects _unit);
    } else {
      {
        if (typeOf _x == "GroundWeaponHolder") then {_x hideObjectGlobal false;};
      } forEach (attachedObjects _unit);
    };
  };
  case false: { };
};
