
#include "../RD501_main/config_macros.hpp"

class CfgPatches
{
	class macro_patch_name(laat_variants)
	{
		author=DANKAUTHORS
		requiredAddons[]=
		{
			macro_lvl3_req
		};
		requiredVersion=0.1;
		units[]={
            macro_new_vehicle(laat,501st_cxc),
            macro_new_vehicle(laat,501st_cxx),
            macro_new_vehicle(laat,501st_cxp),
            macro_new_vehicle(laat,501st_cxs),
            macro_new_vehicle(laat,501st_cx),
            macro_new_vehicle(laat,91st),
            macro_new_vehicle(laat,101st),
            macro_new_vehicle(laat,212th),
            macro_new_vehicle(laat,empire),
            macro_new_vehicle(laat,first_order),

            macro_new_vehicle(laat,gold),
            macro_new_vehicle(laat,chrome),


        };
		weapons[]={};
	};
};

class CfgVehicles
{   
    class swop_LAAT;
    class macro_new_vehicle(laat,Mk3):swop_LAAT
    {
		hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\rvmats\laat_mk3_fuselage.rvmat",
			"RD501_Laat\textures\rvmats\laat_mk3_wings.rvmat"
		};
        class ACE_SelfActions;
    };

    class macro_new_vehicle(laat,gold):macro_new_vehicle(laat,Mk3)
    {
        //hiddenSelections[] = {"camo1", "camo2"};
        hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\gold.rvmat",// LAAT\textures\fuselage.rvmat
			"RD501_Laat\textures\gold.rvmat"//LAAT\textures\wings.rvmat
		};
        displayName="LAAT/I MK.III - Gold";
        //class ACE_SelfActions;
    };

    class macro_new_vehicle(laat,chrome):macro_new_vehicle(laat,Mk3)
    {
        displayName="LAAT/I MK.III - Chrome";
         hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\chrome.rvmat",
			"RD501_Laat\textures\chrome.rvmat"
		};
        //class ACE_SelfActions;
    };

	class macro_new_vehicle(laat,shoeshine):macro_new_vehicle(laat,Mk3)
    {
        displayName="LAAT/I MK.III - Shoeshine";
         hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\Shoeshine.rvmat",
			"RD501_Laat\textures\Shoeshine.rvmat"
		};
        //class ACE_SelfActions;
    };

	class macro_new_vehicle(laat,clear):macro_new_vehicle(laat,Mk3)
    {
        displayName="LAAT/I MK.III - Clear";
         hiddenSelectionsMaterials[]=
		{
			"RD501_Laat\textures\clear.rvmat",
			"RD501_Laat\textures\clear.rvmat"
		};
        //class ACE_SelfActions;
    };

    

    class macro_new_vehicle(laat,501st_cxc): RD501_LAAT_Mk3
	{
		displayName="LAAT/I MK.III - ('CX-C')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat501stcxc\Laat501stBodyCXC.paa",
			"RD501_Laat\textures\laat\Laat501stcxc\Laat501stWingCXC.paa"
		};
		
		#include "_interactions/cxc.hpp"
	};

	class macro_new_vehicle(laat,501st_cxx): RD501_LAAT_Mk3
	{
		#include "_interactions/cxx.hpp"
		displayName="LAAT/I MK.III - ('CX-X')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat501stcxx\Laat501stBodyCXX.paa",
			"RD501_Laat\textures\laat\Laat501stcxx\Laat501stWingCXX.paa"
		};
	};

	class macro_new_vehicle(laat,501st_cxp): RD501_LAAT_Mk3
	{
		#include "_interactions/cxp.hpp"
		displayName="LAAT/I MK.III - ('CX-P')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat501stcxp\Laat501stBodyCXP.paa",
			"RD501_Laat\textures\laat\Laat501stcxp\Laat501stWingCXP.paa"
		};
	};

	class macro_new_vehicle(laat,501st_cxs): RD501_LAAT_Mk3
	{
		#include "_interactions/cxs.hpp"
		displayName="LAAT/I MK.III - ('CX-S')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat501stcxs\Laat501stBodyCXS.paa",
			"RD501_Laat\textures\laat\Laat501stcxs\Laat501stWingCXS.paa"
		};
	};

	class macro_new_vehicle(laat,501st_cx): RD501_LAAT_Mk3
	{
		#include "_interactions/cx.hpp"
		displayName="LAAT/I MK.III - ('CX')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat501stcx\Laat501stBodyCX.paa",
			"RD501_Laat\textures\laat\Laat501stcxs\Laat501stWingCXS.paa"
		};
	};
    
    //Dedicated
	class macro_new_vehicle(laat,91st): RD501_LAAT_Mk3
	{
		displayName="LAAT/I MK.III - ('91st')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat91st\Laat91stBody.paa",
			"RD501_Laat\textures\laat\Laat91st\Laat91stWing.paa"
		};
	};
	class macro_new_vehicle(laat,101st): RD501_LAAT_Mk3
	{
		displayName="LAAT/I MK.III - ('101st')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat101st\Laat101stBody.paa",
			"RD501_Laat\textures\laat\Laat101st\Laat101stWing.paa"
		};
	};
	class macro_new_vehicle(laat,212th): RD501_LAAT_Mk3
	{
		displayName="LAAT/I MK.III - ('212th')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\Laat212th\Laat212thBody.paa",
			"RD501_Laat\textures\laat\Laat212th\Laat212thWing.paa"
		};
	};
	class macro_new_vehicle(laat,empire): RD501_LAAT_Mk3
	{		
		#include "_interactions/empire.hpp"
		displayName="LAAT/I MK.III - ('Empire')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\LaatEmpire\LaatBodyEmpire.paa",
			"RD501_Laat\textures\laat\LaatEmpire\LaatWingEmpire.paa"
		};
	};
	class macro_new_vehicle(laat,first_order): RD501_LAAT_Mk3
	{	
		class ACE_SelfActions: ACE_SelfActions
		{
			#include "_interactions/first_order.hpp"
		}	
		displayName="LAAT/I MK.III - ('First Order')";
		hiddenSelectionsTextures[]=
		{
			"RD501_Laat\textures\laat\LaatFirstOrder\LaatBodyFirstOrder.paa",
			"RD501_Laat\textures\laat\LaatFirstOrder\LaatWingFirstOrder.paa"
		};
	};
};