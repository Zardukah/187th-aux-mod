class cfgPatches
{
	class 187th_argon_transport
	{
		author = "PraetorPanda";
		name = "187th Argon Transport Truck";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_transport"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_transport;
	class 187th_442_argon_transport : 442_argon_transport
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Transport Truck";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}