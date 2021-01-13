params ["_target", "_player", "_params"];

["rd501_medical_ccp_deployCCPServer", [_target]] call CBA_fnc_serverEvent;

["Deploying CCP Nearby"] call ACE_common_fnc_displayText;