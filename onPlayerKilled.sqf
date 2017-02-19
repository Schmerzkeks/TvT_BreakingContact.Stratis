#include "\z\ace\addons\main\script_component.hpp"

setPlayerRespawnTime 0;
forceRespawn player;



[player, true] call TFAR_fnc_forceSpectator;

_killer = player getVariable ["ace_medical_lastDamageSource", objNull];

if (!isNull _killer) then {

	_string = format ['Killed by %1',_killer];
	[_string] call EFUNC(common,displayTextStructured);

	if (!FACTIONS_DEFAULT) then {
		[true] call ace_spectator_fnc_setSpectator;
	} else {
		[player] call GRAD_waverespawn_fnc_onPlayerKilled;
	};
} else {
	[true] call ace_spectator_fnc_setSpectator;
};