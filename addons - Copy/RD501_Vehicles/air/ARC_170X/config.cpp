#include "../../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(ARC_170X)
	{
		addonRootClass=macro_patch_name(vehicles)
		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(arc_170,base),
			macro_new_vehicle(arc_170,razor),
			macro_new_vehicle(arc_170,blue),
			macro_new_vehicle(arc_170,green),
			macro_new_vehicle(arc_170,Orange),
			macro_new_vehicle(arc_170,yellow),
			macro_new_vehicle(arc_170,red)
		};
		weapons[]={};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class CfgVehicles
{
	class thingX;
	class Motorcycle;
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
		class Turrets
		{
			class MainTurret;
		};
	};
	class Plane_Fighter_03_dynamicLoadout_base_F: Plane_Fighter_03_base_F
	{
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
	class CopilotTurret;
	class VTOL_01_base_F
	{
		class Turrets
		{
			class MainTurret
			{
			};
		};
		class Components
		{
		};
	};
	class NewTurret;
	class macro_new_vehicle(arc_170,base):Plane_Fighter_03_dynamicLoadout_base_F
	{
		class MFD
		{
			class 3as_ARC_MFD_HORIZON
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0.1;
				borderRight=0.1;
				borderTop=0.1;
				borderBottom=0.1;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				turret[]={-1};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.40000001};
					};
					class WeaponAim
					{
						type="vector";
						source="weapon";
						pos0[]={0.5,0.55500001};
						pos10[]={1.5,1.5549999};
					};
					class Velocity
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.52999997};
						pos10[]={1.5,1.53};
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.40000001};
						pos10[]={0.77399999,0.67000002};
						type="horizon";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
				};
				class Draw
				{
					color[]={0.082000002,0.40799999,0.039000001,1};
					alpha=1;
					condition="on";
					enableParallax=0;
					class Horizont
					{
						clipTL[]={0.255,0.105};
						clipBR[]={0.84500003,0.72500002};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.1,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.1,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
							class LevelM5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM5",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.22,0},
										1
									},
									
									{
										"LevelM5",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.19,0},
										1
									},
									
									{
										"LevelM5",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.16,0},
										1
									},
									
									{
										"LevelM5",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.13,0},
										1
									},
									
									{
										"LevelM5",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.1,0},
										1
									},
									
									{
										"LevelM5",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{-0.07,0},
										1
									},
									
									{
										"LevelM5",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM5",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM5",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.22,0},
										1
									},
									
									{
										"LevelM5",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.19,0},
										1
									},
									
									{
										"LevelM5",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.16,0},
										1
									},
									
									{
										"LevelM5",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.13,0},
										1
									},
									
									{
										"LevelM5",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.1,0},
										1
									},
									
									{
										"LevelM5",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM5",
										{0.07,0},
										1
									},
									
									{
										"LevelM5",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_5
							{
								type="text";
								source="static";
								text=-5;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_5_R
							{
								type="text";
								source="static";
								text=-5;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM5",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM5",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM5",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP5: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP5",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP5",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_5
							{
								type="text";
								source="static";
								text="5";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_5_R
							{
								type="text";
								source="static";
								text="5";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP5",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP5",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP5",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM10",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.22,0},
										1
									},
									
									{
										"LevelM10",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.19,0},
										1
									},
									
									{
										"LevelM10",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.16,0},
										1
									},
									
									{
										"LevelM10",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.13,0},
										1
									},
									
									{
										"LevelM10",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.1,0},
										1
									},
									
									{
										"LevelM10",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{-0.07,0},
										1
									},
									
									{
										"LevelM10",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM10",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM10",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.22,0},
										1
									},
									
									{
										"LevelM10",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.19,0},
										1
									},
									
									{
										"LevelM10",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.16,0},
										1
									},
									
									{
										"LevelM10",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.13,0},
										1
									},
									
									{
										"LevelM10",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.1,0},
										1
									},
									
									{
										"LevelM10",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM10",
										{0.07,0},
										1
									},
									
									{
										"LevelM10",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_10
							{
								type="text";
								source="static";
								text=-10;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_10_R
							{
								type="text";
								source="static";
								text=-10;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM10",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM10",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM10",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP10: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP10",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP10",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_10
							{
								type="text";
								source="static";
								text="10";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_10_R
							{
								type="text";
								source="static";
								text="10";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP10",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP10",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP10",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM15",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.22,0},
										1
									},
									
									{
										"LevelM15",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.19,0},
										1
									},
									
									{
										"LevelM15",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.16,0},
										1
									},
									
									{
										"LevelM15",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.13,0},
										1
									},
									
									{
										"LevelM15",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.1,0},
										1
									},
									
									{
										"LevelM15",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{-0.07,0},
										1
									},
									
									{
										"LevelM15",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM15",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM15",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.22,0},
										1
									},
									
									{
										"LevelM15",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.19,0},
										1
									},
									
									{
										"LevelM15",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.16,0},
										1
									},
									
									{
										"LevelM15",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.13,0},
										1
									},
									
									{
										"LevelM15",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.1,0},
										1
									},
									
									{
										"LevelM15",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM15",
										{0.07,0},
										1
									},
									
									{
										"LevelM15",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_15
							{
								type="text";
								source="static";
								text=-15;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_15_R
							{
								type="text";
								source="static";
								text=-15;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM15",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM15",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM15",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP15: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP15",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP15",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_15
							{
								type="text";
								source="static";
								text="15";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_15_R
							{
								type="text";
								source="static";
								text="15";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP15",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP15",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP15",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM20",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.22,0},
										1
									},
									
									{
										"LevelM20",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.19,0},
										1
									},
									
									{
										"LevelM20",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.16,0},
										1
									},
									
									{
										"LevelM20",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.13,0},
										1
									},
									
									{
										"LevelM20",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.1,0},
										1
									},
									
									{
										"LevelM20",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{-0.07,0},
										1
									},
									
									{
										"LevelM20",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM20",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM20",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.22,0},
										1
									},
									
									{
										"LevelM20",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.19,0},
										1
									},
									
									{
										"LevelM20",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.16,0},
										1
									},
									
									{
										"LevelM20",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.13,0},
										1
									},
									
									{
										"LevelM20",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.1,0},
										1
									},
									
									{
										"LevelM20",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM20",
										{0.07,0},
										1
									},
									
									{
										"LevelM20",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_20
							{
								type="text";
								source="static";
								text=-20;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_20_R
							{
								type="text";
								source="static";
								text=-20;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM20",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM20",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM20",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP20: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP20",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP20",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_20
							{
								type="text";
								source="static";
								text="20";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_20_R
							{
								type="text";
								source="static";
								text="20";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP20",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP20",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP20",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM25",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.22,0},
										1
									},
									
									{
										"LevelM25",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.19,0},
										1
									},
									
									{
										"LevelM25",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.16,0},
										1
									},
									
									{
										"LevelM25",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.13,0},
										1
									},
									
									{
										"LevelM25",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.1,0},
										1
									},
									
									{
										"LevelM25",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{-0.07,0},
										1
									},
									
									{
										"LevelM25",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM25",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM25",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.22,0},
										1
									},
									
									{
										"LevelM25",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.19,0},
										1
									},
									
									{
										"LevelM25",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.16,0},
										1
									},
									
									{
										"LevelM25",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.13,0},
										1
									},
									
									{
										"LevelM25",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.1,0},
										1
									},
									
									{
										"LevelM25",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM25",
										{0.07,0},
										1
									},
									
									{
										"LevelM25",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_25
							{
								type="text";
								source="static";
								text=-25;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_25_R
							{
								type="text";
								source="static";
								text=-25;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM25",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM25",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM25",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP25: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP25",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP25",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_25
							{
								type="text";
								source="static";
								text="25";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_25_R
							{
								type="text";
								source="static";
								text="25";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP25",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP25",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP25",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM30",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.22,0},
										1
									},
									
									{
										"LevelM30",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.19,0},
										1
									},
									
									{
										"LevelM30",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.16,0},
										1
									},
									
									{
										"LevelM30",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.13,0},
										1
									},
									
									{
										"LevelM30",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.1,0},
										1
									},
									
									{
										"LevelM30",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{-0.07,0},
										1
									},
									
									{
										"LevelM30",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM30",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM30",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.22,0},
										1
									},
									
									{
										"LevelM30",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.19,0},
										1
									},
									
									{
										"LevelM30",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.16,0},
										1
									},
									
									{
										"LevelM30",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.13,0},
										1
									},
									
									{
										"LevelM30",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.1,0},
										1
									},
									
									{
										"LevelM30",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM30",
										{0.07,0},
										1
									},
									
									{
										"LevelM30",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_30
							{
								type="text";
								source="static";
								text=-30;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_30_R
							{
								type="text";
								source="static";
								text=-30;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM30",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM30",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM30",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP30: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP30",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP30",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_30
							{
								type="text";
								source="static";
								text="30";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_30_R
							{
								type="text";
								source="static";
								text="30";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP30",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP30",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP30",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM35",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.22,0},
										1
									},
									
									{
										"LevelM35",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.19,0},
										1
									},
									
									{
										"LevelM35",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.16,0},
										1
									},
									
									{
										"LevelM35",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.13,0},
										1
									},
									
									{
										"LevelM35",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.1,0},
										1
									},
									
									{
										"LevelM35",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{-0.07,0},
										1
									},
									
									{
										"LevelM35",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM35",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM35",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.22,0},
										1
									},
									
									{
										"LevelM35",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.19,0},
										1
									},
									
									{
										"LevelM35",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.16,0},
										1
									},
									
									{
										"LevelM35",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.13,0},
										1
									},
									
									{
										"LevelM35",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.1,0},
										1
									},
									
									{
										"LevelM35",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM35",
										{0.07,0},
										1
									},
									
									{
										"LevelM35",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_35
							{
								type="text";
								source="static";
								text=-35;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_35_R
							{
								type="text";
								source="static";
								text=-35;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM35",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM35",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM35",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP35: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP35",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP35",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_35
							{
								type="text";
								source="static";
								text="35";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_35_R
							{
								type="text";
								source="static";
								text="35";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP35",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP35",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP35",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM40",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.22,0},
										1
									},
									
									{
										"LevelM40",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.19,0},
										1
									},
									
									{
										"LevelM40",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.16,0},
										1
									},
									
									{
										"LevelM40",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.13,0},
										1
									},
									
									{
										"LevelM40",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.1,0},
										1
									},
									
									{
										"LevelM40",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{-0.07,0},
										1
									},
									
									{
										"LevelM40",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM40",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM40",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.22,0},
										1
									},
									
									{
										"LevelM40",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.19,0},
										1
									},
									
									{
										"LevelM40",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.16,0},
										1
									},
									
									{
										"LevelM40",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.13,0},
										1
									},
									
									{
										"LevelM40",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.1,0},
										1
									},
									
									{
										"LevelM40",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM40",
										{0.07,0},
										1
									},
									
									{
										"LevelM40",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_40
							{
								type="text";
								source="static";
								text=-40;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_40_R
							{
								type="text";
								source="static";
								text=-40;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM40",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM40",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM40",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP40: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP40",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP40",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_40
							{
								type="text";
								source="static";
								text="40";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_40_R
							{
								type="text";
								source="static";
								text="40";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP40",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP40",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP40",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM45",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.22,0},
										1
									},
									
									{
										"LevelM45",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.19,0},
										1
									},
									
									{
										"LevelM45",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.16,0},
										1
									},
									
									{
										"LevelM45",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.13,0},
										1
									},
									
									{
										"LevelM45",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.1,0},
										1
									},
									
									{
										"LevelM45",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{-0.07,0},
										1
									},
									
									{
										"LevelM45",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM45",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM45",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.22,0},
										1
									},
									
									{
										"LevelM45",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.19,0},
										1
									},
									
									{
										"LevelM45",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.16,0},
										1
									},
									
									{
										"LevelM45",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.13,0},
										1
									},
									
									{
										"LevelM45",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.1,0},
										1
									},
									
									{
										"LevelM45",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM45",
										{0.07,0},
										1
									},
									
									{
										"LevelM45",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_45
							{
								type="text";
								source="static";
								text=-45;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_45_R
							{
								type="text";
								source="static";
								text=-45;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM45",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM45",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM45",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP45: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP45",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP45",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_45
							{
								type="text";
								source="static";
								text="45";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_45_R
							{
								type="text";
								source="static";
								text="45";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP45",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP45",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP45",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM50",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.22,0},
										1
									},
									
									{
										"LevelM50",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.19,0},
										1
									},
									
									{
										"LevelM50",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.16,0},
										1
									},
									
									{
										"LevelM50",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.13,0},
										1
									},
									
									{
										"LevelM50",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.1,0},
										1
									},
									
									{
										"LevelM50",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{-0.07,0},
										1
									},
									
									{
										"LevelM50",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM50",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM50",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.22,0},
										1
									},
									
									{
										"LevelM50",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.19,0},
										1
									},
									
									{
										"LevelM50",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.16,0},
										1
									},
									
									{
										"LevelM50",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.13,0},
										1
									},
									
									{
										"LevelM50",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.1,0},
										1
									},
									
									{
										"LevelM50",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM50",
										{0.07,0},
										1
									},
									
									{
										"LevelM50",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_50
							{
								type="text";
								source="static";
								text=-50;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_50_R
							{
								type="text";
								source="static";
								text=-50;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM50",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM50",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM50",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP50: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP50",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP50",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_50
							{
								type="text";
								source="static";
								text="50";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_50_R
							{
								type="text";
								source="static";
								text="50";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP50",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP50",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP50",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM60",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.22,0},
										1
									},
									
									{
										"LevelM60",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.19,0},
										1
									},
									
									{
										"LevelM60",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.16,0},
										1
									},
									
									{
										"LevelM60",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.13,0},
										1
									},
									
									{
										"LevelM60",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.1,0},
										1
									},
									
									{
										"LevelM60",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{-0.07,0},
										1
									},
									
									{
										"LevelM60",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM60",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM60",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.22,0},
										1
									},
									
									{
										"LevelM60",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.19,0},
										1
									},
									
									{
										"LevelM60",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.16,0},
										1
									},
									
									{
										"LevelM60",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.13,0},
										1
									},
									
									{
										"LevelM60",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.1,0},
										1
									},
									
									{
										"LevelM60",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM60",
										{0.07,0},
										1
									},
									
									{
										"LevelM60",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_60
							{
								type="text";
								source="static";
								text=-60;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_60_R
							{
								type="text";
								source="static";
								text=-60;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM60",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM60",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM60",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP60: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP60",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP60",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_60
							{
								type="text";
								source="static";
								text="60";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_60_R
							{
								type="text";
								source="static";
								text="60";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP60",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP60",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP60",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM70",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.22,0},
										1
									},
									
									{
										"LevelM70",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.19,0},
										1
									},
									
									{
										"LevelM70",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.16,0},
										1
									},
									
									{
										"LevelM70",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.13,0},
										1
									},
									
									{
										"LevelM70",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.1,0},
										1
									},
									
									{
										"LevelM70",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{-0.07,0},
										1
									},
									
									{
										"LevelM70",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM70",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM70",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.22,0},
										1
									},
									
									{
										"LevelM70",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.19,0},
										1
									},
									
									{
										"LevelM70",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.16,0},
										1
									},
									
									{
										"LevelM70",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.13,0},
										1
									},
									
									{
										"LevelM70",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.1,0},
										1
									},
									
									{
										"LevelM70",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM70",
										{0.07,0},
										1
									},
									
									{
										"LevelM70",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_70
							{
								type="text";
								source="static";
								text=-70;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_70_R
							{
								type="text";
								source="static";
								text=-70;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM70",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM70",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM70",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP70: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP70",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP70",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_70
							{
								type="text";
								source="static";
								text="70";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_70_R
							{
								type="text";
								source="static";
								text="70";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP70",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP70",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP70",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM80",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.22,0},
										1
									},
									
									{
										"LevelM80",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.19,0},
										1
									},
									
									{
										"LevelM80",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.16,0},
										1
									},
									
									{
										"LevelM80",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.13,0},
										1
									},
									
									{
										"LevelM80",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.1,0},
										1
									},
									
									{
										"LevelM80",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{-0.07,0},
										1
									},
									
									{
										"LevelM80",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM80",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM80",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.22,0},
										1
									},
									
									{
										"LevelM80",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.19,0},
										1
									},
									
									{
										"LevelM80",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.16,0},
										1
									},
									
									{
										"LevelM80",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.13,0},
										1
									},
									
									{
										"LevelM80",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.1,0},
										1
									},
									
									{
										"LevelM80",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM80",
										{0.07,0},
										1
									},
									
									{
										"LevelM80",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_80
							{
								type="text";
								source="static";
								text=-80;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_80_R
							{
								type="text";
								source="static";
								text=-80;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM80",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM80",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM80",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP80: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP80",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP80",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_80
							{
								type="text";
								source="static";
								text="80";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_80_R
							{
								type="text";
								source="static";
								text="80";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP80",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP80",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP80",
									{0.25999999,0.033},
									1
								};
							};
							class LevelM90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelM90",
										{-0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{-0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.22,0},
										1
									},
									
									{
										"LevelM90",
										{-0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.19,0},
										1
									},
									
									{
										"LevelM90",
										{-0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.16,0},
										1
									},
									
									{
										"LevelM90",
										{-0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.13,0},
										1
									},
									
									{
										"LevelM90",
										{-0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.1,0},
										1
									},
									
									{
										"LevelM90",
										{-0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{-0.07,0},
										1
									},
									
									{
										"LevelM90",
										{-0.055,0},
										1
									},
									{},
									{},
									
									{
										"LevelM90",
										{0.235,-0.02},
										1
									},
									
									{
										"LevelM90",
										{0.235,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.22,0},
										1
									},
									
									{
										"LevelM90",
										{0.205,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.19,0},
										1
									},
									
									{
										"LevelM90",
										{0.175,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.16,0},
										1
									},
									
									{
										"LevelM90",
										{0.145,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.13,0},
										1
									},
									
									{
										"LevelM90",
										{0.115,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.1,0},
										1
									},
									
									{
										"LevelM90",
										{0.085000001,0},
										1
									},
									{},
									
									{
										"LevelM90",
										{0.07,0},
										1
									},
									
									{
										"LevelM90",
										{0.055,0},
										1
									},
									{}
								};
							};
							class VALM_1_90
							{
								type="text";
								source="static";
								text=-90;
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{-0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{-0.2,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{-0.25999999,0.017999999},
									1
								};
							};
							class VALM_1_90_R
							{
								type="text";
								source="static";
								text=-90;
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelM90",
									{0.25999999,-0.032000002},
									1
								};
								right[]=
								{
									"LevelM90",
									{0.31999999,-0.032000002},
									1
								};
								down[]=
								{
									"LevelM90",
									{0.25999999,0.017999999},
									1
								};
							};
							class LevelP90: Level0
							{
								type="line";
								points[]=
								{
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0.02
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"-0.22-0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										{-0.059999999,0},
										1
									},
									{},
									
									{
										"LevelP90",
										{0.059999999,0},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0
										},
										1
									},
									
									{
										"LevelP90",
										
										{
											"+0.22+0.015",
											0.02
										},
										1
									}
								};
							};
							class VALP_1_90
							{
								type="text";
								source="static";
								text="90";
								align="left";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{-0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{-0.2,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{-0.25999999,0.033},
									1
								};
							};
							class VALP_1_90_R
							{
								type="text";
								source="static";
								text="90";
								align="right";
								scale=1;
								sourceScale=1;
								pos[]=
								{
									"LevelP90",
									{0.25999999,-0.017000001},
									1
								};
								right[]=
								{
									"LevelP90",
									{0.31999999,-0.017000001},
									1
								};
								down[]=
								{
									"LevelP90",
									{0.25999999,0.033},
									1
								};
							};
						};
					};
				};
			};
			class 3as_ARC_MFD_HORIZON_NUMBERS
			{
				topLeft="mfd lh";
				topRight="mfd ph";
				bottomLeft="mfd ld";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				turret[]={-1};
				class Bones
				{
					class PlaneOrientation
					{
						type="fixed";
						pos[]={0.5,0.5};
					};
				};
				class Draw
				{
					color[]={0.082000002,0.40799999,0.039000001,1};
					alpha=0.69999999;
					condition="on";
					enableParallax=0;
					class ASNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"-0.375 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								-0.375,
								"-0.47 + 0.145"
							},
							1
						};
					};
					class ALTNumber
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.05"
							},
							1
						};
						right[]=
						{
							"PlaneOrientation",
							
							{
								"0.35 + 0.08",
								"-0.47 + 0.05"
							},
							1
						};
						down[]=
						{
							"PlaneOrientation",
							
							{
								0.34999999,
								"-0.47 + 0.145"
							},
							1
						};
					};
				};
			};
			class 3as_ARC_MFD_CENTRAL
			{
				topLeft="MFD_1_TL";
				topRight="MFD_1_TR";
				bottomLeft="MFD_1_BL";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				enableParallax=0;
				turret[]={-1};
				class Bones
				{
					class Center
					{
						type="fixed";
						pos[]={0.37,0.37};
					};
				};
				class Draw
				{
					color[]={0,0.12,0};
					alpha=1;
					condition="on";
					class Pylon1
					{
						type="pylonicon";
						pos[]=
						{
							{0.82999998,0.5},
							1
						};
						pylon=1;
						name="Plane_Fighter_01";
					};
					class Pylon2: Pylon1
					{
						pos[]=
						{
							{0.16,0.5},
							1
						};
						pylon=2;
					};
					class Pylon3: Pylon1
					{
						pos[]=
						{
							{0.71499997,0.44},
							1
						};
						pylon=3;
					};
					class Pylon4: Pylon1
					{
						pos[]=
						{
							{0.27500001,0.44},
							1
						};
						pylon=4;
					};
					class Pylon5: Pylon1
					{
						pos[]=
						{
							{0.61500001,0.37},
							1
						};
						pylon=5;
					};
					class Pylon6: Pylon1
					{
						pos[]=
						{
							{0.375,0.37},
							1
						};
						pylon=6;
					};
					class Pylon7: Pylon1
					{
						pos[]=
						{
							{0.66500002,0.57999998},
							1
						};
						pylon=7;
					};
					class Pylon8: Pylon1
					{
						pos[]=
						{
							{0.32499999,0.57999998},
							1
						};
						pylon=8;
					};
					class Pylon9: Pylon1
					{
						pos[]=
						{
							{0.59500003,0.55000001},
							1
						};
						pylon=9;
					};
					class Pylon10: Pylon1
					{
						pos[]=
						{
							{0.39500001,0.55000001},
							1
						};
						pylon=10;
					};
					class Pylon11: Pylon1
					{
						pos[]=
						{
							{0.52999997,0.51999998},
							1
						};
						pylon=11;
					};
					class Pylon12: Pylon1
					{
						pos[]=
						{
							{0.46000001,0.51999998},
							1
						};
						pylon=12;
					};
					class Gatling_Ammo
					{
						type="text";
						source="ammo";
						sourceIndex=0;
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							{0.49000001,0.27000001},
							1
						};
						right[]=
						{
							{0.56,0.27000001},
							1
						};
						down[]=
						{
							{0.49000001,0.331},
							1
						};
					};
					class PylonText1
					{
						type="text";
						source="static";
						text="SELECTED WEAPON";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.66000003
							},
							1
						};
						right[]=
						{
							{0.52499998,0.66000003},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.70499998
							},
							1
						};
					};
					class WeaponText
					{
						type="text";
						source="weapon";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.69999999
							},
							1
						};
						right[]=
						{
							{0.54500002,0.69999999},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.76499999
							},
							1
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						scale=1;
						sourceScale=1;
						align="center";
						pos[]=
						{
							
							{
								"0.49 - 0.015",
								0.75999999
							},
							1
						};
						right[]=
						{
							{0.54500002,0.75999999},
							1
						};
						down[]=
						{
							
							{
								"0.49 - 0.015",
								0.82499999
							},
							1
						};
					};
					class CM_Name
					{
						type="text";
						source="CMWeapon";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.285,0.12},
							1
						};
						right[]=
						{
							{0.345,0.12},
							1
						};
						down[]=
						{
							{0.285,0.171},
							1
						};
					};
					class CM_Ammo
					{
						type="text";
						source="CMAmmo";
						scale=1;
						sourceScale=1;
						align="left";
						pos[]=
						{
							{0.285,0.16},
							1
						};
						right[]=
						{
							{0.345,0.16},
							1
						};
						down[]=
						{
							{0.285,0.211},
							1
						};
					};
					class Static
					{
						type="line";
						width=4;
						points[]=
						{
							
							{
								{0.11,0.12},
								1
							},
							
							{
								{0.33000001,0.12},
								1
							},
							
							{
								{0.33000001,0.22},
								1
							},
							
							{
								{0.11,0.22},
								1
							},
							
							{
								{0.11,0.12},
								1
							}
						};
					};
				};
			};
			class 3as_ARC_Fighter_01_static_HUD
			{
				enableParallax=0;
				helmetMountedDisplay=1;
				helmetPosition[]={-0.032499999,0.032499999,0.1};
				helmetRight[]={0.064999998,0,0};
				helmetDown[]={0,-0.064999998,0};
				class Pos10Vector
				{
					type="vector";
					pos0[]={0.5,0.5};
					pos10[]={1.225,1.1};
				};
				topLeft="HUD LH";
				topRight="HUD PH";
				bottomLeft="HUD LD";
				borderLeft=0;
				borderRight=0;
				borderTop=0;
				borderBottom=0;
				color[]={0.082000002,0.40799999,0.039000001,1};
				turret[]={-1};
				class Bones
				{
					class PlaneW
					{
						type="fixed";
						pos[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Velocity: Pos10Vector
					{
						type="vector";
						source="velocityToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class PlaneOrientation
					{
						type="vector";
						source="forward";
						pos[]={0.5,0.5};
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WeaponAim
					{
						type="vector";
						source="weaponToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class MissileFlightTimeRot1
					{
						type="rotational";
						source="MissileFlightTime";
						sourceScale=1;
						center[]={0,0};
						min=0;
						max=0.5;
						minAngle=0;
						maxAngle=18;
						aspectRatio=0.98540199;
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle=36;
						max=1;
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle=54;
						max=1.5;
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle=72;
						max=2;
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle=90;
						max=2.5;
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle=108;
						max=3;
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle=126;
						max=3.5;
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle=144;
						max=4;
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle=162;
						max=4.5;
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle=180;
						max=5;
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle=198;
						max=5.5;
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle=216;
						max=6;
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle=234;
						max=6.5;
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle=252;
						max=7;
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle=270;
						max=7.5;
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle=288;
						max=8;
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle=306;
						max=8.5;
					};
					class MissileFlightTimeRot18: MissileFlightTimeRot1
					{
						maxAngle=324;
						max=9;
					};
					class MissileFlightTimeRot19: MissileFlightTimeRot1
					{
						maxAngle=342;
						max=9.5;
					};
					class MissileFlightTimeRot20: MissileFlightTimeRot1
					{
						maxAngle=360;
						max=10;
					};
					class Target
					{
						type="vector";
						source="targetToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodDir
					{
						source="pilotcameratoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class TargetingPodTarget
					{
						source="pilotcameratargettoview";
						type="vector";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPoint
					{
						type="vector";
						source="ImpactPointToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class ImpactPointRelative
					{
						type="vector";
						source="impactpointtoviewweaponRelative";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class NormalizeBombCircle
					{
						type="normalizedorsmaller";
						limit=0.079999998;
						aspectRatio=0.98540199;
					};
					class Limit0109
					{
						type="limit";
						limits[]={0.1,0.1,0.89999998,0.89999998};
					};
					class LimitWaypoint
					{
						type="limit";
						limits[]={0.2,0.1,0.80000001,0.1};
					};
					class WPPoint
					{
						type="vector";
						source="WPPoint";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class WPPointToView: WPPoint
					{
						source="WPPointToView";
					};
					class Airport1
					{
						type="vector";
						source="airportCorner1ToView";
						pos0[]={0.5,0.5};
						pos10[]={0.77399999,0.76999998};
					};
					class Airport2: Airport1
					{
						source="airportCorner2ToView";
					};
					class Airport3: Airport1
					{
						source="airportCorner3ToView";
					};
					class Airport4: Airport1
					{
						source="airportCorner4ToView";
					};
					class ILS_H
					{
						type="ils";
						pos0[]={0.5,0.5};
						pos3[]={0.58219999,0.5};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,0.58099997};
					};
					class HorizonBankRot
					{
						type="rotational";
						source="horizonBank";
						center[]={0.5,0.5};
						min="-rad(30)";
						max="rad(30)";
						minAngle="180.25-30";
						maxAngle="180.75+30";
						aspectRatio=1;
					};
					class Level0: Pos10Vector
					{
						pos0[]={0.5,0.5};
						pos10[]={0.884,0.88};
						type="horizontoview";
						angle=0;
					};
					class LevelP5: Level0
					{
						angle=5;
					};
					class LevelM5: Level0
					{
						angle=-5;
					};
					class LevelP10: Level0
					{
						angle=10;
					};
					class LevelM10: Level0
					{
						angle=-10;
					};
					class LevelP15: Level0
					{
						angle=15;
					};
					class LevelM15: Level0
					{
						angle=-15;
					};
					class LevelP20: Level0
					{
						angle=20;
					};
					class LevelM20: Level0
					{
						angle=-20;
					};
					class LevelP25: Level0
					{
						angle=25;
					};
					class LevelM25: Level0
					{
						angle=-25;
					};
					class LevelP30: Level0
					{
						angle=30;
					};
					class LevelM30: Level0
					{
						angle=-30;
					};
					class LevelP35: Level0
					{
						angle=35;
					};
					class LevelM35: Level0
					{
						angle=-35;
					};
					class LevelP40: Level0
					{
						angle=40;
					};
					class LevelM40: Level0
					{
						angle=-40;
					};
					class LevelP45: Level0
					{
						angle=45;
					};
					class LevelM45: Level0
					{
						angle=-45;
					};
					class LevelP50: Level0
					{
						angle=50;
					};
					class LevelM50: Level0
					{
						angle=-50;
					};
					class LevelP60: Level0
					{
						angle=60;
					};
					class LevelM60: Level0
					{
						angle=-60;
					};
					class LevelP70: Level0
					{
						angle=70;
					};
					class LevelM70: Level0
					{
						angle=-70;
					};
					class LevelP80: Level0
					{
						angle=80;
					};
					class LevelM80: Level0
					{
						angle=-80;
					};
					class LevelP90: Level0
					{
						angle=90;
					};
					class LevelM90: Level0
					{
						angle=-90;
					};
					class LarAmmoMax
					{
						type="linear";
						source="LarAmmoMax";
						sourceScale=1;
						min=0;
						max=1;
						minPos[]={0,1};
						maxPos[]={0,0};
					};
					class LarAmmoMin: LarAmmoMax
					{
						source="LarAmmoMin";
					};
					class LarTargetDist: LarAmmoMax
					{
						source="LarTargetDist";
					};
				};
				class Draw
				{
					width=1;
					alpha="user3";
					color[]=
					{
						"user0",
						"user1",
						"user2"
					};
					condition="(1 - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24))*on";
					class PlaneW
					{
						clipTL[]={0,1};
						clipBR[]={1,0};
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneOrientation",
								{-0.039999999,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{-0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.0074999998,0.015},
								1
							},
							
							{
								"PlaneOrientation",
								{0.015,0},
								1
							},
							
							{
								"PlaneOrientation",
								{0.039999999,0},
								1
							}
						};
					};
					class PlaneMovementCrosshair
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							
							{
								"Velocity",
								{0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{0,0.02},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,0.01732},
								1
							},
							
							{
								"Velocity",
								{-0.01732,0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							
							{
								"Velocity",
								{-0.01732,-0.0099999998},
								1
							},
							
							{
								"Velocity",
								{-0.0099999998,-0.01732},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							},
							{},
							
							{
								"Velocity",
								{0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{-0.039999999,0},
								1
							},
							
							{
								"Velocity",
								{-0.02,0},
								1
							},
							{},
							
							{
								"Velocity",
								{0,-0.039999999},
								1
							},
							
							{
								"Velocity",
								{0,-0.02},
								1
							}
						};
					};
					class MachineGunCrosshairGroup
					{
						type="group";
						condition="-2+(mgun+rocket)*ImpactDistance";
						class MachineGunCrosshair
						{
							type="polygon";
							width=4;
							points[]=
							{
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,-0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{0.0030781799,-0.0095255198},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,-0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,-0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{0.0057850899,-0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,-0.0065158401},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,-0.0065158401},
										1
									},
									
									{
										"ImpactPoint",
										{0.0077942298,-0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,-0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,-0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{0.0088632703,-0.0017602399},
										1
									},
									
									{
										"ImpactPoint",
										{0.0089999996,4.4309501e-010},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0089999996,4.4309501e-010},
										1
									},
									
									{
										"ImpactPoint",
										{0.0088632703,0.0017602399},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0084572304,0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{0.0077942298,0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,0.0065158401},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0068943999,0.0065158401},
										1
									},
									
									{
										"ImpactPoint",
										{0.0057850899,0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0044999998,0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{0.0030781799,0.0095255198},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{-7.8680501e-010,0.0101368},
										1
									},
									
									{
										"ImpactPoint",
										{-0.00156284,0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.00156284,0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0030781799,0.0095255198},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0057850899,0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,0.0065158298},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,0.0065158298},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0077942298,0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0088632703,0.0017602399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0089999996,-1.20881e-010},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0089999996,-1.20881e-010},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0088632703,-0.00176025},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,-0.0034670001},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0084572304,-0.0034670001},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0077942298,-0.00506842},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,-0.0065158298},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0068943999,-0.0065158298},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0057850899,-0.0077652698},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,-0.0087787602},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0044999998,-0.0087787602},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0030781799,-0.0095255096},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0015628299,-0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										1,
										{0,0},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0015628299,-0.0099828402},
										1
									},
									
									{
										"ImpactPoint",
										{1.57361e-009,-0.0101368},
										1
									},
									
									{
										"ImpactPoint",
										{0.0015628299,-0.0099828402},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0,0.0394211},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0043577901,0.056101501},
										1
									},
									
									{
										"ImpactPoint",
										{0,0.0732105},
										1
									},
									
									{
										"ImpactPoint",
										{0.0043577901,0.056101501},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0.0247487,0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{0.032139398,0.0431404},
										1
									},
									
									{
										"ImpactPoint",
										{0.045961902,0.051767699},
										1
									},
									
									{
										"ImpactPoint",
										{0.038302202,0.0361991},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0.035,-1.72315e-009},
										1
									},
									
									{
										"ImpactPoint",
										{0.049809702,0.0049082502},
										1
									},
									
									{
										"ImpactPoint",
										{0.064999998,-3.2001299e-009},
										1
									},
									
									{
										"ImpactPoint",
										{0.049809702,-0.0049082502},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{0.0247487,-0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{0.038302202,-0.0361991},
										1
									},
									
									{
										"ImpactPoint",
										{0.045961902,-0.051767699},
										1
									},
									
									{
										"ImpactPoint",
										{0.032139398,-0.0431404},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-3.0598e-009,-0.0394211},
										1
									},
									
									{
										"ImpactPoint",
										{0.0043577799,-0.056101501},
										1
									},
									
									{
										"ImpactPoint",
										{-5.6824798e-009,-0.0732105},
										1
									},
									
									{
										"ImpactPoint",
										{-0.0043577901,-0.056101501},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-0.0247487,-0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{-0.032139398,-0.0431404},
										1
									},
									
									{
										"ImpactPoint",
										{-0.045961902,-0.051767699},
										1
									},
									
									{
										"ImpactPoint",
										{-0.038302202,-0.0361991},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-0.035,4.7009102e-010},
										1
									},
									
									{
										"ImpactPoint",
										{-0.049809702,-0.0049082399},
										1
									},
									
									{
										"ImpactPoint",
										{-0.064999998,8.7302698e-010},
										1
									},
									
									{
										"ImpactPoint",
										{-0.049809702,0.0049082399},
										1
									}
								},
								
								{
									
									{
										"ImpactPoint",
										{-0.0247487,0.0278749},
										1
									},
									
									{
										"ImpactPoint",
										{-0.038302202,0.0361991},
										1
									},
									
									{
										"ImpactPoint",
										{-0.045961902,0.051767599},
										1
									},
									
									{
										"ImpactPoint",
										{-0.032139398,0.0431404},
										1
									}
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPointRelative",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPointRelative",
									1
								}
							};
						};
						class Circle_Min_Range
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPointRelative",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPointRelative",
									{0,-0.078832097},
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPointRelative",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPointRelative",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class AAMissileCrosshairGroup
					{
						type="group";
						condition="AAmissile";
						class AAMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,0.24635001},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.25,0},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2462,-0.0427664},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.234925,-0.084251799},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.2165,-0.123175},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.19149999,-0.158354},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.16069999,-0.188704},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.125,-0.213339},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.085500002,-0.23149499},
									1
								},
								
								{
									"PlaneOrientation",
									{-0.043400001,-0.242606},
									1
								},
								
								{
									"PlaneOrientation",
									{0,-0.24635001},
									1
								}
							};
						};
						class Lines
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									{0.20999999,0.55000001},
									1
								},
								
								{
									{0.19,0.55000001},
									1
								},
								
								{
									{0.19,0.70999998},
									1
								},
								
								{
									{0.20999999,0.70999998},
									1
								},
								{},
								
								{
									{0.20999999,0.67000002},
									1
								},
								
								{
									{0.19,0.67000002},
									1
								},
								{},
								
								{
									{0.20999999,0.63},
									1
								},
								
								{
									{0.19,0.63},
									1
								},
								{},
								
								{
									{0.20999999,0.58999997},
									1
								},
								
								{
									{0.19,0.58999997},
									1
								},
								{},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.73000002},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.19,0.70999998},
									1
								},
								
								{
									"LarTargetDist",
									-0.16,
									{0.17,0.69},
									1
								},
								{}
							};
						};
						class Poly
						{
							type="polygon";
							points[]=
							{
								
								{
									
									{
										"LarAmmoMin",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.191,0.70999998},
										1
									},
									
									{
										"LarAmmoMax",
										-0.16,
										{0.208,0.70999998},
										1
									},
									
									{
										"LarAmmoMin",
										-0.16,
										{0.208,0.70999998},
										1
									}
								}
							};
						};
						class TopText
						{
							type="text";
							source="LarTop";
							sourceScale=0.001;
							scale=1;
							pos[]=
							{
								{0.22,0.52999997},
								1
							};
							right[]=
							{
								{0.25999999,0.52999997},
								1
							};
							down[]=
							{
								{0.22,0.56999999},
								1
							};
							align="right";
						};
						class MiddleText: TopText
						{
							source="LarTop";
							sourcePrecision=-1;
							sourceScale=0.00050000002;
							pos[]=
							{
								{0.22,0.61000001},
								1
							};
							right[]=
							{
								{0.25999999,0.61000001},
								1
							};
							down[]=
							{
								{0.22,0.64999998},
								1
							};
						};
						class SpeedText: TopText
						{
							source="LarTargetSpeed";
							align="left";
							sourceScale=3.5999999;
							pos[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.69},
								1
							};
							right[]=
							{
								"LarTargetDist",
								-0.16,
								{0.2,0.69},
								1
							};
							down[]=
							{
								"LarTargetDist",
								-0.16,
								{0.16,0.73000002},
								1
							};
						};
					};
					class ATMissileCrosshairGroup
					{
						condition="ATmissile";
						type="group";
						class ATMissileCrosshair
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,-0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.15000001,0.13},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{-0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{-0.13,0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,-0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,-0.15000001},
									1
								},
								{},
								
								{
									"WeaponAim",
									{0.15000001,0.15000001},
									1
								},
								
								{
									"WeaponAim",
									{0.13,0.15000001},
									1
								}
							};
						};
					};
					class RocketCrosshairGroup
					{
						type="group";
						condition="Rocket";
						class MachineGunCrosshair
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.019708},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.039999999,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.02,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.0099999998,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.0099999998,-0.039416101},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.07},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.07},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
						};
					};
					class BombCrosshairGroup
					{
						type="group";
						condition="bomb";
						class BombCrosshair
						{
							width=4;
							type="line";
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,0.088686101},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0.090000004,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.0019708001},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.0019708001},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{-0.0020000001,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.0020000001,0},
									1
								},
								{},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,0.078832097},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.079999998,0},
									1
								},
								
								{
									"ImpactPoint",
									{-0.078783996,-0.0136853},
									1
								},
								
								{
									"ImpactPoint",
									{-0.075176001,-0.0269606},
									1
								},
								
								{
									"ImpactPoint",
									{-0.069279999,-0.039416101},
									1
								},
								
								{
									"ImpactPoint",
									{-0.061280001,-0.050673299},
									1
								},
								
								{
									"ImpactPoint",
									{-0.051424,-0.060385399},
									1
								},
								
								{
									"ImpactPoint",
									{-0.039999999,-0.068268597},
									1
								},
								
								{
									"ImpactPoint",
									{-0.02736,-0.0740785},
									1
								},
								
								{
									"ImpactPoint",
									{-0.013888,-0.077633902},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								{},
								{},
								
								{
									"ImpactPoint",
									-1,
									"Velocity",
									1,
									"NormalizeBombCircle",
									1,
									"ImpactPoint",
									1,
									{0,0},
									1
								},
								
								{
									"Velocity",
									1,
									"Limit0109",
									1,
									{0,0},
									1
								}
							};
						};
						class Circle
						{
							type="line";
							width=6;
							points[]=
							{
								
								{
									"ImpactPoint",
									{0,-0.0630657},
									1
								},
								
								{
									"ImpactPoint",
									{0,-0.078832097},
									1
								},
								
								{
									"MissileFlightTimeRot1",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot2",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot3",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot4",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot5",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot6",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot7",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot8",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot9",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot10",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot11",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot12",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot13",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot14",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot15",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot16",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot17",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot18",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot19",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.079999998},
									1,
									"ImpactPoint",
									1
								},
								
								{
									"MissileFlightTimeRot20",
									{0,0.064000003},
									1,
									"ImpactPoint",
									1
								}
							};
						};
						class Distance
						{
							type="text";
							source="ImpactDistance";
							sourceScale=0.001;
							sourcePrecision=1;
							max=15;
							align="center";
							scale=1;
							pos[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.11},
								1
							};
							right[]=
							{
								"ImpactPoint",
								{0.045000002,0.11},
								1
							};
							down[]=
							{
								"ImpactPoint",
								{-0.0020000001,0.15000001},
								1
							};
						};
					};
					class WeaponsText
					{
						condition="1- mgun";
						class WeaponsText
						{
							type="text";
							source="weapon";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class MGunText
					{
						condition="mgun";
						class WeaponsText
						{
							type="text";
							source="static";
							text="GUN";
							sourceScale=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.032000002,0.83999997},
								1
							};
							right[]=
							{
								{0.086999997,0.83999997},
								1
							};
							down[]=
							{
								{0.032000002,0.88499999},
								1
							};
						};
					};
					class AmmoText
					{
						type="text";
						source="ammo";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							{0.032000002,0.88},
							1
						};
						right[]=
						{
							{0.086999997,0.88},
							1
						};
						down[]=
						{
							{0.032000002,0.92500001},
							1
						};
					};
					class Laser
					{
						condition="laseron";
						class LaserText
						{
							type="text";
							source="static";
							text="LASER";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.80000001},
								1
							};
							right[]=
							{
								{0.98699999,0.80000001},
								1
							};
							down[]=
							{
								{0.93199998,0.84500003},
								1
							};
						};
					};
					class Tailhook
					{
						condition="user4";
						class TailhookText
						{
							type="text";
							source="static";
							text="TAILHOOK";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.88},
								1
							};
							right[]=
							{
								{0.98699999,0.88},
								1
							};
							down[]=
							{
								{0.93199998,0.92500001},
								1
							};
						};
					};
					class Flaps
					{
						condition="flaps";
						class FlapsText
						{
							type="text";
							source="static";
							text="FLAPS";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.92000002},
								1
							};
							right[]=
							{
								{0.98699999,0.92000002},
								1
							};
							down[]=
							{
								{0.93199998,0.96499997},
								1
							};
						};
					};
					class ILS
					{
						condition="ils";
						class GearText
						{
							type="text";
							source="static";
							text="GEAR";
							align="left";
							scale=1;
							pos[]=
							{
								{0.93199998,0.83999997},
								1
							};
							right[]=
							{
								{0.98699999,0.83999997},
								1
							};
							down[]=
							{
								{0.93199998,0.88499999},
								1
							};
						};
						class Glideslope
						{
							clipTL[]={0,0};
							clipBR[]={1,1};
							class ILS
							{
								type="line";
								width=2;
								points[]=
								{
									
									{
										"ILS_W",
										{-0.12,0},
										1
									},
									
									{
										"ILS_W",
										{0.12,0},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{-0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{-0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{-0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0,0.0118248},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.059999999,-0.0088686096},
										1
									},
									
									{
										"ILS_W",
										{0.059999999,0.0088686096},
										1
									},
									{},
									
									{
										"ILS_W",
										{0.12,-0.0118248},
										1
									},
									
									{
										"ILS_W",
										{0.12,0.0118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{0,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0,0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,-0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,-0.118248},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,-0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,-0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0},
										1
									},
									
									{
										"ILS_H",
										{0.012,0},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.0089999996,0.059124101},
										1
									},
									
									{
										"ILS_H",
										{0.0089999996,0.059124101},
										1
									},
									{},
									
									{
										"ILS_H",
										{-0.012,0.118248},
										1
									},
									
									{
										"ILS_H",
										{0.012,0.118248},
										1
									}
								};
							};
							class airport
							{
								type="line";
								points[]=
								{
									
									{
										"airport1",
										1
									},
									
									{
										"airport2",
										1
									},
									
									{
										"airport4",
										1
									},
									
									{
										"airport3",
										1
									},
									
									{
										"airport1",
										1
									}
								};
							};
						};
					};
					class TargetLocking
					{
						condition="missilelocking";
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class TargetLocked
					{
						condition="missilelocked";
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,0.029562},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.029999999,0},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0,-0.029562},
									1
								}
							};
						};
					};
					class IncomingMissile
					{
						condition="incomingmissile";
						blinkingPattern[]={0.30000001,0.30000001};
						blinkingStartsOn=1;
						class Text
						{
							type="text";
							source="static";
							text="!INCOMING MISSILE!";
							align="center";
							scale=1;
							pos[]=
							{
								{0.48500001,0.21678799},
								1
							};
							right[]=
							{
								{0.54500002,0.21678799},
								1
							};
							down[]=
							{
								{0.48500001,0.266058},
								1
							};
						};
					};
					class StallGroup
					{
						type="group";
						condition="stall";
						color[]={1,0,0};
						blinkingPattern[]={0.2,0.2};
						blinkingStartsOn=1;
						class StallText
						{
							type="text";
							source="static";
							text="STALL";
							align="center";
							scale=1;
							pos[]=
							{
								{0.5,0.25},
								1
							};
							right[]=
							{
								{0.54000002,0.25},
								1
							};
							down[]=
							{
								{0.5,0.28999999},
								1
							};
						};
					};
					class TargetingPodGroup
					{
						condition="1-pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodDir",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodDir",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition="pilotcameralock";
						class TargetingPodDir
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780702},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,-0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.020805599,0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,0.017380601},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041384902,0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,0.0116134},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,0.0040780702},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.020805599,-0.0040780799},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0176381,-0.0116134},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0117854,-0.0173807},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{0.0041384902,-0.0205019},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0041385,-0.0205019},
									1
								},
								{},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0117854,-0.017380601},
									1
								},
								
								{
									"TargetingPodTarget",
									1,
									"Limit0109",
									1,
									{-0.0176381,-0.0116134},
									1
								},
								{},
								{}
							};
						};
					};
					class MainCenterLine1
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									-0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.44999999,0},
								1
							}
						};
					};
					class MainCenterLine2
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.33000001,0},
								1
							},
							
							{
								"PlaneW",
								{-0.25,0},
								1
							}
						};
					};
					class MainCenterLine3
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								
								{
									0.49000001,
									"0 + 0.025"
								},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,0},
								1
							},
							
							{
								"PlaneW",
								{0.25,0},
								1
							}
						};
					};
					class SpeedIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{-0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{-0.49000001,-0.25},
								1
							}
						};
					};
					class SpeedNumber
					{
						type="text";
						source="speed";
						sourceScale=3.5999999;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{-0.30000001,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{-0.40000001,-0.2},
							1
						};
					};
					class AltitudeIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.2},
								1
							},
							
							{
								"PlaneW",
								{0.30000001,-0.25},
								1
							},
							
							{
								"PlaneW",
								{0.49000001,-0.25},
								1
							}
						};
					};
					class AltitudeNumberASL
					{
						type="text";
						source="altitudeASL";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.40000001,-0.25},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.47999999,-0.25},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.40000001,-0.2},
							1
						};
					};
					class AltitudeRadarText
					{
						type="text";
						source="static";
						text="R";
						align="left";
						scale=1;
						sourceScale=1;
						pos[]=
						{
							"PlaneW",
							{0.31999999,-0.192},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"+0.32 + 0.04",
								-0.192
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0.31999999,
								"-0.192 + 0.041"
							},
							1
						};
					};
					class AltitudeNumberAGL
					{
						type="text";
						source="altitudeAGL";
						sourceScale=1;
						sourceLength=4;
						sourceOffset=-2;
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{0.47999999,-0.19},
							1
						};
						right[]=
						{
							"PlaneW",
							{0.54000002,-0.19},
							1
						};
						down[]=
						{
							"PlaneW",
							{0.47999999,-0.15000001},
							1
						};
					};
					class PitchNumber
					{
						type="text";
						source="horizonDive";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class PitchText
					{
						type="text";
						source="static";
						text="P:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.075999998},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.075999998
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.076 + 0.05"
							},
							1
						};
					};
					class RollNumber
					{
						type="text";
						source="horizonBank";
						sourceScale=57.295799;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class RollText
					{
						type="text";
						source="static";
						text="R:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,-0.025},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								-0.025
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"-0.025 + 0.05"
							},
							1
						};
					};
					class ClimbNumber
					{
						type="text";
						source="vspeed";
						sourceScale=1;
						align="right";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.38999999,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.39 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.38999999,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class ClimbText
					{
						type="text";
						source="static";
						text="C:";
						align="left";
						scale=1;
						pos[]=
						{
							"PlaneW",
							{-0.41,0.026000001},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								"-0.41 + 0.04",
								0.026000001
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								-0.41,
								"+0.026 + 0.05"
							},
							1
						};
					};
					class HeadingArrow
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{-0.02,0.041999999},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0,0.022},
								1
							},
							
							{
								"WPPoint",
								1,
								"LimitWaypoint",
								1,
								{0.02,0.041999999},
								1
							}
						};
					};
					class WP
					{
						condition="wpvalid";
						class WPdist
						{
							type="text";
							source="wpdist";
							sourceScale=0.001;
							sourcePrecision=1;
							align="right";
							scale=1;
							pos[]=
							{
								{0.92400002,0.505018},
								1
							};
							down[]=
							{
								{0.92400002,0.54246402},
								1
							};
							right[]=
							{
								{0.96399999,0.505018},
								1
							};
						};
						class WPIndex
						{
							type="text";
							source="wpIndex";
							sourceScale=1;
							sourceLength=2;
							align="right";
							scale=1;
							pos[]=
							{
								{0.87699997,0.505018},
								1
							};
							right[]=
							{
								{0.917,0.505018},
								1
							};
							down[]=
							{
								{0.87699997,0.54246402},
								1
							};
						};
						class WPstatic
						{
							type="text";
							source="static";
							text="WP";
							scale=1;
							sourceScale=1;
							align="right";
							pos[]=
							{
								
								{
									"0.825+0.01",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.875,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.01",
									0.54149997
								},
								1
							};
						};
						class WPKM
						{
							type="text";
							source="static";
							text=":";
							scale=1;
							sourceScale=1;
							align="left";
							pos[]=
							{
								
								{
									"0.825+0.09",
									0.50650001
								},
								1
							};
							right[]=
							{
								{0.95499998,0.50650001},
								1
							};
							down[]=
							{
								
								{
									"0.825+0.09",
									0.54149997
								},
								1
							};
						};
					};
					class HeadingRotation
					{
						condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
						class HeadingHeadNumber
						{
							type="text";
							source="cameraDir";
							sourceScale=1;
							align="center";
							scale=1;
							pos[]=
							{
								
								{
									"0.80-0.302",
									"0.082+0.065"
								},
								1
							};
							right[]=
							{
								
								{
									"0.83-0.302",
									"0.082+0.065"
								},
								1
							};
							down[]=
							{
								
								{
									"0.80-0.302",
									"0.113+0.065"
								},
								1
							};
						};
						class HeadingArrow
						{
							type="line";
							width=3;
							points[]=
							{
								
								{
									{0.48800001,0.141},
									1
								},
								
								{
									{0.51200002,0.141},
									1
								},
								
								{
									{0.542,0.161},
									1
								},
								
								{
									{0.51200002,0.18099999},
									1
								},
								
								{
									{0.48800001,0.18099999},
									1
								},
								
								{
									{0.458,0.161},
									1
								},
								
								{
									{0.48800001,0.141},
									1
								},
								{}
							};
						};
					};
					class HeadingScale
					{
						type="scale";
						NeverEatSeaWeed=1;
						horizontal=1;
						source="heading";
						sourceScale=1;
						width=3;
						top=0.1;
						center=0.5;
						bottom=0.89999998;
						lineXleft=0.105;
						lineYright=0.115;
						lineXleftMajor=0.094999999;
						lineYrightMajor=0.115;
						majorLineEach=5;
						numberEach=5;
						step="18 / 9";
						stepSize="(0.70 - 0.3) / 15";
						align="center";
						scale=1;
						pos[]={0.096000001,0.0546};
						right[]={0.14300001,0.0546};
						down[]={0.096000001,0.093000002};
					};
					class HeadingIndicatorBox
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.5},
								1
							},
							
							{
								"PlaneW",
								{0.035,-0.45500001},
								1
							},
							
							{
								"PlaneW",
								{-0.035,-0.45500001},
								1
							}
						};
					};
					class HeadingIndicatorArrow
					{
						type="polygon";
						points[]=
						{
							
							{
								
								{
									"PlaneW",
									{-0.015,-0.45500001},
									1
								},
								
								{
									"PlaneW",
									{0,-0.44499999},
									1
								},
								
								{
									"PlaneW",
									{0.015,-0.45500001},
									1
								}
							}
						};
					};
					class HeadingNumber
					{
						type="text";
						source="heading";
						sourceScale=1;
						align="center";
						scale=1;
						pos[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5   )"
							},
							1
						};
						right[]=
						{
							"PlaneW",
							
							{
								0.029999999,
								"(-0.5   )"
							},
							1
						};
						down[]=
						{
							"PlaneW",
							
							{
								0,
								"(-0.5 + 0.045 )"
							},
							1
						};
					};
					class HorizonBankRot
					{
						type="line";
						width=2;
						points[]=
						{
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									-0.0099999998,
									"0.41673699-0.109"
								},
								1
							},
							
							{
								"HorizonBankRot",
								
								{
									0,
									"0.39421001-0.109"
								},
								1
							}
						};
					};
					class HorizonBankRotLines
					{
						type="line";
						width=3;
						points[]=
						{
							
							{
								{0.619959,0.71298599},
								1
							},
							
							{
								{0.63143897,0.74420297},
								1
							},
							{},
							
							{
								{0.58291,0.73901898},
								1
							},
							
							{
								{0.58808702,0.76077801},
								1
							},
							{},
							
							{
								{0.54057401,0.74850398},
								1
							},
							
							{
								{0.54318398,0.77083802},
								1
							},
							{},
							
							{
								{0.4975,0.740421},
								1
							},
							
							{
								{0.4975,0.77420998},
								1
							},
							{},
							
							{
								{0.45442599,0.74850398},
								1
							},
							
							{
								{0.45181599,0.77083802},
								1
							},
							{},
							
							{
								{0.41209,0.73901898},
								1
							},
							
							{
								{0.40691301,0.76077801},
								1
							},
							{},
							
							{
								{0.37504101,0.71298599},
								1
							},
							
							{
								{0.363561,0.74420297},
								1
							}
						};
					};
					class Horizont
					{
						clipTL[]={0.2,0.2};
						clipBR[]={0.80000001,0.80000001};
						class Dimmed
						{
							class Level0
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"Level0",
										{0.75,0},
										1
									},
									
									{
										"Level0",
										{0.064999998,0},
										1
									},
									{},
									
									{
										"Level0",
										{-0.064999998,0},
										1
									},
									
									{
										"Level0",
										{-0.75,0},
										1
									}
								};
							};
						};
						class HideOnTurn
						{
							condition="5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)) ";
							class Limiter
							{
								class Level0
								{
									type="line";
									width=2;
									points[]={};
								};
								class LevelM5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM5",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.22,0},
											1
										},
										
										{
											"LevelM5",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.19,0},
											1
										},
										
										{
											"LevelM5",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.16,0},
											1
										},
										
										{
											"LevelM5",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.13,0},
											1
										},
										
										{
											"LevelM5",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.1,0},
											1
										},
										
										{
											"LevelM5",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{-0.07,0},
											1
										},
										
										{
											"LevelM5",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM5",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM5",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.22,0},
											1
										},
										
										{
											"LevelM5",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.19,0},
											1
										},
										
										{
											"LevelM5",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.16,0},
											1
										},
										
										{
											"LevelM5",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.13,0},
											1
										},
										
										{
											"LevelM5",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.1,0},
											1
										},
										
										{
											"LevelM5",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM5",
											{0.07,0},
											1
										},
										
										{
											"LevelM5",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_5
								{
									type="text";
									source="static";
									text=-5;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_5_R
								{
									type="text";
									source="static";
									text=-5;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM5",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM5",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM5",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP5: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP5",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP5",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_5
								{
									type="text";
									source="static";
									text="5";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_5_R
								{
									type="text";
									source="static";
									text="5";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP5",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP5",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP5",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM10",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.22,0},
											1
										},
										
										{
											"LevelM10",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.19,0},
											1
										},
										
										{
											"LevelM10",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.16,0},
											1
										},
										
										{
											"LevelM10",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.13,0},
											1
										},
										
										{
											"LevelM10",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.1,0},
											1
										},
										
										{
											"LevelM10",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{-0.07,0},
											1
										},
										
										{
											"LevelM10",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM10",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM10",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.22,0},
											1
										},
										
										{
											"LevelM10",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.19,0},
											1
										},
										
										{
											"LevelM10",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.16,0},
											1
										},
										
										{
											"LevelM10",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.13,0},
											1
										},
										
										{
											"LevelM10",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.1,0},
											1
										},
										
										{
											"LevelM10",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM10",
											{0.07,0},
											1
										},
										
										{
											"LevelM10",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_10
								{
									type="text";
									source="static";
									text=-10;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_10_R
								{
									type="text";
									source="static";
									text=-10;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM10",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM10",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM10",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP10: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP10",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP10",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_10
								{
									type="text";
									source="static";
									text="10";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_10_R
								{
									type="text";
									source="static";
									text="10";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP10",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP10",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP10",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM15",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.22,0},
											1
										},
										
										{
											"LevelM15",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.19,0},
											1
										},
										
										{
											"LevelM15",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.16,0},
											1
										},
										
										{
											"LevelM15",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.13,0},
											1
										},
										
										{
											"LevelM15",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.1,0},
											1
										},
										
										{
											"LevelM15",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{-0.07,0},
											1
										},
										
										{
											"LevelM15",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM15",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM15",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.22,0},
											1
										},
										
										{
											"LevelM15",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.19,0},
											1
										},
										
										{
											"LevelM15",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.16,0},
											1
										},
										
										{
											"LevelM15",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.13,0},
											1
										},
										
										{
											"LevelM15",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.1,0},
											1
										},
										
										{
											"LevelM15",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM15",
											{0.07,0},
											1
										},
										
										{
											"LevelM15",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_15
								{
									type="text";
									source="static";
									text=-15;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_15_R
								{
									type="text";
									source="static";
									text=-15;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM15",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM15",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM15",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP15: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP15",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP15",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_15
								{
									type="text";
									source="static";
									text="15";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_15_R
								{
									type="text";
									source="static";
									text="15";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP15",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP15",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP15",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM20",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.22,0},
											1
										},
										
										{
											"LevelM20",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.19,0},
											1
										},
										
										{
											"LevelM20",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.16,0},
											1
										},
										
										{
											"LevelM20",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.13,0},
											1
										},
										
										{
											"LevelM20",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.1,0},
											1
										},
										
										{
											"LevelM20",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{-0.07,0},
											1
										},
										
										{
											"LevelM20",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM20",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM20",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.22,0},
											1
										},
										
										{
											"LevelM20",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.19,0},
											1
										},
										
										{
											"LevelM20",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.16,0},
											1
										},
										
										{
											"LevelM20",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.13,0},
											1
										},
										
										{
											"LevelM20",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.1,0},
											1
										},
										
										{
											"LevelM20",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM20",
											{0.07,0},
											1
										},
										
										{
											"LevelM20",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_20
								{
									type="text";
									source="static";
									text=-20;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_20_R
								{
									type="text";
									source="static";
									text=-20;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM20",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM20",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM20",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP20: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP20",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP20",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_20
								{
									type="text";
									source="static";
									text="20";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_20_R
								{
									type="text";
									source="static";
									text="20";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP20",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP20",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP20",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM25",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.22,0},
											1
										},
										
										{
											"LevelM25",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.19,0},
											1
										},
										
										{
											"LevelM25",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.16,0},
											1
										},
										
										{
											"LevelM25",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.13,0},
											1
										},
										
										{
											"LevelM25",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.1,0},
											1
										},
										
										{
											"LevelM25",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{-0.07,0},
											1
										},
										
										{
											"LevelM25",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM25",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM25",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.22,0},
											1
										},
										
										{
											"LevelM25",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.19,0},
											1
										},
										
										{
											"LevelM25",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.16,0},
											1
										},
										
										{
											"LevelM25",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.13,0},
											1
										},
										
										{
											"LevelM25",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.1,0},
											1
										},
										
										{
											"LevelM25",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM25",
											{0.07,0},
											1
										},
										
										{
											"LevelM25",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_25
								{
									type="text";
									source="static";
									text=-25;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_25_R
								{
									type="text";
									source="static";
									text=-25;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM25",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM25",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM25",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP25: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP25",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP25",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_25
								{
									type="text";
									source="static";
									text="25";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_25_R
								{
									type="text";
									source="static";
									text="25";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP25",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP25",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP25",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM30",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.22,0},
											1
										},
										
										{
											"LevelM30",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.19,0},
											1
										},
										
										{
											"LevelM30",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.16,0},
											1
										},
										
										{
											"LevelM30",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.13,0},
											1
										},
										
										{
											"LevelM30",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.1,0},
											1
										},
										
										{
											"LevelM30",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{-0.07,0},
											1
										},
										
										{
											"LevelM30",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM30",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM30",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.22,0},
											1
										},
										
										{
											"LevelM30",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.19,0},
											1
										},
										
										{
											"LevelM30",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.16,0},
											1
										},
										
										{
											"LevelM30",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.13,0},
											1
										},
										
										{
											"LevelM30",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.1,0},
											1
										},
										
										{
											"LevelM30",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM30",
											{0.07,0},
											1
										},
										
										{
											"LevelM30",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_30
								{
									type="text";
									source="static";
									text=-30;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_30_R
								{
									type="text";
									source="static";
									text=-30;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM30",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM30",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM30",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP30: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP30",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP30",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_30
								{
									type="text";
									source="static";
									text="30";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_30_R
								{
									type="text";
									source="static";
									text="30";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP30",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP30",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP30",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM35",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.22,0},
											1
										},
										
										{
											"LevelM35",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.19,0},
											1
										},
										
										{
											"LevelM35",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.16,0},
											1
										},
										
										{
											"LevelM35",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.13,0},
											1
										},
										
										{
											"LevelM35",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.1,0},
											1
										},
										
										{
											"LevelM35",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{-0.07,0},
											1
										},
										
										{
											"LevelM35",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM35",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM35",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.22,0},
											1
										},
										
										{
											"LevelM35",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.19,0},
											1
										},
										
										{
											"LevelM35",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.16,0},
											1
										},
										
										{
											"LevelM35",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.13,0},
											1
										},
										
										{
											"LevelM35",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.1,0},
											1
										},
										
										{
											"LevelM35",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM35",
											{0.07,0},
											1
										},
										
										{
											"LevelM35",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_35
								{
									type="text";
									source="static";
									text=-35;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_35_R
								{
									type="text";
									source="static";
									text=-35;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM35",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM35",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM35",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP35: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP35",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP35",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_35
								{
									type="text";
									source="static";
									text="35";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_35_R
								{
									type="text";
									source="static";
									text="35";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP35",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP35",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP35",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM40",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.22,0},
											1
										},
										
										{
											"LevelM40",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.19,0},
											1
										},
										
										{
											"LevelM40",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.16,0},
											1
										},
										
										{
											"LevelM40",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.13,0},
											1
										},
										
										{
											"LevelM40",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.1,0},
											1
										},
										
										{
											"LevelM40",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{-0.07,0},
											1
										},
										
										{
											"LevelM40",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM40",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM40",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.22,0},
											1
										},
										
										{
											"LevelM40",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.19,0},
											1
										},
										
										{
											"LevelM40",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.16,0},
											1
										},
										
										{
											"LevelM40",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.13,0},
											1
										},
										
										{
											"LevelM40",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.1,0},
											1
										},
										
										{
											"LevelM40",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM40",
											{0.07,0},
											1
										},
										
										{
											"LevelM40",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_40
								{
									type="text";
									source="static";
									text=-40;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_40_R
								{
									type="text";
									source="static";
									text=-40;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM40",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM40",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM40",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP40: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP40",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP40",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_40
								{
									type="text";
									source="static";
									text="40";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_40_R
								{
									type="text";
									source="static";
									text="40";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP40",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP40",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP40",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM45",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.22,0},
											1
										},
										
										{
											"LevelM45",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.19,0},
											1
										},
										
										{
											"LevelM45",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.16,0},
											1
										},
										
										{
											"LevelM45",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.13,0},
											1
										},
										
										{
											"LevelM45",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.1,0},
											1
										},
										
										{
											"LevelM45",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{-0.07,0},
											1
										},
										
										{
											"LevelM45",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM45",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM45",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.22,0},
											1
										},
										
										{
											"LevelM45",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.19,0},
											1
										},
										
										{
											"LevelM45",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.16,0},
											1
										},
										
										{
											"LevelM45",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.13,0},
											1
										},
										
										{
											"LevelM45",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.1,0},
											1
										},
										
										{
											"LevelM45",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM45",
											{0.07,0},
											1
										},
										
										{
											"LevelM45",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_45
								{
									type="text";
									source="static";
									text=-45;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_45_R
								{
									type="text";
									source="static";
									text=-45;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM45",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM45",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM45",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP45: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP45",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP45",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_45
								{
									type="text";
									source="static";
									text="45";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_45_R
								{
									type="text";
									source="static";
									text="45";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP45",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP45",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP45",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM50",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.22,0},
											1
										},
										
										{
											"LevelM50",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.19,0},
											1
										},
										
										{
											"LevelM50",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.16,0},
											1
										},
										
										{
											"LevelM50",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.13,0},
											1
										},
										
										{
											"LevelM50",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.1,0},
											1
										},
										
										{
											"LevelM50",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{-0.07,0},
											1
										},
										
										{
											"LevelM50",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM50",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM50",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.22,0},
											1
										},
										
										{
											"LevelM50",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.19,0},
											1
										},
										
										{
											"LevelM50",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.16,0},
											1
										},
										
										{
											"LevelM50",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.13,0},
											1
										},
										
										{
											"LevelM50",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.1,0},
											1
										},
										
										{
											"LevelM50",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM50",
											{0.07,0},
											1
										},
										
										{
											"LevelM50",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_50
								{
									type="text";
									source="static";
									text=-50;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_50_R
								{
									type="text";
									source="static";
									text=-50;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM50",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM50",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM50",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP50: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP50",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP50",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_50
								{
									type="text";
									source="static";
									text="50";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_50_R
								{
									type="text";
									source="static";
									text="50";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP50",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP50",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP50",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM60",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.22,0},
											1
										},
										
										{
											"LevelM60",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.19,0},
											1
										},
										
										{
											"LevelM60",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.16,0},
											1
										},
										
										{
											"LevelM60",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.13,0},
											1
										},
										
										{
											"LevelM60",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.1,0},
											1
										},
										
										{
											"LevelM60",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{-0.07,0},
											1
										},
										
										{
											"LevelM60",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM60",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM60",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.22,0},
											1
										},
										
										{
											"LevelM60",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.19,0},
											1
										},
										
										{
											"LevelM60",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.16,0},
											1
										},
										
										{
											"LevelM60",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.13,0},
											1
										},
										
										{
											"LevelM60",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.1,0},
											1
										},
										
										{
											"LevelM60",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM60",
											{0.07,0},
											1
										},
										
										{
											"LevelM60",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_60
								{
									type="text";
									source="static";
									text=-60;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_60_R
								{
									type="text";
									source="static";
									text=-60;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM60",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM60",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM60",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP60: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP60",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP60",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_60
								{
									type="text";
									source="static";
									text="60";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_60_R
								{
									type="text";
									source="static";
									text="60";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP60",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP60",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP60",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM70",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.22,0},
											1
										},
										
										{
											"LevelM70",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.19,0},
											1
										},
										
										{
											"LevelM70",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.16,0},
											1
										},
										
										{
											"LevelM70",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.13,0},
											1
										},
										
										{
											"LevelM70",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.1,0},
											1
										},
										
										{
											"LevelM70",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{-0.07,0},
											1
										},
										
										{
											"LevelM70",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM70",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM70",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.22,0},
											1
										},
										
										{
											"LevelM70",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.19,0},
											1
										},
										
										{
											"LevelM70",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.16,0},
											1
										},
										
										{
											"LevelM70",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.13,0},
											1
										},
										
										{
											"LevelM70",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.1,0},
											1
										},
										
										{
											"LevelM70",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM70",
											{0.07,0},
											1
										},
										
										{
											"LevelM70",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_70
								{
									type="text";
									source="static";
									text=-70;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_70_R
								{
									type="text";
									source="static";
									text=-70;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM70",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM70",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM70",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP70: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP70",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP70",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_70
								{
									type="text";
									source="static";
									text="70";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_70_R
								{
									type="text";
									source="static";
									text="70";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP70",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP70",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP70",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM80",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.22,0},
											1
										},
										
										{
											"LevelM80",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.19,0},
											1
										},
										
										{
											"LevelM80",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.16,0},
											1
										},
										
										{
											"LevelM80",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.13,0},
											1
										},
										
										{
											"LevelM80",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.1,0},
											1
										},
										
										{
											"LevelM80",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{-0.07,0},
											1
										},
										
										{
											"LevelM80",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM80",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM80",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.22,0},
											1
										},
										
										{
											"LevelM80",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.19,0},
											1
										},
										
										{
											"LevelM80",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.16,0},
											1
										},
										
										{
											"LevelM80",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.13,0},
											1
										},
										
										{
											"LevelM80",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.1,0},
											1
										},
										
										{
											"LevelM80",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM80",
											{0.07,0},
											1
										},
										
										{
											"LevelM80",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_80
								{
									type="text";
									source="static";
									text=-80;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_80_R
								{
									type="text";
									source="static";
									text=-80;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM80",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM80",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM80",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP80: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP80",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP80",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_80
								{
									type="text";
									source="static";
									text="80";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_80_R
								{
									type="text";
									source="static";
									text="80";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP80",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP80",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP80",
										{0.25999999,0.033},
										1
									};
								};
								class LevelM90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelM90",
											{-0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{-0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.22,0},
											1
										},
										
										{
											"LevelM90",
											{-0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.19,0},
											1
										},
										
										{
											"LevelM90",
											{-0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.16,0},
											1
										},
										
										{
											"LevelM90",
											{-0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.13,0},
											1
										},
										
										{
											"LevelM90",
											{-0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.1,0},
											1
										},
										
										{
											"LevelM90",
											{-0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{-0.07,0},
											1
										},
										
										{
											"LevelM90",
											{-0.055,0},
											1
										},
										{},
										{},
										
										{
											"LevelM90",
											{0.235,-0.02},
											1
										},
										
										{
											"LevelM90",
											{0.235,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.22,0},
											1
										},
										
										{
											"LevelM90",
											{0.205,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.19,0},
											1
										},
										
										{
											"LevelM90",
											{0.175,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.16,0},
											1
										},
										
										{
											"LevelM90",
											{0.145,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.13,0},
											1
										},
										
										{
											"LevelM90",
											{0.115,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.1,0},
											1
										},
										
										{
											"LevelM90",
											{0.085000001,0},
											1
										},
										{},
										
										{
											"LevelM90",
											{0.07,0},
											1
										},
										
										{
											"LevelM90",
											{0.055,0},
											1
										},
										{}
									};
								};
								class VALM_1_90
								{
									type="text";
									source="static";
									text=-90;
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{-0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{-0.2,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{-0.25999999,0.017999999},
										1
									};
								};
								class VALM_1_90_R
								{
									type="text";
									source="static";
									text=-90;
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelM90",
										{0.25999999,-0.032000002},
										1
									};
									right[]=
									{
										"LevelM90",
										{0.31999999,-0.032000002},
										1
									};
									down[]=
									{
										"LevelM90",
										{0.25999999,0.017999999},
										1
									};
								};
								class LevelP90: Level0
								{
									type="line";
									points[]=
									{
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0.02
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"-0.22-0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											{-0.059999999,0},
											1
										},
										{},
										
										{
											"LevelP90",
											{0.059999999,0},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0
											},
											1
										},
										
										{
											"LevelP90",
											
											{
												"+0.22+0.015",
												0.02
											},
											1
										}
									};
								};
								class VALP_1_90
								{
									type="text";
									source="static";
									text="90";
									align="left";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{-0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{-0.2,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{-0.25999999,0.033},
										1
									};
								};
								class VALP_1_90_R
								{
									type="text";
									source="static";
									text="90";
									align="right";
									scale=1;
									sourceScale=1;
									pos[]=
									{
										"LevelP90",
										{0.25999999,-0.017000001},
										1
									};
									right[]=
									{
										"LevelP90",
										{0.31999999,-0.017000001},
										1
									};
									down[]=
									{
										"LevelP90",
										{0.25999999,0.033},
										1
									};
								};
							};
						};
						class UnhideOnTurn
						{
							condition="abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
							class Cross
							{
								type="line";
								width=3;
								points[]=
								{
									
									{
										"PlaneW",
										{-0.02,0},
										1
									},
									
									{
										"PlaneW",
										{-0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0.02,0},
										1
									},
									
									{
										"PlaneW",
										{0.039999999,0},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,-0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,-0.039416101},
										1
									},
									{},
									
									{
										"PlaneW",
										{0,0.019708},
										1
									},
									
									{
										"PlaneW",
										{0,0.039416101},
										1
									},
									{}
								};
							};
						};
					};
					class RadarBoxes
					{
						type="radartoview";
						pos0[]={0.5,0.5};
						pos10[]={0.773,0.773};
						width=4;
						points[]=
						{
							
							{
								{-0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,-0.0020000001},
								1
							},
							
							{
								{0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,0.0020000001},
								1
							},
							
							{
								{-0.0020000001,-0.0020000001},
								1
							}
						};
					};
					class TargetDiamond
					{
						class shape
						{
							type="line";
							width=4;
							points[]=
							{
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{-0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,-0.02},
									1
								},
								
								{
									"Target",
									1,
									"Limit0109",
									1,
									{0.02,0.02},
									1
								}
							};
						};
					};
				};
			};
		};
		irTarget=1;
		irTargetSize=0.34999999;
		radarTarget=1;
		radarTargetSize=0.2;
		memoryPointGun="kulomet";
		selectionFireAnim="zasleh";
		simulation="airplaneX";
		vtol=4;
		scope=1;
		memoryPointsGetInDriver="pos driver";
		memoryPointsGetInDriverDir="pos driver dir";
		model="3as\3as_arc170\model\Arc_170.p3d";
		displayName="ARC-170X";
		crew="B_Pilot_F";
		icon="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa";
		picture="A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";
		side=1;
		laserScanner=1;
		laserTarget=1;
		showAllTargets=4;
		driverIsCommander=1;
		commanding=3;
		driverCanEject=1;
		faction="BLU_F";
		GetInAction="GetInLow";
		GetOutAction="GetOutLow";
		driverLeftHandAnimName="throttle_pilot";
		driverRightHandAnimName="throttle_pilot";
		driverleftleganimname="pedal";
		driverrightleganimname="pedal";
		gunBeg[]=
		{
			"Usti hlavne L",
			"Usti hlavne R"
		};
		Gunend[]=
		{
			"Konec hlavne L",
			"Konec hlavne R"
		};
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher",
			macro_new_weapon(generic,republic_aircraft_cannon),
			macro_new_weapon(generic,kannon),
			macro_new_weapon(wynd,a2a),
			macro_new_weapon(wynd,agm),
			macro_new_weapon(wynd,ugm)
		};
		magazines[]=
		{
			macro_new_mag(generic_aircraft_cannon_green,1000),
			macro_new_mag(a2a,4),
			macro_new_mag(agm,6),
			macro_new_mag(ugm,10),
			macro_basic_air_mags,
			macro_new_mag(Kannon,100),
			macro_new_mag(Kannon,100)
		};
		memoryPointDriverOptics="PilotCamera_1";
		VTOLPitchInfluence=1;
		VTOLRollInfluence=10;
		VTOLYawInfluence=12;
		class EjectionSystem
		{
			EjectionSeatEnabled=0;
			EjectionDual=0;
			EjectionSeatClass="";
			CanopyClass="";
			EjectionSeatHideAnim="";
			EjectionSeatRailAnim="";
			CanopyHideAnim="";
			EjectionSeatPos="pos_eject";
			CanopyPos="pos_eject_canopy";
			EjectionSoundExt="Plane_Fighter_01_ejection_ext_sound";
			EjectionSoundInt="Plane_Fighter_01_ejection_in_sound";
			EjectionParachute="Steerable_Parachute_F";
			EjectionSeatForce=50;
			CanopyForce=30;
		};
		class RenderTargets
		{
			class FrontCam
			{
				renderTarget="rendertarget0";
				class CameraView1
				{
					pointPosition="PIP0_pos";
					pointDirection="PIP0_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=2;
				};
			};
			class RearCam
			{
				renderTarget="rendertarget1";
				class CameraView1
				{
					pointPosition="PIP1_pos";
					pointDirection="PIP1_dir";
					renderQuality=2;
					renderVisionMode=0;
					fov=2;
				};
			};
		};
		class pilotCamera
		{
			class OpticsIn
			{
				class Wide
				{
					opticsDisplayName="WFOV";
					initAngleX=0;
					minAngleX=0;
					maxAngleX=0;
					initAngleY=0;
					minAngleY=0;
					maxAngleY=0;
					initFov="(30 / 120)";
					minFov="(30 / 120)";
					maxFov="(30 / 120)";
					directionStabilized=1;
					visionMode[]=
					{
						"Normal",
						"Ti"
					};
					thermalMode[]={0,1};
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
					opticsPPEffects[]=
					{
						"OpticsCHAbera2",
						"OpticsBlur2"
					};
				};
				class Medium: Wide
				{
					opticsDisplayName="MFOV";
					initFov="(15 / 120)";
					minFov="(15 / 120)";
					maxFov="(15 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow: Wide
				{
					opticsDisplayName="NFOV";
					initFov="(3.75 / 120)";
					minFov="(3.75 / 120)";
					maxFov="(3.75 / 120)";
					gunnerOpticsModel="\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics=1;
				showUAVViewInOptics=0;
				showSlingLoadManagerInOptics=0;
			};
			minTurn=-120;
			maxTurn=120;
			initTurn=0;
			minElev=0;
			maxElev=80;
			initElev=0;
			maxXRotSpeed=0.30000001;
			maxYRotSpeed=0.30000001;
			pilotOpticsShowCursor=1;
			controllable=1;
		};
		class Turrets
		{
			class LaserPilot: NewTurret
			{
				isCopilot=1;
				canEject=1;
				startEngine=0;
				minElev=-80;
				maxElev=5;
				initElev=-10;
				minTurn=-180;
				maxTurn=180;
				initTurn=0;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.46599999;
						minFov=0.46599999;
						maxFov=0.46599999;
						opticsDisplayName="W";
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					};
					class Medium: Wide
					{
						initFov=0.093000002;
						minFov=0.093000002;
						maxFov=0.093000002;
						opticsDisplayName="M";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					};
					class Narrow: Wide
					{
						initFov=0.028999999;
						minFov=0.028999999;
						maxFov=0.028999999;
						opticsDisplayName="N";
						gunnerOpticsModel="\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					};
				};
				class OpticsOut
				{
					class Monocular
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						minFov=0.25;
						maxFov=1.25;
						initFov=0.75;
						visionMode[]=
						{
							"Normal",
							"NVG"
						};
						gunnerOpticsModel="";
						gunnerOpticsEffect[]={};
					};
				};
				soundServo[]=
				{
					"",
					0.0099999998,
					1
				};
				outGunnerMayFire=1;
				commanding=-1;
				primaryGunner=1;
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				gunnerinaction="Plane_Fighter_03_pilot";
				gunneropticseffect[]=
				{
					"TankCommanderOptics1",
					"BWTV"
				};
				gunneropticsmodel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F.p3d";
				memorypointgunneroptics="PilotCamera_pos";
				memorypointsgetingunner="pos gunner";
				memorypointsgetingunnerdir="pos gunner dir";
				stabilizedInAxes=3;
				gunneraction="Plane_Fighter_03_pilot";
				gunnerforceoptics=0;
				gunnerName="Co-Pilot";
				proxytype="CPGunner";
				proxyIndex=2;
				gunnerLeftHandAnimName="lever_copilot";
				gunnerRightHandAnimName="stick_copilot";
				gunnerLeftLegAnimName="";
				gunnerRightLegAnimName="";
				animationsourcebody="MainTurret2";
				animationsourcegun="Maingun2";
				animationsourcehatch="";
				body="MainTurret2";
				gun="Maingun2";
				memoryPointGun="PilotCamera_Pos";
				gunBeg="PilotCamera_dir";
				gunEnd="PilotCamera_Pos";
				selectionFireAnim="zasleh";
				castGunnerShadow=1;
				viewGunnerShadow=1;
				precisegetinout=0;
				turretInfoType="RscOptics_Heli_Attack_01_gunner";
				discreteDistance[]={100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
				discreteDistanceInitIndex=5;
				weapons[]=
				{
					//macro_basic_air_weapons,
					//macro_new_weapon(generic,republic_aircraft_cannon)
				};
				magazines[]=
				{
					//macro_basic_air_mags,
					//macro_new_mag(generic_aircraft_cannon_green,1000)
				};
			};
			class Reargun: NewTurret
			{
				memoryPointGun="konec hlavne b";
				gunBeg="usti hlavne b";
				gunEnd="konec hlavne b";
				weapons[]=
				{
					macro_basic_air_weapons,
					macro_new_weapon(generic,republic_aircraft_cannon)
				};
				magazines[]=
				{
					macro_basic_air_mags,
					macro_new_mag(generic_aircraft_cannon_green,1000)
				};
				turretInfoType="RscWeaponRangeZeroing";
				discreteDistance[]={100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
				selectionFireAnim="zasleh";
				animationSourceBody="Mainturret";
				animationSourceGun="MainGun";
				body="Mainturret";
				gun="MainGun";
				commanding=-2;
				canEject=1;
				discreteDistanceInitIndex=5;
				memoryPointGunnerOptics="gunnerview";
				gunnerOutOpticsModel="\A3\weapons_f\reticle\Optics_Gunner_AAA_01_w_F";
				gunnerOutOpticsEffect[]={};
				gunnerOpticsEffect[]={};
				gunnerForceOptics=0;
				visionMode[]=
				{
					"Normal"
				};
				startEngine=0;
				thermalMode[]={};
				LODTurnedIn=-1;
				turretFollowFreeLook=1;
				LODOpticsIn=-1;
				class OpticsIn
				{
					class Wide
					{
						initAngleX=0;
						minAngleX=-30;
						maxAngleX=30;
						initAngleY=0;
						minAngleY=-100;
						maxAngleY=100;
						initFov=0.155;
						minFov=0.155;
						maxFov=0.155;
						visionMode[]=
						{
							"Normal",
							"NVG",
							"Ti"
						};
						thermalMode[]={0,1};
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						gunnerOpticsEffect[]={};
					};
					class Narrow: Wide
					{
						gunnerOpticsModel="A3\drones_f\Weapons_F_Gamma\Reticle\UGV_01_Optics_Gunner_F";
						initFov=0.046999998;
						minFov=0.046999998;
						maxFov=0.046999998;
					};
				};
				gunnerAction="Plane_Fighter_03_pilot";
				forceHideGunner=1;
				outGunnerMayFire=1;
				memorypointsgetingunner="pos gunner1";
				memorypointsgetingunnerdir="pos gunner1 dir";
				gunnerInAction="Plane_Fighter_03_pilot";
				gunnerRightHandAnimName="";
				gunnerLeftHandAnimName="";
				gunnerFireAlsoInInternalCamera=1;
				gunnerOutFireAlsoInInternalCamera=1;
				proxyIndex=3;
				viewGunnerInExternal=0;
				gunnerName="Rear Gunner";
				gunnerGetInAction="GetInLow";
				gunnerGetOutAction="GetOutLow";
				proxytype="CPGunner";
				isPersonTurret=0;
				soundServo[]=
				{
					"A3\Sounds_F\vehicles\armor\noises\servo_best",
					"db-40",
					1,
					50
				};
				minElev=-30;
				maxturn=270;
				minturn=90;
				maxElev=60;
				initTurn=180;
				initElev=0;
				inGunnerMayFire=1;
				class HitPoints
				{
					class HitTurret
					{
						armor=0.80000001;
						material=-1;
						name="vez";
						visual="vez";
						passThrough=0;
						minimalHit=0.02;
						explosionShielding=0.30000001;
						radius=0.25;
					};
					class HitGun
					{
						armor=0.30000001;
						material=-1;
						name="zbran";
						visual="";
						passThrough=0;
						minimalHit=0;
						explosionShielding=1;
						radius=0.25;
					};
				};
			};
		};
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\razor.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
		insideSoundCoef=0.2;
		destrType="DestructWreck";
		driveraction="Plane_Fighter_03_pilot";
		class Components: Components
		{
			class SensorsManagerComponent
			{
				class Components
				{
					class IRSensorComponent: SensorTemplateIR
					{
						class AirTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=1000;
							maxRange=10000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=400;
						componentType="IRSensorComponent";
						typeRecognitionDistance=2000;
						maxFogSeeThrough=0.995;
						color[]={1,0,0,1};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class VisualSensorComponent: SensorTemplateVisual
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=1;
						};
						class GroundTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=1;
							viewDistanceLimitCoef=1;
						};
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						maxTrackableSpeed=100;
						aimDown=1;
						animDirection="";
						componentType="VisualSensorComponent";
						nightRangeCoef=0;
						maxFogSeeThrough=0.94;
						color[]={1,1,0.5,0.80000001};
						typeRecognitionDistance=2000;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						minTrackableSpeed=-1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class PassiveRadarSensorComponent: SensorTemplatePassiveRadar
					{
						componentType="PassiveRadarSensorComponent";
						class AirTarget
						{
							minRange=45000;
							maxRange=45000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=20000;
							maxRange=20000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=12000;
						angleRangeHorizontal=360;
						angleRangeVertical=360;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						color[]={0.5,1,0.5,0.5};
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
						allowsMarking=0;
					};
					class ActiveRadarSensorComponent: SensorTemplateActiveRadar
					{
						class AirTarget
						{
							minRange=30000;
							maxRange=30000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						typeRecognitionDistance=8000;
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						groundNoiseDistanceCoef=0.2;
						componentType="ActiveRadarSensorComponent";
						maxGroundNoiseDistance=200;
						minSpeedThreshold=30;
						maxSpeedThreshold=40;
						color[]={0,1,1,1};
						allowsMarking=1;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class LaserSensorComponent: SensorTemplateLaser
					{
						componentType="LaserSensorComponent";
						class AirTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=15000;
							maxRange=15000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=180;
						angleRangeVertical=180;
						typeRecognitionDistance=0;
						color[]={1,1,1,0};
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
					class NVSensorComponent: SensorTemplateNV
					{
						componentType="NVSensorComponent";
						color[]={1,1,1,0};
						typeRecognitionDistance=0;
						class AirTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						class GroundTarget
						{
							minRange=8000;
							maxRange=8000;
							objectDistanceLimitCoef=-1;
							viewDistanceLimitCoef=-1;
						};
						angleRangeHorizontal=90;
						angleRangeVertical=90;
						allowsMarking=1;
						groundNoiseDistanceCoef=-1;
						maxGroundNoiseDistance=-1;
						minSpeedThreshold=0;
						maxSpeedThreshold=0;
						animDirection="";
						aimDown=0;
						minTrackableSpeed=-1e+010;
						maxTrackableSpeed=1e+010;
						minTrackableATL=-1e+010;
						maxTrackableATL=1e+010;
					};
				};
			};
			class TransportPylonsComponent
			{
				uiPicture="\A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_A143_3DEN_CA.paa";
				class Pylons
				{
					class Pylons1
					{
						attachment="empty";
						priority=5;
						maxweight=2000;
						UIposition[]={0.34999999,0};
					};
					class Pylons2: Pylons1
					{
						attachment="empty";
						UIposition[]={0.34999999,0.5};
						mirroredMissilePos=1;
					};
					class Pylons3
					{
						hardpoints[]=
						{
							"ARC_BOMB_PYLON"
						};
						attachment="empty";
						priority=3;
						maxweight=4000;
						UIposition[]={0.34999999,0.1};
					};
					class Pylons4: Pylons3
					{
						attachment="empty";
						UIposition[]={0.34999999,0.40000001};
						mirroredMissilePos=4;
					};
					class Pylons5
					{
						attachment="empty";
						priority=4;
						maxweight=100000;
						UIposition[]={0.34999999,0.2};
					};
					class Pylons6: Pylons5
					{
						attachment="empty";
						UIposition[]={0.34999999,0.30000001};
						mirroredMissilePos=5;
					};
					class Pylons7
					{
						priority=5;
						attachment="empty";
						maxweight=4000;
						UIposition[]={0.1,0.25};
					};
				};
				class Presets
				{
					class Empty
					{
						displayName="$STR_empty";
						attachment[]={};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
			{
				defaultDisplay="EmptyDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,4000,16000,30000};
						resource="RscCustomInfoSensors";
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
			{
				defaultDisplay="SensorDisplay";
				class Components
				{
					class EmptyDisplay
					{
						componentType="EmptyDisplayComponent";
					};
					class MinimapDisplay
					{
						componentType="MinimapDisplayComponent";
						resource="RscCustomInfoMiniMap";
					};
					class VehicleDriverDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Driver";
					};
					class VehicleMissileDisplay
					{
						componentType="TransportFeedDisplayComponent";
						source="Missile";
					};
					class SensorDisplay
					{
						componentType="SensorsDisplayComponent";
						range[]={8000,2000,4000,16000,30000};
						resource="RscCustomInfoSensors";
					};
				};
			};
		};
		acceleration=200;
		driveoncomponent[]={};
		camouflage=8;
		audible=10;
		accuracy=0.2;
		memoryPointCM[]=
		{
			"flare_launcher1",
			"flare_launcher2"
		};
		memoryPointCMDir[]=
		{
			"flare_launcher1_dir",
			"flare_launcher2_dir"
		};
		htMin=60;
		htMax=1800;
		afMax=200;
		mfMax=100;
		mFact=0;
		tBody=0;
		radartype=4;
		lockdetectionsystem="2 + 8 + 4";
		incommingmissliedetectionsystem=16;
		maxSpeed=800;
		landingAoa="6 * 3.1415 / 180";
		landingSpeed=215;
		stallSpeed=190;
		stallWarningTreshold=0.1;
		armor=100;
		armorStructured=1;
		envelope[]={0,0.5,2.5,4.8000002,6,7,7.5,7.5,7.5,7,6.4000001,5.5999999,2.0999999,1.7,1.4,1.35,1.3,1.15,0};
		draconicForceXCoef=4.5;
		draconicForceYCoef=8.5;
		draconicForceZCoef=8.5;
		draconicTorqueXCoef=2.0999999;
		draconicTorqueYCoef=3;
		angleOfIndicence=0.052359872;
		airFriction0[]={100,50,12};
		airFriction1[]={100,50,12};
		airFriction2[]={100,50,12};
		altNoForce=13000;
		altFullForce=2000;
		elevatorCoef[]={0,0.80000001,0.89999998,1,1.1,1.2,1.2,1.3,1.3,1.3,1.4,1.4,1.4};
		elevatorSensitivity=1.5;
		elevatorControlsSensitivityCoef3=3;
		aileronCoef[]={0,0.5,1,1.2,1.4,1.5,1.6};
		aileronSensitivity=3.8;
		aileronControlsSensitivityCoef=3;
		rudderCoef[]={0.60000002,1,1,0.89999998,0.80000001,0.69999999,0.60000002};
		rudderInfluence=0.89999998;
		rudderControlsSensitivityCoef=4;
		thrustCoef[]={1.1,1.1,1.1,1.3,1.6,1.7,1.5,1.5,1.4,1.4,1.2,1.2,1,1,1,1};
		irScanRangeMin=10;
		irScanRangeMax=10000;
		irScanToEyeFactor=8;
		fuelCapacity=2000;
		wheelSteeringSensitivity=1.5;
		maxOmega=2000;
		airBrake=1;
		airBrakeFrictionCoef=10;
		flaps=1;
		flapsFrictionCoef=0.31999999;
		gearsUpFrictionCoef=0.60000002;
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0066};
		airFrictionCoefs2[]={0.001,0.0049999999,6.8000001e-005};
		memoryPointLRocket="P Raketa";
		memoryPointRRocket="L Raketa";
		cost=10000000;
		type="VAir";
		threat[]={0.2,0.69999999,0.89999998};
		class camShakeGForce
		{
			power=1;
			frequency=20;
			distance=0;
			minSpeed=1;
		};
		minGForce=0.30000001;
		maxGForce=10;
		gForceShakeAttenuation=0.5;
		class AnimationSources
		{
			class Damper_1_source
			{
				source="damper";
				wheel="Wheel_1";
			};
			class Damper_2_source
			{
				source="damper";
				wheel="Wheel_2";
			};
			class Damper_3_source
			{
				source="damper";
				wheel="Wheel_3";
			};
			class Wheel_1_source
			{
				source="wheel";
				wheel="Wheel_1";
			};
			class Wheel_2_source
			{
				source="wheel";
				wheel="Wheel_2";
			};
			class Wheel_3_source
			{
				source="wheel";
				wheel="Wheel_3";
			};
			class hp1_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class hp2_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class hp3_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class hp4_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class hp5_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class hp6_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class gunpod_hide
			{
				source="user";
				animPeriod=0.0099999998;
			};
			class Muzzle_flash
			{
				source="ammorandom";
				weapon="FIR_GAU22";
			};
			class flare_door
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class fuel_probe
			{
				source="user";
				animPeriod=2;
				initPhase=0;
			};
			class AB_ON
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
			class ejection_seat_hide
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class canopy_hide
			{
				source="user";
				animPeriod=0.1;
				initPhase=0;
			};
			class SFoil
			{
				source="user";
				animPeriod=1;
				initPhase=0;
			};
		};
		class UserActions
		{
			class deploySfoils
			{
				displayName="Fold S-Foils";
				position="action";
				radius=10;
				onlyForPlayer=0;
				condition="this animationSourcePhase ""SFoil"" == 0";
				statement="this animateSource [""SFoil"",1]";
			};
			class undeploySfoils: deploySfoils
			{
				displayName="Deploy S-Foils";
				condition="this animationSourcePhase ""SFoil"" == 1";
				statement="this animateSource [""SFoil"",0]";
			};
			class Eject
			{
				priority=0.050000001;
				shortcut="Eject";
				displayName="$STR_A3_action_eject";
				condition="player in this && {speed this > 1}";
				statement="[this] spawn bis_fnc_planeEjection";
				position="action";
				radius=10;
				onlyforplayer=1;
				showWindow=0;
				hideOnUse=1;
			};
		};
		class Exhausts
		{
			class Exhaust_main
			{
				position="Exhausts_start_main";
				direction="Exhausts_end_main";
				effect="ExhaustsEffectPlane";
			};
		};
		class Reflectors
		{
			class Left
			{
				ambient[]={100,100,100,0};
				color[]={7000,7500,10000,1};
				conefadecoef=10;
				daylight=0;
				direction="light_1_dir";
				flaresize=4;
				hitpoint="L svetlo";
				innerangle=20;
				intensity=50;
				outerangle=60;
				position="light_1_pos";
				selection="L svetlo";
				size=1;
				useflare=1;
				class Attenuation
				{
					constant=0;
					linear=0;
					quadratic=4;
					start=1;
				};
			};
		};
		class MarkerLights
		{
			class Red_Still_R
			{
				name="light_positional_red";
				color[]={0.30000001,0,0,1};
				ambient[]={0.003,0.003,0.003,1};
				brightness=0.050000001;
				dayLight=1;
				blinking=0;
			};
			class Green_Still_L
			{
				name="light_positional_green";
				color[]={0,0.30000001,0,1};
				ambient[]={0.003,0.003,0.003,1};
				brightness=0.050000001;
				blinking=0;
				dayLight=1;
			};
		};
		class ViewPilot
		{
			initAngleX=5;
			minAngleX=-55;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-150;
			maxAngleY=150;
			minFov=0.25;
			maxFov=1.25;
			initFov=0.75;
			minMoveX=-100;
			maxMoveX=100;
			minMoveY=0;
			maxMoveY=0;
			minMoveZ=0;
			maxMoveZ=0;
		};
		class Library
		{
			libTextDesc="PP MAN";
		};
		attenuationEffectType="HeliAttenuation";
		soundGetIn[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\buzzard_getin",
			"db0",
			1,
			40
		};
		soundGetOut[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\getout",
			"db0",
			1,
			40
		};
		soundDammage[]=
		{
			"",
			"db-5",
			1
		};
		soundEngineOnInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_int",
			"db-0",
			1
		};
		soundEngineOnExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-start_ext",
			"db5",
			1,
			500
		};
		soundEngineOffInt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_int",
			"db-0",
			1
		};
		soundEngineOffExt[]=
		{
			"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-stop_ext",
			"db5",
			1,
			500
		};
		soundLocked[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_1",
			"db-20",
			1
		};
		soundIncommingMissile[]=
		{
			"\A3\Sounds_F\weapons\Rockets\locked_3",
			"db-20",
			1.5
		};
		soundGearUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_up",
			"db-2",
			1,
			150
		};
		soundGearDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\gear_down",
			"db-2",
			1,
			150
		};
		soundFlapsUp[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Up",
			"db-4",
			1,
			100
		};
		soundFlapsDown[]=
		{
			"A3\Sounds_F_EPC\CAS_02\Flaps_Down",
			"db-4",
			1,
			100
		};
		class scrubLandInt
		{
			sound[]=
			{
				"A3\Sounds_F\vehicles\air\noises\wheelsInt",
				"db0",
				1,
				100
			};
			frequency=1;
			volume="(scrubLand factor[0.01, 0.20])";
		};
		class Sounds
		{
			class EngineLowOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_ext",
					"db8",
					1,
					1200
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="camPos*2*(rpm factor[0.95, 0])*(rpm factor[0, 0.95])";
			};
			class EngineHighOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_ext",
					"db8",
					1.2,
					1400
				};
				frequency="1";
				volume="camPos*4*(rpm factor[0.5, 1.1])*(rpm factor[1.1, 0.5])";
			};
			class ForsageOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_ext",
					"db5",
					0.99000001,
					1700
				};
				frequency="1";
				volume="engineOn*camPos*(thrust factor[0.6, 1.0])";
				cone[]={3.1400001,3.9200001,2,0.5};
			};
			class WindNoiseOut
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-5",
					1,
					150
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="camPos*(speed factor[1, 150])";
			};
			class EngineLowIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_low_int",
					"db0",
					1
				};
				frequency="1.0 min (rpm + 0.5)";
				volume="(1-camPos)*((rpm factor[0.7, 0.1])*(rpm factor[0.1, 0.7]))";
			};
			class EngineHighIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03_engi_int",
					"db0",
					1.2
				};
				frequency="1";
				volume="(1-camPos)*(rpm factor[0.85, 1.0])";
			};
			class ForsageIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\Plane_Fighter_03-fors_int",
					"db0",
					1
				};
				frequency="1";
				volume="(1-camPos)*(engineOn*(thrust factor[0.6, 1.0]))";
			};
			class WindNoiseIn
			{
				sound[]=
				{
					"A3\Sounds_F\air\Plane_Fighter_03\noise",
					"db-6",
					1
				};
				frequency="(0.1+(1.2*(speed factor[1, 150])))";
				volume="(1-camPos)*(speed factor[1, 150])";
			};
		};
	};
	class macro_new_vehicle(arc_170,razor): macro_new_vehicle(arc_170,base)
	{
		scope=2;
		scopecurator=2;
		displayName="ARC-170 (Razor)";
		crew="B_Pilot_F";
		side=1;
		faction="RD501_Republic_Faction";
		editorSubcategory="RD501_Editor_Category_Air_Republic_vtol";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_razor.jpg";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\razor.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
	class macro_new_vehicle(arc_170,blue): macro_new_vehicle(arc_170,razor)
	{
		displayName="ARC-170 (Blue)";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_blue.jpg";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\blue.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
	class macro_new_vehicle(arc_170,green): macro_new_vehicle(arc_170,razor)
	{
		displayName="ARC-170 (Green)";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_green.jpg";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\Green.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
	class macro_new_vehicle(arc_170,Orange): macro_new_vehicle(arc_170,razor)
	{
		displayName="ARC-170 (Orange)";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_orange.jpg";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\orange2.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
	class macro_new_vehicle(arc_170,yellow): macro_new_vehicle(arc_170,razor)
	{
		displayName="ARC-170 (Orange 2)";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_yellow.jpg";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\orange.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
	class macro_new_vehicle(arc_170,red): macro_new_vehicle(arc_170,razor)
	{
		displayName="ARC-170 (Republic)";
		editorPreview="\3as\3as_arc170\images\3as_arc_170_yellow.jpg";
		hiddenselections[]=
		{
			"camo1",
			"camo2"
		};
		hiddenselectionstextures[]=
		{
			"3as\3as_arc170\Data\red.paa",
			"a3\air_f_jets\plane_fighter_01\data\fighter_01_glass_01_ca.paa"
		};
	};
};
class cfgFactionClasses
{
	class 3AS_Rep
	{
		displayName="Grand Army of the Republic";
		priority=2;
		icon="";
	};
};
