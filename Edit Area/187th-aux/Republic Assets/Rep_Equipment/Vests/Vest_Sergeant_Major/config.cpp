class CfgPatches
{
	class 187th_CSM_Vest
	{
		name = "187th CSM Vest";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Vest_CSM"};
	};
};

class CfgWeapons
{
	class VestItem;
	class JLTS_CloneVestOfficer2;
	class 187_Clone_Vest_CSM : JLTS_CloneVestOfficer2
	{
		author = "PraetorPanda";
		dlc = "187th Aux Mod";
		scope = 2;
		scopeCurator = 2;
		displayname = "[187th] Clone Vest (CSM)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestKama_ui_ca.paa";
		model = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
		class ItemInfo : VestItem
		{
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestOfficer2.p3d";
			containerClass = "Supply100";
			mass=80;
		};
	};
};