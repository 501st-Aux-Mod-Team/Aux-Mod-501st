if(!isPlayer this) exitWith { 
        diag_log format["RD501_MedNotif[DEBUG]: %1", "Current instance is not a player"]
};
RD501_MedNotif_lastMessageTime = 0;
_id = ["ace_medicalMenuOpened", {
                params["_player", "_target", ""];
                if(ace_medical_gui_pendingReopen) exitWith
                {
                        // Already showed message, skip
                        diag_log format["RD501_MedNotif[DEBUG]: %1", "Pending Reopen, not displaying"]
                };
                //if(_player == _target) exitWith {};
                if(time - RD501_MedNotif_lastMessageTime < 1) exitWith {

                };
                if(isNil "RD501_MedNotif_Message" || RD501_MedNotif_Message == "") then {
                        diag_log format["RD501_MedNotif[DEBUG]: %1", format["Message not initialised, setting to default ('%1')", "%1 is asking that you kindly hold still."]];
                        RD501_MedNotif_Message = "%1 is asking that you kindly hold still.";
                };
                _name = [_player] call ace_common_fnc_getName;
                _targetName = [_target] call ace_common_fnc_getName;
                if(_target getVariable["ACE_Unconscious", false]) exitWith {
                        diag_log format["RD501_MedNotif[DEBUG]: %1", format["%1 is unconscious, ignoring", _targetName]];
                };
                if([_target] call ace_medical_treatment_fnc_isMedic) then
                {
                        diag_log format["RD501_MedNotif[DEBUG]: %1", format["Displaying Medic Message to %1", _targetName]];
                        _text = format[RD501_MedNotif_Message, _name];
                        _image = "RD501_Main\ui_icons\medical_emblem.paa";
                        _textHTML = format["<t align='center'>%1</t>", _text];
                        _result = composeText [parseText format["<img size='2' align='center' color='%2' image='%1'/>", _image, [1,1,1] call BIS_fnc_colorRGBtoHTML], lineBreak, _text];
                        ["ace_common_displayTextStructured", [_result, 2, _target], [_target]] call CBA_fnc_targetEvent;
                }else
                {
                        diag_log format["RD501_MedNotif[DEBUG]: %1", format["Displaying Non Medic Message to %1", _targetName]];
                        ["ace_common_displayTextStructured", [format[RD501_MedNotif_Message, _name], 2, _target], [_target]] call CBA_fnc_targetEvent;
                };
                RD501_MedNotif_lastMessageTime = time;
        }] call CBA_fnc_addEventHandler;
diag_log format["RD501_MedNotif[DEBUG]: %1", format["Registered and loaded for '%1' (%2)", this call ace_common_fnc_getName, this]];