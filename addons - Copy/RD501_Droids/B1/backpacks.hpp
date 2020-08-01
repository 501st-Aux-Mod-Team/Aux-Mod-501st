class JLTS_B1_backpack;
class JLTS_B1_backpack_prototype;
class JLTS_B1_antenna;

class macro_new_backpack_class(opfor,B1): JLTS_B1_backpack
{
	author = "RD501";
	scope = 1;
};
class macro_new_backpack_class(opfor,B1_prototype): JLTS_B1_backpack_prototype
{
	author = "RD501";
	scope = 1;
};
class macro_new_backpack_class(opfor,B1_antenna): JLTS_B1_antenna
{
	author = "RD501";
	scope = 1;
};
class macro_new_backpack_class(opfor,B1_AT_heavy): JLTS_B1_backpack
{
	author = "RD501";
	scope=1;
	class TransportMagazines
	{
		class _xx_at_heavy_mag
		{
			count=3;
			magazine=macro_at_heavy_mag
		};
	};
};
class macro_new_backpack_class(opfor,B1_AT_light): JLTS_B1_backpack
{
	author = "RD501";
	scope=1;
	class TransportMagazines
	{
		class _xx_at_light_mag
		{
			count=2;
			magazine=macro_at_light_mag
		};
		class _xx_at_light_he_mag
		{
			count=2;
			magazine=macro_at_light_he_mag
		};
	};
};
class macro_new_backpack_class(opfor,B1_AA): JLTS_B1_backpack
{
	author = "RD501";
	scope=1;
	class TransportMagazines
	{
		class _xx_aa_mag
		{
			count=3;
			magazine=macro_aa_mag;
		};
	};
};

class B_UAV_01_backpack_F;
class EWEB_Bag: B_UAV_01_backpack_F
{

	class assembleInfo;

};
class macro_new_backpack_class(opfor,eweb_bag): EWEB_Bag
{
	scope = 2;
	displayName = "E-WEB Bag";
	descriptionShort = "E-WEB Bag";
	side = 0;
	//faction = "RD501FactionOpfor";
	picture = "\A3\Supplies_F_Orange\Bags\Data\UI\icon_C_IDAP_UAV_06_antimine_ca";
	model = "\A3\Supplies_F_Orange\Bags\B_UAV_06_antimine_F.p3d";
	hiddenSelectionsTextures[] = {"\A3\Supplies_F_Orange\Bags\Data\UAV_backpack_IDAP_co.paa", "a3\air_f_orange\uav_06\data\C_IDAP_UAV_06_antimine_CO.paa"};
	maximumLoad = 0;
	mass = 300;
	class assembleInfo: assembleInfo
	{
		base = "";
		displayName = "E-WEB";
		assembleTo = macro_new_vehicle(e_web,cis);
	};
};