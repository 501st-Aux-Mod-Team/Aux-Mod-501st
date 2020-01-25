[] spawn 
{
	
	sleep 2;
	 [ 
	    '<img align=''left'' size=''1.5'' shadow=''1'' image='+(str("RD501_Main\textures\clear.paa"))+' />', 
	    safeZoneX+0.00, 
	    safeZoneY+safeZoneH-0.14, 
	    99999, 
	    0, 
	    0, 
	    3090 
	] spawn bis_fnc_dynamicText;
};