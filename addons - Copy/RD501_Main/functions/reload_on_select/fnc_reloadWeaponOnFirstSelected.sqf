params ["_unit", "_weapon"];
systemChat "Handling Disposable Reload";
if(_weapon in RD501_AUTO_RELOAD_ON_EQUIP) then
{
	systemChat "Weapon in list";
	if(secondaryWeaponMagazine _unit == []) then {
		_magazineName = "rd501_z1000_x3000_mag";
		systemChat format["AutoReloading with %1", _magazineName]; 
		_unit removeMagazines _magazineName;
		_unit addMagazine _magazineName; 
		_unit removeSecondaryWeaponItem _magazineName;
	};
};