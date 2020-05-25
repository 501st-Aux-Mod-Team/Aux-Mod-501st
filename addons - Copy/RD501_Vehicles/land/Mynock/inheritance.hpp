class Car;
class Car_F: Car
{
	class turrets;
};
class Tank;
class Tank_F: Tank
{
	class turrets;
};
class MBT_02_base_F: Tank_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class O_MBT_02_base_F: MBT_02_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};
class O_MBT_02_Cannon_F: O_MBT_02_base_F
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
////////////////////////////////////////////////////////////////////////////////////////
class MBT_01_base_F: Tank_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class B_MBT_01_base_F: MBT_01_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};
class B_MBT_01_cannon_F: B_MBT_01_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};
class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
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
////////////////////////////////////////////////////////////////////////////////////////
class MBT_03_base_F: Tank_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class I_MBT_03_base_F: MBT_03_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};
class I_MBT_03_cannon_F: I_MBT_03_base_F
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
////////////////////////////////////////////////////////////////////////////////////////
class Wheeled_APC_F: Car_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class AFV_Wheeled_01_base_F: Wheeled_APC_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class AFV_Wheeled_01_up_base_F: AFV_Wheeled_01_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};
class B_AFV_Wheeled_01_up_cannon_F: AFV_Wheeled_01_up_base_F
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

////////////////////////////////////////////////////////////////////////////////////////
class APC_Tracked_02_base_F: Tank_F
{
	class turrets : turrets
	{
		class MainTurret;
		
	};
};
class O_APC_Tracked_02_base_F: APC_Tracked_02_base_F
{
	class turrets : turrets
	{
		class MainTurret : Mainturret
		{
			class Turrets;
			
		};
	};
};
class O_APC_Tracked_02_AA_F: O_APC_Tracked_02_base_F
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
////////////////////////////////////////////////////////////////////////////////////////
class LSV_02_base_F: Car_F
{};
class LSV_02_unarmed_base_F: LSV_02_base_F
{};
class O_LSV_02_unarmed_F: LSV_02_unarmed_base_F
{};