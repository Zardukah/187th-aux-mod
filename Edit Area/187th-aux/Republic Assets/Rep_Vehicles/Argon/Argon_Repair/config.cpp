class cfgPatches
{
	class 187th_argon_repair
	{
		author = "PraetorPanda";
		name = "187th Argon Repair Truck";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_repair"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_repair;
	class 187th_442_argon_repair : 442_argon_repair
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Repair Truck";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}