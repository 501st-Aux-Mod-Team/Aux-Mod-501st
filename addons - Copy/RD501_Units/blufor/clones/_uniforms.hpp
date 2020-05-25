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
displayName = "[501st] INF ARMR 01 (Recruit)";
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
	displayName = "[501st] INF ARMR 02 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 01 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 01 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 03 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 02 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 02 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 04 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 03 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 03 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 05 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 04 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 04 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf,nco): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF ARMR 06 (NCO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf,nco);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_medic,nco): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF MED ARMR 05 (NCO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_medic,nco);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_inf_rto,nco): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] INF RTO ARMR 05 (NCO)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_inf_rto,nco);
		containerClass = "Supply100";
	};
};
///
class macro_new_uniform_class(501_ab,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 01 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 01 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,cadet): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 01 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,cadet);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 02 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 02 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,trooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 02 (Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,trooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 03 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 03 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,strooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 03 (Senior Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,strooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 04 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 04 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,vtrooper): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 04 (Veteran Trooper)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,vtrooper);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,cpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 05 (Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,cpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,cpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 05 (Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,cpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,cpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 05 (Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,cpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,scpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 06 (Sr. Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,scpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,scpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 06 (Sr. Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,scpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,scpl): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 06 (Sr. Cpl)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,scpl);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,cs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 07 (CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,cs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,cs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 07 (CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,cs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,cs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 07 (CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,cs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,scs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 08 (Sr. CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,scs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_medic,scs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB MED ARMR 08 (Sr. CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_medic,scs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab_rto,scs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB RTO ARMR 08 (Sr. CS)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab_rto,scs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_ab,csm): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AB ARMR 09 (CS-M)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_ab,csm);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxc): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 01 (Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxc);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,scxc): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 02 (Sr. Cadet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,scxc);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxx): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 03 (Ensign)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxx);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,scxx): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 04 (Sr. Ensign)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,scxx);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxp): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 05 (Flight Officer)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxp);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cxs): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 06 (Jr. Lt.)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cxs);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cx1): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 08 (First Lt.)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cx1);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cx2): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 07 (Second Lt.)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cx2);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_avi,cx3): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] AVI ARMR 09 (Captain)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_avi,cx3);
		containerClass = "Supply100";
	};
};
//
class macro_new_uniform_class(empire_rg,boi): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[Empire] Royal Guard Armour";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(empire_rg,boi);
		containerClass = "Supply100";
	};
};
//
class macro_new_uniform_class(501_arc,01): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] ARC ARMR 01";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_arc,01);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_arc,02): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] ARC ARMR 02";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_arc,02);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,01): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Cyan)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,01);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,02): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Green)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,02);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,03): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Indigo)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,03);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,04): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Orange)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,04);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,05): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Pink)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,05);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,06): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Red)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,06);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,07): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Violet)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,07);
		containerClass = "Supply100";
	};
};
class macro_new_uniform_class(501_utc,08): macro_new_uniform_class(501_inf,recruit)
{
	displayName = "[501st] UTC (Yellow)";
	class ItemInfo: ItemInfo
	{
		uniformClass = macro_new_uniform_skin_class(501_utc,08);
		containerClass = "Supply100";
	};
};