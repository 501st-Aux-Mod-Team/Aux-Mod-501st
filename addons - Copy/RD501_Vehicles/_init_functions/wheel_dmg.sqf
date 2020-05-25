params ["_this"];

_this addEventHandler ["HandleDamage",
{
if ((_this select 1) find "wheel" != -1) then
{
	0;
}else
{
	(_this select 2);
};
}];