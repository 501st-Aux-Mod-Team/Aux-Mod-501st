

class CfgCloudlets
{
	class Dioxis_Smoke;

		class BlueShadowVirus: Dioxis_Smoke
		{
			color[] = {{0.2125,0.3,0.8,0.2},{0.2125,0.3,0.8,0.4},{0.2125,0.3,0.8,0.6}};
		};

};
class CfgAmmo
{
	class SWOP_SCAR_Dioxis;
		class RD501_BlueShadowVirus: SWOP_SCAR_Dioxis
		{
		effectsSmoke = "BlueShadowVirus";
		};
};
class CfgMagazines
{
	class SmokeShell;
	class SWOP_SCAR_DioxisGM;
		class RD501_BlueShadowVirusGM : SWOP_SCAR_DioxisGM
		{	scope = 2;
			displayName = "Blue Shadow Virus";
			displayNameShort = "Blue Shadow Virus Grenade";
			descriptionShort = "Blue Shadow Virus Grenade";
			ammo = "RD501_BlueShadowVirus";
			mass = 3;
			class Library
			{
				libTextDesc = "";
			};
		};
};
class CfgWeapons
{
	class Dioxis_Muzzle;
	class RD501_Dioxis_Muzzle: Dioxis_Muzzle
		{
			magazines[] = {"RD501_BlueShadowVirusGM"};
		};
};




