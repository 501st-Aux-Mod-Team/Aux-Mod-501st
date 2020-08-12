params["_unit", "_validRefuelOptions"];
_hasItem = false;
_items = (backpackMagazines _unit) + (uniformMagazines _unit) + (vestMagazines _unit);
{
	if (_x in _validRefuelOptions) exitWith
	{
		_unit removeMagazine _x;
		_hasItem = true;
	};
} forEach _items;
_hasItem