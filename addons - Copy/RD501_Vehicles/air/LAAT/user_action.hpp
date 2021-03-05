
	class ThrusterEngage
	{
		displayName = "<t color='#4C9900'>[Impulsor On]</t>";
		displayNameDefault = "<t color='#4C9900'>[Impulsor On]</t>";
		textToolTip = "<t color='#4C9900'>[Impulsor On]</t>";
		position = "pilotview";
		radius = 20;
		priority = 21;
		onlyForPlayer = 1;
		condition = "((player == driver this) AND (alive this) AND (speed this >10) )";
		statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseIncrease.sqf""";
	};

	class ThrusterDisngage: ThrusterEngage
	{
		priority = 21;
		displayName = "<t color='#FF9933'>[RepulsorBrake On]</t>";
		displayNameDefault = "<t color='#FF9933'>[RepulsorBrake On]</t>";
		textToolTip = "<t color='#FF9933'>[RepulsorBrake On]</t>";
		condition = "((player == driver this) AND (alive this))";
		statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseDecrease.sqf""";
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
		statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseIncrease.sqf""";
		shortcut="User19"
	};


	class ThrusterDisngage_spam: ThrusterEngage
	{
		priority = 0;
		displayName = "";
		displayNameDefault = "";
		textToolTip = "";
		condition = "((player == driver this) AND (alive this))";
		statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseDecrease.sqf""";
		shortcut="User20"
	};

	
