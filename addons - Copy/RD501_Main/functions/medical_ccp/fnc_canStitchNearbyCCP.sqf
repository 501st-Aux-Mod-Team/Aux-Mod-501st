/*
 * Author: M3ales
 *
 * Arguments:
 * Unit
 * Return Value:
 * True if eligable to use stitch all action
 *
 * Example:
 * [cursorTarget, player, []] call rd501_fnc_canStitchNearbyCCP
 *
 * Public: No
 */

params ["_target", "_player", "_params"];

alive _target &&
{ _player call rd501_fnc_checkInsideCCP } &&
{ _player call rd501_fnc_isDoctor }