/*
 * Author: commy2, Glowbal, PabstMirror
 * Modified by: Mirror
 * Draw progress bar and execute given function if succesful.
 * Finish/Failure/Conditional are all passed [_args, _elapsedTime, _totalTime, _errorCode]
 *
 * Arguments:
 * 0: Progress Variable: representation of how complete the bar should be.
 * 0: Progress Complete Variable: representation of when the bar should be considered 'complete', must be larger than progressVar value.
 * 1: Arguments, passed to condition, fail and finish <ARRAY>
 * 2: On Finish: Code called or STRING raised as event. <CODE, STRING>
 * 3: On Failure: Code called or STRING raised as event. <CODE, STRING>
 * 4: (Optional) Localized Title <STRING>
 * 5: Code to check each frame (Optional) <CODE>
 * 6: Exceptions for checking EFUNC(common,canInteractWith) (Optional)<ARRAY>
 *
 * Return Value:
 * None
 *
 * Example:
 * ["rd501_medical_ccp_stitchProgress", "rd501_medical_ccp_stitchProgressComplete", [], {Hint "Finished!"}, {hint "Failure!"}, "My Title"] call rd501_fnc_valueProgressBar
 *
 * Public: Yes
 */

params ["_progressVar","_progressCompleteVar", "_building", "_args", "_onFinish", "_onFail", ["_localizedTitle", ""], ["_condition", {true}], ["_exceptions", []]];

private _player = ACE_player;

//Open Dialog and set the title
closeDialog 0;
createDialog "ace_common_ProgressBar_Dialog";

(uiNamespace getVariable "ace_common_ctrlProgressBarTitle") ctrlSetText _localizedTitle;

//Adjust position based on user setting:
private _ctrlPos = ctrlPosition (uiNamespace getVariable "ace_common_ctrlProgressBarTitle");
_ctrlPos set [1, ((0 + 29 * ace_common_settingProgressBarLocation) * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) + (safezoneY + (safezoneH - (((safezoneW / safezoneH) min 1.2) / 1.2))/2))];

(uiNamespace getVariable "ace_common_ctrlProgressBG") ctrlSetPosition _ctrlPos;
(uiNamespace getVariable "ace_common_ctrlProgressBG") ctrlCommit 0;
(uiNamespace getVariable "ace_common_ctrlProgressBar") ctrlSetPosition _ctrlPos;
(uiNamespace getVariable "ace_common_ctrlProgressBar") ctrlCommit 0;
(uiNamespace getVariable "ace_common_ctrlProgressBarTitle") ctrlSetPosition _ctrlPos;
(uiNamespace getVariable "ace_common_ctrlProgressBarTitle") ctrlCommit 0;

[{
    (_this select 0) params ["_progressVar", "_progressCompleteVar", "_args", "_onFinish", "_onFail", "_condition", "_player", "_building", "_exceptions"];

    private _progress = _building getVariable[_progressVar, -1];
    private _progressComplete = _building getVariable[_progressCompleteVar, 100];
    private _errorCode = -1;

    // this does not check: target fell unconscious, target died, target moved inside vehicle / left vehicle, target moved outside of players range, target moves at all.
    if (isNull (uiNamespace getVariable ["ace_common_ctrlProgressBar", controlNull])) then {
        _errorCode = 1;
    } else {
        if (ACE_player != _player || !alive _player) then {
            _errorCode = 2;
        } else {
            if !([_args, _progress, _errorCode] call _condition) then {
                _errorCode = 3;
            } else {
                if !([_player, objNull, _exceptions] call ace_common_fnc_canInteractWith) then {
                    _errorCode = 4;
                } else {
                    if (_progress >= _progressComplete) then {
                        _errorCode = 0;
                    };
                };
            };
        };
    };

    if (_errorCode != -1) then {
        //Error or Success, close dialog and remove PFEH

        //Only close dialog if it's the progressBar:
        if (!isNull (uiNamespace getVariable ["ace_common_ctrlProgressBar", controlNull])) then {
            closeDialog 0;
        };

        [_this select 1] call CBA_fnc_removePerFrameHandler;

        if (_errorCode == 0) then {
            if (_onFinish isEqualType "") then {
                [_onFinish, [_args, _errorCode]] call CBA_fnc_localEvent;
            } else {
                [_args, _errorCode] call _onFinish;
            };
        } else {
            if (_onFail isEqualType "") then {
                [_onFail, [_args, _progress, _errorCode]] call CBA_fnc_localEvent;
            } else {
                [_args, _progress, _errorCode] call _onFail;
            };
        };
    } else {
        private _progressResult = ((_progress / _progressComplete)) min 1;
        (uiNamespace getVariable "ace_common_ctrlProgressBar") progressSetPosition _progressResult;
    };
}, 0, [_progressVar, _progressCompleteVar, _args, _onFinish, _onFail, _condition, _player, _building, _exceptions]] call CBA_fnc_addPerFrameHandler;