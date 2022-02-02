class CfgPatches
{
	class 187th_Lance_Vest
	{
		name = "187th Lance Trooper Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Vest_Lance"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestRecon;
	class 187_Clone_Vest_Lance : JLTS_CloneVestRecon
	{
	   author  = "PraetorPanda";
	   dlc             = "187th Aux Mod";
	   scope   = 2;
	   scopeCurator = 2;
	   displayname = "[187th] Clone Vest (Lance Trooper)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo2"};
	   hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
	   class ItemInfo : VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestRecon.p3d";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1"};
	      mass = 80;
	   };
	};
};