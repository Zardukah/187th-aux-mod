class cfgPatches
{
	class 187th_argon_fuel
	{
		author = "PraetorPanda";
		name = "187th Argon Fuel Truck";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_fuel"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_fuel;
	class 187th_442_argon_fuel : 442_argon_fuel
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Fuel Truck";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}