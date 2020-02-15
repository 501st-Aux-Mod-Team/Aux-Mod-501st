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
		explosionShielding = 1.1;
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

class macro_new_uniform_class(501_inf,recruit): SWOP_Clonetrooper_F_CombatUniform
{
displayName = "[501st] INF ARMR 1 (Recruit)";
	picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,recruit);
		armor = 100;
		armorStructural = 5;
		explosionShielding = 1.1;
		impactDamageMultiplier	= -100; // multiplier for falling damage, doesnt actualy work lol
		modelSides[] = {6};
		uniformType = "Neopren";
		containerClass = "Supply100";
		mass = 40;
	};
};
class macro_new_uniform_class(501_inf,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 2 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 1 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 1 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 3 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 2 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 2 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 4 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 3 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 3 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 5 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 4 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 4 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,nco): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 6 (NCO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,nco);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,nco): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 5 (NCO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,nco);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,nco): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 5 (NCO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,nco);
		containerClass = "Supply100";
	};
};
///
class macro_new_uniform_class(501_ab,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,cpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,cpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,cpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,cpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,cpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,cpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,scpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Sr. Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,scpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,scpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Sr. Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,scpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,scpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Sr. Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,scpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,cs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,cs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,cs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,cs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,cs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,cs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,scs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (Sr. CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,scs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,scs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Medic Armor (Sr. CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,scs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,scs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne RTO Armor (Sr. CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,scs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,csm): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Airborne Armor (CS-M)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,csm);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxc): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxc);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,scxc): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Sr. Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,scxc);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxx): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Ensign)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxx);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,scxx): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Sr. Ensign)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,scxx);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxp): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Flight Officer)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxp);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Jr. Lt.)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cx1): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Second Lt.)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cx1);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cx2): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (First Lt.)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cx2);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cx3): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "501st Aviation Armor (Captain)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cx3);
		containerClass = "Supply100";
	};
};