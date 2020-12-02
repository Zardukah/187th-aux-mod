#include "CfgWeapons.cpp"
#include "CfgVehicles.cpp"
#include "CfgFactions.cpp"

class cfgPatches
{
	class 187th_Aux_Mod
	{
		author 	= "PraetorPanda#0962 and the 187th Mod Team";
		dlc 	= "187th Aux Mod";
		units[] = {"187th_Legion", "187th_LAAT"};
		weapons = {};
		requiredVersion = 0.1;
		requiredAddons[] = 
        {
			"SWOP_Main",
			"3AS",
			"JLTS"
        };
	}
}