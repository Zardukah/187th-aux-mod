class CfgPatches
{
	class 187th_Corporal_Vest
	{
		name = "187th Corporal Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Vest_CPL"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestReconNCO;
	class 187_Clone_Vest_CPL : JLTS_CloneVestReconNCO
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Corporal)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
		hiddenSelections[] = {"camo1"};
		hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestReconNCO.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass = 80;
		};
	};
};