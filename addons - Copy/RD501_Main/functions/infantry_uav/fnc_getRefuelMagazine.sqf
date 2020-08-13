params[["_unit", player, [player]]];
_hasItem = false;
_items = magazines _unit;
if (RD501_DRONE_BATTERY in _items) then
{
	_unit removeItem RD501_DRONE_BATTERY;
	_hasItem = true;
};
_hasItem
