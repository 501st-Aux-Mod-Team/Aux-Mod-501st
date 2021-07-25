/*
 * Author: M3ales
 *
 * Replaces the given target object with the CCP object, and adds an ace interact on JIP
 *
 * Arguments:
 * Target Object
 * Return Value:
 * None
 *
 * Example:
 * [cursorTarget] call rd501_fnc_deployCCPServer
 *
 * Public: No
 */

params["_target"];

_position = position _target;
deleteVehicle _target;
_spawner = createVehicle[rd501_medical_ccp_building, _position, [], 0, "CAN_COLLIDE"];
systemChat format["Deployed CCP"];

_jipId = ["rd501_medical_ccp_deployCCPLocal", [_spawner]] call CBA_fnc_globalEventJIP; // raise on all clients (we should be on server)
[_jipId, _spawner] call CBA_fnc_removeGlobalEventJIP;
