private["_player","_npc","_money","_ui","_progress","_pgText","_cP","_rip","_pos"];
_npc = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_player = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_actionID = [_this,2] call BIS_fnc_param;
_args = [_this,3] call BIS_fnc_param;

// https://community.bistudio.com/wiki/addAction
// https://community.bistudio.com/wiki/BIS_fnc_param
// this addAction["Rob the Gas Station",life_fnc_robstore];

_distance = 5;
_money = 20000;
// _money = 120000 + round(random 60000);
_rip = false;
_cops = (west countSide playableUnits);
_copsRequire = 2

if(side _player != civilian) exitWith { hint "Devi essere civile" };
if(_player distance _npc > _distance) exitWith { hint "Devi stare entro "+str(_distance)+"m"};
if!(_money) then { _money = 1000; };
if(_rip) exitWith { hint "Rapina è già in corso!" };
if(vehicle player != _player) exitWith { hint "Esci dal veicolo" };
if!(alive _player) exitWith {};
if(currentWeapon _player == "") exitWith { hint "HaHa, non mi spaventi! Ma vattene affanculo!" };
if(_money == 0) exitWith { hint "Non ho soldi!" };
if(_cops < _copsRequire) exitWith{ [_vault,-1] remoteExec ["disableSerialization;",2]; hint "Servono "+str(_copsRequire)+" agenti in servizio"; };
disableSerialization;

_rip = true;
_npc removeAction _actionID;
_npc switchMove "AmovPercMstpSsurWnonDnon"; // npc
// _chance = random(100);
// if(_chance >= 50) then { [1,format["ALARM! - Gas Station: %1 is being robbed!", _npc]] remoteExec ["life_fnc_broadcast",west]; };
[1,format["ALARM! - Rapina in corso!", _npc]] remoteExec ["life_fnc_broadcast",west];

5 cutRsc ["life_progress","PLAIN"];
_ui = uiNameSpace getVariable "life_progress";
_progress = _ui displayCtrl 38201;
_pgText = _ui displayCtrl 38202;
_pgText ctrlSetText format["Robbery in Progress, stay close ("+str(_distance)+"m) (1%1)...","%"];
_progress progressSetPosition 0.01;
_cP = 0.0001;

if(_rip) then {
	while{true} do {
		sleep 3;
		_cP = _cP + 0.01;
		_progress progressSetPosition _cP;
		_pgText ctrlSetText format["Robbery in Progress, stay close ("+str(_distance)+"m) (%1%2)...",round(_cP * 100),"%"];
		// _pos = position player; // by ehno: get player pos
		// _marker = createMarker ["MarkerxeRobbery", _pos]; //by ehno: Place a Maker on the map
		// "MarkerxeRobbery" setMarkerColor "ColorRed";
		// "MarkerxeRobbery" setMarkerText "!ATTENTION! robbery !ATTENTION!";
		// "MarkerxeRobbery" setMarkerType "mil_warning";
		if(_cP >= 1) exitWith {};
		if(_player distance _npc > 10.5) exitWith {};
		if!(alive _player) exitWith {};
	};
	if!(alive _player) exitWith { _rip = false; };
	if(_player distance _npc > 10.5) exitWith { 
		deleteMarker "MarkerxeRobbery"; 
		_npc switchMove ""; 
		hint "You need to stay within 10m to Rob registry! - Now the registry is locked."; 
		5 cutText ["","PLAIN"]; _rip = false;
	};
	5 cutText ["","PLAIN"];

	titleText[format["You have stolen $%1, now get away before the cops arrive!",[_money] call life_fnc_numberText],"PLAIN"];
	deleteMarker "MarkerxeRobbery"; // by ehno delete maker
	life_cash = life_cash + _money;

	_rip = false;
	life_use_atm = false;
	sleep (30 + random(180));
	life_use_atm = true;
	if!(alive _player) exitWith {};
	[getPlayerUID _player,name _player,"211"] remoteExec ["life_fnc_wantedAdd",2];
};
sleep 300;
_actionID = _npc addAction["Rob the Gas Station",life_fnc_robstore];
_npc switchMove "";