

params["_unit", "_weapon"];
private _emptyWeapon = getText(configFile >> "CfgWeapons" >> _weapon >> "RD501_Empty_Weapon");
switch (true) do {
	case (_weapon in uniformItems _unit): {
		_unit removeItemFromUniform _weapon;
		_unit addItemToUniform _emptyWeapon;
	};
	case (_weapon in vestItems _unit): {
		_unit removeItemFromVest _weapon;
		_unit addItemToVest _emptyWeapon;
	};
	case (_weapon in backpackItems _unit): {
		_unit removeItemFromBackpack _weapon;
		_unit addItemToBackpack _emptyWeapon;
	};
};