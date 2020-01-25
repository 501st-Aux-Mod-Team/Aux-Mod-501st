//Modeled x4 scope
class SWOP_DC15A_zoomscope:ItemCore
{
	class ItemInfo;
};

class macro_new_weapon(scope,dc_15a_base1):SWOP_DC15A_zoomscope
{
	scope=0;
	class ItemInfo:ItemInfo
	{
		class OpticsModes;
	};
};

class macro_new_weapon(scope,dc_15a_base2):macro_new_weapon(scope,dc_15a_base1)
{
	scope=0;
	class ItemInfo:ItemInfo
	{
		class OpticsModes:OpticsModes
		{
			class Snip;
		};
	};
};

class macro_new_weapon(scope,dc_15a_x4):macro_new_weapon(scope,dc_15a_base2)
{
	scope=2;
	displayName="DC-15A LSW x4 Scope";
	class ItemInfo:ItemInfo
	{
		class OpticsModes:OpticsModes
		{
			class Snip:Snip
			{
				opticsZoomMin = scope_magnification(4);
				opticsZoomMax = scope_magnification(1);
				opticsZoomInit = scope_magnification(1);
				discreteinitIndex = 0;
				discretefov[] = {scope_magnification(1),scope_magnification(2),scope_magnification(4)};
				modelOptics = "Scope\4x_xm8.p3d";
				opticsDisablePeripherialVision = 1;
			};
			class Iron
			{
				opticsID = 2;
				opticsDisplayName = "";
				useModelOptics = 0;
				opticsPPEffects[] = {"",""};
				opticsFlare = 0;
				opticsDisablePeripherialVision = 0;
				opticsZoomMin = 0.25;
				opticsZoomMax = 1.25;
				opticsZoomInit = 0.75;
				memoryPointCamera = "eye";
				visionMode[] = {};
				discretefov[] = {};
				discreteDistance[] = {200};
				discreteDistanceInitIndex = 0;
				distanceZoomMin = 200;
				distanceZoomMax = 200;
				discreteInitIndex = 0;
				//modelOptics = "\A3\Weapons_F\empty";
				modelOptics = "Scope\4x_xm8.p3d";
			};
			
		};
	};
};