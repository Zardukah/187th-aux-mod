class CfgPatches
{
	class 187th_Captain_Vest
	{
		name = "187th Captain Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Vest_CPT"};
	};
};

class CfgWeapons
{
	class VestItem;
	class 187_Clone_Vest_LT;
	class 187_Clone_Vest_CPT : 187_Clone_Vest_LT
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (Captain)";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
		hiddenSelections[]=
		{
			"camo1"
		};
		hiddenSelectionsTextures[]={"\187th-aux\Data\Vests\Clone_vest_officer_cpt_co.paa"};
		class ItemInfo : VestItem
		{
			uniformmodel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer.p3d";
			containerClass = "Supply100";
			hiddenSelections[] = {"camo1"};
			mass=80;
		};
	};
};