class CfgPatches
{
	class 187th_Helmet_BARC
	{
		name = "187th Helmet BARC";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Clone_Helmet_BARC"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class JLTS_CloneHelmetBARC;
	class 187_Clone_Helmet_BARC: JLTS_CloneHelmetBARC
	{
		displayName = "[187th] Clone Trooper Helmet (BARC)";
		scope = 2;
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.25;
		CBRN_protection = 1;
		weaponPoolAvailable = 1;
		hiddenSelectionsTextures[]={"\187th-aux\Data\Helmets\187th_barc.paa"};
		class ItemInfo: HeadgearItem
		{
			mass=10;
			uniformModel="\MRC\JLTS\characters\CloneArmor2\CloneHelmetBARC.p3d";
			hiddenSelections[]={"camo1"};
			allowedSlots[]={801,901,701,605};
			modelSides[]={6};
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