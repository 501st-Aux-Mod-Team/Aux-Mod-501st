class TransportItems
	{
		class _transport_ToolKit
		{
			name = "ToolKit";
			count = 2;
		};
		class _transport_ACE_morphine
		{
			name = "ACE_morphine";
			count = 10;
		};	
		class _transport_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 10;
		};	
		class _transport_ACE_tourniquet
		{
			name = "ACE_tourniquet";
			count = 6;
		};	
		class _transport_ACE_elasticBandage
		{
			name = "ACE_elasticBandage";
			count = 40;
		};				
	};
class TransportWeapons
	{
	class _transport_dc15a
		{
			weapon = macro_new_weapon(DC,r15a)
			count = 3;
		};
	class _transport_dc15c
		{
			weapon = macro_new_weapon(DC,15c)
			count = 3;
		};
	class _transport_rps1
		{
			weapon = macro_new_weapon(launcher,rps1)
			count = 2;
		};
	};
class TransportMagazines
	{
	class transport_10mw30
		{
			magazine = macro_new_mag(10mw,30);
			count = 20;
		};
	class _transport_20mwdp20
		{
			magazine = macro_new_mag(20mwdp,20);
			count = 40;
		};
	};