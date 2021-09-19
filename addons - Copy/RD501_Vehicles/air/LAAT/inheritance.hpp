	class Helicopter
	{
	};
	class Helicopter_Base_F: Helicopter
	{
		class Turrets;
		class HitPoints;
	};
	class Heli_Attack_01_base_F: Helicopter_Base_F
	{
		class Turrets: Turrets
		{
			class CopilotTurret;
			class MainTurret;
		};
		class HitPoints: HitPoints
		{
			class HitHull;
			class HitFuel;
			class HitEngine;
			class HitAvionics;
			class HitVRotor;
			class HitHRotor;
			class HitGlass1;
			class HitGlass2;
			class HitGlass3;
			class HitGlass4;
			class HitGlass5;
		};
		class AnimationSources;
		class ViewPilot;
		class ViewOptics;
		class components;
		class RotorLibHelicopterProperties;
	};
	class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
	{
		class UserActions;
		class CargoTurret;
	};
class 3AS_Patrol_LAAT_Base: Heli_Attack_01_base_F
{
	class Turrets: Turrets
	{
		class Copilot: MainTurret{};
	};
};
class 3as_laat_Base: B_Heli_Attack_01_base_F
{
	class ACE_SelfActions;
	class UserActions: UserActions
	{
		class rampOpen;
		class rampClose;
	};
	class Components:Components{};
	class Turrets: Turrets
	{
		class Copilot;
		class LeftDoorgun;
		class RightDoorGun;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
	};
};
class 3AS_Patrol_LAAT_Republic: 3AS_Patrol_LAAT_Base
{
	class Turrets: Turrets
	{
		class Copilot:Copilot{};
	};
};
class 3as_laatUnarmed_Base: 3as_laat_Base
{
	class Turrets: Turrets
	{
		class Copilot;
		class CargoTurret_01;
		class CargoTurret_02;
	};
};
class 3as_laatFloodLight_Base: 3as_laat_Base
{
	class Turrets: Turrets
	{
		class Copilot;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
	};
};
class 3as_LAAT_Mk1: 3as_laat_Base{};
class 3as_LAAT_Mk1Lights: 3as_laatFloodLight_Base{};
class 3as_LAAT_Mk2: 3as_laatUnarmed_Base{};
class 3as_LAAT_Mk2Lights: 3as_laatFloodLight_Base{};
class 3AS_LAATC;
