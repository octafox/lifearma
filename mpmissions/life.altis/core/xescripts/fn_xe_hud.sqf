#include "..\..\script_macros.hpp"
/*
	Author: xedom
*/
disableSerialization;
1 cutRsc ["xe_hud","PLAIN"];
waitUntil {!isNull (uiNameSpace getVariable "xe_hud")};

_display = uiNameSpace getVariable "xe_hud";

_thirstId = _display displayCtrl 1208;
_hungerId = _display displayCtrl 1209;
_healthId = _display displayCtrl 1210;
_cashId = _display displayCtrl 1211;

_thirst = round(life_thirst);
_hunger = round(life_hunger);
_health = round((1 - (damage player)) * 100);
_cash = [CASH] call life_fnc_numberText;

_thirstId ctrlSetText format ["%2 %1","%",_thirst];
_hungerId ctrlSetText format ["%2 %1","%",_hunger];
_healthId ctrlSetText format ["%2 %1","%",_health];
_cashId ctrlSetText format ["%2 %1","€",_cash];
