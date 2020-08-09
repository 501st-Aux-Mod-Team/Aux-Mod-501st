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
class CfgAmmo
{
	class SmokeShell;
	class SWOP_SCAR_Dioxis;
	class RD501_ShadowMag: SWOP_SCAR_Dioxis
	{
		model = "\thermalD\Dioxis.p3d";
		hit = 4;
		class NVGMarkers
		{
			class Blinking1;
			class Blinking2;
		};
		smokeColor[] = {0.2125,0.6258,0.48909998,1};
		effectsSmoke = "Shadow_Smoke";
	};
};
class CfgMagazines
{
	class SmokeShell;
	class EGLM;
	class RD501_BlueShadow_Grenade: SmokeShell
	{
		model = "\thermalD\Dioxis.p3d";
		displayName = "1Rnd Blue Shadow Grenade";
		picture = "\thermalD\dioxisgp_x_ca.paa";
		displayNameShort = "Blue Shadow Grenade";
		descriptionShort = "Blue Shadow Grenade";
		ammo = "RD501_ShadowMag";
		mass = 3;
		class Library
		{
			libTextDesc = "";
		};
	};
	class RD501_emp_GL_x1_mag : EGLM
{
	ammo = "JLTS_grenade_emp_ammo";
	author = "Dutch";
	count = 1;
	descriptionShort = "1Rnd EMP DC-15A Grenade";
	displayName = "1 Rnd EMP DC-15A Grenades";
	displayNameShort = "1Rnd EMP DC-15A";
	initSpeed = 120;
	mass = 50;
	maxLeadSpeed = 25;
	maxThrowHoldTime = 2;
	maxThrowIntensityCoef = 1.4;
	minThrowIntensityCoef = 0.3;
	model = "\thermalD\EMP_Grenade_ammo.p3d";
	modelSpecial = "";
	nameSound = "";
	picture = "\thermalD\flash_x_ca.paa";
	quickReload = 0 ;
	reloadAction = "";
	scope = 2;
	selectionFireAnim = "zasleh";
	simulation = "ProxyMagazines";
	type = 16;
	useAction = 0;
	useActionTitle = "";
	value = 1;
	weaponpoolavailable = 1;
	weight = 0;
	class InventoryPlacements;
	class Library {
		libTextDesc = "";
	}
};
};
class CfgWeapons
{
	class Default;
	class GrenadeLauncher: Default{};
	class Throw: GrenadeLauncher
	{
		muzzles[] += {"Shadow_Muzzle"};
		class ThrowMuzzle;
		class Shadow_Muzzle: ThrowMuzzle
		{
			magazines[] = {"RD501_BlueShadow_Grenade"};
		};
	};
};