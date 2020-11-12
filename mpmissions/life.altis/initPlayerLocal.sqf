#include "script_macros.hpp"
/*
    File: initPlayerLocal.sqf
    Author:

    Description:
    Starts the initialization of the player.
*/
if (!hasInterface && !isServer) exitWith {
    [] call compile preprocessFileLineNumbers "\life_hc\initHC.sqf";
};

CONST(BIS_fnc_endMission,BIS_fnc_endMission);
if (LIFE_SETTINGS(getNumber,"spyGlass_toggle") isEqualTo 1) then {[] execVM "SpyGlass\fn_initSpy.sqf";};

0 enableChannel false;
1 enableChannel [true, false];
2 enableChannel false;
3 enableChannel true;
4 enableChannel true;
5 enableChannel true;

[] spawn life_fnc_xe_atmMarkers;
[] spawn life_fnc_xe_lockDoors;
[] spawn life_fnc_brighterNights;

[] execVM "core\init.sqf";
[] execVM "briefing.sqf";
