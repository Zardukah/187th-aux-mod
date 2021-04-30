// Uniforms
class O_DBA_CIS_B2_Droid_F;
class O_DBA_CIS_Dwarf_Spider_Droid_1_F;
class 187th_CIS_B2_F: O_DBA_CIS_B2_Droid_F
{
	author 			= "PraetorPanda";
	dlc				= "187th Aux Mod";
	scopeCurator	= 2;
	uniformClass = "187th_b2_Droid";
	faction = "187th_CIS";
	editorCategory = "187th_Test_Assets";
	editorSubcategory = "187th_Infantry";
	displayname = "B2";
	scope = 2;
	class HitPoints
	{
		class HitFace
		{
			armor = 6;
			material = -1;
			name = "face_hub";
			passThrough = 0.013;
			radius = 0.08;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitNeck: HitFace
		{
			armor = 6;
			material = -1;
			name = "neck";
			passThrough = 0.013;
			radius = 0.1;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitHead: HitNeck
		{
			armor = 6;
			material = -1;
			name = "head";
			passThrough = 0.13;
			radius = 0.2;
			explosionShielding = 1;
			minimalHit = 0.01;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor = 10;
			material = -1;
			name = "pelvis";
			passThrough = 0.44;
			radius = 0.24;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitAbdomen: HitPelvis
		{
			armor = 10;
			material = -1;
			name = "spine1";
			passThrough = 0.44;
			radius = 0.16;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor = 10;
			material = -1;
			name = "spine2";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitChest: HitDiaphragm
		{
			armor = 10;
			material = -1;
			name = "spine3";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitBody: HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor = 10;
			material = -1;
			name = "arms";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.4;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitRightHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitLeftHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitHands: HitArms
		{
			armor = 10;
			material = -1;
			name = "hands";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "HitArms";
		};
		class HitLegs: HitHands
		{
			armor = 10;
			material = -1;
			name = "legs";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_legs";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitLeftLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_legs";
		};
		class HitRightLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_leg";
		};
		class Incapacitated: HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	class EventHandlers: DefaultEventhandlers{
		class stop_running_fool {
			init = "[_this select 0] call compile preprocessFileLineNumbers '187th-aux\Functions\moveScripts\force_b2_walk.sqf'";
		};
	};
	armor = 250;
	armorStructural = 1;
	explosionShielding = 0.7;
	weapons[] = {"SWOP_B2gun","Throw","Put"};
	respawnWeapons[] = {"SWOP_B2gun","Throw","Put"};
	magazines[] = {"SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2rocket_Mag"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
};

//BX Droid E5 - 212th_BX_DROID_F
class lsd_cis_bxDroid_base;
class 187th_BX_Droid_E5_F: lsd_cis_bxDroid_base
{
	author 			= "PraetorPanda";
	dlc				= "187th Aux Mod";
	scopeCurator	= 2;
	uniformClass = "187th_BX_Droid_E5";
	faction = "187th_CIS";
	editorCategory = "187th_Test_Assets";
	editorSubcategory = "187th_Special";
	displayname = "BX Droid E5";
	scope = 2;
	class HitPoints
	{
		class HitFace
		{
			armor = 6;
			material = -1;
			name = "face_hub";
			passThrough = 0.013;
			radius = 0.08;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitNeck: HitFace
		{
			armor = 6;
			material = -1;
			name = "neck";
			passThrough = 0.013;
			radius = 0.1;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitHead: HitNeck
		{
			armor = 6;
			material = -1;
			name = "head";
			passThrough = 0.13;
			radius = 0.2;
			explosionShielding = 1;
			minimalHit = 0.01;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor = 10;
			material = -1;
			name = "pelvis";
			passThrough = 0.44;
			radius = 0.24;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitAbdomen: HitPelvis
		{
			armor = 10;
			material = -1;
			name = "spine1";
			passThrough = 0.44;
			radius = 0.16;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor = 10;
			material = -1;
			name = "spine2";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitChest: HitDiaphragm
		{
			armor = 10;
			material = -1;
			name = "spine3";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitBody: HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor = 10;
			material = -1;
			name = "arms";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.4;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitRightHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitLeftHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitHands: HitArms
		{
			armor = 10;
			material = -1;
			name = "hands";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "HitArms";
		};
		class HitLegs: HitHands
		{
			armor = 10;
			material = -1;
			name = "legs";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_legs";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitLeftLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_legs";
		};
		class HitRightLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_leg";
		};
		class Incapacitated: HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	armor = 100;
	armorStructural = 1;
	explosionShielding = 0.5;
	weapons[] = {"JLTS_E5","Throw","Put"};
	respawnWeapons[] = {"JLTS_E5","Throw","Put"};
	magazines[] = {"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1","JLTS_droid_comlink"};
};

//BX Droid Sword
class 187th_BX_Droid_E5_Shield_F: 187th_BX_Droid_E5_F
{
	author 			= "PraetorPanda";
	dlc				= "187th Aux Mod";
	scopeCurator	= 2;
	uniformClass = "187th_BX_Droid_E5";
	faction = "187th_CIS";
	editorCategory = "187th_Test_Assets";
	editorSubcategory = "187th_Special";
	displayname = "BX Droid (Sword)";
	scope = 2;
	model = "\ls_armor_redfor\uniform\cis\bx\lsd_cis_bx_uniform.p3d";
	hiddenSelections[] = {"camo1"};
	hiddenSelectionsTextures[] = {"ls_armor_redfor\uniform\cis\bx\data\body_co.paa"};
	armor = 100;
	armorStructural = 1;
	explosionShielding = 0.5;
	weapons[] = {"WBK_Dutch_Vibro","Throw","Put"};
	respawnWeapons[] = {"WBK_Dutch_Vibro","Throw","Put"};
	magazines[] = {};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1","JLTS_droid_comlink"};
	class EventHandlers: DefaultEventhandlers{
		class melee_init {
			init = "_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\Ai_SW_Melee.sqf"";};";
		};
	};
};

//BX Droid Captain - 212th_BX_DROID_CAPTAIN_F
class lsd_cis_bxCaptain_specops;
class 187th_BX_Droid_Captain_E5_F: lsd_cis_bxCaptain_specops
{
	author 			= "PraetorPanda";
	dlc				= "187th Aux Mod";
	scopeCurator	= 2;
	uniformClass = "187th_BX_Droid_Captian_E5";
	faction = "187th_CIS";
	editorCategory = "187th_Test_Assets";
	editorSubcategory = "187th_Special";
	displayname = "BX Droid Captain E5";
	scope = 2;
	class HitPoints
	{
		class HitFace
		{
			armor = 6;
			material = -1;
			name = "face_hub";
			passThrough = 0.013;
			radius = 0.08;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitNeck: HitFace
		{
			armor = 6;
			material = -1;
			name = "neck";
			passThrough = 0.013;
			radius = 0.1;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitHead: HitNeck
		{
			armor = 6;
			material = -1;
			name = "head";
			passThrough = 0.13;
			radius = 0.2;
			explosionShielding = 1;
			minimalHit = 0.01;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor = 10;
			material = -1;
			name = "pelvis";
			passThrough = 0.44;
			radius = 0.24;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitAbdomen: HitPelvis
		{
			armor = 10;
			material = -1;
			name = "spine1";
			passThrough = 0.44;
			radius = 0.16;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor = 10;
			material = -1;
			name = "spine2";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitChest: HitDiaphragm
		{
			armor = 10;
			material = -1;
			name = "spine3";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitBody: HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor = 10;
			material = -1;
			name = "arms";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.4;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitRightHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitLeftHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitHands: HitArms
		{
			armor = 10;
			material = -1;
			name = "hands";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "HitArms";
		};
		class HitLegs: HitHands
		{
			armor = 10;
			material = -1;
			name = "legs";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_legs";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitLeftLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_legs";
		};
		class HitRightLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_leg";
		};
		class Incapacitated: HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	armor = 100;
	armorStructural = 1;
	explosionShielding = 0.5;
	class EventHandlers;
	weapons[] = {"JLTS_E5","Throw","Put"};
	respawnWeapons[] = {"JLTS_E5","Throw","Put"};
	magazines[] = {"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1","JLTS_droid_comlink"};
};
//BX Droid Citidel - 212th_BX_DROID_CITADEL_F
class lsd_cis_bxSecurity_specops;
class 187th_BX_Droid_Citadel_E5_F: lsd_cis_bxSecurity_specops
{
	author 			= "Cootsies";
	dlc				= "187th Aux Mod";
	scopeCurator	= 2;
	uniformClass = "187th_BX_Droid_Citadel_E5";
	faction = "187th_CIS";
	editorCategory = "187th_Test_Assets";
	editorSubcategory = "187th_Special";
	displayname = "BX Droid Citadel E5 (Shield)";
	scope = 2;
	class HitPoints
	{
		class HitFace
		{
			armor = 6;
			material = -1;
			name = "face_hub";
			passThrough = 0.013;
			radius = 0.08;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitNeck: HitFace
		{
			armor = 6;
			material = -1;
			name = "neck";
			passThrough = 0.013;
			radius = 0.1;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitHead: HitNeck
		{
			armor = 6;
			material = -1;
			name = "head";
			passThrough = 0.13;
			radius = 0.2;
			explosionShielding = 1;
			minimalHit = 0.01;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor = 10;
			material = -1;
			name = "pelvis";
			passThrough = 0.44;
			radius = 0.24;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitAbdomen: HitPelvis
		{
			armor = 10;
			material = -1;
			name = "spine1";
			passThrough = 0.44;
			radius = 0.16;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor = 10;
			material = -1;
			name = "spine2";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitChest: HitDiaphragm
		{
			armor = 10;
			material = -1;
			name = "spine3";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitBody: HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor = 10;
			material = -1;
			name = "arms";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.4;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitRightHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitLeftHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitHands: HitArms
		{
			armor = 10;
			material = -1;
			name = "hands";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "HitArms";
		};
		class HitLegs: HitHands
		{
			armor = 10;
			material = -1;
			name = "legs";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_legs";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitLeftLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_legs";
		};
		class HitRightLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_leg";
		};
		class Incapacitated: HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	armor = 100;
	armorStructural = 1;
	explosionShielding = 0.5;
	weapons[] = {"JLTS_212th_E5_shield","Throw","Put"};
	respawnWeapons[] = {"JLTS_212th_E5_shield","Throw","Put"};
	magazines[] = {"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1","JLTS_droid_comlink"};
};
//BX Droid Diplomat - 212th_BX_DROID_DIPLOMAT_F
class lsd_cis_bxDiplomat_specops;
class 187th_BX_Droid_Diplomat_E5_F: lsd_cis_bxDiplomat_specops
{
	author 			= "Cootsies";
	dlc				= "187th Aux Mod";
	scopeCurator	= 2;
	uniformClass = "187th_BX_Droid_Diplomat_E5";
	faction = "187th_CIS";
	editorCategory = "187th_Test_Assets";
	editorSubcategory = "187th_Special";
	displayname = "BX Droid Diplomat E5";
	scope = 2;
	class HitPoints
	{
		class HitFace
		{
			armor = 6;
			material = -1;
			name = "face_hub";
			passThrough = 0.013;
			radius = 0.08;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitNeck: HitFace
		{
			armor = 6;
			material = -1;
			name = "neck";
			passThrough = 0.013;
			radius = 0.1;
			explosionShielding = 1;
			minimalHit = 0.01;
		};
		class HitHead: HitNeck
		{
			armor = 6;
			material = -1;
			name = "head";
			passThrough = 0.13;
			radius = 0.2;
			explosionShielding = 1;
			minimalHit = 0.01;
			depends = "HitFace max HitNeck";
		};
		class HitPelvis: HitHead
		{
			armor = 10;
			material = -1;
			name = "pelvis";
			passThrough = 0.44;
			radius = 0.24;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitAbdomen: HitPelvis
		{
			armor = 10;
			material = -1;
			name = "spine1";
			passThrough = 0.44;
			radius = 0.16;
			explosionShielding = 1;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitDiaphragm: HitAbdomen
		{
			armor = 10;
			material = -1;
			name = "spine2";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitChest: HitDiaphragm
		{
			armor = 10;
			material = -1;
			name = "spine3";
			passThrough = 0.44;
			radius = 0.18;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
		};
		class HitBody: HitChest
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1.5;
			visual = "injury_body";
			minimalHit = 0.01;
			depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms: HitBody
		{
			armor = 10;
			material = -1;
			name = "arms";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.4;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitRightHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitLeftHand: HitArms
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "hand_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_hands";
		};
		class HitHands: HitArms
		{
			armor = 10;
			material = -1;
			name = "hands";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_hands";
			minimalHit = 0.01;
			depends = "HitArms";
		};
		class HitLegs: HitHands
		{
			armor = 10;
			material = -1;
			name = "legs";
			passThrough = 0.13;
			radius = 0.1;
			explosionShielding = 0.30;
			visual = "injury_legs";
			minimalHit = 0.01;
			depends = "0";
		};
		class HitLeftLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_l";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_legs";
		};
		class HitRightLeg: HitLegs
		{
			armor = 10;
			explosionShielding = 0.30;
			material = -1;
			minimalHit = 0.01;
			name = "leg_r";
			passThrough = 0.1;
			radius = 0.1;
			visual = "injury_leg";
		};
		class Incapacitated: HitLegs
		{
			armor = 1000;
			material = -1;
			name = "body";
			passThrough = 1;
			radius = 0;
			explosionShielding = 1;
			visual = "";
			minimalHit = 0;
			depends = "(((Total - 0.25) max 0) + ((HitHead - 0.25) max 0) + ((HitBody - 0.25) max 0)) * 2";
		};
	};
	armor = 100;
	armorStructural = 1;
	explosionShielding = 0.5;
	weapons[] = {"JLTS_E5","Throw","Put"};
	respawnWeapons[] = {"JLTS_E5","Throw","Put"};
	magazines[] = {"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","SWOP_termDet_G","SWOP_termDet_G"};
	linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","JLTS_NVG_droid_chip_1","JLTS_droid_comlink"};
};
class 187th_CIS_Dwarf_Spider_Droid_1_F:O_DBA_CIS_Dwarf_Spider_Droid_1_F
{
	author 			= "WiltonS048";
	dlc				= "187th Aux Mod";
	faction="187th_CIS";
	editorCategory = "187th_CIS_Assets";
	editorSubcategory = "187th_Turret";
	side=0;
	displayName="Dwarf Spider Droid mk1";
	crew="O_UAV_AI_F";
	typicalCargo[]={"O_UAV_AI_F"};
};
