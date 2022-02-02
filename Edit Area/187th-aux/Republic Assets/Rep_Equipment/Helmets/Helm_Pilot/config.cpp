class CfgPatches
{
	class 187th_Helmet_Pilot
	{
		name = "187th Helmet Pilot";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187_Pilot_HelmetP2","187th_NVG_Chip"};
	};
};

class CfgWeapons
{
	class HeadgearItem;
	class 3as_P2_Pilot_helmet;
	class 187_Pilot_HelmetP2 : 3as_P2_Pilot_helmet
	{
	   	author  = "PraetorPanda";
	   	dlc     = "187th Aux Mod";
	   	scope   = 2;
	   	scopeCurator = 2;
	   	displayName = "[187th] Pilot Helmet (P2)";
	   	picture = "\212th\Armor\212th_Helms\IconPilot";
	   	hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\187th-aux\Data\Helmets\187thHelmet_Pilot.paa"};
	   	class ItemInfo : HeadgearItem
	   	{
	   		mass = 30;
	   		uniformModel = "\3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P2.p3d";
	   		hiddenSelections[] = {"camo"};
	   		modelSides[] = {3,1};
	   		class HitpointsProtectionInfo
	   		{
	   			class Face
	   			{
	   				armor = 8;
	   				hitpointName = "HitFace";
	   				passThrough = 0.03;
	   			};
	   			class Head
	   			{
	   				armor = 8;
	   				hitPointName = "HitHead";
	   				passThrough = 0.03;
	   			};
	   			class Neck
	   			{
	   				armor = 8;
	   				hitpointName = "HitNeck";
	   				passThrough = 0.03;
	   			};
	   		};
	   	};
		ace_hearing_protection = 5.0;
		ace_hearing_lowerVolume = 0.40;
		allowedFacewear[] = {};
		subItems[] = {"187th_NVG_Chip_Pilot"};
	};
};