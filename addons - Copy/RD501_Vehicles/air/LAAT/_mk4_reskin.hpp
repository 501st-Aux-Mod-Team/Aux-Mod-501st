	class macro_new_vehicle(laat,mk4_skin): macro_new_vehicle(laat,Mk4)
	{
		displayName="LAAT/I MK.IV";
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk4_wings.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk4_fuselage.rvmat"
		};
    };	
	class macro_new_vehicle(laat,mk4_501st_cxc): rd501_laat_mk4_skin
	{
		displayName="LAAT/I MK.IV - ('CX-C')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\base\Laat501st_mk4_wings_cxc.paa",
			"RD501_Laat\textures\base\Laat501st_mk4_cxc.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk4_wings.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk4_fuselage.rvmat"
		};
		#include "_interactions/mk4_cxc.hpp"
	};
	class macro_new_vehicle(laat,mk4_501st_cxx): rd501_laat_mk4_skin
	{
		displayName="LAAT/I MK.IV - ('CX-X')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\base\Laat501st_mk4_wings_cxx.paa",
			"RD501_Laat\textures\base\Laat501st_mk4_cxx.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk4_wings.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk4_fuselage.rvmat"
		};
		#include "_interactions/mk4_cxx.hpp"
	};
		class macro_new_vehicle(laat,mk4_501st_cxp): rd501_laat_mk4_skin
	{
		displayName="LAAT/I MK.IV - ('CX-P')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\base\Laat501st_mk4_wings_cxp.paa",
			"RD501_Laat\textures\base\Laat501st_mk4_cxp.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk4_wings.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk4_fuselage.rvmat"
		};
		#include "_interactions/mk4_cxp.hpp"
	};
		class macro_new_vehicle(laat,mk4_501st_cxs): rd501_laat_mk4_skin
	{
		displayName="LAAT/I MK.IV - ('CX-S')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\base\Laat501st_mk4_wings_cxs.paa",
			"RD501_Laat\textures\base\Laat501st_mk4_cxs.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk4_wings.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk4_fuselage.rvmat"
		};
		#include "_interactions/mk4_cxs.hpp"
	};
		class macro_new_vehicle(laat,mk4_501st_cx): rd501_laat_mk4_skin
	{
		displayName="LAAT/I MK.IV - ('CX')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\base\Laat501st_mk4_wings_cxs.paa",
			"RD501_Laat\textures\base\Laat501st_mk4_cx.paa"
		};
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk4_wings.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk4_fuselage.rvmat"
		};
		#include "_interactions/mk4_cx.hpp"
	};