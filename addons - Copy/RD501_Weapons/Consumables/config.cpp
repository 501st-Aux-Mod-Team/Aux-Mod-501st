class cfgPatches
{
    class RD501_ACE_Medical
    {
        requiredAddons[] = {};
		units[]={};
		weapons[]={"RD501_Painkiller"};
    };
};
class CfgWeapons
{
    class ACE_ItemCore;
	class CBA_MiscItem_ItemInfo;
    class RD501_Painkiller: ACE_ItemCore
    {
        scope = 2;
		displayName = "Painkiller Autoinjector";
		picture = "\z\ace\addons\medical_treatment\ui\morphine_ca.paa";
		model = "\z\ace\addons\medical_treatment\data\morphine.p3d";
		descriptionShort = "Drink some water and Rest";
		descriptionUse = "Inbuilt Clone Armor injector for easy pain relief";
		class ItemInfo: CBA_MiscItem_ItemInfo
		{
			mass = 0.1;
		};
	};  
};
class ACE_Medical_Treatment
{
    class Morphine;
    
    class Medication
    {
        class RD501_Painkiller: Morphine
        {
            painReduce = 0.3;
            hrIncreaseLow[] = {-2,-4};
            hrIncreaseNormal[] = {-2,-6};
            hrIncreaseHigh[] = {-2,-7};
            timeInSystem = 600;
            timeTillMaxEffect = 30;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = -2;
        };
    };
};
class ACE_Medical_Treatment_Actions
{
    class Morphine;
    class RD501_Painkiller:Morphine
    {
        displayName = "Painkiller Autoinjector";
        displayNameProgress = "Injecting Painkillers";
        allowedSelections[] = {"LeftArm", "RightArm", "LeftLeg", "RightLeg"};
        items[] = {"RD501_Painkiller"};
        treatmentTime = 1;
    };
};