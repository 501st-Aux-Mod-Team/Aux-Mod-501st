#include "../../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(grenades)
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			macro_patch_name(weapons)
		};
		author = "SWOP";
		magazines[] = {"RD501_BlueShadow_Grenade"};
		ammo[] = {"RD501_ShadowMag"};
	};
};
class CfgCloudlets
{
	class Default;
	class DIOXIS_Fire;
	class Shadow_Fire: DIOXIS_Fire
	{
		damageType = "Fire";
	};
	class Dioxis_Smoke;
	class Shadow_Smoke: Dioxis_Smoke
	{
		color[] = {{0.2125,0.3,0.8,0.2},{0.2125,0.3,0.8,0.4},{0.2125,0.3,0.8,0.6}};
	};
};
class Shadow_Smoke
{
	class Shadow_Smoke
	{
		simulation = "particles";
		type = "Shadow_Smoke";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		lifeTime = 20;
	};
	class Fire
	{
		simulation = "particles";
		type = "Shadow_Fire";
		position[] = {0,0,0};
		intensity = 1;
		interval = 1;
		start = 0.5;
		lifeTime = 25;
	};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default
	{
		class ThrowMuzzle;
	};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"Shadow_Muzzle","Imploder_Muzzle","Thermaldet_Muzzle","Squad_Shield_Muzzle","Squad_Shield_Trench_Muzzle","Personal_Shield_Muzzle", "Throwable_C_Type_Muzzle","SuperSmoke_Muzzle","Dioxis_Muzzle","thermaldet_cis_Muzzle"};
		class Shadow_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(blueshadow,1)};
		};
		class Imploder_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(imploder,1)};
		};
		class Thermaldet_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(thermaldet,1)};
		};
		class Squad_Shield_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(squad_shield_sigma,1)};
		};
		class Squad_Shield_Trench_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(squad_shield_alpha,1)};
		};
		class Personal_Shield_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(personal_shield,1)};
		};
		class Throwable_C_Type_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(throwable_c_type,1)};
		};
		class SuperSmoke_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(super_smoke,1)};
		};
		class Dioxis_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(dioxis,1)};
		};
		class thermaldet_cis_Muzzle: ThrowMuzzle
		{
			magazines[] = {macro_new_mag(thermaldet_cis,1)};
		};
	};
};