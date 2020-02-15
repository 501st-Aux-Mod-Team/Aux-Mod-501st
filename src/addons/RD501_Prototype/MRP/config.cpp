#include "../config_macros.hpp" 
#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(MRP)
	{
		author=macro_authors_ppl;
		addonRootClass= macro_patch_name(weapon_MRP)
		requiredAddons[]=
		{
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			macro_new_weapon(DC,15a_MRP),
			macro_new_weapon(DC,15a_GL_MRP),
			macro_new_weapon(Z6,RC_MRP),
			macro_new_weapon(DC,17_MRP)
		};
	};
};
class CowsSlot;
class UnderBarrelSlot;
class MuzzleSlot;
class PointerSlot;
class Mode_SemiAuto;
class Mode_FullAuto;

class cfgWeapons 
{	
	//212th dc15x
	class JLTS_DC15A;
	class JLTS_DC15A_ugl;
	class UGL_F;
	class JLTS_Z6;
	class JLTS_DC17SA;

	class macro_new_weapon(DC,15a_MRP): JLTS_DC15A
	{
		author = RD501;
		displayname="[MRP] DC15a";
		hiddenSelectionsTextures[]=
		{
			"RD501_Prototype\MRP\textures\DC15A_co.paa"
		};
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(Republic_Universal_Magazine,30)};
		macro_ace_heating
		canShootInWater = 1;
		recoil =  macro_new_recoil(dc15a_rifle)
		modes[] = {"Single","FullAuto"};
	};
	class macro_new_weapon(DC,15a_GL_MRP): JLTS_DC15A_ugl
	{
		author = RD501;
		displayName="[MRP] DC-15A UGL";
		hiddenSelectionsTextures[]=
		{
			"RD501_Prototype\MRP\textures\DC15A_co.paa",
			"\MRC\JLTS\weapons\DC15A\data\DC15A_ugl_co.paa"
		};
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(Republic_Universal_Magazine,30)};
		macro_ace_heating
		canShootInWater = 1;
		recoil =  macro_new_recoil(dc15a_rifle)
		modes[] = {"Single","FullAuto"};
		class EGLM: UGL_F
		{
			magazineWell[] += {macro_new_magwell(GL_Mags)};
			magazines[] = {};
			displayName="Grenade launcher";
			descriptionShort="UGL";
			useModelOptics=0;
			useExternalOptic=0;
			cameraDir="OP_look";
			discreteDistance[] = {100,150,200,250,300,350,400};
			discreteDistanceCameraPoint[]=
			{
				"OP_eye",
				"OP_eye2",
				"OP_eye3",
				"OP_eye4"
			};
			discreteDistanceInitIndex=0;
		};
	};
	class macro_new_weapon(Z6,RC_MRP): JLTS_Z6
	{
		scope=2;
		scopeArsenal=2;
		baseWeapon="JLTS_Z6";
		author = RD501;
		displayName="[MRP] Z6 Rotary Cannon";
		magazineWell[]={Republic_Universal_Magazine_Well};
		magazines[]={macro_new_mag(proto_z6,300)};
		recoil = macro_new_recoil(z6)
		modes[]=
		{
			"manual",
			"close",
			"short",
			"medium",
			"far_optic1",
			"far_optic2"
		};
	};
	class macro_new_weapon(DC,17_MRP): JLTS_DC17SA
	{
		scope=2;
		scopeArsenal=2;
		author = RD501;
		displayName="[MRP] DC17";
		magazines[]={macro_new_mag(DC17,20),"DCStun_Mag"};
		magazineWell[] = {macro_new_magwell(DC17_GL_Mags)};
		modes[]=
		{
			"Single"
		};
	};
};

