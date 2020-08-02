
/*
* Structure:
* - ui/markers/logo/some_fixed_colour_logo.paa
* - ui/markers/outline/some_variable_colour_outline.paa
*/
#include "rd501_marker_macros.hpp"
class CfgPatches
{
	class RD501_Markers
	{
		author = "m3ales";
		name = "501st Legion Map Markers";
		requiredversion =0.1;
		units[] = {};
		weapons[] = {};
		requiredaddons[] = 
		{
			"A3_Characters_F",
			"A3_soft_f"
		};
	};
};
class CfgMarkerClasses
{
	// Used to group markers and provide ordering in the marker dropdown -- is alphabetical
	class RD501_unitMarkers{
		displayname="RD501 Markers";
	};
};
class CfgMarkers
{
	// Default Emblem Size
	#define RD501_MARKERS_EMBLEM_SIZE 48

	// Marker definitions, ensure link to marker CfgMarker
	// Avalanche Company Markers [Colourable]
	RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(avalanche_1,outline),"Avalanche 1",RD501_MARKER_OUTLINE_PATH(avalanche_1),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(avalanche_2,outline),"Avalanche 2",RD501_MARKER_OUTLINE_PATH(avalanche_2),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(avalanche_3,outline),"Avalanche 3",RD501_MARKER_OUTLINE_PATH(avalanche_3),RD501_MARKERS_EMBLEM_SIZE);

	// Cyclone Company Markers [Colourable]
	RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(cyclone_1,outline),"Cyclone 1",RD501_MARKER_OUTLINE_PATH(cyclone_1),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(cyclone_2,outline),"Cyclone 2",RD501_MARKER_OUTLINE_PATH(cyclone_2),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(cyclone_3,outline),"Cyclone 3",RD501_MARKER_OUTLINE_PATH(cyclone_3),RD501_MARKERS_EMBLEM_SIZE);

	// Avalanche Company Logos [Fixed Colour]
	RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(avalanche_1,logo),"Avalanche 1 Logo",RD501_MARKER_LOGO_PATH(avalanche_1),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(avalanche_2,logo),"Avalanche 2 Logo",RD501_MARKER_LOGO_PATH(avalanche_2),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(avalanche_3,logo),"Avalanche 3 Logo",RD501_MARKER_LOGO_PATH(avalanche_3),RD501_MARKERS_EMBLEM_SIZE);
	
	// Cyclone Company Logos [Fixed Colour]
	RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(cyclone_1,logo),"Cyclone 1 Logo",RD501_MARKER_LOGO_PATH(cyclone_1),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(cyclone_2,logo),"Cyclone 2 Logo",RD501_MARKER_LOGO_PATH(cyclone_2),RD501_MARKERS_EMBLEM_SIZE);
	RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(RD501_MARKER_CLASSNAME(cyclone_3,logo),"Cyclone 3 Logo",RD501_MARKER_LOGO_PATH(cyclone_3),RD501_MARKERS_EMBLEM_SIZE);
};

