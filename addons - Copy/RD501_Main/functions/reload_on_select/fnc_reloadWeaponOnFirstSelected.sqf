params ["_unit", "_weapon"];
systemChat "Handling Disposable Reload";
if(_weapon in RD501_AUTO_RELOAD_ON_EQUIP) then
{
	systemChat "Weapon in list";
	if(count (secondaryWeaponMagazine _unit) == 0) then {
		systemChat "Weapon in list";
		_magazineName = getArray(configFile >> "cfgWeapons" >> currentWeapon _unit >> "magazines") select 0;
		systemChat format["AutoReloading with %1", _magazineName]; 
		_unit removeMagazines _magazineName;
		_unit addMagazine _magazineName;
		_unit removeSecondaryWeaponItem _magazineName;
	};
};