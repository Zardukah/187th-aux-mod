class CfgPatches
{
	class 187th_Helmet_Airborne
	{
		name = "187th Helmet Airborne";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Helmet_Airborne"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class JLTS_CloneHelmetAB_187;
	class 187_Clone_Helmet_Airborne: JLTS_CloneHelmetAB_187
	{
		displayName = "[187th] Clone Trooper Helmet (Airborne)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		class ItemInfo: HeadgearItem
		{
			mass = 10;
			uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneHelmetAB.p3d";
			hiddenSelections[] = {"camo1"};
			allowedSlots[] = {801,901,701,605};
			modelSides[] = {6};
			class HitpointsProtectionInfo
			{
				class Head
				{
					hitpointName = "HitHead";
					armor = 8;
					passThrough = 0.05;
				};
			};
		};
	};
};