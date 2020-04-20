#include "player_sys.sqf"

class playerSettings {
    idd = playersys_DIALOG;
    movingEnable = 1;
    enableSimulation = 1;

    class controlsBackground {};

    class controls {
        class PlayersName: Title {
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
            y = 0.392176 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.22005 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class moneyInfo: Life_RscStructuredText {
            idc = 2015;
            sizeEx = 0.020;
            text = "";
            x = 0.340156 * safezoneW + safezoneX;
            y = 0.400978 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
            h = 0.110025 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class moneyEdit: Life_RscEdit {
            idc = 2018;
            text = "1"; //--- ToDo: Localize;
            x = 0.340156 * safezoneW + safezoneX;
            y = 0.522005 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class moneyGive: Life_RscButtonMenu {
            idc = 2001;
            text = "$STR_Global_Give";
            onButtonClick = "[] call life_fnc_giveMoney";
            x = 0.335 * safezoneW + safezoneX;
            y = 0.58802 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class moneyNearPlayers: Life_RscCombo {
            idc = 2022;
            x = 0.340156 * safezoneW + safezoneX;
            y = 0.555012 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
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
            x = 0.530937 * safezoneW + safezoneX;
            y = 0.389975 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.253057 * safezoneH;
            colorBackground[] = {0,0,0,0.7};
        };
        class inventoryList: Life_RscListBox {
            idc = item_list;
            x = 0.536094 * safezoneW + safezoneX;
            y = 0.400978 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
            h = 0.110025 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryEdit: Life_RscEdit {
            idc = item_edit;
            text = "1"; //--- ToDo: Localize;
            x = 0.536094 * safezoneW + safezoneX;
            y = 0.522005 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryNearPlayers: Life_RscCombo {
            idc = 2023;
            x = 0.536094 * safezoneW + safezoneX;
            y = 0.555012 * safezoneH + safezoneY;
            w = 0.0876563 * safezoneW;
            h = 0.022005 * safezoneH;
            colorBackground[] = {0.1,0.1,0.1,0.8};
        };
        class inventoryUse: Life_RscButtonMenu {
            text = "$STR_Global_Use";
            onButtonClick = "[] call life_fnc_useItem;";
            x = 0.530937 * safezoneW + safezoneX;
            y = 0.58802 * safezoneH + safezoneY;
            w = 0.0464063 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryDrop: Life_RscButtonMenu {
            idc = 2002;
            text = "$STR_Global_Give";
            onButtonClick = "[] call life_fnc_giveItem;";
            x = 0.5825 * safezoneW + safezoneX;
            y = 0.58802 * safezoneH + safezoneY;
            w = 0.0464063 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };
        class inventoryRemove: Life_RscButtonMenu {
            idc = -1;
            onButtonClick = "[] call life_fnc_removeItem;";
            text = "$STR_Global_Remove";
            x = 0.530937 * safezoneW + safezoneX;
            y = 0.621027 * safezoneH + safezoneY;
            w = 0.0979687 * safezoneW;
            h = 0.022005 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0.1,0.1,0.1,1};
        };

        // buttons
        class btnSettings: xeRscIconButton {
            idc = -1;
            text = "icons\xeicons\settings.paa";
            onButtonClick = "[] call life_fnc_settingsMenu;";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnGang: xeRscIconButton {
            idc = 2011;
            text = "icons\xeicons\gang.paa";
            onButtonClick = "if (isNil ""life_action_gangInUse"") then {if (isNil {(group player) getVariable ""gang_owner""}) then {createDialog ""Life_Create_Gang_Diag"";} else {[] spawn life_fnc_gangMenu;};};";
            x = 0.5 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnWantedList: xeRscIconButton {
            idc = 2012;
            text = "icons\xeicons\licenses.paa";
            onButtonClick = "[] call life_fnc_wantedMenu";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnKeys: xeRscIconButton {
            idc = 2013;
            text = "icons\xeicons\keys.paa";
            onButtonClick = "createDialog ""Life_key_management"";";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnCell: xeRscIconButton {
            idc = 2014;
            text = "icons\xeicons\phone.paa";
            onButtonClick = "createDialog ""Life_cell_phone"";";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnAdminMenu: xeRscIconButton {
            idc = 2021;
            text = "icons\xeicons\admin.paa";
            onButtonClick = "closeDialog 0; createDialog ""life_admin_menu"";";
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.477995 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnSyncData: xeRscIconButton {
            idc = -1;
            //shortcuts[] = {0x00050000 + 2};
            text = "icons\xeicons\sync.paa";
            onButtonClick = "[] call SOCK_fnc_syncData;";
            x = 0.469062 * safezoneW + safezoneX;
            y = 0.422983 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
        class btnLicenses: xeRscIconButton {
            idc = -1;
            text = "icons\xeicons\licenses.paa"; //--- ToDo: Localize;
            x = 0.438125 * safezoneW + safezoneX;
            y = 0.36797 * safezoneH + safezoneY;
            w = 0.0257812 * safezoneW;
            h = 0.0440099 * safezoneH;
            colorText[] = {1,1,1,1};
            colorBackground[] = {0,0,0,0.8};
        };
    };
};
