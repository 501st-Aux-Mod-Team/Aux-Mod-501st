/*
 * Author: M3ales
 *
 * Example:
 * [cursorTarget, player, []] call rd501_fnc_packupCCP
 *
 * Public: No
 */

params ["_target", "_player", "_params"];

["rd501_medical_ccp_packupCCPServer", [_target]] call CBA_fnc_serverEvent;

["Packing up CCP into Vehicle"] call ACE_common_fnc_displayText;