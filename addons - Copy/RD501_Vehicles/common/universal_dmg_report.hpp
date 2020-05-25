class Damage_Report
	{
		displayName = "<t color='#00FF00'>Damage Report :) </t>";
		displayNameDefault = "<t color='#00FF00'>Damage Report</t>";
		textToolTip = "<t color='#00FF00'>Damage Report</t>";
		position = "pilotview";
		radius = 10;
		priority = 21;
		onlyForPlayer = 1;
		condition = "(alive this)";
		statement = this call macro_fnc_name(add_show_dmg_report);
	};