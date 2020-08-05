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
	class Shadow_Smoke: Default
	{
		animationSpeedCoef = 1;
		colorCoef[] = {"colorR","colorG","colorB","colorA"};
		sizeCoef = 1;
		position[] = {0,0,0};
		interval = 0.03;
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 0.1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = 20;
		moveVelocity[] = {0.2,0.1,0.1};
		rotationVelocity = 1;
		weight = 1.2777;
		volume = 1;
		rubbing = 0.015;
		size[] = {0.12,2.1,7};
		color[] = {{0.2125,0.3,0.8,0.2},{0.2125,0.3,0.8,0.4},{0.2125,0.3,0.8,0.6}};
		animationSpeed[] = {1.5,0.5};
		randomDirectionPeriod = 1;
		randomDirectionIntensity = 0.04;
		onTimerScript = "";
		beforeDestroyScript = "";
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.6;
		lifeTimeVar = 2;
		positionVar[] = {0,0,0};
		MoveVelocityVar[] = {0.25,0.25,0.25};
		rotationVelocityVar = 1;
		sizeVar = 0.7;
		colorVar[] = {0,0,0,0.35};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
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