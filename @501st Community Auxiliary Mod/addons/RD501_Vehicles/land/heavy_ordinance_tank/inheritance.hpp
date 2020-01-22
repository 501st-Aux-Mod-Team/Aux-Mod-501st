class Tank;

class Tank_F :Tank
{
	class turrets;
};

class MBT_01_base_F:Tank_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};

class MBT_01_arty_base_F:MBT_01_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};

class B_MBT_01_arty_base_F:MBT_01_arty_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};

class B_MBT_01_arty_F:B_MBT_01_arty_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets : Turrets
			{
				class CommanderOptics;
				
			};
		};
	};
};