class macro_new_uniform_class(501_inf,recruit): Uniform_Base
{
	author = "RD501";
	scope = 2;
	nakedUniform = "U_BasicBody";
	displayName = "[501st] INF ARMR 01 (Recruit)";
	picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	class ItemInfo: UniformItem
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

class macro_new_uniform_class(501_inf,strooper_11): macro_new_uniform_class(501_inf,strooper) {         displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [1-1]);  class ItemInfo: ItemInfo {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_11);       }; }; class macro_new_uniform_class(501_inf,strooper_12): macro_new_uniform_class(501_inf,strooper) {   displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [1-2]);   class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_12);       }; }; class macro_new_uniform_class(501_inf,strooper_13): macro_new_uniform_class(501_inf,strooper) {    displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [1-3]);  class ItemInfo: ItemInfo        {                uniformClass = macro_new_uniform_skin_class(501_inf,strooper_13);       }; }; class macro_new_uniform_class(501_inf,strooper_21): macro_new_uniform_class(501_inf,strooper) {   displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [2-1]);   class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_21);       }; }; class macro_new_uniform_class(501_inf,strooper_22): macro_new_uniform_class(501_inf,strooper) {    displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [2-2]);  class ItemInfo: ItemInfo        {        uniformClass = macro_new_uniform_skin_class(501_inf,strooper_22);       }; }; class macro_new_uniform_class(501_inf,strooper_23): macro_new_uniform_class(501_inf,strooper) {   displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [2-3]);   class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_23);       }; }; class macro_new_uniform_class(501_inf,strooper_31): macro_new_uniform_class(501_inf,strooper) {    displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [3-1]);  class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_31);        }; }; class macro_new_uniform_class(501_inf,strooper_32): macro_new_uniform_class(501_inf,strooper) {   displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [3-2]);   class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_32);       }; }; class macro_new_uniform_class(501_inf,strooper_33): macro_new_uniform_class(501_inf,strooper) {    displayName = macro_quote([501st] INF ARMR 04 (Senior Trooper) [3-3]);  class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,strooper_33);        }; };
class macro_new_uniform_class(501_inf_medic,strooper_11): macro_new_uniform_class(501_inf_medic,strooper) {     displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [1-1]);      class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_11);         }; }; class macro_new_uniform_class(501_inf_medic,strooper_12): macro_new_uniform_class(501_inf_medic,strooper) {        displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [1-2]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_12);  }; }; class macro_new_uniform_class(501_inf_medic,strooper_13): macro_new_uniform_class(501_inf_medic,strooper) {       displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [1-3]);       class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_13);         }; }; class macro_new_uniform_class(501_inf_medic,strooper_21): macro_new_uniform_class(501_inf_medic,strooper) {        displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [2-1]);      class ItemInfo: ItemInfo        {                uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_21);         }; }; class macro_new_uniform_class(501_inf_medic,strooper_22): macro_new_uniform_class(501_inf_medic,strooper) {        displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [2-2]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_22);  }; }; class macro_new_uniform_class(501_inf_medic,strooper_23): macro_new_uniform_class(501_inf_medic,strooper) {       displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [2-3]);       class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_23);         }; }; class macro_new_uniform_class(501_inf_medic,strooper_31): macro_new_uniform_class(501_inf_medic,strooper) {        displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [3-1]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_31);  }; }; class macro_new_uniform_class(501_inf_medic,strooper_32): macro_new_uniform_class(501_inf_medic,strooper) {       displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [3-2]);       class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_32);         }; }; class macro_new_uniform_class(501_inf_medic,strooper_33): macro_new_uniform_class(501_inf_medic,strooper) {        displayName = macro_quote([501st] INF MED ARMR 03 (Senior Trooper) [3-3]);      class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,strooper_33);         }; };
class macro_new_uniform_class(501_inf_rto,strooper_11): macro_new_uniform_class(501_inf_rto,strooper) {         displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [1-1]);      class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_11);   }; }; class macro_new_uniform_class(501_inf_rto,strooper_12): macro_new_uniform_class(501_inf_rto,strooper) {    displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [1-2]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_12);    }; }; class macro_new_uniform_class(501_inf_rto,strooper_13): macro_new_uniform_class(501_inf_rto,strooper) {   displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [1-3]);       class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_13);   }; }; class macro_new_uniform_class(501_inf_rto,strooper_21): macro_new_uniform_class(501_inf_rto,strooper) {    displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [2-1]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_21);    }; }; class macro_new_uniform_class(501_inf_rto,strooper_22): macro_new_uniform_class(501_inf_rto,strooper) {   displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [2-2]);       class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_22);   }; }; class macro_new_uniform_class(501_inf_rto,strooper_23): macro_new_uniform_class(501_inf_rto,strooper) {    displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [2-3]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_23);    }; }; class macro_new_uniform_class(501_inf_rto,strooper_31): macro_new_uniform_class(501_inf_rto,strooper) {   displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [3-1]);       class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_31);   }; }; class macro_new_uniform_class(501_inf_rto,strooper_32): macro_new_uniform_class(501_inf_rto,strooper) {    displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [3-2]);      class ItemInfo: ItemInfo {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_32);   }; }; class macro_new_uniform_class(501_inf_rto,strooper_33): macro_new_uniform_class(501_inf_rto,strooper) {    displayName = macro_quote([501st] INF RTO ARMR 03 (Senior Trooper) [3-3]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,strooper_33);    }; };
class macro_new_uniform_class(501_inf,vtrooper_11): macro_new_uniform_class(501_inf,vtrooper) {         displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [1-1]);         class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_11);       }; }; class macro_new_uniform_class(501_inf,vtrooper_12): macro_new_uniform_class(501_inf,vtrooper) {    displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [1-2]);         class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_12);        }; }; class macro_new_uniform_class(501_inf,vtrooper_13): macro_new_uniform_class(501_inf,vtrooper) {   displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [1-3]);         class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_13);       }; }; class macro_new_uniform_class(501_inf,vtrooper_21): macro_new_uniform_class(501_inf,vtrooper) {    displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [2-1]);         class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_21);        }; }; class macro_new_uniform_class(501_inf,vtrooper_22): macro_new_uniform_class(501_inf,vtrooper) {   displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [2-2]);         class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_22);       }; }; class macro_new_uniform_class(501_inf,vtrooper_23): macro_new_uniform_class(501_inf,vtrooper) {    displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [2-3]);         class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_23);        }; }; class macro_new_uniform_class(501_inf,vtrooper_31): macro_new_uniform_class(501_inf,vtrooper) {   displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [3-1]);  class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_31);       }; }; class macro_new_uniform_class(501_inf,vtrooper_32): macro_new_uniform_class(501_inf,vtrooper) {    displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [3-2]);         class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_32);        }; }; class macro_new_uniform_class(501_inf,vtrooper_33): macro_new_uniform_class(501_inf,vtrooper) {   displayName = macro_quote([501st] INF ARMR 05 (Veteran Trooper) [3-3]);  class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf,vtrooper_33);       }; };
class macro_new_uniform_class(501_inf_medic,vtrooper_11): macro_new_uniform_class(501_inf_medic,vtrooper) {     displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [1-1]);     class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_11);         }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_12): macro_new_uniform_class(501_inf_medic,vtrooper) {        displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [1-2]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_12);  }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_13): macro_new_uniform_class(501_inf_medic,vtrooper) {       displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [1-3]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_13);         }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_21): macro_new_uniform_class(501_inf_medic,vtrooper) {        displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [2-1]);     class ItemInfo: ItemInfo        {                uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_21);         }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_22): macro_new_uniform_class(501_inf_medic,vtrooper) {        displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [2-2]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_22);  }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_23): macro_new_uniform_class(501_inf_medic,vtrooper) {       displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [2-3]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_23);         }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_31): macro_new_uniform_class(501_inf_medic,vtrooper) {        displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [3-1]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_31);  }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_32): macro_new_uniform_class(501_inf_medic,vtrooper) {       displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [3-2]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_32);         }; }; class macro_new_uniform_class(501_inf_medic,vtrooper_33): macro_new_uniform_class(501_inf_medic,vtrooper) {        displayName = macro_quote([501st] INF MED ARMR 04 (Veteran Trooper) [3-3]);     class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_medic,vtrooper_33);         }; };
class macro_new_uniform_class(501_inf_rto,vtrooper_11): macro_new_uniform_class(501_inf_rto,vtrooper) {         displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [1-1]);     class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_11);   }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_12): macro_new_uniform_class(501_inf_rto,vtrooper) {    displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [1-2]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_12);    }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_13): macro_new_uniform_class(501_inf_rto,vtrooper) {   displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [1-3]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_13);   }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_21): macro_new_uniform_class(501_inf_rto,vtrooper) {    displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [2-1]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_21);    }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_22): macro_new_uniform_class(501_inf_rto,vtrooper) {   displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [2-2]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_22);   }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_23): macro_new_uniform_class(501_inf_rto,vtrooper) {    displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [2-3]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_23);    }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_31): macro_new_uniform_class(501_inf_rto,vtrooper) {   displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [3-1]);      class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_31);   }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_32): macro_new_uniform_class(501_inf_rto,vtrooper) {    displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [3-2]);     class ItemInfo: ItemInfo         {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_32);   }; }; class macro_new_uniform_class(501_inf_rto,vtrooper_33): macro_new_uniform_class(501_inf_rto,vtrooper) {    displayName = macro_quote([501st] INF RTO ARMR 04 (Veteran Trooper) [3-3]);     class ItemInfo: ItemInfo        {               uniformClass = macro_new_uniform_skin_class(501_inf_rto,vtrooper_33);    }; };