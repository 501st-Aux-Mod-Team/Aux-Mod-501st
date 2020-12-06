params[
	["_vic",objNull ,[player]]
];

if(isNull _vic) exitWith {
	
};

_vic addAction ["<t color='#00FF00'>Bacta Tank</t>","[player] call ACE_medical_treatment_fnc_fullHealLocal;"]; 
 
 
