
#include "../RD501_main/config_macros.hpp"


class CfgPatches
{
	class macro_patch_name(particle_effects)
	{
		author="RD501";
		requiredAddons[]=
		{
			//macro_root_req
			macro_patch_name(main)
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]={
			macro_quote(macro_new_cloudlet(jumppack_spark))
		};
	};
};
class CfgAmmo
{
	class Default;
	class RD501_BlueFuelExplosion: Default
	{
		hit=1300;
		indirectHit=1100;
		indirectHitRange=10
		model="";
		simulation="";
		cost=1;
		SoundSetExplosion[]=
		{
			"ExplosiveCharge_Exp_SoundSet",
			"ExplosiveCharge_Tail_SoundSet",
			"Explosion_Debris_SoundSet"
		};
		explosionSoundEffect="DefaultExplosion";
		soundFly[]=
		{
			"",
			1,
			1
		};
		soundEngine[]=
		{
			"",
			1,
			4
		};
		explosionEffects="RD501_BlueFuelExplosionEffects";
	};
};
class CfgCloudlets
{
	class Default;
	class RD501_BlueFireBallBrightSmall: Default
	{
		interval="0.05 * interval + 0.05";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\RD501_Particle_Effects\particle_effects\universal_blue";
		particleFSNtieth=16;
		particleFSIndex=0;
		particleFSFrameCount=32;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.80000001;
		moveVelocity[]={0,0.5,0};
		rotationVelocity=0;
		weight=0.039999999;
		volume=0.039999999;
		rubbing=0.1;
		size[]=
		{
			"0.0125 * intensity + 2",
			"0.0125 * intensity + 6"
		};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.5};
		randomDirectionPeriod=0.2;
		randomDirectionIntensity=0.2;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.5;
		positionVar[]={0.60000002,1,0.60000002};
		MoveVelocityVar[]={1,1,1};
		rotationVelocityVar=0;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RD501_SuperSmoke: Default
	{
		animationSpeedCoef=1;
		colorCoef[]=
		{
			"colorR",
			"colorG",
			"colorB",
			"colorA"
		};
		sizeCoef=1;
		position[]={0,0,0};
		interval=0.029999999;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth=16;
		particleFSIndex=7;
		particleFSFrameCount=48;
		particleFSLoop=1;
		angleVar=0.1;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=20;
		moveVelocity[]={0.2,0.2,0};
		rotationVelocity=1;
		weight=1.26;
		volume=1;
		rubbing=0.05;
		size[]={0.5, 8, 12, 15};
		color[]=
		{
			{1, 1, 1, 0.7},
			{1, 1, 1, 0.5},
			{1, 1, 1, 0.25},
			{1, 1, 1, 0}
		};
		animationSpeed[]={1.5,0.5};
		randomDirectionPeriod=1;
		randomDirectionIntensity=0.04;
		onTimerScript="";
		beforeDestroyScript="";
		destroyOnWaterSurface=1;
		destroyOnWaterSurfaceOffset=-0.60000002;
		lifeTimeVar=2;
		positionVar[]={0,0,0};
		MoveVelocityVar[]={1.2,0.34999999,1.2};
		rotationVelocityVar=20;
		sizeVar=0.5;
		colorVar[]={0,0,0,0.34999999};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RD501_Dioxis:RD501_SuperSmoke
	{
		moveVelocity[]={0.2,0.3,0};
		size[]={0.4, 5, 12};
		damageType="Fire";					// damage type, only available option is "Fire" so far
		coreIntensity = 5;			    	// damage coeficient in the center of fire
		coreDistance = 5.0;					// how far can unit get damage
		damageTime = 0.1;					// how often is unit getting damage 
	}
	class RD501_BlueVehExplosionParticlesSmall: Default
	{
		interval="0.03 * interval + 0.03";
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleShape="\RD501_Particle_Effects\particle_effects\universal_blue";
		particleFSNtieth=16;
		particleFSIndex=2;
		particleFSFrameCount=80;
		particleFSLoop=0;
		angleVar=360;
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=0.25;
		moveVelocity[]={0,4,0};
		rotationVelocity=0;
		weight=0.056000002;
		volume=0.039999999;
		rubbing=0.1;
		size[]={3,4.5};
		color[]=
		{
			{1,1,1,-4},
			{1,1,1,-3},
			{1,1,1,-2},
			{1,1,1,-1},
			{1,1,1,0}
		};
		animationSpeed[]={0.33000001};
		randomDirectionPeriod=0.5;
		randomDirectionIntensity=0.1;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0;
		positionVar[]={2,1,2};
		MoveVelocityVar[]={3,3,3};
		rotationVelocityVar=25;
		sizeVar=0.2;
		colorVar[]={0,0,0,2};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
	};
	class RD501_BlueExploLight
	{
		name="$STR_A3_CfgLights_ExploLight0";
		diffuse[]={0.031,0.573,0.816};
		color[]={0.031,0.573,0.816};
		ambient[]={0,0,0,0};
		brightness=200;
		size=1;
		intensity=100000;
		drawLight=0;
		blinking=0;
		class Attenuation
		{
			start=4;
			constant=0;
			linear=0;
			quadratic=0.2;
			hardLimitStart=1000;
			hardLimitEnd=2000;
		};
		position[]={0,4.5,0};
	};
	class RD501_BlueObjectDestructionFire1Small: Default
	{
		interval=0.0099999998;
		circleRadius=0;
		circleVelocity[]={0,0,0};
		particleFSNtieth=16;
		particleFSIndex=10;
		particleFSFrameCount=32;
		particleFSLoop=1;
		angleVar=0.1;
		particleShape="\RD501_Particle_Effects\particle_effects\universal_blue";
		animationName="";
		particleType="Billboard";
		timerPeriod=1;
		lifeTime=1.5;
		moveVelocity[]={0,1,0};
		rotationVelocity=0;
		weight=0.045000002;
		volume=0.039999999;
		rubbing=0.050000001;
		size[]=
		{
			"1.2 * intensity + 1",
			"0.1 * intensity + 0.2"
		};
		color[]=
		{
			{1,1,1,-1}
		};
		animationSpeed[]={0.5,1};
		randomDirectionPeriod=0;
		randomDirectionIntensity=0;
		onTimerScript="";
		beforeDestroyScript="";
		lifeTimeVar=0.40000001;
		positionVar[]={0.1,0.30000001,0.1};
		moveVelocityVar[]={0.1,0.5,0.1};
		rotationVelocityVar=10;
		sizeVar=0.5;
		colorVar[]={0.1,0.1,0.1,0};
		randomDirectionPeriodVar=0;
		randomDirectionIntensityVar=0;
		coreIntensity=1.25;
		coreDistance=1;
		damageTime=0.1;
		constantDistance=1;
		damageType="Fire";
	};
};
class RD501_BlueFuelExplosionEffects
{
	class ExpSparks
	{
		simulation="particles";
		type="ExpSparks";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.5;
	};
	class Shards
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards1
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards3
	{
		simulation="particles";
		type="ObjectDestructionShardsSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn1
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn2
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class ShardsBurn3
	{
		simulation="particles";
		type="ObjectDestructionShardsBurningSmall3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_0
	{
		simulation="particles";
		type="ObjectDestructionShards";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_1
	{
		simulation="particles";
		type="ObjectDestructionShards1";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_2
	{
		simulation="particles";
		type="ObjectDestructionShards2";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class Shards2_3
	{
		simulation="particles";
		type="ObjectDestructionShards3";
		position="";
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class LightExp
	{
		simulation="light";
		type="RD501_BlueExploLight";
		position[]={0,1.5,0};
		intensity=0.001;
		interval=1;
		lifeTime=0.5;
	};
	class Explosion1
	{
		simulation="particles";
		type="RD501_BlueVehExplosionParticlesSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.2;
	};
	class Explosion2
	{
		simulation="particles";
		type="RD501_BlueFireBallBrightSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=0.30000001;
	};
	class Smoke1
	{
		simulation="particles";
		type="VehExpSmokeSmall";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
	class SmallSmoke1
	{
		simulation="particles";
		type="VehExpSmoke2Small";
		position[]={0,0,0};
		intensity=1;
		interval=1;
		lifeTime=1;
	};
};
class RD501_ThickSmokeShellWhiteEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="RD501_SuperSmoke";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	/*class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};*/
};
class RD501_DioxisSmokeShellEffect
{
	class SmokeShell
	{
		simulation="particles";
		type="RD501_Dioxis";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	/*class SmokeShell2
	{
		simulation="particles";
		type="SmokeShellWhite2";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShellUW
	{
		simulation="particles";
		type="SmokeShellWhiteUW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};
	class SmokeShell2UW
	{
		simulation="particles";
		type="SmokeShellWhite2UW";
		position[]={0,0,0};
		intensity=1;
		interval=1;
	};*/
};