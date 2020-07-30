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