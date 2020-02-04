#include "../../RD501_main/config_macros.hpp"
class CfgPatches
{
	class macro_patch_name(weapon_impact_effects)
	{
		addonRootClass = macro_patch_name(particle_effects)
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			macro_patch_name(particle_effects)
		};
		version = 1;
		author[] = {"RD501"};
	};
};

class CfgCloudlets
{
	class Default;
	class macro_new_cloudlet(impack_spark_plasma_base):Default
	{
		interval = 0.0004;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 13;
		particleFSFrameCount = 2;
		particleFSLoop = 0;
		angleVar = 360;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 3.5;
		moveVelocity[] = {"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 200", "( - inDirY * 2 + surfNormalY / 2) * inSpeed / 200", "( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 200"};
		rotationVelocity = 1;
		weight = 100;
		volume = 0.01;
		rubbing = 0.3;
		size[] = {0.12, 0};
		sizeCoef = 1;
		color[] = {{1, 0.6, 0.4, -50}};
		colorCoef[] = {1, 1, 1, 1};
		emissiveColor[] = {{10, 6, 4, 1}};
		animationSpeed[] = {1000};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0;
		randomDirectionIntensity = 0;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		bounceOnSurface = 0.1;
		bounceOnSurfaceVar = 0.1;
		lifeTimeVar = 5;
		position[] = {0, 0, 0};
		positionVar[] = {0.01, 0.01, 0.01};
		moveVelocityVar[] = {1, 3, 1};
		rotationVelocityVar = 0;
		sizeVar = 0;
		colorVar[] = {0.05, 0.05, 0.05, 5};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class macro_new_cloudlet(impack_spark_plasma2_base):Default
	{
		interval = 0.01;
			circleRadius = 0;
			circleVelocity[] = {0, 0, 0};
			particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
			particleFSNtieth = 16;
			particleFSIndex = 13;
			particleFSFrameCount = 2;
			particleFSLoop = 0;
			angleVar = 360;
			animationName = "";
			particleType = "Billboard";
			timerPeriod = 3;
			lifeTime = 0.039;
			moveVelocity[] = {0, 0, 0};
			rotationVelocity = 1;
			weight = 1.275;
			volume = 1;
			rubbing = 0;
			size[] = {0.45, 0.225, 0};
			sizeCoef = 1;
			color[] = {{1, 0.6, 0.4, -50}};
			colorCoef[] = {1, 1, 1, 1};
			animationSpeed[] = {1000};
			animationSpeedCoef = 1;
			randomDirectionPeriod = 0;
			randomDirectionIntensity = 0;
			onTimerScript = "";
			beforeDestroyScript = "";
			blockAIVisibility = 0;
			lifeTimeVar = 0.02;
			position[] = {0, 0, 0};
			positionVar[] = {0, 0, 0};
			moveVelocityVar[] = {0, 0, 0};
			rotationVelocityVar = 0;
			sizeVar = 0.03;
			colorVar[] = {0.05, 0.05, 0.05, 5};
			randomDirectionPeriodVar = 0;
			randomDirectionIntensityVar = 0;
	};

	class macro_new_cloudlet(ImpactSmoke_base): Default
	{
		interval = 0.004;
		circleRadius = 0;
		circleVelocity[] = {0, 0, 0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 12;
		particleFSFrameCount = 8;
		particleFSLoop = 0;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 3;
		lifeTime = 1;
		moveVelocity[] = {"surfNormalX * inSpeed / 250 * 0.66", "surfNormalY * inSpeed / 250 * 0.66", "surfNormalZ * inSpeed / 250 * 0.66"};
		rotationVelocity = 1;
		weight = 1.28;
		volume = 1;
		rubbing = 0.5;
		size[] = {0.5, 0.7};
		sizeCoef = 1;
		color[] = {{0.3, 0.3, 0.3, 0.5}, {0.4, 0.4, 0.4, 0.25}, {0.5, 0.5, 0.5, 0.15}, {0.6, 0.6, 0.6, 0.07}, {0.8, 0.8, 0.8, 0}};
		colorCoef[] = {1, 1, 1, 1};
		animationSpeed[] = {1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.1;
		randomDirectionIntensity = 0.05;
		onTimerScript = "";
		beforeDestroyScript = "";
		lifeTimeVar = 1;
		position[] = {0, 0, 0};
		positionVar[] = {0.2, 0.2, 0.2};
		moveVelocityVar[] = {0.5, 0.5, 0.5};
		rotationVelocityVar = 0;
		sizeVar = 0.15;
		colorVar[] = {0.05, 0.05, 0.05, 0.3};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};

	class  macro_new_cloudlet(impack_spark_plasma): macro_new_cloudlet(impack_spark_plasma_base)
	{
		interval=0.0008;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=13;
		particleFSFrameCount=2;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=3;
		lifeTime=0.5;
		moveVelocity[]=
		{
			"(- inDirX * 2 + surfNormalX / 2) * inSpeed / 300",
			"( - inDirY * 2 + surfNormalY / 2) * inSpeed / 300",
			"( - inDirZ * 2 + surfNormalZ / 2) * inSpeed / 300"
		};
		rotationVelocity=1;
		weight=100;
		volume=0.0099999998;
		rubbing=0.30000001;
		size[]={0.12,0};
		sizeCoef=1;
		color[]=
		{
			{1,0.60000002,0.40000001,-50}
		};
		colorCoef[]={1,1,1,1};
		emissiveColor[]=
		{
			{10,6,4,1}
		};
		animationSpeed[]={1000};
		animationSpeedCoef=1;
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		blockAIVisibility=0;
		bounceOnSurface=0.1;
		bounceOnSurfaceVar=0.1;
		lifeTimeVar=.5;
		position[]={0,0,0};
		positionVar[]={0.001,0.01,0.01};
		moveVelocityVar[]={1,1.5,1};
		rotationVelocityVar=0;
		sizeVar=0;
		colorVar[]={0.050000001,0.050000001,0.050000001,5};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	}
	class macro_new_cloudlet(impack_spark_plasma2):macro_new_cloudlet(impack_spark_plasma2_base)
	{
		size[] = {0.25, 0.125, 0};
	};

	class macro_new_cloudlet(impack_smoke):macro_new_cloudlet(ImpactSmoke_base)
	{
		interval = 0.008;
		size[] = {0.3, 0.5};
		sizeCoef = 0.8;
	};
};

class CfgLights
{
	class macro_new_light(PlasmaLight)
	{
		diffuse[] = {1, 0.6, 0.4};
		color[] = {1, 0.6, 0.4};
		ambient[] = {0, 0, 0, 0};
		brightness = 10;
		size = 1;
		intensity = 10000;
		drawLight = 0;
		blinking = 1;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 2.2;
			hardLimitStart = 500;
			hardLimitEnd = 1000;
		};
		position[] = {0, 3.5, 0};
	};

	class macro_new_light(sparks_impact)
	{
		diffuse[] = {1, 0.8, 0.8};
		color[] = {1, 0.8, 0.8};
		ambient[] = {0, 0, 0, 0};
		brightness = 50;
		size = 1;
		intensity = 1000;
		drawLight = 0;
		blinking = 0;
		class Attenuation
		{
			start = 0;
			constant = 0;
			linear = 0;
			quadratic = 1;
			hardLimitStart = 40;
			hardLimitEnd = 80;
		};
		position[] = {0, 0, 0};
	};
};

class macro_new_complex_effect(impack_plasma)
{
	class Light1
	{
		simulation = "light";
		type =macro_new_light(PlasmaLight);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.3;
	};
	class SparksLight
	{
		simulation = "light";
		type = macro_new_light(sparks_impact);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.5;
	};

	class ImpactSparks1
	{
		simulation = "particles";
		type =  macro_new_cloudlet(impack_spark_plasma);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
	class ImpactSparks2
	{
		simulation = "particles";
		type = macro_new_cloudlet(impack_spark_plasma2);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};

	class ImpactSmoke
	{
		simulation = "particles";
		type = macro_new_cloudlet(impack_smoke);
		position[] = {0, 0, 0};
		intensity = 1;
		interval = 1;
		lifeTime = 0.2;
	};
};