[] call BC_setup_fnc_initialSpawnClient;

["InitializePlayer", [player, true]] call BIS_fnc_dynamicGroups;
[] call BC_setup_fnc_addInteractions; // add interactions

waitUntil {!isNil "CIVILIAN_TRAFFIC"};

// todo activate grad civs


player addEventHandler ["handleRating", {
	0
}];

// disable spectating the fucking civs
[[west, east], [civilian, independent]] call ace_spectator_fnc_updateSides;