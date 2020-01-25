_unit = _this select 0;
_side = _this select 1;
_helmetAttached = _unit getVariable ["GEARF_HelmetAttached", false];

if (headgear _unit == "")  then {
  systemChat "No headgear to sling.";
  } else {
    _headgear = headgear _unit;
    removeHeadgear _unit;
    _helmetHolder = "GroundWeaponHolder" createVehicle [0,0,0];
    _helmetHolder addItemCargoGlobal [_headgear, 1];
    _unit setVariable ["GEARF_HelmetAttachedClass", _headgear];
    _unit setVariable ["GEARF_HelmetAttached", true];

    _additional = [];

    (backpackItems _unit) apply {
        _parents = [configFile >> "CfgWeapons" >> _x >> "ItemInfo", true] call BIS_fnc_returnParents;
        if("HeadgearItem" in _parents) then {
            _additional append [_x];
        };
    };
	_unit unassignitem "SWOP_visordown_antenna"; 
	_unit unassignitem "SWOP_Visor_Down2_RD501"; 	
	_unit unassignitem "SWOP_visordown_501_antenna";
	_unit unassignitem "SWOP_visor_antenna";
	_unit unassignitem "SWOP_visor_w";
	_unit unassignitem "RD501_visor_w2";
	_unit unassignitem "SWOP_range";
	_unit unassignitem "SWOP_rangeARC";
	_unit unassignitem "SWOP_Visor_Down_RD501";
	_unit unassignitem "SWOP_cosir5f";	
	_unit unassignitem "SWOP_cosir4f";
	_unit unassignitem "SWOP_cosir3f";
	_unit unassignitem "SWOP_cosir2f";
	_unit unassignitem "SWOP_cosir1f";
	_unit unassignitem "SWOP_cosir5";	
	_unit unassignitem "SWOP_cosir4";
	_unit unassignitem "SWOP_cosir3";
	_unit unassignitem "SWOP_cosir2";
	_unit unassignitem "SWOP_cosir1";
	_unit unassignitem "SWOP_cosir5a";	
	_unit unassignitem "SWOP_cosir4a";
	_unit unassignitem "SWOP_cosir3a";
	_unit unassignitem "SWOP_cosir2a";
	_unit unassignitem "SWOP_cosir1a";
	_unit unassignitem "SWOP_cosir4_P1";
	_unit unassignitem "SWOP_cosir3_P1";
	_unit unassignitem "SWOP_cosir2_P1";
	_unit unassignitem "SWOP_cosir1_P1";	


    _additionalClass = _additional select 0;
    _unit addHeadgear _additionalClass;
    _unit removeItemFromBackpack _additionalClass;

    switch (_side) do {
      case "left": {
        _helmetHolder attachTo [_unit, [0.52,0.1,1.72],"lfemur"];
        [_helmetHolder, [0,5,120]] call GEARF_fnc_rotateObject;
      };
      case "right": {
        _helmetHolder attachTo [_unit, [-0.41,0.25,1.72],"rfemur"];
        [_helmetHolder, [0,-5,-120]] call GEARF_fnc_rotateObject;
      };
    };
  };

  
  
  
  aaa attachTo [player, [-0.21,0.15,1.72],"lfemur"];