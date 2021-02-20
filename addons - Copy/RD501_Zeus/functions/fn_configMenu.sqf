_logic = param [0,objNull,[objNull]];
_units = param [1,[],[[]]];

if !(local _logic) exitWith {};

_position = getPos _logic;

[
	"Beam Laser Strike", // title
 	[ // array of controls for dialog
		["COMBO", ["Beam Colour", "Colour of laser particles and glow"],
			[ // control args
				["Default", "Red", "Orange", "Yellow", "Green", "Cyan", "Pink", "Purple"], // return values
				["Default", "Red", "Orange", "Yellow", "Green", "Cyan", "Pink", "Purple"], // labels
				0 // element 0 is default selected
			]
		],
		["COMBO", ["Debris Colour", "Colour of dust kicked up by explosion"],
			[ // control args
				["Default", "Mud", "Snow", "Sand"], // return values
				["Default", "Mud", "Snow", "Sand"], // labels
				0 // element 0 is default selected
			]
		]
	],
	{ // code run on dialog closed (only run if OK is clicked)
		params ["_dialogResult", "_args"];
		
		private _beamColour = _dialogResult#0;
		switch (_dialogResult#0) do { // select beam colour
			case "Default": {_beamColour = [1,0.6,0.2];}; 	// default
			case "Red": {_beamColour = [0.5,0,0];}; 		// red
			case "Orange": {_beamColour = [0.3,0.15,0.1];}; // orange
			case "Yellow": {_beamColour = [1,0.9,0];}; 		// yellow
			case "Green": {_beamColour = [0,0.5,0];};		// green
			case "Cyan": {_beamColour = [0,0.5,0.5];}; 		// cyan
			case "Pink": {_beamColour = [1,0,0.6];}; 		// pink
			case "Purple": {_beamColour = [0.5,0,1];}; 		// purple
		};
		
		private _debrisColour = _dialogResult#1; 
		switch (_dialogResult#1) do { // select debris colour
			case "Default": {_debrisColour = [0.3, 0.27, 0.15];}; 	// default
			case "Mud": {_debrisColour = [0.15, 0.11, 0.08];}; 		// mud
			case "Snow": {_debrisColour = [1, 1, 1];}; 				// snow
			case "Sand": {_debrisColour = [1, 0.8, 0.3];}; 			// sand
		};

		private _beamTarget = "Land_HelipadEmpty_F" createVehicle _args#0;

		[_beamTarget, _beamColour, _debrisColour] remoteExec ["tts_beam_fnc_beam", 0, false]; // fire beam

		_beamTarget spawn {sleep 60; deleteVehicle _this;}; // wait and cleanup target pos
	}, {}, [_position] // args
] call zen_dialog_fnc_create;
