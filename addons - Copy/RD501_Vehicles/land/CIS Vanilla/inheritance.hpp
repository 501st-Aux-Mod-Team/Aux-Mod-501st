class Tank;
class Tank_F: Tank
{
	class turrets;
	class components;
};
////////////////////////////////////////////////////////////////////////////////////////
class APC_Tracked_01_base_F: Tank_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret;
		class CommanderOptics;
		
	};
};
class B_APC_Tracked_01_base_F: APC_Tracked_01_base_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
		class CommanderOptics;
	};
};
class B_APC_Tracked_01_AA_F: B_APC_Tracked_01_base_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets : Turrets
			{
				class CommanderOptics;
				
			};
		};
		class CommanderOptics;
	};
};
////////////////////////////////////////////////////////////////////////////////////////
class LT_01_base_F: Tank_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class LT_01_cannon_base_F: LT_01_base_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class I_LT_01_cannon_F: LT_01_cannon_base_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
////////////////////////////////////////////////////////////////////////////////////////
class LT_01_AA_base_F: LT_01_base_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class I_LT_01_AA_F: LT_01_AA_base_F
{
	class components;
	class turrets : turrets
	{
		class MainTurret;
		
	};
};