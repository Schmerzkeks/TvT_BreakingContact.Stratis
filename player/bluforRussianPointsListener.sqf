#include "\z\ace\addons\main\script_component.hpp"

bluforShowPointsWarning = {
	_points = _this;
	_tenPercentOfPointsNeededForVictory = floor (POINTS_NEEDED_FOR_VICTORY / 10);
	if (
		(_points > 0) &&
		((_points % _tenPercentOfPointsNeededForVictory) == 0)
	) then { // alle 10% die Warnung
		_string = "Die Russen haben schon " + (str (round((_points / POINTS_NEEDED_FOR_VICTORY) * 100))) + " Prozent gesendet.";
		[_string] call EFUNC(common,displayTextStructured);
	};
};

_RUSSIAN_POINTS_listener = {

	_points = _this select 1;

	_points call bluforShowPointsWarning;
};

"RUSSIAN_POINTS" addPublicVariableEventHandler _RUSSIAN_POINTS_listener;


// runs in SP to emulate addPublicVariableEventHandler (which doesnt work in SP)
if (!isMultiplayer) then {
	_RUSSIAN_POINTS_listener spawn {
		_cur = RUSSIAN_POINTS;
		while {true} do {
			waitUntil {sleep 1; RUSSIAN_POINTS > _cur};
			_cur = RUSSIAN_POINTS;
			[0, RUSSIAN_POINTS] call _this;
			sleep 1;
		};
	};
};
