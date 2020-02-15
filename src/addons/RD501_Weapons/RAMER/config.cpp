class CfgPatches
{
	class RD501_patch_ramer
	{
		author="Namenai, Rexi, Zatama";
		addonRootClass="RD501_patch_weapons";
		requiredAddons[]=
		{
			"RD501_patch_weapons"
		};
		requiredVersion=0.1;
		units[]={};
		weapons[]=
		{
			"RD501_RAMER",
			"RD501_T21"
		};
	};
};
class cfgWeapons
{
	class SWOP_T21BlasterRifle;
	class RD501_RAMER: SWOP_T21BlasterRifle
	{
		baseWeapon="RD501_RAMER";
		author="RD501";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayname="Republic Anti Material Energy Rifle";
		descriptionShort="(R.A.M.E.R)";
		magazines[]=
		{
			"RD501_RAMER_x6_mag"
		};
	};
	class RD501_T21: SWOP_T21BlasterRifle
	{
		baseWeapon="RD501_T21";
		author="RD501";
		scope=2;
		scopecurator=2;
		scopearsenal=2;
		displayname="[PROTOTYPE] Republic T21 Light Repeater";
		descriptionShort="Low rate of fire heavy infantry weapon";
		magazines[]=
		{
			"RD501_T21_x25_mag"
		};
	};
};
class cfgMods
{
	author="Zatama";
	timepacked="1580895574";
};
