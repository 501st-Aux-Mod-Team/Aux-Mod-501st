scope=2;
scopeArsenal=2;
dlc = "RD501";
author= "RD501";

DC_Family_Flashlight

ACE_Overheating_Dispersion = DC15a_Overheat_Dispersion
ACE_Overheating_SlowdownFactor = DC15a_Overheat_SlowdownFactor
ACE_Overheating_JamChance = DC15a_Overheat_JamChance
ACE_overheating_mrbs = DC15a_Overheat_mrbs
ACE_overheating_allowSwapBarrel = 1;
ACE_clearJamAction = "ReloadMagazine";

magazines[] = {"SWOP_WESTARM5_Mag","DCStun_Mag"};

modelOptics = "Scope\4x_xm8.p3d";
class OpticsModes:OpticsModes
{
	class Snip:Snip
	{
		modelOptics = "Scope\4x_xm8.p3d";
		opticsZoomMin =  scope_magnification(8);
		discretefov[] = {scope_magnification(1),scope_magnification(4),scope_magnification(8)};
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
		modelOptics = "\A3\Weapons_F\empty";
		visionMode[] = {};
		discretefov[] = {};
		discreteDistance[] = {200};
		discreteDistanceInitIndex = 0;
		distanceZoomMin = 200;
		distanceZoomMax = 200;
		discreteInitIndex = 0;
	};
	
	
};

class Single:Single
{
	dispersion = wester_m5_accuracy;
	reloadTime = wester_m5_reloadtime;
};
class FullAuto:FullAuto
{
	dispersion = wester_m5_accuracy;
	reloadTime = wester_m5_auto_reloadtime
};