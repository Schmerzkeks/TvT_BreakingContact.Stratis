params ["_vehicle"];

_vehicle setVariable ["detachableRadio", 0, true];

_vehicle setVariable ["GRAD_replay_track", true, true];

_vehicle addMPEventHandler ["MPKilled", {
  params ["_unit", "_killer", "_instigator", "_useEffects"];

  _unit setVariable ["BC_lastDamageSource_causedBy", _killer, true];
  _unit setVariable ["ace_medical_lastDamageSource", _killer, true];

}];

0 = [_vehicle, true] call BC_flagsOnVehicles_fnc_toggleFlag;

sleep 1;
[_vehicle] call clearInventory;

_terminal = createVehicle ['Land_DataTerminal_01_F', [0,0,0], [], 0, 'NONE'];
_terminal setVariable ["GRAD_replay_track", true, true];

hideObjectGlobal _terminal;

missionNameSpace setVariable ["GRAD_tracking_radioVehObj", _vehicle, true];
missionNameSpace setVariable ["GRAD_tracking_terminalObj", _terminal, true];

[[_vehicle, _terminal, _position], "grad_tracking\init.sqf"] remoteExec ["execVM", 0, true];


if (!IS_WOODLAND) then {
    _vehicle setObjectTextureGlobal [0,"rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa"];
    _vehicle setObjectTextureGlobal [1,"rhsafrf\addons\rhs_gaz66\data\tent_co.paa"];
    _vehicle setObjectTextureGlobal [2,"rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa"];
    _vehicle setObjectTextureGlobal [3,"rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa"];
    _vehicle setObjectTextureGlobal [4,"rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"];
};

// hide light covers for optical reasons
_vehicle animate ["light_hide",1];
sleep 0.1;


[getPos _vehicle, 50, "Land_ClutterCutter_large_F"] call BC_setup_fnc_spawnStartVehicle;
_vehicle addItemCargoGlobal ["ACE_SpraypaintBlack",10];
_vehicle addItemCargoGlobal ["ACE_SpraypaintBlue",10];
_vehicle addItemCargoGlobal ["ACE_SpraypaintGreen",10];
_vehicle addItemCargoGlobal ["ACE_SpraypaintRed",10];
_vehicle addItemCargoGlobal ["ACE_EntrenchingTool",10];
_vehicle addItemCargoGlobal ["ACE_NVG_Gen2",50];
_vehicle addItemCargoGlobal ["tf_fadak", 10];
