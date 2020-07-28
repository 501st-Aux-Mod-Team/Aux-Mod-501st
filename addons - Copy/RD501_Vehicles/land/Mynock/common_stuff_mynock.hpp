class EventHandlers;
class EventHandlers: DefaultEventhandlers
{
	fired = "_this call (uinamespace getviariable 'BIS_fnc_effectFired');";
	init="[_this select 0] execVM 'RD501_Vehicles\_init_functions\wheel_dmg.sqf';";
};
smokeLauncherGrenadeCount=8;
smokeLauncherVelocity=14;
smokeLauncherOnTurret=1;
smokeLauncherAngle=120;