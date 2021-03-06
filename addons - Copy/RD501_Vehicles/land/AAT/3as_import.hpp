// 3AS AATs
class LandVehicle;
class Tank: LandVehicle {
	class NewTurret;
	class Sounds;
	class HitPoints;
};

class Tank_F: Tank {
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class ViewGunner;
			class Turrets
			{
				class CommanderOptics;
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull;
		class HitFuel;
		class HitEngine;
		class HitLTrack;
		class HitRTrack;
	};
};

class 3AS_AAT_base_F : Tank_F {
	class Turrets : Turrets {
		class MainTurret: MainTurret {
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets {
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_CIS_AAT_base_F : 3AS_AAT_base_F {
	class Turrets : Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_CIS_AAT_F : 3AS_CIS_AAT_base_F {
	class Turrets : Turrets
	{
		class MainTurret: MainTurret
		{
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets
			{
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_AAT : 3AS_CIS_AAT_F {
	class Turrets : Turrets {
		class MainTurret: MainTurret {
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets {
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_AAT_snow : 3AS_AAT {
	class Turrets : Turrets {
		class MainTurret: MainTurret {
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets {
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_AAT_tan : 3AS_AAT {
	class Turrets : Turrets {
		class MainTurret: MainTurret {
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets {
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_AAT_urban : 3AS_AAT {
	class Turrets : Turrets {
		class MainTurret: MainTurret {
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets {
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};

class 3AS_AAT_Tropic : 3AS_AAT {
	class Turrets : Turrets {
		class MainTurret: MainTurret {
			class ViewGunner : ViewGunner {};
			class Turrets : Turrets {
				class CommanderOptics : CommanderOptics {};
			};
		};
	};
	class HitPoints: HitPoints
	{
		class HitHull:HitHull{};
		class HitFuel:HitFuel{};
		class HitEngine:HitEngine{};
		class HitLTrack:HitLTrack{};
		class HitRTrack:HitRTrack{};
	};
};