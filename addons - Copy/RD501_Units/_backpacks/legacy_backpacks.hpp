//POOPY INFANTRY RTO BACKPACK
//Why is infantry so weird.

	
class RD501_JLTS_Clone_backpack: JLTS_Clone_backpack
{
	maximumload=700;
	Displayname="[501st] Combat Pack (Base)"
};
class RD501_JLTS_Clone_backpack_s: JLTS_Clone_backpack_s
{
	maximumload=700;
	Displayname="[501st] Combat Pack (Straps)"
};
class RD501_JLTS_Clone_backpack_invisible: JLTS_Clone_backpack_s
{
	maximumload=700;
	Displayname="[501st] Combat Invisible Backpack"
	model="RD501_Units\nothing.p3d";
};
class RD501_JLTS_Clone_backpack_medic: JLTS_Clone_backpack_medic
{
	maximumload=700;
	Displayname="[501st] Combat Pack (Medical)"
};
class RD501_JLTS_Clone_backpack_eod: JLTS_Clone_backpack_eod
{
	maximumload=700;
	Displayname="[501st] Combat Pack (EOD)"
};
class RD501_JLTS_Clone_backpack_bomb: JLTS_Clone_backpack_bomb
{
	maximumload=700;
	Displayname="[501st] Combat Pack (Explosives)"
};
class RD501_JLTS_Clone_backpack_RTO: JLTS_Clone_backpack_RTO
{
	maximumload=700;
	tf_range=35000;
	Displayname="[501st] Radio Pack (Large)"
};
class RD501_JLTS_Clone_backpack_s_RTO: JLTS_Clone_backpack_s_RTO
{
	maximumload=700;
	tf_range=35000;
	Displayname="[501st] Radio Pack (Straps)"
};
class RD501_JLTS_Clone_belt_bag: JLTS_Clone_belt_bag
{
	maximumload=700;
	Displayname="[501st] Belt Bag"
};
class RD501_JLTS_Clone_RTO_pack: JLTS_Clone_RTO_pack
{
	maximumload=700;
	tf_range=35000;
	Displayname="[GAR] Radio Pack (Small)"
};
class RD501_JLTS_Clone_RTO_pack_blue: JLTS_Clone_RTO_pack
{
	maximumload=700;
	tf_range=35000;
	Displayname="[501st] Radio Pack (Small)"
	hiddenSelectionsTextures[] = {"rd501_units\textures\republic\clones\LR_Small.paa"};
};
class RD501_JLTS_Clone_LR_attachment: JLTS_Clone_LR_attachment
{
	maximumload=700;
	tf_range=35000;
	Displayname="[501st] Radio Pack (Attachment)"
};
class RD501_JLTS_Clone__invis_LR_attachment: JLTS_Clone_LR_attachment
{
	maximumload=700;
	tf_range=35000;
	Displayname="[501st] Command Invisible Pack"
	model="RD501_Units\nothing.p3d";
};
class RD501_JLTS_Clone_ARC_backpack: JLTS_Clone_ARC_backpack
{
	maximumload=700;
	tf_range=35000;
	Displayname="[501st] Specialist Pack (ARC)"
};
class RD501_JLTS_Clone_Flip_backpack: JLTS_Clone_backpack
{
	maximumload = 0;
	Displayname="[501st] Grav Lift Pack "
	hiddenSelectionsTextures[] = {"rd501_units\textures\Republic\clones\mynock\mynock_backpack_flip.paa"};
	picture = "rd501_units\textures\Republic\clones\mynock\mynock_backpack_flip_icon_co.paa";
};