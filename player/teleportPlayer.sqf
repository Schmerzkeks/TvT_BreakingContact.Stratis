#include "\z\ace\addons\main\script_component.hpp"
// takes location, distance

_location = _this select 0;
_distance = _this select 1;

["Preparing teleport..."] call EFUNC(common,displayTextStructured);

sleep (random 7);

_spawn = _location findEmptyPosition[2, 20, "B_Soldier_F"];
diag_log format ["teleporting %1 to %2.", player, _location];
cutText ["", "BLACK OUT", 0.1];
sleep 1;
playSound "beam";
_nul = player setPos _spawn;
openMap [false, false];
hintSilent "";
sleep 2;
cutText ["", "BLACK IN", 1];

// make player vulnerable again
player allowDamage true;
// 3 call fn_sthud_usermenu_changeMode;
sleep 1;
cutText ["", "PLAIN"];

["<img size= '6' shadow='false' image='pic\gruppe-adler.paa'/><br/><t size='.9' color='#FFFFFF'>Breaking Contact</t>",0,0,2,2] spawn BIS_fnc_dynamicText;
