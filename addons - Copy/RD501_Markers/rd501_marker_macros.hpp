
#ifndef RD501_MARKER_CONFIG_MACROS
#define RD501_MARKER_CONFIG_MACROS
#define RD501_MARKER_ADDON RD501_Markers
#define RD501_MARKER_QUOTE(target) #target
#define RD501_MARKER_CONCAT(a,b) a##b
//Convention: ui\markers\outline\rd501_marker_name_outline.paa
#define RD501_MARKER_OUTLINE_PATH(name) RD501_MARKER_CONCAT(RD501_MARKER_ADDON,RD501_MARKER_CONCAT(\ui\markers\outline\rd501_marker_,RD501_MARKER_CONCAT(name,_outline.paa)))
//Convention: ui\markers\logo\rd501_marker_name_logo.paa
#define RD501_MARKER_LOGO_PATH(name) RD501_MARKER_CONCAT(RD501_MARKER_ADDON,RD501_MARKER_CONCAT(\ui\markers\logo\rd501_marker_,RD501_MARKER_CONCAT(name,_logo.paa)))
#define RD501_MARKER_ARR_4(a,b,c,d) a, b, c, d
//CfgMarker class, accepts typical vars and sets them, is wrapped by others below
#define RD501_MARKER_CLASS_BASE(className,displayName,iconPath,hasShadow,markerSize,markerColour,markerGroup,markerScope) class className\
	{\
		name = displayName;\
		icon = iconPath;\
		texture = iconPath;\
		color[] = markerColour;\
		size = markerSize;\
		shadow = hasShadow;\
		markerClass = markerGroup;\
		scope = markerScope;\
	}
// Group used for ordering in the marker menu
#define RD501_MARKER_GROUP RD501_unitMarkers
#define RD501_MARKER_GROUP_QUOTED RD501_MARKER_QUOTE(RD501_MARKER_GROUP)
// SOURCECOLOUR -> Logos, things that need to keep their colour, generally only are white.
// RD501_Marker_name_type
#define RD501_MARKER_CLASSNAME(name,type) RD501_MARKER_CONCAT(RD501_Marker_,RD501_MARKER_CONCAT(name,RD501_MARKER_CONCAT(_,type)))
#define RD501_MARKER_SOURCECOLOUR_NOSHADOW_GROUPED_PUBLIC(className,displayName,iconPath,markerSize) RD501_MARKER_CLASS_BASE(className,displayName,iconPath,false,markerSize,{RD501_MARKER_ARR_4(0,0,0,1)},RD501_MARKER_GROUP_QUOTED,2)
// ANYCOLOUR -> Normal Map Markers, things that are colourable, or atleast survive being coloured well.
#define RD501_MARKER_ANYCOLOUR_NOSHADOW_GROUPED_PUBLIC(className,displayName,iconPath,markerSize) RD501_MARKER_CLASS_BASE(className,displayName,iconPath,false,markerSize,{RD501_MARKER_ARR_4(0,0,0,1)},RD501_MARKER_GROUP_QUOTED,2)
#endif