// Uniforms
class SWOP_B2_superdroid;
class 187th_CIS_Base_Uniform: SWOP_B2_superdroid
	{
        author 			= "PraetorPanda";
		dlc				= "187th Aux Mod";
		scopeCurator	= 2;
        uniformClass = "187th_b2_Droid";
        faction = "187th_CIS";
        editorCategory = "187th_CIS_Assets";
		editorSubcategory = "187th_Infantry";
		displayname = "B2 (test)";
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
				armor = 8;
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
				armor = 8;
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
				armor = 8;
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
				armor = 8;
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
				armor = 6;
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
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_r";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitLeftHand: HitArms
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "hand_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_hands";
			};
			class HitHands: HitArms
			{
				armor = 6;
				material = -1;
				name = "hands";
				passThrough = 0.13;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_hands";
				minimalHit = 0.01;
				depends = "HitArms";
			};
			class HitLegs: HitHands
			{
				armor = 6;
				material = -1;
				name = "legs";
				passThrough = 0.13;
				radius = 0.1;
				explosionShielding = 0.3;
				visual = "injury_legs";
				minimalHit = 0.01;
				depends = "0";
			};
			class HitLeftLeg: HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
				material = -1;
				minimalHit = 0.01;
				name = "leg_l";
				passThrough = 0.1;
				radius = 0.1;
				visual = "injury_legs";
			};
			class HitRightLeg: HitLegs
			{
				armor = 8;
				explosionShielding = 0.25;
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
		armor = 60;
		armorStructural = 1;
		explosionShielding = 0.5;
		class EventHandlers;
		respawnWeapons[] = {"SWOP_B2gun","Throw","Put"};
		magazines[] = {"SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag","SWOP_b2gun_Mag"};
		weapons[] = {"SWOP_B2gun","Throw","Put"};
		linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","ItemRadio","NVGoggles"};
	};