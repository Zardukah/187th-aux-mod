class cfgPatches
{
	class 187th_Argon_Ammo
	{
		author = "PraetorPanda";
		name = "187th Argon Ammo Truck";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_ammo"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_ammo;
	class 187th_442_argon_ammo : 442_argon_ammo
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Ammo Truck";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}