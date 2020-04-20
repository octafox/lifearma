#include "player_sys.sqf"

class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {};

    class controls {
        class PlayersName: Life_RscTitle {
            idc = carry_weight;
            style = 1;
            text = "";

            x = 0.335 * safezoneW + safezoneX;
            y = 0.301955 * safezoneH + safezoneY;
            w = 0.33 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
        };
        class menuTitle: Life_RscTitle {
            idc = -1;
            text = "$STR_PM_Title";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.334963 * safezoneH + safezoneY;
            w = 0.273281 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {0.95,0.95,0.95,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class ButtonClose: Life_RscButtonMenu {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "x"; //--- ToDo:
            onButtonClick = "closeDialog 0;";
            x = 0.613437 * safezoneW + safezoneX;
            y = 0.334963 * safezoneH + safezoneY;
            w = 0.0154688 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };

        // money
        class moneyTitle: Life_RscText {
            idc = -1;
            text = "$STR_PM_MoneyStats";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class moneyBackground: Life_RscText {
            idc = -1;
            x = 0.335 * safezoneW + safezoneX;
            y = 0.389975 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.187042 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class moneyInfo: Life_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.392176 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.110025 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class moneyEdit: Life_RscEdit {
            idc = 2018;
            text = "1"; //--- ToDo: Localize;
            x = 0.335 * safezoneW + safezoneX;
            y = 0.504401 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class moneyGive: Life_RscButtonMenu {
            idc = 2001;
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
            idc = 2022;
            x = 0.335 * safezoneW + safezoneX;
            y = 0.528606 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };

        // inventory
        class inventoryTitle: Life_RscText {
            idc = -1;
            text = "$STR_PM_cItems";
            x = 0.530937 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryBackground: Life_RscText {
            idc = -1;
            y= 0.530937 * safezoneW + safezoneX
            y = 0.389975 * safezoneH + safezoneY
            w = 0.0979687 * safezoneW
            h = 0.209047 * safezone
            colorBackground[] = {0,0,0,0.7};
        };
        class inventoryList: Life_RscListBox {
            idc = item_list;
            y= 0.531968 * safezoneW + safezoneX
            y = 0.389975 * safezoneH + safezoneY
            w = 0.0969374 * safezoneW
            h = 0.110025 * safezone
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryEdit: Life_RscEdit {
            idc = item_edit;
            text = "1"; //--- ToDo: Localize;
            y= 0.531968 * safezoneW + safezoneX
            y = 0.5022 * safezoneH + safezoneY
            w = 0.0969374 * safezoneW
            h = 0.022005 * safezone
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryNearPlayers: Life_RscCombo {
            idc = 2023;
            y= 0.531968 * safezoneW + safezoneX
            y = 0.526406 * safezoneH + safezoneY
            w = 0.0969374 * safezoneW
            h = 0.022005 * safezone
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryUse: Life_RscButtonMenu {
            text = "$STR_Global_Use";
            onButtonClick = "[] call life_fnc_useItem;";
            y= 0.531968 * safezoneW + safezoneX
            y = 0.550611 * safezoneH + safezoneY
            w = 0.0474375 * safezoneW
            h = 0.022005 * safezone
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryGive: Life_RscButtonMenu {
            idc = 2002;
            text = "$STR_Global_Give";
            onButtonClick = "[] call life_fnc_giveItem;";
            y= 0.580438 * safezoneW + safezoneX
            y = 0.550612 * safezoneH + safezoneY
            w = 0.0474375 * safezoneW
            h = 0.022005 * safezone
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryRemove: Life_RscButtonMenu {
            idc = -1;
            onButtonClick = "[] call life_fnc_removeItem;";
            text = "$STR_Global_Remove";
            y= 0.530937 * safezoneW + safezoneX
            y = 0.574817 * safezoneH + safezoneY
            w = 0.0979687 * safezoneW
            h = 0.022005 * safezone
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };

        // buttons
        class buttonSettings: xeRscIconButton {
            idc = -1;
            text = "icons\xeicons\settings.paa";
            tooltip = "settings";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonGang: xeRscIconButton {
            idc = 2011;
            text = "icons\xeicons\gang.paa";
            tooltip = "gang";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonWantedList: xeRscIconButton {
            idc = 2012;
            text = "icons\xeicons\licenses.paa";
            tooltip = "licenses";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonKeys: xeRscIconButton {
            idc = 2013;
            text = "icons\xeicons\keys.paa";
            tooltip = "keys";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonCell: xeRscIconButton {
            idc = 2014;
            text = "icons\xeicons\phone.paa";
            tooltip = "phone";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonAdminMenu: xeRscIconButton {
            idc = 2021;
            text = "icons\xeicons\admin.paa";
            tooltip = "admin";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonSyncData: xeRscIconButton {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "icons\xeicons\sync.paa";
            tooltip = "sync";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonLicenses: xeRscIconButton {
            idc = -1;
            text = "icons\xeicons\licenses.paa"; //--- ToDo: Localize;
            tooltip = "licenses";
            x = 0.441219 * safezoneW + safezoneX;
            y = 0.374572 * safezoneH + safezoneY;
            w = 0.0195937 * safezoneW;
            h = 0.030807 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class buttonBackgroundLicenses: Life_RscPicture {
            idc = -1;
            text = "#(argb,8,8,3)color(0,0,0,0.8)";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
    };
};
