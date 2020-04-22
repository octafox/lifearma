#include "..\..\script_macros.hpp"
#include "..\..\dialog\guiIds_macros.hpp"

/*
    File: fn_p_openMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Opens the players virtual inventory menu
*/
if (!alive player || dialog) exitWith {}; //Prevent them from opening this for exploits while dead.
createDialog "xe_playermenu";
disableSerialization;

ctrlShow[ID_xe_playerMenu_buttonBackground08, false];
ctrlShow[ID_xe_playerMenu_buttonBackground09, false];
ctrlShow[ID_xe_playerMenu_buttonBackground10, false];
ctrlShow[ID_xe_playerMenu_buttonBackground11, false];
ctrlShow[ID_xe_playerMenu_buttonBackground12, false];
ctrlShow[ID_xe_playerMenu_buttonBackground13, false];
ctrlShow[ID_xe_playerMenu_buttonBackground14, false];
ctrlShow[ID_xe_playerMenu_buttonBackground15, false];

switch (playerSide) do {
    case west: {
        ctrlShow[ID_xe_playerMenu_buttonGang,false];
    };

    case civilian: {
        ctrlShow[ID_xe_playerMenu_buttonWantedList,false];
    };

    case independent: { 
        ctrlShow[ID_xe_playerMenu_buttonWantedList,false];
        ctrlShow[ID_xe_playerMenu_buttonGang,false];
    };
};

if (FETCH_CONST(life_adminlevel) < 1) then {
    ctrlShow[ID_xe_playerMenu_buttonAdminMenu,false];
    ctrlShow[ID_xe_playerMenu_buttonBackground07,false];
};

[] call life_fnc_p_updateMenu;
