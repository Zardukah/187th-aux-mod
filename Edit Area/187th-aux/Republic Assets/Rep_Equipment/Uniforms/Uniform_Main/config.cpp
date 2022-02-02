class CfgPatches
{
	class 187th_Main_Uniform
	{
		name = "187th Main Uniform";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		// List of objects (CfgVehicles classes) contained in the addon. Important also for Zeus content (units and groups) unlocking.
		units[] = {"187_Base_Uniform","187th_CloneArmor_Trooper"};
		// List of weapons (CfgWeapons classes) contained in the addon.
		weapons[] = {"187th_Clone_Trooper"};
	};
};

class CfgVehicles
{
	class JLTS_Clone_P2_DC15A_187;
	class 187_Base_Uniform: JLTS_Clone_P2_DC15A_187
	{ // Base Uniform stats for more options with other uniforms...
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
	class 187th_CloneArmor_Trooper: 187_Base_Uniform
	{
	    author = "PraetorPanda";
	    dlc = "187th Aux Mod";
	    scope = 1;
	    scopeCurator = 0;
	    uniformClass = "187th_Clone_Trooper";
	    model = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
	    weapons[] = {
	        "Throw",
	        "Put"
	    };
	    respawnWeapons[] = {
	        "Throw",
	        "Put"
	    };
	    Items[] = {};
	    RespawnItems[] = {};
	    magazines[] = {};
	    respawnMagazines[] = {};
	    hiddenSelections[] = {
	        "camo1",
	        "camo2"
	    };
	    hiddenSelectionsTextures[] = {
	        "\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor1_co.paa",
	        "\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
	    };
	    class Wounds {
	        tex[] = {};
	        mat[] = {
	            "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat",
	            "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
	            "MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat",
	            "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat",
	            "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
	            "MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat",
	            "A3\Characters_F\Common\Data\basicbody.rvmat",
	            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
	            "A3\Characters_F\Common\Data\basicbody_injury.rvmat",
	            "a3\characters_f\heads\data\hl_white.rvmat",
	            "a3\characters_f\heads\data\hl_white_injury.rvmat",
	            "a3\characters_f\heads\data\hl_white_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat",
	            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_old.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat",
	            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
	            "A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat",
	            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat",
	            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
	            "A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat",
	            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat",
	            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat",
	            "A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"
	        };
	    };
	    editorSubcategory = "187_clones_white";
	};
};

class CfgWeapons
{
	class UniformItem;
	class JLTS_CloneArmor;
	class 187th_Clone_Trooper : JLTS_CloneArmor
	{
		author  = "PraetorPanda";
		dlc             = "187th Aux Mod";
		scope   = 2;
		scopeCurator = 2;
		displayName = "[187th] Clone Armor (Trooper)";
		picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		class ItemInfo : UniformItem
		{
			uniformModel = "-";
			uniformClass = "187th_CloneArmor_Trooper";
			containerClass  = "Supply150";
			mass = 40;
		};
	};
};