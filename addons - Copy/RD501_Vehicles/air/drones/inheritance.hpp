class Air;
class Helicopter: Air {
    class ACE_Actions
	{
		class ACE_MainActions { }
	}
};
class Helicopter_Base_F:Helicopter {
	class ACE_Actions : ACE_Actions
	{
		class ACE_MainActions : ACE_MainActions { }
	}
};
class UAV_01_base_F:Helicopter_Base_F 
{
	
	class ACE_Actions : ACE_Actions
	{
		class ACE_MainActions : ACE_MainActions { }
	}
};
class JLTS_UAV_prowler_gar_backpack;
class Bag_Base;
class assembleInfo;
class Weapon_Bag_Base: Bag_Base
{
	class assembleInfo;
};
class JLTS_UAV_prowler_gar;
class O_UAV_01_F:UAV_01_base_F
{
	class Turrets;
};
class B_UAV_01_F;
class swcishoverdroid:O_UAV_01_F
{
	
	class Turrets: Turrets
	{
		class MainTurret;
	}
};
class SWOP_interrogationdroid:B_UAV_01_F
{
	
};
class SWOP_Dio_Droid:O_UAV_01_F
{
	
}
class SWOP_Rebel_Dio_Droid:B_UAV_01_F
{
	
};
class swclonerecondroid: UAV_01_base_F
{
	class ACE_Actions : ACE_Actions
	{
		class ACE_MainActions : ACE_MainActions { }
	}
};

class UAV;
class UAV_05_Base_F:UAV
{
	class Components;
	class GunClouds;
	class GunFire;
	class HitPoints;
	class MGunClouds;
	class OpticsIn;
	class OpticsOut;
	class Reflectors;
	class TurnIn;
	class TurnOut;
	class Turrets;
	class TurretSpec;
	class ViewGunner;
	class ViewOptics;
};
class B_UAV_05_F:UAV_05_Base_F
{
	class Components:Components
	{};
	class GunClouds:GunClouds
	{};
	class GunFire:GunFire
	{};
	class HitPoints:HitPoints
	{};
	class MGunClouds:MGunClouds
	{};
	class OpticsIn:OpticsIn
	{};
	class OpticsOut:OpticsOut
	{};
	class Reflectors:Reflectors
	{};
	class TurnIn:TurnIn
	{};
	class TurnOut:TurnOut
	{};
	class Turrets:Turrets
	{
		class MainTurret;
	};
	class TurretSpec:TurretSpec
	{};
	class ViewGunner:ViewGunner
	{};
	class ViewOptics:ViewOptics
	{};
};