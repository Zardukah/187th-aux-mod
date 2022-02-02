class CfgPatches
{
	class 187th_Units
	{
		name = "187th Units";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_CloneArmor_Recruit","187th_Trooper","187th_Trooper_Medic","187th_Trooper_RTO","187th_Trooper_Crewman","187th_Trooper_Engineer","187th_Trooper_Genadier","187th_Trooper_Support","187th_Trooper_AT","187th_Trooper_Marksman","187th_Trooper_EOD","187th_Pilot","187th_Lance_Trooper","187th_Corporal","187th_Sergeant","187th_Sergeant_Major","187th_Lieutenant","187th_Captain"};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_Clone_P2_DC15A;
	class JLTS_Clone_P2_DC15S_187;
	class JLTS_Clone_P2_corporal_187;
	class JLTS_Clone_P2_sergeant_187;
	class JLTS_Clone_P2_sergeantmajor_187;
	class JLTS_Clone_P2_lieutenant_187;

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

	class 187th_Trooper : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Trooper";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Trooper_Medic : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		attendant=1;
		displayName="Medic";
		uniformClass="187th_Clone_Medic";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_surgicalKit","ACE_personalAidKit","ACE_EarPlugs","JLTS_repairkit_weapon_mini","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_surgicalKit","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack"};
		respawnItems[]={"ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_surgicalKit","ACE_personalAidKit","ACE_EarPlugs","JLTS_repairkit_weapon_mini","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_surgicalKit","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_adenosine","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack","187th_Stimpack"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Backpack_medic";
	};

	class 187th_Trooper_RTO : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="RTO";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeYellow","3AS_SmokeYellow","3AS_SmokeOrange","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeGreen","3AS_SmokeBlue","3AS_SmokeBlue","Luma_Green","Luma_Green","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_HandFlare_White","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeRed","3AS_SmokePurple","3AS_SmokePurple","3AS_SmokeYellow","3AS_SmokeYellow","3AS_SmokeOrange","3AS_SmokeOrange","3AS_SmokeGreen","3AS_SmokeGreen","3AS_SmokeBlue","3AS_SmokeBlue","Luma_Green","Luma_Green","ACE_HandFlare_Red","ACE_HandFlare_Red","ACE_HandFlare_Green","ACE_HandFlare_Green","ACE_HandFlare_White","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152_8","ItemcTab","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152_8","ItemcTab","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Radio_Pack";
	};

	class 187th_Trooper_Crewman : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		engineer=1;
		displayName="Crewman";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_BARC","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_BARC","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Backpack";
	};

	class 187th_Trooper_Engineer : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		engineer=1;
		displayName="Engineer";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_splint","ACE_splint","ACE_splint","ACE_Clacker","ACE_DefusalKit","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","MineDetector","ToolKit","JLTS_repairkit_weapon"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","Luma_Green","Luma_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","3AS_SmokeRed","3AS_SmokeWhite","3AS_SmokeWhite","3AS_DetPack","3AS_DetPack","3AS_DetPack","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_BARC","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet_BARC","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Backpack";
	};

	class 187th_Trooper_Genadier : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Grenadier";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_ugl_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_ugl_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_HuntIR_monitor","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","ACE_HuntIR_monitor","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","UGL_FlareGreen_F","UGL_FlareGreen_F"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_HE_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_Smoke_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeOrange_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeGreen_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","1Rnd_SmokeRed_Grenade_shell","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_HuntIR_M203","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","ACE_40mm_Flare_white","UGL_FlareGreen_F","UGL_FlareGreen_F"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","OPTRE_HUD_w_Glasses","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","OPTRE_HUD_w_Glasses","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Trooper_Support : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Support";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_Z6","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_Z6","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","Chemlight_green","Chemlight_green","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","Chemlight_green","Chemlight_green","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag","JLTS_Z6_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Trooper_AT : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="AT";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_RPS6","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_RPS6","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","Luma_Green","Luma_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeGreen","3AS_SmokeRed","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_RPS6_mag","JLTS_RPS6_HE_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","Luma_Green","Luma_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeGreen","3AS_SmokeRed","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_RPS6_mag","JLTS_RPS6_HE_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Backpack";
	};

	class 187th_Trooper_Marksman : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Marksman";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15X_scope","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15X_scope","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs","ACE_Tripod"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_SmokeRed","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_SmokeWhite","3AS_SmokeWhite","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeGreen","Luma_Green","Luma_Green","3AS_SmokeRed","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag","JLTS_DC15X_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Trooper_EOD : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		engineer=1;
		displayName="Trooper EOD";
		uniformClass="187th_Clone_EOD";
		weapons[]={"JLTS_CloneBinocular","JLTS_DC15S","JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","JLTS_DC15S","JLTS_DC17SA","Put","Throw"};
		items[]={"FirstAidKit","ACE_EarPlugs","MineDetector","ToolKit"};
		respawnItems[]={"FirstAidKit","ACE_EarPlugs","MineDetector","ToolKit"};
		magazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		respawnMagazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC17SA_mag","JLTS_DC17SA_mag","SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_NVG_droid_chip_1"};
		backpack="187_Clone_Backpack_eod";
	};

	class 187th_Pilot : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Pilot";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15S","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_EarPlugs","FirstAidKit","ACE_EarPlugs"};
		respawnItems[]={"ACE_EarPlugs","FirstAidKit","ACE_EarPlugs"};
		magazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","SmokeShell","SmokeShellGreen"};
		respawnMagazines[]={"JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","JLTS_DC15S_mag","SmokeShell","SmokeShellGreen"};
		linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Pilot_HelmetP2","187_Clone_Holster","JLTS_Clone_helmetInterior_P2"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_clone_comlink","JLTS_NVG_droid_chip_1","JLTS_CloneBinocular","187_Pilot_HelmetP2","187_Clone_Holster","JLTS_Clone_helmetInterior_P2"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Lance_Trooper : JLTS_Clone_P2_DC15S_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Lance Trooper";
		uniformClass="187th_Clone_Lance_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_CloneNVG"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Holster","JLTS_CloneNVG"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Corporal : JLTS_Clone_P2_corporal_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Corporal";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPL","JLTS_CloneNVG"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPL","JLTS_CloneNVG"};
		backpack="187_Clone_Beltbag";
	};

	class 187th_Sergeant : JLTS_Clone_P2_sergeant_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Sergeant";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","JLTS_CloneNVG"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVG","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","JLTS_CloneNVG"};
		backpack="187_MiniRadio_Pack";
	};

	class 187th_Sergeant_Major : JLTS_Clone_P2_sergeantmajor_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Sergeant Major";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","JLTS_CloneNVGRange"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_SGT","JLTS_CloneNVGRange"};
		backpack="187_MiniRadio_Pack";
	};

	class 187th_Lieutenant : JLTS_Clone_P2_lieutenant_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Lieutenant";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_LT","JLTS_CloneNVGRange"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_LT","JLTS_CloneNVGRange"};
		backpack="187_MiniRadio_Pack";
	};

	class 187th_Captain : JLTS_Clone_P2_lieutenant_187
	{
		faction="187th_Republic";
		editorCategory="187th_Rep_Assets";
		editorSubcategory="187th_Infantry";
		side=1;
		displayName="Captain";
		uniformClass="187th_Clone_Trooper";
		weapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		respawnWeapons[]={"JLTS_CloneBinocular","187th_JLTS_DC15A_plastic","187th_JLTS_DC17SA","Put","Throw"};
		items[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		respawnItems[]={"ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_quikclot","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_elasticBandage","ACE_CableTie","ACE_CableTie","ACE_CableTie","ItemcTabHCam","ACE_MapTools","ACE_Flashlight_XL50","ACE_Morphine","ACE_Morphine","ACE_Morphine","ACE_plasmaIV_500","ACE_tourniquet","ACE_tourniquet","ACE_tourniquet","ACE_wirecutter","ACE_EntrenchingTool","ACE_epinephrine","ACE_epinephrine","ACE_epinephrine","ACE_EarPlugs","ACE_EarPlugs","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_packingBandage","ACE_bodyBag","ACE_IR_Strobe_Item","ACE_IR_Strobe_Item","JLTS_repairkit_weapon_mini","ACE_splint","ACE_splint","ACE_splint","187th_Stimpack","187th_Stimpack","187th_Stimpack","ACE_EarPlugs"};
		magazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		respawnMagazines[]={"JLTS_DC17SA_mag","JLTS_DC17SA_mag","JLTS_stun_mag_long","JLTS_stun_mag_long","ACE_HandFlare_White","ACE_HandFlare_Red","ACE_HandFlare_Green","3AS_ThermalDetonator","3AS_ThermalDetonator","3AS_SmokeWhite","3AS_SmokeWhite","3AS_SmokeRed","3AS_SmokeGreen","Luma_Green","Luma_Green","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag","JLTS_DC15A_mag"};
		linkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPT","JLTS_CloneNVGRange"};
		respawnLinkedItems[]={"ItemMap","ItemCompass","ACE_Altimeter","tf_anprc152","ItemGPS","JLTS_CloneNVGRange","JLTS_CloneBinocular","187_Clone_Helmet","187_Clone_Vest_CPT","JLTS_CloneNVGRange"};
		backpack="187_MiniRadio_Pack";
	};
};