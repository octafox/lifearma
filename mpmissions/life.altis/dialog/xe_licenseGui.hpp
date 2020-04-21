
class xe_licenseGui {
    idd = 8010;
    movingEnable = 1;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_xe_licenseGuiInit;";

    class controlsBackground {};

    class controls {
        class licenseBackground: Life_RscText {
            idc = -1;
            x = 0.41237 * safezoneW + safezoneX;
            y = 0.356944 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.231091 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class licenseTitle: Life_RscText {
            idc = -1;
            text = "Licenze";
            x = 0.41237 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.158765 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class licenseButtonClose: Life_RscButtonMenu {
            idc = -1;
            onButtonClick = "closeDialog 0;";
            text = "x";
            x = 0.572166 * safezoneW + safezoneX;
            y = 0.334935 * safezoneH + safezoneY;
            w = 0.0103094 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class licenseList: Life_RscListBox {
            idc = 8011;
            x = 0.41237 * safezoneW + safezoneX;
            y = 0.367948 * safezoneH + safezoneY;
            w = 0.170106 * safezoneW;
            h = 0.209082 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
    };
};