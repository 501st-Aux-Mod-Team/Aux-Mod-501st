class Heli_Attack_01_base_F;
class B_Heli_Attack_01_base_F: Heli_Attack_01_base_F
{
	class Turrets;
	class ViewPilot;
};
class 3as_laat_Base: B_Heli_Attack_01_base_F
{
	class UserActions;
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

// SWOP START HERE

class Helicopter_Base_F;

class Helicopter_Base_H: Helicopter_Base_F
{
	class Turrets;

	class Sounds;
	class SoundsExt;
};

class swop_LAAT:Helicopter_Base_H
{
	class RotorLibHelicopterProperties;
	class EventHandlers; 
	scope=0;
	class ACE_SelfActions;
	class Turrets: Turrets
	{
		class CopilotTurret;
		class GunnerTurret1;
		class GunnerTurret2;
		class CargoTurret_01;
		class CargoTurret_02;
		class CargoTurret_03;
		class CargoTurret_04;
		class CargoTurret_05;
		class CargoTurret_06;
		
	};
	class Sounds:Sounds
	{

	};
	class SoundsExt:SoundsExt
	{
		class Sounds;
	};
	forceInGarage=0;
};

class swop_LAATmk2:swop_LAAT
{
	class ACE_SelfActions;
	forceInGarage=0;
};

class swop_LAAT_cargo:swop_LAATmk2
{
	class ACE_SelfActions;
	forceInGarage=0;
};