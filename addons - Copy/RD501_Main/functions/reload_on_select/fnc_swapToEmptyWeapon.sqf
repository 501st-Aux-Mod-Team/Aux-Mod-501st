params["_unit", "_weapon"];
 
_unit removeWeaponGlobal _weapon;
_unit addWeaponGlobal getText(configFile >> "CfgWeapons" >> _weapon >> "RD501_Empty_Weapon"); // TODO: Cache during postInit