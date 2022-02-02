class CfgPatches
{
	class 187th_Recruit_Uniform
	{
		name = "187th Recruit Uniform";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187th_CloneArmor_Recruit"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_Clone_Recruit"};
	};
};

class CfgVehicles
{
	class JLTS_Clone_P2_DC15A;
	class 187th_CloneArmor_Recruit : JLTS_Clone_P2_DC15A
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		scope=2;
		displayName="Recruit";
		uniformClass="187th_Clone_Recruit";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","Put","Throw"};
		items[]={"ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_wirecutter","ACE_EntrenchingTool","ACE_EarPlugs","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_CableTie","ACE_CableTie","ACE_CableTie","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV_500","ACE_bodyBag","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint"};
		respawnItems[]={"ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_wirecutter","ACE_EntrenchingTool","ACE_EarPlugs","ACE_EarPlugs","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_CableTie","ACE_CableTie","ACE_CableTie","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_plasmaIV_500","ACE_bodyBag","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_splint","ACE_splint","ACE_splint"};
		magazines[]={"JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","Luma_Green","Luma_Green","3AS_SmokeGreen","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","Luma_Green","Luma_Green","3AS_SmokeGreen","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_Recruit","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_Recruit","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Beltbag";
		class HitPoints {
		  class HitFace {
		    armor = 6; //Default Value
		    material = -1;
		    name = "face_hub";
		    passThrough = 0.8;
		    radius = 0.08;
		    explosionShielding = 0.5;
		    minimalHit = 0.01;
		  };
		  class HitNeck: HitFace {
		    armor = 6; //Default=1
		    material = -1;
		    name = "neck";
		    passThrough = 0.8;
		    radius = 0.1;
		    explosionShielding = 0.5;
		    minimalHit = 0.01;
		  };
		  class HitHead: HitNeck {
		    armor = 6; //Default Value
		    material = -1;
		    name = "head";
		    passThrough = 0.8;
		    radius = 0.2;
		    explosionShielding = 0.5;
		    minimalHit = 0.01;
		    depends = "HitFace max HitNeck";
		  };
		  class HitPelvis {
		    armor = 15; //Default=6
		    material = -1;
		    name = "pelvis";
		    passThrough = 0.6;
		    radius = 0.24;
		    explosionShielding = 0.5;
		    visual = "injury_body";
		    minimalHit = 0.01;
		    depends = "0";
		  };
		  class HitAbdomen: HitPelvis {
		    armor = 15; //Default=1
		    material = -1;
		    name = "spine1";
		    passThrough = 0.6;
		    radius = 0.16;
		    explosionShielding = 0.5;
		    visual = "injury_body";
		    minimalHit = 0.01;
		  };
		  class HitDiaphragm: HitAbdomen {
		    armor = 15; //Default=1
		    material = -1;
		    name = "spine2";
		    passThrough = 0.6;
		    radius = 0.18;
		    explosionShielding = 0.5;
		    visual = "injury_body";
		    minimalHit = 0.01;
		  };
		  class HitChest: HitDiaphragm {
		    armor = 15; //Default=1
		    material = -1;
		    name = "spine3";
		    passThrough = 0.6;
		    radius = 0.18;
		    explosionShielding = 0.5;
		    visual = "injury_body";
		    minimalHit = 0.01;
		  };
		  class HitBody: HitChest {
		    armor = 1000; //do not change
		    material = -1;
		    name = "body";
		    passThrough = 1;
		    radius = 0;
		    explosionShielding = 0.5;
		    visual = "injury_body";
		    minimalHit = 0.01;
		    depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		  };
		  class HitArms: HitBody {
		    armor = 15; //Default=3
		    material = -1;
		    name = "arms";
		    passThrough = 0.6;
		    radius = 0.1;
		    explosionShielding = 0.5;
		    visual = "injury_hands";
		    minimalHit = 0.01;
		    depends = "0";
		  };
		  class HitHands: HitArms {
		    armor = 15; //Default=3
		    material = -1;
		    name = "hands";
		    passThrough = 0.6;
		    radius = 0.1;
		    explosionShielding = 0.5;
		    visual = "injury_hands";
		    minimalHit = 0.01;
		    depends = "HitArms";
		  };
		  class HitLegs: HitHands {
		    armor = 15; //Default=3
		    material = -1;
		    name = "legs";
		    passThrough = 0.6;
		    radius = 0.14;
		    explosionShielding = 0.5;
		    visual = "injury_legs";
		    minimalHit = 0.01;
		    depends = "0";
		  };
		  class Incapacitated: HitLegs {
		    armor = 1000; //Do not change
		    material = -1;
		    name = "body";
		    passThrough = 1;
		    radius = 0;
		    explosionShielding = 0.5;
		    visual = "";
		    minimalHit = 0;
		    depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		  };
		  //----------------------------Ace Hitpoints---------------------------
		  class HitLeftArm {
		    armor = 15; //Default=1
		    material = -1;
		    name = "hand_l";
		    passThrough = 0.6;
		    radius = 0.08;
		    explosionShielding = 0.5;
		    visual = "injury_hands";
		    minimalHit = 0.01;
		  };
		  class HitRightArm: HitLeftArm {
		    name = "hand_r";
		  };
		  class HitLeftLeg {
		    armor = 15; //Default=1
		    material = -1;
		    name = "leg_l";
		    passThrough = 0.6;
		    radius = 0.1;
		    explosionShielding = 0.5;
		    visual = "injury_legs";
		    minimalHit = 0.01;
		  };
		  class HitRightLeg: HitLeftLeg {
		    name = "leg_r";
		  };
		  class ACE_HDBracket {
		    armor = 1; // Do not Change
		    material = -1;
		    name = "head";
		    passThrough = 0;
		    radius = 1;
		    explosionShielding = 0.5;
		    visual = "";
		    minimalHit = 0;
		    depends = "HitHead";
		  };
		};
	};
};

class CfgWeapons
{
	class UniformItem;
	class JLTS_CloneArmor;
	class 187th_Clone_Recruit : JLTS_CloneArmor
	{
		author = "PraetorPanda";
		dlc = "187th Aux Mod";
		scope = 2;
		displayName = "[187th] Clone Armor (Recruit)";
	   	picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
	   	model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CloneArmor_Recruit";
			containerClass = "Supply150";
			mass = 40;
		};

	};
};