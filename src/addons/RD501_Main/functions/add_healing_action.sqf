params[
	["_vic",objNull ,[player]]
];

if(isNull _vic) exitWith {
	
};

_vic addAction ["<t color='#00FF00'>HEAL ME PLOX</t>","call ace_medical_fnc_treatmentAdvanced_fullHeal;"]; 
 
 
