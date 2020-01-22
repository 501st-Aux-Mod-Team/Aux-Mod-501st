class APC_Wheeled_02_base_F;

class APC_Wheeled_02_base_v2_F:APC_Wheeled_02_base_F
{
	class Turrets;
};

class O_APC_Wheeled_02_rcws_v2_F:APC_Wheeled_02_base_v2_F
{
	class Turrets:Turrets
	{
		class MainTurret;
		class CommanderOptics;
	};
}