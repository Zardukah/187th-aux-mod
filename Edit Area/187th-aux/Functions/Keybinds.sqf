#include "\a3\editor_f\Data\Scripts\dikCodes.h"


[["187th Aux Mod","LAAT Impulse"],"Boost On",["Impulse On","Turn Impulse on"],{[player] spawn OES_fnc_afterburner_turn_on;},"",[DIK_J, [false, true, false]],false] call cba_fnc_addKeybind;

[["187th Aux Mod","LAAT Impulse"],"Boost Off",["Impulse Off","Turn Impulse off"],{[player] spawn OES_fnc_afterburner_turn_off;},"",[DIK_J, [false, true, false]],true] call cba_fnc_addKeybind;
