_object = _this select 0;
_caller = _this select 1;
_id = _this select 2;
_object removeaction _id;
[_object,0] call BIS_fnc_dataTerminalAnimate;
RADIO_BOX_ACTIVE = false;
publicVariable "RADIO_BOX_ACTIVE";
_object setVariable ["RadioInterference",false];
(uiNamespace getVariable "BIS_RscMissionScreen") closeDisplay 1;
sleep 2;
_openaction = [[_object,["Open","player\dataterminal\OpenTerminal.sqf"]],"addAction",true] call BIS_fnc_MP;
