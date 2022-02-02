class cfgPatches
{
	class 187th_argon_covered
	{
		author = "PraetorPanda";
		name = "187th Argon Transport Truck (Covered)";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_covered"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_covered;
	class 187th_442_argon_covered : 442_argon_covered
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Transport Truck (Covered)";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}