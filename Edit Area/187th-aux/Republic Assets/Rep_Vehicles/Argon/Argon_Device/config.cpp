class cfgPatches
{
	class 187th_argon_device
	{
		author = "PraetorPanda";
		name = "187th Argon Device Carrier";
		requiredaddons[] = {};
		requiredversion = 0.1;
		units[] = {"187th_442_argon_device"};
		weapons[] = {};
	};
};

class cfgVehicles
{
	class 442_argon_device;
	class 187th_442_argon_device : 442_argon_device
	{
		scope = 2;
    	scopeCurator = 2;
    	displayName = "Argon Device Carrier";
		crew="187th_Trooper";
		typicalCargo[]={"187th_Trooper"};
		faction = "187th_Republic";
		editorCategory = "187th_Rep_Assets";
		vehicleClass = "187th_Transport";
	};
}