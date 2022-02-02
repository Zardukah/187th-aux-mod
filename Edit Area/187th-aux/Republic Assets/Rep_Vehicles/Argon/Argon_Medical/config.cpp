class cfgPatches
{
	class 187th_argon_medical
	{
		author = "PraetorPanda";
		name = "187th Argon Medical Truck";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_medical"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_medical;
	class 187th_442_argon_medical : 442_argon_medical
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Medical Truck";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}