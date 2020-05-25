class Car_F;
class Wheeled_APC_F: Car_F
{
	class ViewOptics;
	class ViewCargo;
	class EventHandlers;
	
	class NewTurret;
	class Turrets
	{
		class MainTurret: NewTurret
		{
			class ViewOptics;
			class Turrets
			{
				class CommanderOptics;
			};
			class Components;
		};
	};

	class Components;

};
class O_SWOP_AAT_base:Wheeled_APC_F
{
	class Turrets:Turrets
	{
		class MainTurret:MainTurret
		{
			class Components:Components
			{
				class VehicleSystemsDisplayManagerComponentLeft;
				
				class VehicleSystemsDisplayManagerComponentRight;
				
			};
		};
	};
	class HitPoints;
	class Components:Components
	{
		class AICarSteeringComponent;
		class TransportCountermeasuresComponent;
		class VehicleSystemsDisplayManagerComponentLeft;
		
		class VehicleSystemsDisplayManagerComponentRight;
		

	};
};
class O_O_SWOP_AAT_base:O_SWOP_AAT_base
{
	class Turrets:Turrets
	{
		class MainTurret:MainTurret
		{
			class Turrets;
			class Components:Components
			{
				class VehicleSystemsDisplayManagerComponentLeft:VehicleSystemsDisplayManagerComponentLeft
				{
					class Components;
					
				};
				class VehicleSystemsDisplayManagerComponentRight:VehicleSystemsDisplayManagerComponentRight
				{
					class Components;
				};
			};
		};
		
	};
	class HitPoints:HitPoints
	{
		class HitBody;
		class HitEngine; 
		class HitFuel; 
		class HitLFWheel; 
		class HitLMWheel; 
		class HitLF2Wheel; 
		class HitRFWheel; 
		class HitRMWheel; 
		class HitRF2Wheel; 
	};
	class Components:Components
	{
		class AICarSteeringComponent:AICarSteeringComponent
		{

		};
		class TransportCountermeasuresComponent:TransportCountermeasuresComponent
		{

		};
		class VehicleSystemsDisplayManagerComponentLeft:VehicleSystemsDisplayManagerComponentLeft
		{
			class Components;
			
		};
		class VehicleSystemsDisplayManagerComponentRight:VehicleSystemsDisplayManagerComponentRight
		{
			class Components;
			
		};

	};
};


class O_SWOP_AAT_1:O_O_SWOP_AAT_base
{
	scope=0;

	class Turrets:Turrets
	{
		class MainTurret:MainTurret
		{
			class Turrets:Turrets
			{
				class CommanderOptics;
			};
			class Components:Components
			{
				class VehicleSystemsDisplayManagerComponentLeft:VehicleSystemsDisplayManagerComponentLeft
				{
					class Components:Components
					{
						class VehicleDriverDisplay;
						
						class VehiclePrimaryGunnerDisplay;
						
						class EmptyDisplay;
						
						class MinimapDisplay;
						
						class MineDetectorDisplay;
						
						class CrewDisplay;
						
						class UAVDisplay;
						
						class SlingLoadDisplay;
						
					};
				};
				class VehicleSystemsDisplayManagerComponentRight:VehicleSystemsDisplayManagerComponentRight
				{
					class Components:Components
					{
						class VehicleDriverDisplay;
						
						class VehiclePrimaryGunnerDisplay;
						
						class EmptyDisplay;
						
						class MinimapDisplay;
						
						class MineDetectorDisplay;
						
						class CrewDisplay;
						
						class UAVDisplay;
						
						class SlingLoadDisplay;
						
					};
				};
			};
		};
	};

	class HitPoints:HitPoints
	{
		class HitBody: HitBody
		{

		};
		class HitEngine: HitEngine
		{

		};
		class HitFuel: HitFuel
		{

		};
		class HitLFWheel: HitLFWheel
		{

		};
		class HitLMWheel: HitLMWheel
		{

		};
		class HitLF2Wheel: HitLF2Wheel
		{

		};
		class HitRFWheel: HitRFWheel
		{

		};
		class HitRMWheel: HitRMWheel
		{

		};
		class HitRF2Wheel: HitRF2Wheel
		{

		};
	};

	//drivers comp
	class Components:Components
	{
		
		class VehicleSystemsDisplayManagerComponentLeft:VehicleSystemsDisplayManagerComponentLeft
		{
			class Components:Components
			{
				class CrewDisplay;
				
				class EmptyDisplay;
				
				class MineDetectorDisplay;
				
				class MinimapDisplay;
				
				class SlingLoadDisplay;
				
				class UAVDisplay;
				
				class VehicleCommanderDisplay;
				
				class VehiclePrimaryGunnerDisplay;
				

			};
		};
		class VehicleSystemsDisplayManagerComponentRight:VehicleSystemsDisplayManagerComponentRight
		{
			class Components:Components
			{
				class CrewDisplay;
				
				class EmptyDisplay;
				
				class MineDetectorDisplay;
				
				class MinimapDisplay;
				
				class SlingLoadDisplay;
				
				class UAVDisplay;
				
				class VehicleCommanderDisplay;
				
				class VehiclePrimaryGunnerDisplay;

			};
		};

	};
};


