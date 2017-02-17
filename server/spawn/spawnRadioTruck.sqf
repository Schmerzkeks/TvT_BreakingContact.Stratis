spawnRadioTruck = {
	params ["_position"];

	_radioVeh = [_position, 0, 1, "rhs_gaz66_r142_vv"] call spawnStuff;
	// used for detachable radio unit
	_radioVeh setVariable ["detachableRadio", 0, true];

	0 = [_radioVeh, true] execVM "spawn\flagsOnVehicles.sqf";

	sleep 1;
	[_radioVeh] call clearInventory;

	
	
	[_radioVeh, _terminal] execVM "grad_tracking\init.sqf";

	if (!IS_WOODLAND) then {
		_radioVeh setObjectTextureGlobal [0,"rhsafrf\addons\rhs_gaz66_camo\data\gaz66_sand_co.paa"];
	    _radioVeh setObjectTextureGlobal [1,"rhsafrf\addons\rhs_gaz66\data\tent_co.paa"];
	    _radioVeh setObjectTextureGlobal [2,"rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_kung_sand_co.paa"];
	    _radioVeh setObjectTextureGlobal [3,"rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_ap2kung_sand_co.paa"];
	    _radioVeh setObjectTextureGlobal [4,"rhsafrf\addons\rhs_gaz66_camo\data\rhs_gaz66_repkung_sand_co.paa"];
	};

	// hide light covers for optical reasons
	_radioVeh animate ["light_hide",1];
	sleep 0.1;


	[getPos _radioVeh, 50, "Land_ClutterCutter_large_F"] call spawnOpforHQ;
	_radioVeh addItemCargoGlobal ["ACE_SpraypaintBlack",10];
	_radioVeh addItemCargoGlobal ["ACE_SpraypaintBlue",10];
	_radioVeh addItemCargoGlobal ["ACE_SpraypaintGreen",10];
	_radioVeh addItemCargoGlobal ["ACE_SpraypaintRed",10];
	_radioVeh addItemCargoGlobal ["ACE_EntrenchingTool",10];
	_radioVeh addItemCargoGlobal ["ACE_NVG_Gen2",50];

};