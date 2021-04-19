class RscControlsGroup;
class RscControlsGroupNoScrollbars;
class RscText;
class RscListbox;
class RscCombo;
class RscEdit;
class RscXSliderH;
class RscCheckBox;
class RscActivePicture;
class RscMapControl;
class RscPicture;
class ctrlToolbox;
class RscButton;

class RscDisplayAttributes {
    class Controls {
        class Background;
        class Title;
        class Content: RscControlsGroup {
            class controls;
        };
        class ButtonOK;
        class ButtonCancel;
    };
};

class RD501_RscJammerSettings: RscDisplayAttributes {
    onLoad = "['onLoad', _this, ""RD501_RscJammerSettings""] call ace_zeus_fnc_zeusAttributes";
    onUnload = "['onUnload', _this, ""RD501_RscJammerSettings""] call ace_zeus_fnc_zeusAttributes";
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class RD501_JammerSettings: RscControlsGroupNoScrollbars {
                    onSetFocus = "_this call rd501_zeus_fnc_ui_jammerSettings";
                    idc = 58401;
                    x = 0;
                    y = 0;
                    w = (26 * (((safezoneW / safezoneH) min 1.2) / 40));
                    h = (2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                    class Controls {
                        class Title1: RscText {
                            idc = -1;
                            text = "Jammer Range";
                            toolTip = "Jammer's effective Radius";
                            x = 0;
                            y = 0;
                            w = (10 * (((safezoneW / safezoneH) min 1.2) / 40));
                            h = (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                            colorBackground[] = {0,0,0,0.5};
                        };
                        class Jammer_Radius: RscXSliderH {
                            idc = 58402;
                            x = (10.1 * (((safezoneW / safezoneH) min 1.2) / 40));
                            y = 0;
                            w = (15.9 * (((safezoneW / safezoneH) min 1.2) / 40));
                            h = (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                        };
                        class Title2: Title1 {
                            idc = -1;
                            text = "Jammer Strength";
                            toolTip = "At what portion of the distance a SR radio will become useless at 50m. 160 will place it at 1/2 the radius. Handle with care.";
                            y = (1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                        };
                        class Jammer_Strength: Jammer_Radius {
                            idc = 58403;
                            y = (1.1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                        };
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {};
        class ButtonCancel: ButtonCancel {};
    };
};


class RD501_RscVolatileSettings: RscDisplayAttributes {
    onLoad = "['onLoad', _this, ""RD501_RscVolatileSettings""] call ace_zeus_fnc_zeusAttributes";
    onUnload = "['onUnload', _this, ""RD501_RscVolatileSettings""] call ace_zeus_fnc_zeusAttributes";
    class Controls: Controls {
        class Background: Background {};
        class Title: Title {};
        class Content: Content {
            class Controls {
                class RD501_VolatileSettings: RscControlsGroupNoScrollbars {
                    onSetFocus = "_this call rd501_zeus_fnc_ui_volatileSettings";
                    idc = 58501;
                    x = 0;
                    y = 0;
                    w = (26 * (((safezoneW / safezoneH) min 1.2) / 40));
                    h = (2 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                    class Controls {
                        class Title1: RscText {
                            idc = -1;
                            text = "Volatile Health";
                            toolTip = "How many hits to take before exploding";
                            x = 0;
                            y = 0;
                            w = (10 * (((safezoneW / safezoneH) min 1.2) / 40));
                            h = (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                            colorBackground[] = {0,0,0,0.5};
                        };
                        class Volatile_Health: RscXSliderH {
                            idc = 58502;
                            x = (10.1 * (((safezoneW / safezoneH) min 1.2) / 40));
                            y = 0;
                            w = (15.9 * (((safezoneW / safezoneH) min 1.2) / 40));
                            h = (1 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25));
                        };
                    };
                };
            };
        };
        class ButtonOK: ButtonOK {};
        class ButtonCancel: ButtonCancel {};
    };
};