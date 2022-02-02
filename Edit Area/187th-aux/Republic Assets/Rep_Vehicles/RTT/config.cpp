class CfgPatches
{
	class 187th_RTT
	{
		name = "187th RTT";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_RTT"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class 3as_RTT;
	class 187th_RTT : 3as_RTT
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Armor";
		side=1;
		ace_refuel_fuelCargo = 999999999999;
		ace_rearm_defaultSupply = 999999999999;
		ace_cargo_space = 170;
		ace_repair_canRepair = 1;
		ace_refuel_hooks[] = {{0.38,-3.17,-0.7},{-0.41,-3.17,-0.7}};
		displayName="RTT";
		hiddenSelectionsTextures[]={"3as\3as_rtt\data\rtt\exterior_co.paa"};
		crew="187th_Trooper_Crewman";
		typicalCargo[]={"187th_Trooper_Crewman"};
	};
};