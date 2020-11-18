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
	class B_soldier_base_F;
	class Man: Land
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
	class 187th_Clone_Recruit;
	class 187th_CloneArmor_Recruit: 187_Base_Uniform
	{// Main uniform stats for normal uniforms... Current issue... DOESN'T SHOW UP
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 2;
		scopeCurator	= 2;
		uniformClass 	= "187th_Clone_Recruit";
		model 			= "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		weapons[] 		= {"Throw","Put"};
		respawnWeapons[] = {"Throw","Put"};
		Items[] 		= {};
		RespawnItems[] 	= {};
		magazines[] 	= {};
		respawnMagazines[] = {};
		hiddenSelections[] 		= {"camo1","camo2"};
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
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor = 7;
			};
			class HitPelvis: HitPelvis
			{
				armor = 7;
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 7;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 7;
			};
			class HitChest: HitChest
			{
				armor = 7;
			};
			class HitArms: HitArms
			{
				armor = 7;
			};
			class HitHands: HitHands
			{
				armor = 7;
			};
			class HitLegs: HitLegs
			{
				armor = 7;
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 7;
			};
			class HitRightArm: HitRightArm
			{
				armor = 7;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor = 7;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 7;
			};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Trooper: 187_Base_Uniform
	{// Main uniform stats for normal uniforms... Current issue... No Entry for soundName
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 2;
		scopeCurator	= 2;
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
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor = 6;
			};
			class HitPelvis: HitPelvis
			{
				armor = 6;
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 6;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 6;
			};
			class HitChest: HitChest
			{
				armor = 6;
			};
			class HitArms: HitArms
			{
				armor = 6;
			};
			class HitHands: HitHands
			{
				armor = 6;
			};
			class HitLegs: HitLegs
			{
				armor = 6;
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 6;
			};
			class HitRightArm: HitRightArm
			{
				armor = 6;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor = 6;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 6;
			};
		};
		editorSubcategory = "187_clones_white";
	};
	class 187th_CloneArmor_Medic: 187_Base_Uniform
	{// Main uniform stats for normal uniforms... Current issue... No Entry for soundName
		author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scope 			= 2;
		scopeCurator	= 2;
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
		class HitPoints: HitPoints
		{
			class HitNeck: HitNeck
			{
				armor = 5;
			};
			class HitPelvis: HitPelvis
			{
				armor = 5;
			};
			class HitAbdomen: HitAbdomen
			{
				armor = 5;
			};
			class HitDiaphragm: HitDiaphragm
			{
				armor = 5;
			};
			class HitChest: HitChest
			{
				armor = 5;
			};
			class HitArms: HitArms
			{
				armor = 5;
			};
			class HitHands: HitHands
			{
				armor = 5;
			};
			class HitLegs: HitLegs
			{
				armor = 5;
			};
			class HitLeftArm: HitLeftArm
			{
				armor = 5;
			};
			class HitRightArm: HitRightArm
			{
				armor = 5;
			};
			class HitLeftLeg: HitLeftLeg
			{
				armor = 5;
			};
			class HitRightLeg: HitRightLeg
			{
				armor = 5;
			};
		};
		editorSubcategory = "187_clones_white";
	};
	
	//End Uniforms
};