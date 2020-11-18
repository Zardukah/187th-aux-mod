class CfgVehicles
{
	class OPTRE_ANPRC_521_Black;
    class O_Soldier_F;
	class B_Soldier_f;
    class UniformItem;
    class Item_Base_F;
	
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////Start Backpacks//////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
	
	class 187_Zeus_LR : OPTRE_ANPRC_521_Black // change to clone LR!!!
    {
        displayName = "[187th] Zeus LR";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 100000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 180;
    };
	
    class Praetor_LR_backpack_big: OPTRE_ANPRC_521_Black // change to Clone LR!!!
    {
        displayName = "[187th] RTO Pack";
        tf_encryptionCode = "tf_west_radio_code";
        tf_dialog = "anarc210_radio_dialog";
        tf_subtype = "digital_lr";
        tf_range = 30000;
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_hasLRradio = 1;
        maximumLoad = 220;
    };
    
	
	//End Backpacks
//////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////Start Uniforms//////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////
	class Land;
	class U_I_CombatUniform;
	class Man: U_I_CombatUniform
	{
		class EventHandlers;
	};
	class CAManBase: Man
	{
		class HitPoints;
	};
	class Soldier187: CAManBase
	{
		class HitPoints: HitPoints
		{
			class HitFace;
			class HitNeck;
			class HitHead;
			class HitPelvis;
			class HitAbdomen;
			class HitDiaphragm;
			class HitChest;
			class HitBody;
			class HitArms;
			class HitHands;
			class HitLegs;
		};
	};
	
	
	class 187_Base_Uniform: Soldier187
	{// Base Uniform stats for more options with other uniforms...
		class HitPoints: HitPoints
		{
			class HitFace
			{
				armor = 1;
				material = -1;
				name = "face_hub";
				passThrough = 0.1;
				radius = 0.08;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitNeck: HitFace
			{
				armor = 1;
				material = -1;
				name = "neck";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.1;
				minimalHit = 0.01;
			};
			class HitHead: HitNeck
			{
				armor = 1;
				material = -1;
				name = "head";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.1;
				minimalHit = 0.01;
				depends = "HitFace max HitNeck";
			};
			class HitPelvis
			{
				armor = 1;
				material = -1;
				name = "pelvis";
				passThrough = 0.1;
				radius = 0.2;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitAbdomen: HitPelvis
			{
				armor = 1;
				material = -1;
				name = "spine1";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 0.25;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitDiaphragm: HitAbdomen
			{
				armor = 1;
				material = -1;
				name = "spine2";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitChest: HitDiaphragm
			{
				armor = 1;
				material = -1;
				name = "spine3";
				passThrough = 0.1;
				radius = 0.15;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.01;
			};
			class HitBody: HitChest
			{
				armor = 1000;
				material = -1;
				name = "body";
				passThrough = 0.1;
				radius = 0.16;
				explosionShielding = 2;
				visual = "injury_body";
				minimalHit = 0.01;
				depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
			};
			class HitArms
			{
				armor = 1;
				material = -1;
				name = "arms";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitHands: HitArms
			{
				armor = 1;
				material = -1;
				name = "hands";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs
			{
				armor = 1;
				material = -1;
				name = "legs";
				passThrough = 0.1;
				radius = 0.12;
				explosionShielding = 0.25;
				visual = "injury_legs";
				minimalHit = 0.01;
			};
			class HitLeftArm
			{
				armor = 1;
				material = -1;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightArm: HitLeftArm
			{
				name = "hand_r";
			};
			class HitLeftLeg
			{
				armor = 1;
				material = -1;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				explosionShielding = 0.25;
				visual = "injury_hands";
				minimalHit = 0.01;
			};
			class HitRightLeg: HitLeftLeg
			{
				name = "leg_r";
			};
		};
	};
	
	class 187th_Clone_Armor: 187_Base_Uniform
	{// Main uniform stats for normal uniforms... Current issue... No Entry for soundName
		dlc 			= "187th Aux Mod";
		scope 			= 1;
		scopeCurator 	= 2;
		author 			= "PraetorPanda";
		uniformClass 	= "187_Clone_Armor";
		uniformType		= "Neopren";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 			= {"camo","camo2"};
		hiddenSelectionsTextures[] = {"\MRC\JLTS\characters\CloneArmor\data\Clone_armor1_co.paa","\MRC\JLTS\characters\CloneArmor\data\Clone_armor2_co.paa"};
		class Wounds
		{
			tex[] = {};
			mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
		};
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor = 4;
			};
			class HitPelvis: HitPelvis
			{
				armor = 4;
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 4;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 4;
			};
			class HitChest: HitChest
			{
				armor = 4;
			};
			class HitArms: HitArms
			{
				armor = 4;
			};
			class HitHands: HitHands
			{
				armor = 4;
			};
			class HitLegs: HitLegs
			{
				armor = 4;
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 4;
			};
			class HitRightArm: HitRightArm
			{
				armor = 4;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor = 4;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 4;
			};
		};
		editorSubcategory = "187_clones_white";
	};
	//End Uniforms
};