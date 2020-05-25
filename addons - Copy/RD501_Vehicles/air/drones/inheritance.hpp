class UAV_01_base_F;
class O_UAV_01_F:UAV_01_base_F
{
	class Turrets;
}
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
class swclonerecondroid:B_UAV_01_F
{
	
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