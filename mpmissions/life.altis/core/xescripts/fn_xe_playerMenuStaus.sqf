#include "..\..\dialog\guiIds_macros.hpp"
/*
	Author: xedom
*/
disableSerialization;

_cop = west countSide playableUnits;
_med = independent countSide playableUnits;
_civ = civilian countSide playableUnits;

ctrlSetText[ID_xe_playerMenu_copCountertxt,_cop];
ctrlSetText[ID_xe_playerMenu_medCountertxt,_med];
ctrlSetText[ID_xe_playerMenu_civCountertxt,_civ];