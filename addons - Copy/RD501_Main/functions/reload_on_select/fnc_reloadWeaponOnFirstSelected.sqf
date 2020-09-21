params ["_unit", "_weapon"];
diag_log "Handling Disposable Reload";
if(_weapon in RD501_AUTO_RELOAD_ON_EQUIP) then
{
	diag_log "Weapon in list";
	if(count (secondaryWeaponMagazine _unit) == 0) then {
		_magazineName = getArray(configFile >> "CfgWeapons" >> currentWeapon _unit >> "magazines") select 0; // TODO: Cache in postInit
		diag_log format["AutoReloading with %1", _magazineName]; 
		_unit removeMagazines _magazineName;
		_unit addMagazine _magazineName;
		_unit removeSecondaryWeaponItem _magazineName;
	};
};