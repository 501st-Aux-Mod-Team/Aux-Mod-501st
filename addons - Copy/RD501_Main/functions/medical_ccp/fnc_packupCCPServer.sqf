/*
 * Author: M3ales
 *
 * Replaces the given target CCP object with its packup object if specified, and adds an ace interact on JIP
 *
 * Arguments:
 * Target Object
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call rd501_fnc_packupCCPServer
 *
 * Public: No
 */

params["_target"];

_position = position _target;
deleteVehicle _target;
_spawner = rd501_medical_ccp_truck createVehicle _position;
systemChat format["Packed into Truck"];