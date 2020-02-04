#include "../RD501_main/config_macros.hpp"



class CfgPatches
{
	class macro_patch_name(stretcher)
	{
		requiredAddons[] = {
			macro_lvl2_req
		};
		requiredVersion = 0.1;
		units[] = {
		
		};
		weapons[] = {};
	};
};
class CfgVehicles
{
	class Man;
	class StaticATWeapon;
	class ThingX;
	class car_f;
	class Kart_01_Base_F;
	class CAManBase: Man
	{
		class ACE_SelfActions
		{
			class ACE_Equipment
			{
				class RD501_Deploy_Stretcher
				{
					displayName = "Deploy Stretcher";
					condition = [player,macro_single_quote(macro_new_weapon(Stretcher,Item))] call ace_common_fnc_hasItem;
					statement = [player, macro_single_quote(macro_new_vehicle(Stretcher,MkII)), macro_single_quote(macro_new_weapon(Stretcher,Item))] call macro_fnc_name(deploy_stretcher);

					showDisabled = 0;
					priority = 2.5;
				};
			};
		};
	};
	class macro_new_vehicle(Stretcher,MkII): Kart_01_Base_F
	{
		forceInGarage=1;
		transportSoldier = 1;
		scope = 2;
		hasdriver = 0;
		slingLoadCargoMemoryPoints[] = {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};
		class Turrets{};
		class AnimationSources{};
		memoryPointsGetInCargo = "pos cargo";
		memoryPointsGetInCargoDir = "pos cargo dir";
		displayName = "Stretcher Mk.II";
		Model = "\501RDStretcher\model\501_Stretcher.p3d";
		cargoAction[] = {"passenger_injured_medevac_truck02"};
		ejectDeadCargo = 0;
		armor=100000;

		// Dragging
        ace_dragging_canDrag = 1;  // Can be dragged (0-no, 1-yes)
        ace_dragging_dragPosition[] = {0, 1, 1};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_dragDirection = 0;  // Model direction while dragging (same as setDir after attachTo)

        // Carrying
        ace_dragging_canCarry = 1;  // Can be carried (0-no, 1-yes)
        ace_dragging_carryPosition[] = {0, 0, 0};  // Offset of the model from the body while dragging (same as attachTo)
        ace_dragging_carryDirection = 0;  // Model direction while dragging (same as setDir after attachTo)

		class VehicleTransport
		{
			class Cargo
			{
				parachuteClass = "B_Parachute_02_F";
				parachuteHeightLimit = 5;
				canBeTransported = 1;
				dimensions[] = {"VTV_Cargo_Base","VTV_Cargo_Corner"};
			};
		};
		class ACE_Actions
		{
			class ACE_MainActions
			{
				selection = "ACE_Point";
				distance = 5;
				condition = "true";
				class RD501_Pick_Up_Stretcher
				{
					displayName = "Put Stretcher in backppack";
					distance = 5;
					condition = "((count (crew _target)) == 0) && (isNull attachedTo _target)";
					statement = [player,_target,macro_single_quote(macro_new_weapon(Stretcher,Item))] call macro_fnc_name(put_stretcher_in_backpack);
					showDisabled = 0;
					priority = 5;
				};
				class RD501_Transport_Stretcher
				{
					displayName = "Carry Stretcher";
					distance = 5;
					condition = "(isNull attachedTo _target)";
					statement = [player,_target] call macro_fnc_name(carry_stretcher);
					showDisabled = 0;
					priority = 5;
				};
				class RD501_Drop_Stretcher
				{
					displayName = "Stop Carrying Stretcher";
					distance = 5;
					condition = "!(isNull attachedTo _target)";
					statement = _target call macro_fnc_name(drop_stretcher);
					showDisabled = 0;
					priority = 5;
				}; 
				class ACE_Passengers
				{
					displayName = "$STR_ace_interaction_Passengers";
					condition = "alive _target";
					statement = "";
					exceptions[] = {"isNotSwimming"};
					insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
				};
			};
		};
		class ACE_SelfActions
		{
			class ACE_Passengers
			{
				displayName = "$STR_ace_interaction_Passengers";
				condition = "alive _target";
				statement = "";
				insertChildren = "_this call ace_interaction_fnc_addPassengersActions";
			};
		};
		class Eventhandlers
		{
			init = "(_this select 0) allowdamage false;";
		};
		macro_new_config_prop(stretcher_item) = macro_new_weapon(Stretcher,Item);
		
		

	};
};
class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class macro_new_weapon(Stretcher,Item_Base): ItemCore
	{
		type = 4096;
		detectRange = -1;
		simulation = "ItemMineDetector";
		scope = 0;
		cost = 1000;
		side = 3;
		author = "Namenai";
	};
	class macro_new_weapon(Stretcher,Item): macro_new_weapon(Stretcher,Item_Base)
	{
		displayName = "Republic Stretcher";
		scope = 2;
		author = "Namenai";
		picture = "\mcc_sandbox_mod\data\items\bandage.paa";
		model = "\A3\Structures_F_EPA\Items\Medical\Bandage_F.p3d";
		class ItemInfo: InventoryItem_Base_F
		{
			mass = 225;
		};
	};
};

// class Extended_Init_EventHandlers 
// {
// 	//class name of the object
//     class macro_new_vehicle(Stretcher,MkII)
//     {
//     	//doesnt matter wat this is
//         class init_Stretcher
//         {
//             init = [_this select 0] spawn macro_fnc_name(init_stretcher);
//         };
//     };
// }