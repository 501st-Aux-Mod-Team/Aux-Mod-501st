class NVGoggles;
class JLTS_CloneNVG;
class JLTS_CloneNVG_spec;
class JLTS_CloneNVGRange: NVGoggles
{
    class ItemInfo;
};
class JLTS_CloneNVGCC;
class JLTS_CloneNVGMC;
class JLTS_CloneBinocular;
class JLTS_CloneBinocular_black;
class JLTS_NVG_droid_chip_1;

class rd501_jlts_nvchipclean: JLTS_NVG_droid_chip_1
{
    displayname = "Operator Class Vision Enhancement Chip";
    modelOptics="";
    thermalMode[] = {0,1,2,3,4,5};
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };  
}
class rd501_JLTS_CloneNVG: JLTS_CloneNVG
{
    displayname = "[GAR] Clone Viewfinder Visor (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVG_501st: JLTS_CloneNVG
{
    displayname = "[501st] Clone Viewfinder Visor (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    hiddenSelectionsTextures[]=
    {
        "RD501_Units\textures\republic\clones\clone_visor.paa"
    };
};
class rd501_JLTS_CloneNVG_spec: JLTS_CloneNVG_spec
{
    displayname = "[GAR] Clone Viewfinder Visor (Active)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVG_spec_501st: JLTS_CloneNVG_spec
{
    displayname = "[501st] Clone Viewfinder Visor (Active)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    hiddenSelectionsTextures[]=
    {
        "RD501_Units\textures\republic\clones\clone_visor.paa"
    };
};
class rd501_JLTS_CloneNVGRange: JLTS_CloneNVGRange
{
    displayname = "[501st] Clone Viewfinder Antenna (Toggle)";
    modelOptics="";
    hiddenSelectionsTextures[] = {"RD501_Units\textures\Republic\clones\clone_rangefinder.paa"};
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_ShockTrooperNVGRange: JLTS_CloneNVGRange
{
    displayname = "[501st] Shock Trooper Viewfinder Antenna (Toggle)";
    modelOptics="";
    hiddenSelectionsTextures[] = {"RD501_Units\textures\Republic\clones\clone_rangefinder.paa"};
	RD501_isNV=1;
    visionMode[]=
    {
        "Normal",
        "TI"
    };
};
class rd501_JLTS_CloneNVGRange_arc: JLTS_CloneNVGRange
{
    displayname = "[501st] ARC Viewfinder Antenna (Toggle)";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVGRange_down: JLTS_CloneNVGRange
{
    displayname = "[501st] Clone Viewfinder Antenna (Active)";
    modelOptics="";
    hiddenSelectionsTextures[] = {"RD501_Units\textures\Republic\clones\clone_rangefinder.paa"};
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
    class ItemInfo: ItemInfo
    {
        type=616;
        uniformModel="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
        modelOff="\MRC\JLTS\characters\CloneArmor\CloneNVGRange_on.p3d";
        mass=20;
        hiddenSelections[]=
        {
            "camo1"
        };
    };
};
class rd501_JLTS_CloneNVGRange_down_arc: rd501_JLTS_CloneNVGRange_down
{
    displayname = "[501st] ARC Viewfinder Antenna (Active)"
    modelOptics="";
    hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_nvg_range_co.paa"};
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
}
class rd501_JLTS_CloneNVGCC: JLTS_CloneNVGCC
{
    displayname = "[501st] Clone Officer Visor";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class rd501_JLTS_CloneNVGMC: JLTS_CloneNVGMC
{
    displayname = "[501st] Clone Commander Visor";
    modelOptics="";
    visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
};
class macro_new_weapon(nvg,shock_trooper) : JLTS_NVG_droid_chip_1
{
	visionMode[] = {"Normal","NVG"};
	dlc = "rd501";
	author= "RD501";
	displayName = "NVG Chip(Clear)";
	macro_thermal_nvg_default
};

	class macro_new_weapon(nvg,shock_trooper2) : JLTS_NVG_droid_chip_1
	{
		visionMode[] = {"Normal"};
		dlc = "rd501";
		author= "RD501";
		RD501_isNV = 1;
		displayName = "Shock Trooper Chip";
	};

	class macro_new_weapon(nvg,shock_trooper_enhanced) : JLTS_NVG_droid_chip_1
	{
		visionMode[] = {"Normal","TI"};
		thermalMode[] = {0,2};
		dlc = "rd501";
		author= "RD501";
		RD501_isNV = 1;
		displayName = "Shock Trooper Enhanced Chip";
	};
class rd501_JLTS_CloneBinocular: JLTS_CloneBinocular
{
    displayname = "[501st] Clone Macrobinoculars";
	visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
	thermalMode[] = {0,2};
};
class rd501_JLTS_CloneBinocular_black_TI: JLTS_CloneBinocular_black
{
    displayname = "[501st] Clone Macrobinoculars Scout";
	modelOptics="\A3\Weapons_F_beta\Binocular\lasermarker_optics";
	visionMode[]=
    {
        "Normal",
        "NVG",
        "TI"
    };
	thermalMode[] = {0,2};
};