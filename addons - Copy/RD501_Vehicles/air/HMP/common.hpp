faction = macro_cis_faction
editorSubcategory = macro_editor_cat_air(CIS_heli)
vehicleClass = macro_editor_vehicle_type_air(CIS)
airBrakeFrictionCoef = 80.4;

class UserActions
{
    class ThrusterEngage
    {
        condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >50) )";
        displayName = "<t color='#4C9900'>[Impulsor On]</t>";
        displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
        onlyForPlayer = 0;
        position = "pilotview";
        priority = 1e+008;
        radius = 6;
        statement = "this execVM ""\SW_Droides_2\DroidGunship\initTE.sqf""";
        textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
        userActionID = 64;
    };
    class ThrusterDisngage : ThrusterEngage
    {
        condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
        displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
        displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
        onlyForPlayer = 0;
        position = "pilotview";
        priority = 1e+008;
        radius = 6;
        statement = "this execVM ""\SW_Droides_2\DroidGunship\initTD.sqf""";
        textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
        userActionID = 65;
    };	
};	

class EventHandlers
{
    fired = "_this call (uinamespace getvariable 'BIS_fnc_effectFired');";
    init = "[_this select 0] execVM '\SW_Droides_2\DroidGunship\initturbine.sqf';";
    killed = "_this call (uinamespace getvariable 'BIS_fnc_effectKilled');";
    
    class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
};