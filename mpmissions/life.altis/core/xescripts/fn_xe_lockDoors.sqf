/*
	Author: xedom
*/

diag_log "[xeScripts] fn_xe_lockDoors runned";

blockerdBuildings = [];

inGameUISetEventHandler ["Action", '
	_side = side player;
	_locked = ((_this select 0) in blockerdBuildings);

	((_side isEqualTo civilian) && (_locked))
'];