/*
 * Author: MrClock
 * Modified by: Mirror
 * [Originally] called from the "Equip/unequip riot shield" CBA keybind
 * Modified to work directly with AI (just stripped out player specific stuff)
 *
 * Arguments:
 * None
 *
 * Originally:
 * [] call JLTS_fnc_handleRiotShield;
 *
 * Example:
 * _this call rd501_jlts_shield_aiToggle;
 *
 * Return Value:
 * None
 */

params["_unit"];

private _weapon = currentWeapon _unit;
if (_weapon == "") exitWith {false;};

private _items = [_weapon,_unit,false,true] call JLTS_fnc_getWeaponItems;

if (getNumber(configFile >> "CfgWeapons" >> _weapon >> "JLTS_canHaveShield") == 1 && {getNumber(configFile >> "CfgWeapons" >> _weapon >> "JLTS_isShielded") != 1}) then {
	private _shield = [];
	{
		if (getNumber(configFile >> "CfgWeapons" >> _x >> "JLTS_isShieldItem") == 1) exitWith {
			_shield = [_x,getText(configFile >> "CfgWeapons" >> _x >> "JLTS_shieldAttachment")]
		};
	} forEach items _unit;
	if (_shield isEqualTo []) exitWith {false};
	[_unit,_weapon,_items,_shield] params["_unit","_weapon","_items","_shield"];
    private _shieldedVariant = getText(configFile >> "CfgWeapons" >> _weapon >> "JLTS_shieldedWeapon");
    
    [_unit,_weapon] call JLTS_fnc_magazineCorrection;
    
    [_unit,_shieldedVariant] remoteExec ["addWeapon",0,false];
    
    [_shieldedVariant,_unit,_items] call JLTS_fnc_addWeaponItems;
    [_shieldedVariant,_unit,[_shield select 1]] call JLTS_fnc_addWeaponItems;
        
    _unit removeItem (_shield select 0);
	
} else {
	if (getNumber(configFile >> "CfgWeapons" >> _weapon >> "JLTS_isShielded") == 1) then {
		private _shield = [];
		switch ([_weapon] call JLTS_fnc_getWeaponType) do {
			case ("handgun"): {
				private _shieldAttachment = (handgunItems _unit) select 3;
				if (_shieldAttachment != "" && {getNumber(configFile >> "CfgWeapons" >> _shieldAttachment >> "JLTS_isShieldAttachment") == 1}) then {
					private _shieldItem = getText(configFile >> "CfgWeapons" >> _shieldAttachment >> "JLTS_shieldItem");
					_shield = [_shieldItem,_shieldAttachment];
				};
			};
			case ("primary"): {
				private _shieldAttachment = (primaryWeaponItems _unit) select 3;
				if (_shieldAttachment != "" && {getNumber(configFile >> "CfgWeapons" >> _shieldAttachment >> "JLTS_isShieldAttachment") == 1}) then {
					private _shieldItem = getText(configFile >> "CfgWeapons" >> _shieldAttachment >> "JLTS_shieldItem");
					_shield = [_shieldItem,_shieldAttachment];
				};
			};
			default {};
		};

		if (_shield isEqualTo []) then {
			_shield = ["JLTS_riot_shield_item",""];
		};
		
		if (!(_unit canAdd (_shield select 0))) then {
            private _baseVariant = getText(configFile >> "CfgWeapons" >> _weapon >> "JLTS_baseWeapon");
            [_unit,_weapon] call JLTS_fnc_magazineCorrection;
            [_unit,_baseVariant] remoteExec ["addWeapon",0,false];
            
            if (_shield select 1 != "") then {
                _items = _items - [_shield select 1];
            };
            [_baseVariant,_unit,_items] call JLTS_fnc_addWeaponItems;
            [_unit] call JLTS_fnc_cleanUpShields;
            private _weaponHolder = createVehicle["GroundWeaponHolder",getPos _unit,[],0,"CAN_COLLIDE"];
            _weaponHolder setDir ((getDir _unit) - random[5,10,15]);
            _weaponHolder addItemCargoGlobal [_shield select 0,1];
		} else {
			private _baseVariant = getText(configFile >> "CfgWeapons" >> _weapon >> "JLTS_baseWeapon");
            [_unit,_weapon] call JLTS_fnc_magazineCorrection;
            [_unit,_baseVariant] remoteExec ["addWeapon",0,false];
            if (_shield select 1 != "") then {
                _items = _items - [_shield select 1];
            };
            [_baseVariant,_unit,_items] call JLTS_fnc_addWeaponItems;
            [_unit] call JLTS_fnc_cleanUpShields;
            _unit addItem (_shield select 0);
		};
	};
};