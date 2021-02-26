class CBA_Extended_EventHandlers_base;

class DefaultEventHandlers;
class EventHandlers;
class AnimationSources;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class RCWSOptics;
class Optics_Armored;
class Optics_Commander_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};
class Optics_Gunner_APC_01: Optics_Armored
{
	class Wide;
	class Medium;
	class Narrow;
};

class Extended_Init_EventHandlers
{
	class 187th_Droideka
	{
		class droideka_movable
		{
			init = "[_this select 0] spawn RD501_fnc_droidekka_move";
		};
	};
};
class Extended_Deleted_EventHandlers
{
	class RD501_droideka_base
	{
		class remove_atached_stuff
		{
			deleted = "[_this select 0] spawn RD501_fnc_remove_attached_objects";
		};
	};
};


class CfgVehicles
{
    #include "RepublicAssets.cpp"
    #include "BanthaCfg.cpp"
    
    class UniformItem;
	
/***********************************************************************************************************
--------------------------------------------------------------Uniforms------------------------------------------
************************************************************************************************************/
	class O_Soldier_F;

	class 187_Base_Uniform: O_Soldier_F
	{// Base Uniform stats for more options with other uniforms...
		class HitPoints
		{
            class HitFace
            {
                armor = 6; //Default Value
                material = -1;
                name = "face_hub";
                passThrough = 0.8;
                radius = 0.08;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitNeck: HitFace
            {
                armor = 6; //Default=1
                material = -1;
                name = "neck";
                passThrough = 0.8;
                radius = 0.1;
                explosionShielding = 0.5;
                minimalHit = 0.01;
            };
            class HitHead: HitNeck
            {
                armor = 6; //Default Value
                material = -1;
                name = "head";
                passThrough = 0.8;
                radius = 0.2;
                explosionShielding = 0.5;
                minimalHit = 0.01;
                depends = "HitFace max HitNeck";
            };
            class HitPelvis
            {
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
            class HitAbdomen: HitPelvis
            {
                armor = 15; //Default=1
                material = -1;
                name = "spine1";
                passThrough = 0.6;
                radius = 0.16;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitDiaphragm: HitAbdomen
            {
                armor = 15; //Default=1
                material = -1;
                name = "spine2";
                passThrough = 0.6;
                radius = 0.18;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitChest: HitDiaphragm
            {
                armor = 15; //Default=1
                material = -1;
                name = "spine3";
                passThrough = 0.6;
                radius = 0.18;
                explosionShielding = 0.5;
                visual = "injury_body";
                minimalHit = 0.01;
            };
            class HitBody: HitChest
            {
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
            class HitArms: HitBody
            {
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
            class HitHands: HitArms
            {
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
            class HitLegs: HitHands
            {
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
            class Incapacitated: HitLegs
            {
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
            class HitLeftArm
            {
                armor = 15; //Default=1
                material = -1;
                name = "hand_l";
                passThrough = 0.6;
                radius = 0.08;
                explosionShielding = 0.5;
                visual = "injury_hands";
                minimalHit = 0.01;
            };
            class HitRightArm: HitLeftArm
            {
                name = "hand_r";
            };
            class HitLeftLeg
            {
                armor = 15; //Default=1
                material = -1;
                name = "leg_l";
                passThrough = 0.6;
                radius = 0.1;
                explosionShielding = 0.5;
                visual = "injury_legs";
                minimalHit = 0.01;
            };
            class HitRightLeg: HitLeftLeg
            {
                name = "leg_r";
            };
            class ACE_HDBracket
            {
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
	class 187th_CloneArmor_Recruit: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Recruit";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 	= {"camo1","camo2"};
		hiddenSelectionsTextures[]=
		{
         "\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa",
         "\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Trooper: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Trooper";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[] = 
		{
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Medic: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Medic";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[] = {
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thMedic_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Airborne: 187_Base_Uniform
	{
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 1;
		scopeCurator	= 0;
		uniformClass 	= "187th_Clone_Airborne";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
		hiddenSelectionsTextures[]= {
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor1_co.paa",
			"\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
		};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		editorSubcategory = "187_clones_white";
	};
	
	//End Uniforms
	
/***********************************************************************************************************
--------------------------------------------------------------Backpacks------------------------------------------
************************************************************************************************************/
	class OPTRE_ANPRC_521_Black;
	class JLTS_Clone_backpack_RTO;
	class JLTS_Clone_RTO_pack;
	class JLTS_Clone_backpack;
	class JLTS_Clone_backpack_eod;
	class JLTS_Clone_backpack_medic;
	class JLTS_Clone_belt_bag;
	
	class 187_Zeus_LR : JLTS_Clone_backpack_RTO
    {
		author = "PraetorPanda";
        displayName = "[187th] Zeus LR";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 100000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 500;
    };
	
    class 187_Radio_Pack: JLTS_Clone_backpack_RTO
    {
		author = "PraetorPanda";
        displayName = "[187th] Radio Pack";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 280;
    };
	
	class 187_MiniRadio_Pack: JLTS_Clone_RTO_pack
    {
		author = "PraetorPanda";
        displayName = "[187th] Radio Pack Mini";
        tf_isolatedAmount = 0.65;
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 180;
    };
	
	class 187_Clone_Backpack : JLTS_Clone_backpack
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Backpack";
        maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
	
	class 187_Clone_Backpack_eod : JLTS_Clone_backpack_eod
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Backpack (EOD)";
        maximumLoad = 450;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
	
	class 187_Clone_Backpack_medic : JLTS_Clone_backpack_medic
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Backpack (Medic)";
        maximumLoad = 280;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
	
	class 187_Clone_Beltbag : JLTS_Clone_belt_bag
    {
        author = "PraetorPanda";
        displayName = "[187th] Clone Trooper Belt Bag";
        maximumLoad = 180;
		mass = 50;
		hiddenSelections[] = {"camo1"};
    };
    
	
/***********************************************************************************************************
--------------------------------------------------------------Vehicles--------------------------------------
************************************************************************************************************/
    
    /*class 187th_LAAT : 615th_LAAT_MK2
	{
		displayname="Test LAAT for 187th";
		faction="187th_Republic";
		editorCategory = "187th_Rep_Assets";
		editorSubcategory = "187th_Helicopter";
		armor=600;
		fuelCapacity=3000;
		scope=2;
		scopeCurator = 2;
		side=1;
        maximumLoad = 5000;
		weapons[]=
		{
            "Gatling_30mm_Plane_CAS_01_F",
            "ParticleBeamCannon_F",
            "3as_LAAT_Missile_AGM",
			"3as_LAAT_Missile_AA",
			"CMFlareLauncher"
		};
		magazines[]=
		{
            "1000Rnd_Gatling_30mm_Plane_CAS_01_F",
            "Laser_Battery_F",
            "3as_LAAT_8Rnd_Missile_AGM",
            "3as_LAAT_8Rnd_Missile_AGM",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
        tcw_emp_protection = 1;
		tcw_can_use_afterburner = 1;
		tcw_afterburner_max_boost_speed = 650;
		tcw_afterburner_min_boost_speed = 20;
		tcw_afterburner_min_brake_speed = 20;
		tcw_afterburner_increment = 10;
		tcw_afterburner_fuel_drag = 2000;
		tcw_afterburner_fuel_multi = 4;
		tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
        class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0";
				statement = "this animateSource ['ramp',1,1];";
				onlyforplayer = 0;
			};
			class rampClose
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Close";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==1";
				statement = "this animateSource ['ramp',0,1];";
				onlyforplayer = 0;
			};
			class afterburners_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 1;
				condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
			};
			class afterburners_turn_off
			{
				showWindow = 0;
				hideOnUse = 0;
                priority = 9;
				role = 0;
				displayName = "Deactivate Impulse";
				position = "pilotview";
				radius = 6;
				onlyforplayer = 1;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
            };
        };
	};*/
	
	
	
	
	
/***********************************************************************************************************
--------------------------------------------------------------Supply Crates--------------------------------------
************************************************************************************************************/
    class ls_carrybox_base;

    class 187th_Base_Crate : ls_carrybox_base
    {
    scope=2;
    displayName= "187th Crate";
    faction= "187th_Republic";
    editorCategory = "187th_Rep_Assets";
    editorSubcategory = "187th_Crates";
    };
    
    //--------------------------------------------------------------------------------------------
    //-----------------------------------Medical Stuff------------------------------------------------
    //--------------------------------------------------------------------------------------------
    class ACE_morphineItem;
    class ACE_fieldDressingItem;
    
    class 187th_StimpackItem : ACE_morphineItem
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[187th] Stimpack";
        author = "PraetorPanda";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx=(187th_Stimpack,1);
        };
        mass = 20;
    };
    
    class 187th_Bacta_SprayItem: ACE_fieldDressingItem 
    {
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        displayName = "[187th] Bacta Spray";
        author = "PraetorPanda";
        vehicleClass = "Items";
        class TransportItems 
        {
            item_xx=(187th_Bacta_Spray,1);
        };
        mass = 20;
    };

    //--------------------------------------------------------------------------------------------
    //-----------------------------------CIS Stuff------------------------------------------------
    //--------------------------------------------------------------------------------------------
    
  class JLTS_Droid_B1_E5;
  class JLTS_B1_backpack;
  class JLTS_Droid_B1_AT;
  class JLTS_B1_backpack_at_predef;
  class JLTS_Droid_B1_Crew;
  class JLTS_Droid_B1_Prototype;
  class RD501_opfor_eweb_bag_backpack;
  class JLTS_Droid_B1_Sniper;
  class JLTS_Droid_B1_Commander;
  class JLTS_B1_antenna;
  class JLTS_Droid_B1_Marine;
  class JLTS_B1_backpack_marine_predef;
  class JLTS_Droid_B1_Pilot;
  class JLTS_Droid_B1_Security;
  class SWOP_CIS_superdroid_B2;
  class SWOP_CIS_droid_tactic_blue;
  class SWOP_CIS_droid_tactic_black;
  class SWOP_CIS_droid_tactic_green;
  class SWOP_CIS_droid_tactic_red;
  class RD501_opfor_unit_B1_jammer;
  class SWOP_B_CargoBackpack;
  class SWOP_CIS_magnaguard;
  class RD501_opfor_unit_IG_88;
  class O_soldier_Melee_SW;
  class O_Kalani_BX_Commando_Droid_Citadel_01;
  class O_Kalani_BX_Commando_Droid_Diplomat_01;
  class 3AS_AAT_tan;
  class 3AS_AAT;
  class 3AS_AAT_Tropic;
  class 3AS_AAT_urban;
  class 3AS_AAT_snow;
  class 3AS_GAT;
  class 3AS_GAT_Olive;
  class 3AS_GAT_tan;
  class 3AS_GAT_urban;
  class 3AS_GAT_Light;
  class 3AS_GAT_Light_tan;
  class 3AS_GAT_Light_Olive;
  class 3AS_GAT_Light_urban;
  class 3AS_Hailfire_AT;
  class 3as_MTT;
  class RD501_dwarf_spider_droid_MkII;
  class RD501_e_web_cis;
  class RD501_homing_spider_droid_MKII;
  class 3AS_Hailfire_SAM;
  class 3AS_Hailfire_Rocket;
  class 3as_SAC_Trade;
  class 3as_CIS_Mortar;
  class 3as_ParticleCannon;
  class 3AS_FieldCannon;
  class 3as_Vulture_dynamicLoadout;
  class ls_cis_hmp;
  class ls_cis_hmp_transport;
  class ls_ground_bawhag;
  class SW_SpeederBikeCIV;
  class SWOP_Droideka;
  class SWOP_DroidekaCamo;
  class SWOP_DroidekaSupport;
  class RD501_Praetorian_Variant_normal;
  class RD501_Tarantula_CIS;
  class RD501_marid_MkII_CIS;
  class RD501_rocket_ordinance_tank_CIS;
  class RD501_heavy_ordinance_tank_CIS;
  class RD501_speedboat_cis;
  class RD501_light_infantry_transport_CIS_MkII;
    
    //--------------------------------------------------------------------------------------------
    //---------------------------------CIS infantry---------------------------------------------------
    //--------------------------------------------------------------------------------------------

  class 187th_B1_Droid: JLTS_Droid_B1_E5
  {
    faction="187th_Republic";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid";
    uniformClass="JLTS_DroidB1";
    weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_pack";
  };

  class 187th_B1_Droid_AT: JLTS_Droid_B1_AT
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (AT)";
    uniformClass="JLTS_DroidB1";
    weapons[]={"187th_JLTS_E5","187th_CIS_JLTS_RPS6","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","187th_CIS_JLTS_RPS6","187th_JLTS_RG4D","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RPS6_mag","JLTS_RPS6_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_AT_pack";
  };

  class 187th_B1_Droid_Crew: JLTS_Droid_B1_Crew
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Crew)";
    uniformClass="JLTS_DroidB1_Crew";
    weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
    items[]={"ACE_EarPlugs","ToolKit"};
    respawnItems[]={"ACE_EarPlugs","ToolKit"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","swop_termDetDT_G"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","swop_termDetDT_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_Crew_pack";
  };

  class 187th_B1_Droid_EWeb_Carrier: JLTS_Droid_B1_Prototype
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (EWeb Carrier)";
    uniformClass="JLTS_DroidB1_Prototype";
    weapons[]={"187th_JLTS_E5","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_termDetDT_G","swop_termDetDT_G"};
    respawnMagazines[]={"SmokeShell","SmokeShellGreen","Chemlight_green","Chemlight_green","HandGrenade","HandGrenade","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_termDetDT_G","swop_termDetDT_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_EWeb_Carrier_pack";
  };

  class 187th_B1_Droid_Sniper: JLTS_Droid_B1_Sniper
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Sniper)";
    uniformClass="JLTS_DroidB1";
    weapons[]={"187th_JLTS_E5S","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5S","187th_JLTS_RG4D","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
    respawnMagazines[]={"JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_E5S_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_Sniper_pack";
  };

  class 187th_B1_Droid_Commander: JLTS_Droid_B1_Commander
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Commander)";
    uniformClass="JLTS_DroidB1_Commander";
    weapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","187th_JLTS_RG4D","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","swop_termDetDT_G"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","swop_termDetDT_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_Commander_pack";
  };

  class 187th_B1_Droid_Marine: JLTS_Droid_B1_Marine
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Marine)";
    uniformClass="JLTS_DroidB1_Marine";
    weapons[]={"187th_SWOP_E5C","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_SWOP_E5C","187th_JLTS_RG4D","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","swop_termDetDT_G","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag"};
    respawnMagazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","swop_termDetDT_G","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag","SWOP_E5C_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="187th_B1_Droid_Marine_pack";
  };

  class 187th_B1_Droid_Pilot: JLTS_Droid_B1_Pilot
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Pilot)";
    uniformClass="JLTS_DroidB1_Pilot";
    weapons[]={"187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_RG4D","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
    respawnMagazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="";
  };

  class 187th_B1_Droid_Security: JLTS_Droid_B1_Security
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Security)";
    uniformClass="JLTS_DroidB1_Security";
    weapons[]={"187th_JLTS_DP23","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_DP23","187th_JLTS_RG4D","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag"};
    respawnMagazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag","JLTS_DP23_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    backpack="";
  };

  class 187th_B2_Droid: SWOP_CIS_superdroid_B2
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B2 Droid";
    uniformClass="RD501_opfor_uniform_B2_Armor";
    weapons[]={"187th_SWOP_b2gun","Put","Throw"};
    respawnWeapons[]={"187th_SWOP_b2gun","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2rocket_Mag","SWOP_b2rocket_Mag"};
    respawnMagazines[]={"SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2rocket_Mag","SWOP_b2rocket_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    backpack="";
  };

  class 187th_T_Series_Blue: SWOP_CIS_droid_tactic_blue
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="T-Series (Blue)";
    uniformClass="SWOP_TacticDroid_blue_F_Spec";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    backpack="";
  };

  class 187th_T_Series_Black: SWOP_CIS_droid_tactic_black
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="T Series (Black)";
    uniformClass="SWOP_TacticDroid_black_F_Spec";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    backpack="";
  };

  class 187th_T_Series_Green: SWOP_CIS_droid_tactic_green
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="T Series (Green)";
    uniformClass="SWOP_TacticDroid_green_F_Spec";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    backpack="";
  };

  class 187th_T_Series_Red: SWOP_CIS_droid_tactic_red
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="T Series (Red)";
    uniformClass="SWOP_TacticDroid_red_F_Spec";
    weapons[]={"Put","Throw"};
    respawnWeapons[]={"Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={};
    respawnMagazines[]={};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS"};
    backpack="";
  };

  class 187th_B1_Droid_Jammer: RD501_opfor_unit_B1_jammer
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Jammer)";
    uniformClass="JLTS_DroidB1";
    weapons[]={"187th_JLTS_E5","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_termDetDT_G","swop_SmokeShell"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_termDetDT_G","swop_SmokeShell"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_NVG_droid_chip_1"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","JLTS_NVG_droid_chip_1","JLTS_NVG_droid_chip_1"};
    backpack="187th_B1_Droid_Jammer_pack";
  };

  class 187th_BX_Commando_E5: JLTS_Droid_B1_E5
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="BX Commando (E5)";
    uniformClass="ls_cis_bxDroid_uniform";
    weapons[]={"187th_JLTS_E5","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };

  class 187th_BX_Commando_Blade: O_soldier_Melee_SW
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="BX Commando (Blade)";
    uniformClass="ls_cis_bxDroid_uniform";
    weapons[]={"WBK_Dutch_Vibro","Put","Throw"};
    respawnWeapons[]={"WBK_Dutch_Vibro","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"SWOP_termDet_G","SWOP_termDet_G"};
    respawnMagazines[]={"SWOP_termDet_G","SWOP_termDet_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };

  class 187th_BX_Commando_Captain: JLTS_Droid_B1_E5
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="BX Commando (Captain)";
    uniformClass="ls_cis_bxCaptainDroid_uniform";
    weapons[]={"187th_JLTS_E5","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };

  class 187th_IG_100_MagnaGuard_E5: SWOP_CIS_magnaguard
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="IG-100 MagnaGuard (E5)";
    uniformClass="SWOP_Magnadroid_F_Spec";
    weapons[]={"187th_JLTS_E5","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"SWOP_termDet_G","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_mag_flashbang"};
    respawnMagazines[]={"SWOP_termDet_G","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","swop_mag_flashbang"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    backpack="";
  };

  class 187th_IG_100_MagnaGuard_Blade: O_soldier_Melee_SW
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="IG-100 MagnaGuard (Blade)";
    uniformClass="SWOP_Magnadroid_F_Spec";
    weapons[]={"187th_DpSword","Put","Throw"};
    respawnWeapons[]={"187th_DpSword","Put","Throw"};
    items[]={"FirstAidKit"};
    respawnItems[]={"FirstAidKit"};
    magazines[]={"SWOP_termDet_G","swop_mag_flashbang"};
    respawnMagazines[]={"SWOP_termDet_G","swop_mag_flashbang"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio"};
    backpack="";
  };

  class 187th_IG_88_Assassin_Droid: RD501_opfor_unit_IG_88
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="IG-88 Assassin Droid";
    uniformClass="SWOP_ig88_unifrom";
    weapons[]={"ElectroBinocularsB_F","187th_SWOP_DTL20BlasterRifle_Scoped","187th_SWOP_rg4dPistol","Put","Throw"};
    respawnWeapons[]={"ElectroBinocularsB_F","187th_SWOP_DTL20BlasterRifle_Scoped","187th_SWOP_rg4dPistol","Put","Throw"};
    items[]={"FirstAidKit","ACE_tourniquet","ACE_quikclot","ACE_CableTie","ACE_fieldDressing","ACE_tourniquet","ACE_quikclot","ACE_CableTie","ACE_fieldDressing","JLTS_credits_5000","JLTS_flan_500","JLTS_intel_bountypuck","JLTS_intel_trackingFob","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
    respawnItems[]={"FirstAidKit","ACE_tourniquet","ACE_quikclot","ACE_CableTie","ACE_fieldDressing","ACE_tourniquet","ACE_quikclot","ACE_CableTie","ACE_fieldDressing","JLTS_credits_5000","JLTS_flan_500","JLTS_intel_bountypuck","JLTS_intel_trackingFob","ACE_CableTie","ACE_CableTie","ACE_CableTie"};
    magazines[]={"SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_rg4dPistol_Mag","SWOP_rg4dPistol_Mag","SWOP_rg4dPistol_Mag","SWOP_termDet_G","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_termDet_G","SWOP_rg4dPistol_Mag"};
    respawnMagazines[]={"SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_rg4dPistol_Mag","SWOP_rg4dPistol_Mag","SWOP_rg4dPistol_Mag","SWOP_termDet_G","SWOP_DTL20BlasterRifle_Mag","SWOP_DTL20BlasterRifle_Mag","SWOP_termDet_G","SWOP_rg4dPistol_Mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ElectroBinocularsB_F","H_HelmetO_ViperSP_ghex_F","SWOP_RemBron"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","ItemRadio","ItemGPS","ElectroBinocularsB_F","H_HelmetO_ViperSP_ghex_F","SWOP_RemBron"};
    backpack="";
  };
  class 187th_Sith_1_Blade: O_soldier_Melee_SW
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Sith";
    side=0;
    displayName="Sith (1 Blade)";
    uniformClass="SWOP_Maul_F_CombatUniform";
    weapons[]={"187th_WBK_lightsaber_sith","Put","Throw"};
    respawnWeapons[]={"187th_WBK_lightsaber_sith","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"lightsaber_style_1","Force_tir_Sith"};
    respawnMagazines[]={"lightsaber_style_1","Force_tir_Sith"};
    linkedItems[]={,"SWOP_ImpEngineerHelm","SWLB_CEE_Clone_Hood"};
    respawnLinkedItems[]={,"SWOP_ImpEngineerHelm","SWLB_CEE_Clone_Hood"};
    backpack="";
  };
  class 187th_Sith_2_Blade: O_soldier_Melee_SW
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Sith";
    side=0;
    displayName="Sith (2 Blades)";
    uniformClass="SWOP_Maul_F_CombatUniform";
    weapons[]={"WBK_lightsaber_sith_Second","187th_WBK_lightsaber_sith","Put","Throw"};
    respawnWeapons[]={"WBK_lightsaber_sith_Second","187th_WBK_lightsaber_sith","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"Force_tir_Sith"};
    respawnMagazines[]={"Force_tir_Sith"};
    linkedItems[]={"WBK_lightsaber_sith_Second","SWOP_ImpEngineerHelm","SWLB_CEE_Clone_Hood"};
    respawnLinkedItems[]={"WBK_lightsaber_sith_Second","SWOP_ImpEngineerHelm","SWLB_CEE_Clone_Hood"};
    backpack="";
  };
  class 187th_B1_Droid_Marksman: JLTS_Droid_B1_Sniper
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Infantry";
    side=0;
    displayName="B1 Droid (Marksman)";
    uniformClass="JLTS_DroidB1";
    weapons[]={"187th_JLTS_DW32S","187th_JLTS_RG4D","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_DW32S","187th_JLTS_RG4D","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag"};
    respawnMagazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag","JLTS_DW32S_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };
    class JLTS_212th_E5_shield;
  class 187th_BX_Commando_Citadel_Shield: O_Kalani_BX_Commando_Droid_Citadel_01
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="BX Commando Citadel (Shield)";
    uniformClass="ls_cis_bxSecurityDroid_uniform";
    weapons[]={"JLTS_212th_E5_shield","Put","Throw"};
    respawnWeapons[]={"JLTS_212th_E5_shield","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS","SWOP_NVChip2","SWOP_NVChip2"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","tf_anprc152","ItemGPS","SWOP_NVChip2","SWOP_NVChip2"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };
  class 187th_BX_Commando_Citadel_E5: JLTS_Droid_B1_E5
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="BX Commando Citadel (E5)";
    uniformClass="ls_cis_bxSecurityDroid_uniform";
    weapons[]={"187th_JLTS_E5","Put","Throw"};
    respawnWeapons[]={"187th_JLTS_E5","Put","Throw"};
    items[]={"ACE_EarPlugs"};
    respawnItems[]={"ACE_EarPlugs"};
    magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
    respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };
  class 187th_BX_Commando_Citadel_Blade: O_soldier_Melee_SW
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Special";
    side=0;
    displayName="BX Commando Citadel (Blade)";
    uniformClass="ls_cis_bxSecurityDroid_uniform";
    weapons[]={"187th_WBK_Dutch_Vibro","Put","Throw"};
    respawnWeapons[]={"187th_WBK_Dutch_Vibro","Put","Throw"};
    items[]={};
    respawnItems[]={};
    magazines[]={"SWOP_termDet_G","SWOP_termDet_G"};
    respawnMagazines[]={"SWOP_termDet_G","SWOP_termDet_G"};
    linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
    identityTypes[] = {"LanguageENG_F","Head_NATO"};
    backpack="";
  };
    
    //--------------------------------------------------------------------------------------------
    //--------------------------------- CIS vehicles--------------------------------------------------
    //--------------------------------------------------------------------------------------------

  class 187th_AAT_Tan: 3AS_AAT_tan
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="AAT (Tan)";
    hiddenSelectionsTextures[]={"3as\3as_aat\data\tan_aat_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_AAT: 3AS_AAT
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="AAT (Blue)";
    hiddenSelectionsTextures[]={"3as\3as_aat\data\cis_aat_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_AAT_Tropic: 3AS_AAT_Tropic
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="AAT (Tropic)";
    hiddenSelectionsTextures[]={"3as\3as_aat\data\tropic_aat_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_AAT_Urban: 3AS_AAT_urban
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="AAT (Urban)";
    hiddenSelectionsTextures[]={"3as\3as_aat\data\urban_aat_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_AAT_Snow: 3AS_AAT_snow
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="AAT (Snow)";
    hiddenSelectionsTextures[]={"3as\3as_aat\data\snow_aat_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Heavy: 3AS_GAT
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Heavy";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\hull_co.paa","3as\3as_gat\data\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Heavy_Olive: 3AS_GAT_Olive
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Heavy (Olive)";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\olive\hull_co.paa","3as\3as_gat\data\olive\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Heavy_Tan: 3AS_GAT_tan
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Heavy (Tan)";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\tan\hull_co.paa","3as\3as_gat\data\tan\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Heavy_Urban: 3AS_GAT_urban
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Heavy (Urban)";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\grey\hull_co.paa","3as\3as_gat\data\grey\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Light: 3AS_GAT_Light
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Light";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\hull_co.paa","3as\3as_gat\data\light_tank\cis\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Light_Tan: 3AS_GAT_Light_tan
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Light (Tan)";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\tan\hull_co.paa","3as\3as_gat\data\light_tank\tan\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Light_Olive: 3AS_GAT_Light_Olive
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Light (Olive)";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\olive\hull_co.paa","3as\3as_gat\data\light_tank\olive\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_GAT_Light_Urban: 3AS_GAT_Light_urban
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="GAT Light (Urban)";
    hiddenSelectionsTextures[]={"3as\3as_gat\data\grey\hull_co.paa","3as\3as_gat\data\light_tank\gray\weapons_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Hellfire_Droid_AT: 3AS_Hailfire_AT // Broken, must research new asset
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="Hellfire Droid (AT)";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_MTT: 3as_MTT
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Transport";
    side=0;
    displayName="MTT";
    hiddenSelectionsTextures[]={"3as\3as_mtt\data\main mmt_blue_co.paa","3as\3as_mtt\data\droid rack_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Dwarf_Spider_Droid: RD501_dwarf_spider_droid_MkII
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Dwarf Spider Droid mk2";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_E_Web: RD501_e_web_cis
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="E Web";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_OG_10_HSD_TALL_SPIDER: RD501_homing_spider_droid_MKII
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="OG 10 HSD";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Hellfire_Droid_SAM: 3AS_Hailfire_SAM // Broken, must research new asset
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="Hellfire Droid (SAM)";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Hellfire_Droid_Rocket_Arty: 3AS_Hailfire_Rocket // Broken, must research new asset
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="Hellfire Droid (Rocket Artillery)";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Assault_Craft: 3as_SAC_Trade
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Transport";
    side=0;
    displayName="Assault Craft";
    hiddenSelectionsTextures[]={"3as\3as_assault\data\blue_co.paa","3as\3as_assault\data\rack_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_CIS_Mortar: 3as_CIS_Mortar
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="CIS Mortar";
    hiddenSelectionsTextures[]={"3as\3as_static\mortar\data\cis_base.001_co.paa","3as\3as_static\mortar\data\cis_tube.001_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Partical_Cannon: 3as_ParticleCannon
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Partical Cannon";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Proton_Cannon: 3AS_FieldCannon
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Proton Cannon";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Vulture_Droid: 3as_Vulture_dynamicLoadout
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Plane";
    side=0;
    displayName="Vulture Droid";
    hiddenSelectionsTextures[]={"3as\3as_vulture\data\vulturedroid_color.paa"};
    crew="187th_B1_Droid_Pilot";
    typicalCargo[]={"187th_B1_Droid_Pilot"};
  };
  class 187th_HMP_Gunship: ls_cis_hmp
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Helicopter";
    side=0;
    displayName="HMP Gunship";
    hiddenSelectionsTextures[]={"swlb_a_vehicle\hmp\data\body_co.paa","swlb_a_vehicle\hmp\data\engine_co.paa","swlb_a_vehicle\hmp\data\eyes_co.paa","swlb_a_vehicle\hmp\data\head_co.paa","swlb_a_vehicle\hmp\data\missiles_co.paa","","swlb_a_vehicle\hmp\data\wings_co.paa"};
    crew="187th_B1_Droid_Pilot";
    typicalCargo[]={"187th_B1_Droid_Pilot"};
  };
  class 187th_HMP_Transport: ls_cis_hmp_transport
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Helicopter";
    side=0;
    displayName="HMP Transport";
    hiddenSelectionsTextures[]={"swlb_a_vehicle\hmp\data\body_co.paa","swlb_a_vehicle\hmp\data\engine_co.paa","swlb_a_vehicle\hmp\data\eyes_co.paa","swlb_a_vehicle\hmp\data\head_co.paa","swlb_a_vehicle\hmp\data\missiles_co.paa","swlb_a_vehicle\hmp\data\seats_co.paa","swlb_a_vehicle\hmp\data\wings_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_BAW_Heavy_Artillery_Gun: ls_ground_bawhag
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Artillery";
    side=0;
    displayName="BAW Heavy Artillery";
    hiddenSelectionsTextures[]={"ls_vehicles_ground\bawhag\data\body_co.paa","ls_vehicles_ground\bawhag\data\eyes_co.paa","ls_vehicles_ground\bawhag\data\gun_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_CIS_Heavy_Repeater: 3AS_HeavyRepeater_Unarmoured
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Heavy Repeater";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_CIS_Heavy_Repeater_Shielded: 3AS_HeavyRepeater_Armoured
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Heavy Repeater (Armored)";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_CIS_Stationary_Turret: 3AS_StationaryTurret
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Stationary Turret";
    hiddenSelectionsTextures[]={};
    crew="187th_B1_Droid";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_Speeder: SW_SpeederBikeCIV
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Car";
    side=0;
    displayName="Speeder";
    hiddenSelectionsTextures[]={"sw_speederbike\speederbikeciv_co.paa"};
    crew="187th_B1_Droid";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_Droideka: SWOP_Droideka
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Droideka";
    hiddenSelectionsTextures[]={"sw_clonewarsweapons\droideka\droidikaok_co.paa"};
  };
  class 187th_Droideka_Camo: SWOP_DroidekaCamo
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Droideka (Camo)";
    hiddenSelectionsTextures[]={"sw_clonewarsweapons\droideka\droidikacamook_co.paa"};
  };
  class 187th_Droideka_Support: SWOP_DroidekaSupport
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Droideka (Support)";
    hiddenSelectionsTextures[]={"sw_clonewarsweapons\droideka\droidikasupportok_co.paa"};
  };
  class 187th_BEARD_AA: RD501_Praetorian_Variant_normal
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_AntiAir";
    side=0;
    displayName="BEARD AA";
    hiddenSelectionsTextures[]={"awing\t_awing_03_cw.paa","awing\t_awing_03_cw.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Tarantula_AA: RD501_Tarantula_CIS
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_AntiAir";
    side=0;
    displayName="Tarantula AA";
    hiddenSelectionsTextures[]={"rd501_vehicles\textures\tempest\cis_tempest_ext.paa","rd501_vehicles\textures\tempest\cis_tempest_ext.paa","rd501_vehicles\textures\tempest\cis_tempest_ext.paa","rd501_vehicles\textures\tempest\cis_tempest_ext.paa","rd501_vehicles\textures\tempest\cis_tempest_ext.paa","rd501_vehicles\textures\tempest\cis_tempest_ext.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_HIT: RD501_marid_MkII_CIS
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Transport";
    side=0;
    displayName="HIT";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Speedboat: RD501_speedboat_cis
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Boat";
    side=0;
    displayName="Speedboat";
    hiddenSelectionsTextures[]={"a3\boat_f\boat_armed_01\data\boat_armed_01_ext_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_int_co.paa","a3\boat_f\boat_armed_01\data\boat_armed_01_crows_blufor_co.paa"};
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_LIT: RD501_light_infantry_transport_CIS_MkII
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Transport";
    side=0;
    displayName="LIT";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };

    //--------------------------------------------------------------------------------------------
    //---------------------------------CIS Backpacks--------------------------------------------------
    //--------------------------------------------------------------------------------------------

  class 187th_B1_Droid_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_AT_pack: JLTS_B1_backpack_at_predef
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_JLTS_RPS6_mag {count=2;magazine="JLTS_RPS6_mag";};
    };
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_Crew_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines
    {
     class _xx_swop_termDetDT_G {count=1;magazine="swop_termDetDT_G";};
    };
    class TransportItems
    {
     class _xx_ToolKit {count=1;name="ToolKit";};
    };
    class TransportWeapons{};
  };
  class 187th_B1_Droid_EWeb_Carrier_pack: RD501_opfor_eweb_bag_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_Sniper_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_Commander_pack: JLTS_B1_antenna
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_Marine_pack: JLTS_B1_backpack_marine_predef
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_Jammer_pack: SWOP_B_CargoBackpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_BX_Commando_E5_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_BX_Commando_Blade_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_BX_Commando_Captain_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_B1_Droid_Marksman_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_BX_Commando_Citadel_E5_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  class 187th_BX_Commando_Citadel_Blade_pack: JLTS_B1_backpack
  {
    scope=1;
    class TransportMagazines{};
    class TransportItems{};
    class TransportWeapons{};
  };
  

// adding other files
    #include "CISAssets.cpp" 
    
};// END