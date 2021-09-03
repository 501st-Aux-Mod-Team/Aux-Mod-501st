	class Air;
	class Plane: Air
	{
		class NewTurret;
		class ViewPilot;
		class HitPoints
		{
			class HitHull;
		};
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class Components;
	};
	class Plane_Fighter_03_base_F: Plane_Base_F
	{
		class ViewPilot;
		class Turrets
		{
			class MainTurret;
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
		class ViewPilot: ViewPilot{};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
			};
		};
		class Components: Components
		{
			class TransportPylonsComponent
			{
				class Pylons;
				class Presets;
			};
		};
	};
class 3as_arc_170_base:Plane_Fighter_03_dynamicLoadout_base_F
{
	class ViewPilot: ViewPilot{};
	class Turrets: Turrets
	{
		class LaserPilot:NewTurret{};
		class Reargun:NewTurret{};
	};
};
/*class 3as_arc_170_razor: 3as_arc_170_base
{
	class Components;
	class Turrets: Turrets
	{
		class LaserPilot;
		class Reargun;
	};
};*/
class NewTurret;
class 3as_arc_170_blue: 3as_arc_170_base
{
	class Components;
	class ViewPilot: ViewPilot{};
	class Turrets: Turrets
	{
		class LaserPilot:LaserPilot{};
		class Reargun:Reargun{};
	};
};
class 3as_arc_170_razor: 3as_arc_170_blue
{
	class Components:Components{};
	class Turrets: Turrets
	{
		class LaserPilot:LaserPilot{};
		class Reargun:Reargun{};
	};
};
class 3as_arc_170_red: 3as_arc_170_blue
{
	class Components:Components{};
	class Turrets: Turrets
	{
		class LaserPilot:LaserPilot{};
		class Reargun:Reargun{};
	};
};
class 3as_arc_170_orange: 3as_arc_170_blue
{
	class Components:Components{};
	class Turrets: Turrets
	{
		class LaserPilot:LaserPilot{};
		class Reargun:Reargun{};
	};
};