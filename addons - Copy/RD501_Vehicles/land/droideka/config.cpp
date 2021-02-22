#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(droideka)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			macro_new_vehicle(droideka,base)
		};
		weapons[]=
		{
			
		};
	};
};

#include "../../common/sensor_templates.hpp"
class DefaultEventhandlers;
class CfgVehicles
{
	class k_CIS_Droideka;
	class macro_new_vehicle(droideka,base): k_CIS_Droideka
	{
		scope=2;
		displayName = "Static Droideka";
		class EventHandlers: DefaultEventhandlers {}; 

		faction = macro_cis_faction;
		editorSubcategory = macro_editor_cat(heavy_armored_infantry);
		vehicleClass = macro_editor_vehicle_type(heavy_armored_infantry);

		armor = 225;
		armorStructural = 1.0;
		explosionShielding	= 0.1;
		minTotalDamageThreshold	= 0.01;
		impactDamageMultiplier = 0.1;
		class HitPoints
		{
			class HitGun
			{
				armor = 0.9;
				material = -1;
				name = "gun";
				visual = "autonomous_unhide";
				passThrough = 0;
				radius = 0.2;
			};
			class HitTurret: HitGun
			{
				armor = 0.3;
			};
		};
	};


};
