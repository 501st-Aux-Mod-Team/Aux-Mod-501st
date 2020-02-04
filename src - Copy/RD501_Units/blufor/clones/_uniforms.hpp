class macro_new_uniform_class(blufor,501_jesse_combat): SWOP_Clonetrooper_501jesse_F_CombatUniform//SWOP_Clonetrooper_501jesse_M_CombatUniform
{
    author = "RD501";
    scope = 2;
    displayName = "Clonetrooper uniform (501st 'Medic Jesse')";
    picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501_jesse.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(blufor,jesse);
        Armor = 20;
        modelSides[] = {6};
        uniformType = "Neopren";
        containerClass = "Supply100";
        mass = 40;
    };
};

class SWOP_Clonetrooper_501srtrooper_F_CombatUniform:Uniform_Base
{
        class ItemInfo;
};
class macro_new_uniform_class(blufor,501_senior_trooper_combat): SWOP_Clonetrooper_501srtrooper_F_CombatUniform//SWOP_Clonetrooper_501srtrooper_F_CombatUniform
{
    author = "RD501";
    scope = 2;
    displayName = "Clonetrooper uniform (501st 'Sr.Trooper')";
    picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(blufor,senior_trooper)
        Armor = 20;
        modelSides[] = {6};
        uniformType = "Neopren";
        containerClass = "Supply100";
        mass = 40;
    };
};
    
class macro_new_uniform_class(blufor,501_vet_trooper_combat): SWOP_Clonetrooper_501srtrooper_F_CombatUniform//RD501_Clonetrooper_501Vettrooper_F_CombatUniform
{
    author = "RD501";
    scope = 2;
    displayName = "Clonetrooper uniform (501st 'Vet.Trooper')";
    picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(blufor,vet_trooper)
        Armor = 20;
        modelSides[] = {6};
        uniformType = "Neopren";
        containerClass = "Supply100";
        mass = 40;
    };
};

class macro_new_uniform_class(blufor,gold_trooper_v1): SWOP_Clonetrooper_501srtrooper_F_CombatUniform//RD501_Clonetrooper_501Vettrooper_F_CombatUniform
{
    author = "RD501";
    scope = 2;
    displayName = "Clonetrooper uniform (501st 'GOLD')";
    picture = "\SWOP_clones\data\body\icoBODY\Ico_body_501.paa";
    nakedUniform = "U_BasicBody";
    model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
    class ItemInfo: ItemInfo
    {
        uniformModel = "-";
        uniformClass = macro_new_uniform_skin_class(blufor,gold_trooper)
        Armor = 20;
        modelSides[] = {6};
        uniformType = "Neopren";
        containerClass = "Supply100";
        mass = 40;
    };
};

class SWOP_Clonetrooper_F_CombatUniform: Uniform_Base
{
	author = "RD501";
	scope = 2;
	displayName = "Clonetrooper uniform";
	picture = "\SWOP_clones\data\body\icoBODY\Ico_body.paa";
	nakedUniform = "U_BasicBody";
	model = "\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
	class ItemInfo: UniformItem
	{
		uniformModel = "-";
		uniformClass = "SWOP_Clonetrooper_F";
		armor = 100;
		armorStructural = 5;
		explosionShielding = 0.1;
		impactDamageMultiplier	= -100; // multiplier for falling damage, doesnt actualy work lol
		modelSides[] = {6};
		uniformType = "Neopren";
		containerClass = "Supply100";
		mass = 40;
		

	};
};

class macro_new_uniform_class(blufor,purge_uniform):SWOP_Clonetrooper_F_CombatUniform
{
	displayName = "Clone Purgetrooper Uniform";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(blufor,purge_uniform);
	};
};

class macro_new_uniform_class(blufor,krayt_uniform):SWOP_Clonetrooper_F_CombatUniform
{
	displayName = "Clone Pilot Uniform - 'Krayt'";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(blufor,krayt_uniform) //SWOP_clones\data\body\body501diamond_co.paa
		armor = 99999;
		armorStructural = 999;
		explosionShielding = 0.0;
	};
};