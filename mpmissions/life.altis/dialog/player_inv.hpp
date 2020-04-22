#include "guiIds_macros.hpp"

class playerSettings {
    idd = ID_playerSettings;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {};

    class controls {
// title
        class menuTitle: Life_RscTitle {
            idc = ID_menuTitle;
            text = "Menu Giocatore"; //--- ToDo: Localize;
            x = 0.335049 * safezoneW + safezoneX;
            y = 0.343739 * safezoneH + safezoneY;
            w = 0.28256 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class playersName: menuTitle {
            idc = ID_playersName;
            style = 1;
            colorText[] = {0.95,0.95,0.95,1};
            colorBackground[] = {0,0,0,0};
        };
        class buttonBackgroundClose: Life_RscPicture {
            idc = ID_buttonBackgroundClose;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.618559 * safezoneW + safezoneX;
            y = 0.343738 * safezoneH + safezoneY;
            w = 0.0103094 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonClose: xeRscIconButton {
            idc = ID_buttonClose;
            onButtonClick = "closeDialog 0;";
            text = "icons\xeicons\x.paa"; //--- ToDo: Localize;
            x = 0.618559 * safezoneW + safezoneX;
            y = 0.343738 * safezoneH + safezoneY;
            w = 0.0103094 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };

// money
        class moneyTitle: Life_RscText {
            idc = ID_moneyTitle;
            text = "$STR_PM_MoneyStats";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class moneyBackground: Life_RscText {
            idc = ID_moneyBackground;
            x = 0.335 * safezoneW + safezoneX;
            y = 0.389975 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.187042 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class moneyInfo: Life_RscStructuredText {
            idc = ID_moneyInfo;
            sizeEx = 0.020;
            text = "";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.392176 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.110025 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class moneyEdit: Life_RscEdit {
            idc = ID_moneyEdit;
            text = "1"; //--- ToDo: Localize;
            x = 0.335 * safezoneW + safezoneX;
            y = 0.504401 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class moneyGive: Life_RscButtonMenu {
            idc = ID_moneyGive;
            text = "$STR_Global_Give";
            onButtonClick = "[] call life_fnc_giveMoney";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.552812 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class moneyNearPlayers: Life_RscCombo {
            idc = ID_moneyNearPlayers;
            x = 0.335 * safezoneW + safezoneX;
            y = 0.528606 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };

// inventory
        class inventoryTitle: Life_RscText {
            idc = ID_inventoryTitle;
            text = "$STR_PM_cItems"; //--- ToDo: Localize;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.367948 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryBackground: Life_RscText {
            idc = ID_inventoryBackground;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.389957 * safezoneH + safezoneY;
            w = 0.0979397 * safezoneW;
            h = 0.242095 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class inventoryList: Life_RscListBox {
            idc = ID_inventoryList;
            sizeEx = 0.035;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.394359 * safezoneH + safezoneY;
            w = 0.0979397 * safezoneW;
            h = 0.138655 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryEdit: Life_RscEdit {
            idc = ID_inventoryEdit;
            text = "1"; //--- ToDo: Localize;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.537415 * safezoneH + safezoneY;
            w = 0.0979397 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryNearPlayers: Life_RscCombo {
            idc = ID_inventoryNearPlayers;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.561625 * safezoneH + safezoneY;
            w = 0.0979397 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryUse: Life_RscButtonMenu {
            idc = ID_inventoryUse;
            onButtonClick = "[] call life_fnc_useItem;";
            text = "$STR_Global_Use"; //--- ToDo: Localize;
            x = 0.581445 * safezoneW + safezoneX;
            y = 0.585834 * safezoneH + safezoneY;
            w = 0.0474234 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryGive: Life_RscButtonMenu {
            idc = ID_inventoryGive;
            onButtonClick = "[] call life_fnc_giveItem;";
            text = "$STR_Global_Give"; //--- ToDo: Localize;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.585834 * safezoneH + safezoneY;
            w = 0.0484544 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryRemove: Life_RscButtonMenu {
            idc = ID_inventoryRemove;
            onButtonClick = "[] call life_fnc_removeItem;";
            text = "$STR_Global_Remove"; //--- ToDo: Localize;
            x = 0.530928 * safezoneW + safezoneX;
            y = 0.610043 * safezoneH + safezoneY;
            w = 0.0979397 * safezoneW;
            h = 0.0220087 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };

// buttons background
        class buttonBackground1: Life_RscPicture {
            idc = ID_buttonBackground1;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground2: Life_RscPicture {
            idc = ID_buttonBackground2;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground3: Life_RscPicture {
            idc = ID_buttonBackground3;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground4: Life_RscPicture {
            idc = ID_buttonBackground4;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground5: Life_RscPicture {
            idc = ID_buttonBackground5;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground6: Life_RscPicture {
            idc = ID_buttonBackground6;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground7: Life_RscPicture {
            idc = ID_buttonBackground7;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground8: Life_RscPicture {
            idc = ID_buttonBackground8;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground9: Life_RscPicture {
            idc = ID_buttonBackground9;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground10: Life_RscPicture {
            idc = ID_buttonBackground10;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.438143 * safezoneW + safezoneX;
            y = 0.533013 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440098 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground11: Life_RscPicture {
            idc = ID_buttonBackground11;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.469072 * safezoneW + safezoneX;
            y = 0.533013 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440098 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground12: Life_RscPicture {
            idc = ID_buttonBackground12;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.533013 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440098 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground13: Life_RscPicture {
            idc = ID_buttonBackground13;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.438143 * safezoneW + safezoneX;
            y = 0.588035 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440098 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground14: Life_RscPicture {
            idc = ID_buttonBackground14;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.469072 * safezoneW + safezoneX;
            y = 0.588035 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440098 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackground15: Life_RscPicture {
            idc = ID_buttonBackground15;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.588035 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440098 * safezoneH;
            colorBackground[] = {0,0,0,0.8};
        };

// buttons
        class buttonLicenses: xeRscIconButton {
            idc = ID_buttonLicenses;
            text = "icons\xeicons\licenses.paa";
            tooltip = "licenses";
            onButtonClick = "createDialog ""xe_licenseGui"";";
            x = 0.441219 * safezoneW + safezoneX;
            y = 0.374572 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonKeys: xeRscIconButton {
            idc = ID_buttonKeys;
            text = "icons\xeicons\keys.paa";
            tooltip = "keys";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.472156 * safezoneW + safezoneX;
            y = 0.374572 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonGang: xeRscIconButton {
            idc = ID_buttonGang;
            text = "icons\xeicons\gang.paa";
            tooltip = "gang";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.503094 * safezoneW + safezoneX;
            y = 0.374572 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonWantedList: xeRscIconButton {
            idc = ID_buttonWantedList;
            text = "icons\xeicons\licenses.paa";
            tooltip = "licenses";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.503094 * safezoneW + safezoneX;
            y = 0.374572 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonPhone: xeRscIconButton {
            idc = ID_buttonPhone;
            text = "icons\xeicons\phone.paa";
            tooltip = "phone";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.441219 * safezoneW + safezoneX;
            y = 0.429584 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonSyncData: xeRscIconButton {
            idc = ID_buttonSyncData;
            //shortcuts[] = {0x00050000 + 2};
            text = "icons\xeicons\sync.paa";
            tooltip = "sync";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.472156 * safezoneW + safezoneX;
            y = 0.429584 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonSettings: xeRscIconButton {
            idc = ID_buttonSettings;
            text = "icons\xeicons\settings.paa";
            tooltip = "settings";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.503094 * safezoneW + safezoneX;
            y = 0.429584 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonAdminMenu: xeRscIconButton {
            idc = ID_buttonAdminMenu;
            text = "icons\xeicons\admin.paa";
            tooltip = "admin";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.441219 * safezoneW + safezoneX;
            y = 0.484597 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
    };
};