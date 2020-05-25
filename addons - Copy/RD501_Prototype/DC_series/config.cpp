#include "../config_macros.hpp" 
#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(DC_15_proto)
	{
		author=macro_authors_ppl;
		addonRootClass= macro_patch_name(weapon_prototypes)
		requiredAddons[]=
		{
			macro_patch_name(weapon_prototypes)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_new_weapon(DC,15a_stageI),
			macro_new_weapon(DC,15a_gl_stageI),
			macro_new_weapon(DC,15a_LE_stageI),
			macro_new_weapon(DC,15a_mod0_stageI),

			macro_new_weapon(DC,15s_stageI),
			"RD501_TEST_LE_GUN"

			//macro_new_weapon(DC,verision_checker)
		};
	};
};
class CowsSlot;
class Mode_SemiAuto;
class cfgWeapons 
{	
	//swop rifles
	//verision checker
	// class macro_new_weapon(DC,verision_checker):SWOP_DC15ABlasterRifle
	// {	
	// 	weaponPoolAvailable = 1;
	// 	scope=2;
	// 	scopeArsenal=2;
	// 	baseWeapon = macro_new_weapon(DC,verision_checker);
	// 	displayName = macro_mod_ver
	// };

	
	
	//212th dc15x
	class SCI_dc15x_base;
	class SCI_DC15XM:SCI_dc15x_base
	{
		class Single;
	};

	//212th valken
	class SCI_arifle_VALKEN38A_Base_F;
	class SCI_arifle_VALKEN38A_F:SCI_arifle_VALKEN38A_Base_F
	{
		class fullauto;
	};

	//212th Gl
	class Rifle_Base_F;
	class SCI_arifle_DC15GL_Base_F;
	class SCI_arifle_DC15GL_F: SCI_arifle_DC15GL_Base_F
	{
		class Single;
		class Burst;
		class SCI_GL_F;
	};

	class SCI_arifle_DC15A_Base_F;
	class SCI_arifle_DC15A_F:SCI_arifle_DC15A_Base_F
	{
		class Single;
		class Burst;
	};

	class SCI_arifle_DC15LE_F: SCI_arifle_DC15A_Base_F
	{	
		class Single;
	};

	class RD501_TEST_LE_GUN:SCI_arifle_DC15LE_F
	{
		scope = 2;
	}
	#include "_dc15a_gl.hpp"

	#include "_dc15a_rifle.hpp"

	#include "_dc15a_le.hpp"

	#include "_dc15a_mod0.hpp"


	class SCI_arifle_DC15S_Base_F;
	class SCI_arifle_DC15S_F: SCI_arifle_DC15S_Base_F
	{
		
		class FullAuto;
		
	};
	#include "_dc15s_carbine.hpp"

};

