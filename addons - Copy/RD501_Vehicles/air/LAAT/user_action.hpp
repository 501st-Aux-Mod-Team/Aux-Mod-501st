	class ThrusterEngage
	{
		displayName = "";
		displayNameDefault = "";
		textToolTip = "";
		position = "pilotview";
		radius = 20;
		priority = 0;
		onlyForPlayer = 1;
		condition = "((player == driver this) AND (alive this))";
		statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseIncrease.sqf""";
		shortcut="User19"
	};

	class ThrusterDisengage: ThrusterEngage
	{
		priority = 0;
		displayName = "";
		displayNameDefault = "";
		textToolTip = "";
		condition = "((player == driver this) AND (alive this))";
		statement = "this execVM ""\RD501_Main\functions\impulse\fnc_impulseDecrease.sqf""";
		shortcut="User20"
	};

    class afterburnerMk1_turn_on{};
    class afterburnerMk1_turn_off{};

	class rampOpen: rampOpen
	{
		condition="(this animationphase 'ramp' == 0) AND (alive this) AND (player in [gunner this, driver this])";
	};

	class rampClose: rampClose
	{
		condition="(this animationphase 'ramp' == 1) AND (alive this) AND (player in [gunner this, driver this])";
	};