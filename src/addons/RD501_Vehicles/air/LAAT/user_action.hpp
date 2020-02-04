

	class ThrusterEngage
	{
		displayName = "<t color='#4C9900'>[Impulsor On]</t>";
		displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
		textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
		position = "pilotview";
		radius = 20;
		priority = 21;
		onlyForPlayer = 1;
		condition = "(!(this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this) AND (speed this >10) )";
		statement = "this execVM ""\LAAT\initTE.sqf""";
	
	};
	class ThrusterEngage_spam: ThrusterEngage
	{
		displayName = "";
		displayNameDefault = "";
		textToolTip = "";
		position = "pilotview";
		radius = 20;
		priority = 0;
		onlyForPlayer = 1;
		condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
		statement = "this execVM ""\LAAT\initTE.sqf""";
		shortcut="User19"
	};

	class ThrusterDisngage: ThrusterEngage
	{
		priority = 21;
		displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
		displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
		textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
		condition = "((this getvariable [""impulsorStatus"",false]) AND (player == driver this) AND (alive this))";
		statement = "this execVM ""\LAAT\initTD.sqf""";
	
	};

	class ThrusterDisngage_spam: ThrusterEngage
	{
		priority = 0;
		displayName = "";
		displayNameDefault = "";
		textToolTip = "";
		condition = "((player == driver this) AND (alive this))";
		statement = "this execVM ""\LAAT\initTD.sqf""";
		shortcut="User20"
	};

	
