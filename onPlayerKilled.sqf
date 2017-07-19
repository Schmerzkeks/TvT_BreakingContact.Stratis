#include "\z\ace\addons\main\script_component.hpp"

params ["_player", "_killer"];

[player, true] call TFAR_fnc_forceSpectator;
setPlayerRespawnTime 0;

player setVariable ["GRAD_replay_persistentName", name player, true];
player setVariable ["GRAD_replay_playerPosition", getPos player, true];

if (!(_killer isEqualTo player) && !(missionNamespace getVariable ["grad_replay_player_gcamspec", false])) then {

	_string = format ['Killed by %1',name _killer];
	_stringHint = "Entering Spectator. Respawn to switch to GCAM.";
	systemChat _string;
	systemChat _stringHint;
	player setVariable ["GRAD_gcamspec_currentFocus", _killer];
};

/* [true] call ace_spectator_fnc_setSpectator; */