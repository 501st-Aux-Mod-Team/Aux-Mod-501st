#include "../../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(explosives)
	{
		addonRootClass=macro_patch_name(vehicles)

		requiredAddons[]=
		{
			macro_patch_name(vehicles)
		};
		requiredVersion=0.1;
		units[]=
		{
			"Rd501_Explosive_Barrel"
		};
		weapons[]=
		{
			
		};
	};
};

class CfgVehicles
{
	class Land_3as_ExplodeBarrel_1;
	class 442_box4;
	class Rd501_Explosive_Barrel: 442_box4
	{
		scope=2;
		scopeCurator=2;
		displayName="Explosive Barrel";
		model="\RD501_Vehicles\static\Explosives\data\barrel_0.p3d";
		vehicleClass = macro_editor_vehicle_type(statics)
		editorCategory =  macro_editor_cat(statics)
		editorSubcategory = macro_editor_cat(static_msc)
		ace_dragging_canCarry = 1;
		ace_dragging_canDrag = 1;
		armor=25;
		destrType = "DestructBuilding";
		explosionEffect="RD501_BlueFuelExplosion";
		class ACE_Actions {
            class ACE_MainActions {
                displayName = "Interact";
                selection = "mem01";
                distance = 10;
                condition = "true";
            };
		};
		transportFuel=1000;
		class DestructionEffects
		{
			/*class Smoke1
			{
				intensity=1;
				interval=1;
				lifeTime=1;
				position="";
				simulation="particles";
				type="ObjectDestructionSmokeSmall";
			};
			/*class Smoke2
			{
				intensity=1;
				interval=1;
				lifeTime=1;
				position="";
				simulation="particles";
				type="ObjectDestructionSmoke2";
			};*/
			class Fire1
			{
				intensity=0.5;
				interval=1;
				lifeTime=2;
				position="";
				simulation="particles";
				type="RD501_BlueObjectDestructionFire1Small";
			};
			class HouseDestr
			{
				intensity=1;
				interval=1;
				lifeTime=5;
				position="";
				simulation="destroy";
				type="DelayedDestruction";
			};
		};
	};
};