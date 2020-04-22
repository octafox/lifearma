#define ID_xe_licenseGui 8010
#define ID_licenseBackground -1
#define ID_licenseTitle -1
#define ID_licenseBackgroundButtonClose -1
#define ID_licenseButtonClose -1
#define ID_licenseList -1
#define ID_licenses 8011

class xe_licenseGui {
    idd = 8010;
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_xe_licenseGuiInit;";

    class controlsBackground {};

    class controls {
        class licenseBackground: Life_RscText {
            idc = ID_licenseBackground;
            x = 0.41237 * safezoneW + safezoneX;
            y = 0.356944 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.231091 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class licenseTitle: Life_RscText {
            idc = ID_licenseTitle;
            text = "Licenze";
            x = 0.41237 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.158765 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class licenseBackgroundButtonClose: Life_RscPicture {
            idc = ID_licenseBackgroundButtonClose;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.572166 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.0103094 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class licenseButtonClose: xeRscIconButton {
            idc = ID_licenseButtonClose;
            onButtonClick = "closeDialog 0;";
            text = "icons\xeicons\x.paa";
            x = 0.572166 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.0103094 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class licenseList: Life_RscListBox {
            idc = ID_licenseList;
            x = 0.41237 * safezoneW + safezoneX;
            y = 0.367948 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.209082 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
            class Controls {
                class licenses: Life_RscStructuredText {
                    idc = ID_licenses;
                    sizeEx = 0.020;
                    text = "";
                    x = 0;
                    y = 0;
                    w = 0.27;
                    h = 0.65;
                };
            };
        };
    };
};