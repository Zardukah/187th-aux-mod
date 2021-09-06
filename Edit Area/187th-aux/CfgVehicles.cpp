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

class Extended_Deleted_EventHandlers
{
	class RD501_droideka_base
	{
		class remove_atached_stuff
		{
			deleted = "[_this select 0] spawn RD501_fnc_remove_attached_objects";
		};

	};
  class 187th_CIS_B2_F
  {
    class ForceWalk
    {
     init = "[_this select 0] call OES_fnc_force_b2_walk";
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
class JLTS_Clone_P2_DC15A_187;

class 187_Base_Uniform: JLTS_Clone_P2_DC15A_187
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
       "\187th-aux\Data\Uniforms\Clone_187thAirborne_armor1_co.paa",
       "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
     };
     class Wounds
     {
       tex[] = {};
       mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
     };
     editorSubcategory = "187_clones_white";
   };

   class 187th_CloneArmor_Airborne_EOD: 187_Base_Uniform
     {
      author      = "PraetorPanda";
      dlc       = "187th Aux Mod";
      scope       = 1;
      scopeCurator  = 0;
      uniformClass  = "187th_Clone_Airborne_EOD";
      model       = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
      weapons[]     = {"Throw","Put"};
      respawnWeapons[] = {"Throw","Put"};
      Items[]     = {};
      RespawnItems[]  = {};
      magazines[]   = {};
      respawnMagazines[] = {};
      hiddenSelections[]    = {"camo1","camo2"};
      hiddenSelectionsTextures[]= {
       "\187th-aux\Data\Uniforms\Clone_187thAirborne_EOD_co.paa",
       "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
     };
     class Wounds
     {
       tex[] = {};
       mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
     };
     editorSubcategory = "187_clones_white";
   };

   class 187th_CloneArmor_Airborne_Medic: 187_Base_Uniform
     {
      author      = "PraetorPanda";
      dlc       = "187th Aux Mod";
      scope       = 1;
      scopeCurator  = 0;
      uniformClass  = "187th_Clone_Airborne_Medic";
      model       = "\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
      weapons[]     = {"Throw","Put"};
      respawnWeapons[] = {"Throw","Put"};
      Items[]     = {};
      RespawnItems[]  = {};
      magazines[]   = {};
      respawnMagazines[] = {};
      hiddenSelections[]    = {"camo1","camo2"};
      hiddenSelectionsTextures[]= {
       "\187th-aux\Data\Uniforms\Clone_187thAirborne_medic_co.paa",
       "\MRC\JLTS\characters\CloneLegions\data\Clone_187thAirborne_armor2_co.paa"
     };
     class Wounds
     {
       tex[] = {};
       mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
     };
     editorSubcategory = "187_clones_white";
   };

   class 187th_CloneArmor_EOD: 187_Base_Uniform
   {
    author 			= "PraetorPanda";
    dlc				= "187th Aux Mod";
    scope 			= 1;
    scopeCurator	= 0;
    uniformClass 	= "187th_Clone_EOD";
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
     "\187th-aux\Data\Uniforms\Clone_187thTrooper_armor_EOD.paa",
     "\MRC\JLTS\characters\CloneLegions\data\Clone_187thTrooper_armor2_co.paa"
   };
   class Wounds
   {
     tex[] = {};
     mat[] = {"MRC\JLTS\Characters\CloneArmor\data\Clone_armor1.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor1_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","MRC\JLTS\Characters\CloneArmor\data\Clone_armor2_injury.rvmat","A3\Characters_F\Common\Data\basicbody.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","A3\Characters_F\Common\Data\basicbody_injury.rvmat","a3\characters_f\heads\data\hl_white.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","a3\characters_f\heads\data\hl_white_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_02_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_black_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_hairy_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_white_old_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F\Heads\Data\hl_asian_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_tanoan_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat","A3\Characters_F_Exp\Heads\Data\hl_asian_02_bald_muscular_injury.rvmat"};
   };
   editorSubcategory = "187_clones_white";
 };

 class lsd_gar_jediCommander_base;
 class 187th_lsd_gar_jediCommander_base: lsd_gar_jediCommander_base
 {
  uniformClass = "187th_lsd_gar_jediCommander_uniform";
  model = "\lsd_armor_bluefor\uniform\gar\jediCommander\lsd_gar_jediCommander_uniform.p3d";
  linkedItems[] = {"ItemMap","ItemCompass","ItemWatch","SWLB_comlink"};
  respawnlinkedItems[] = {"ItemMap","ItemCompass","ItemWatch","SWLB_comlink"};
  hiddenSelections[] = {"armor_camo","robe_camo","belt_camo","under_camo"};
  hiddenSelectionsTextures[] = {"187th-aux\Data\Uniforms\Jedi_Armour_CO.paa","\lsd_armor_bluefor\uniform\gar\jediCommander\data\robes_co.paa","\lsd_armor_bluefor\uniform\gar\jediCommander\data\belt_co.paa","\lsd_armor_bluefor\uniform\gar\jediCommander\data\undersuit_co.paa"};
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


// most of these have been transfered to Republic assets


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
class JLTS_Droid_B1_Sniper;
class JLTS_Droid_B1_Commander;
class JLTS_B1_antenna;
class JLTS_Droid_B1_Marine;
class JLTS_B1_backpack_marine_predef;
class JLTS_Droid_B1_Pilot;
class JLTS_Droid_B1_Security;
class O_soldier_Melee_SW;
class 3AS_AAT_tan;
class 3AS_AAT;
class 3AS_AAT_Tropic;
class 3AS_AAT_urban;
class 3AS_AAT_snow;
class 3AS_GAT;
class 3AS_GAT_Olive;
class 3AS_GAT_Light;
class 3AS_GAT_Light_Olive;
class 3AS_Hailfire_AT;
class 3as_MTT;
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
class k_CIS_Droideka;
class RD501_Praetorian_Variant_normal;
class RD501_speedboat_cis;

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
  JLTS_deathSounds = "DeathDroid";
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
  magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
  respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
  linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
  respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink"};
  backpack="187th_B1_Droid_Crew_pack";
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
  magazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
  respawnMagazines[]={"JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_E5_mag","JLTS_RG4D_mag","JLTS_RG4D_mag"};
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
  weapons[]={"JLTS_E5C_stock","187th_JLTS_RG4D","Put","Throw"};
  respawnWeapons[]={"JLTS_E5C_stock","187th_JLTS_RG4D","Put","Throw"};
  items[]={};
  respawnItems[]={};
  magazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag"};
  respawnMagazines[]={"JLTS_RG4D_mag","JLTS_RG4D_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag","JLTS_E5C_mag"};
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
class lsd_cis_bxDroid_base;
class lsd_gar_bodyGlove_base;
class 187th_lsd_bodyGlove_base: lsd_gar_bodyGlove_base
  {
    displayName = "Body Glove [Male]";
    uniformClass = "187th_lsd_bodyGlove_uniform";
    nakedUniform = "187th_lsd_bodyGlove_uniform";
    hiddenSelectionsTextures[] = {"ls_armor_bluefor\uniform\gar\phase2\data\bodyGlove_plain_co.paa","",""};
  };
class SoldierWB;
class 187th_Sith_Base: SoldierWB
{
  faction="187th_CIS";
  editorCategory = "187th_CIS_Assets";
  editorSubcategory = "187th_Sith";
  side=0;
  scope=1;
  scopeCurator=1;
  uniformClass="187th_lsd_bodyglove_uniform";
  weapons[]={"WBK_lightsaber_sith","Put","Throw"};
  respawnWeapons[]={"WBK_lightsaber_sith","Put","Throw"};
  items[]={};
  respawnItems[]={};
  magazines[]={"Force_tir_Sith"};
  respawnMagazines[]={"Force_tir_Sith"};
  linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","G_Balaclava_TI_G_blk_F"};
  respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","G_Balaclava_TI_G_blk_F"};
  hiddenSelectionsTextures[] = {"ls_armor_bluefor\uniform\gar\phase2\data\bodyGlove_plain_co.paa","",""};
  nakedUniform = "187th_lsd_bodyGlove_uniform";
  backpack="";
  class EventHandlers: DefaultEventhandlers{
    class melee_init {
      init = "_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\Ai_SW_Melee.sqf"";};";
    };
  };
};
class 187th_Sith_1_Blade: 187th_Sith_Base
{
  faction="187th_CIS";
  editorCategory = "187th_CIS_Assets";
  editorSubcategory = "187th_Sith";
  side=0;
  scope=2;
  scopeCurator=2;
  displayName="Sith (1 Blade)";
  uniformClass="187th_lsd_bodyglove_uniform";
  nakedUniform = "lsd_bodyGlove_uniform";
  weapons[]={"WBK_lightsaber_sith","Put","Throw"};
  respawnWeapons[]={"WBK_lightsaber_sith","Put","Throw"};
  items[]={};
  respawnItems[]={};
  magazines[]={"Force_tir_Sith"};
  respawnMagazines[]={"Force_tir_Sith"};
  linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","G_Balaclava_TI_G_blk_F"};
  respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","G_Balaclava_TI_G_blk_F"};
  backpack="";
  class EventHandlers: DefaultEventhandlers{
    class melee_init {
      init = "_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\Ai_SW_Melee.sqf"";};";
    };
  };
};

class 187th_Sith_2_Blade: 187th_Sith_Base
{
  faction="187th_CIS";
  editorCategory = "187th_CIS_Assets";
  editorSubcategory = "187th_Sith";
  side=0;
  scope=2;
  scopeCurator=2;
  displayName="Sith (2 Blades)";
  uniformClass="187th_lsd_bodyglove_uniform";
  nakedUniform = "lsd_bodyGlove_uniform";
  weapons[]={"WBK_lightsaber_sith_Second","WBK_lightsaber_sith","Put","Throw"};
  respawnWeapons[]={"WBK_lightsaber_sith_Second","WBK_lightsaber_sith","Put","Throw"};
  items[]={};
  respawnItems[]={};
  magazines[]={"Force_tir_Sith"};
  respawnMagazines[]={"Force_tir_Sith"};
  linkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","G_Balaclava_TI_G_blk_F"};
  respawnLinkedItems[]={"ItemMap","ItemCompass","ItemWatch","JLTS_droid_comlink","ItemGPS","G_Balaclava_TI_G_blk_F"};
  backpack="";
  class EventHandlers: DefaultEventhandlers{
    class melee_init {
      init = "_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\Ai_SW_Melee.sqf"";};";
    };
  };
};

class 187th_Sith_Lord_Nut: 187th_Sith_Base
{
  faction="187th_CIS";
  editorCategory = "187th_CIS_Assets";
  editorSubcategory = "187th_Sith";
  side=0;
  displayName="Lord Nut";
  uniformClass="ls_meme_theNut_uniform";
  weapons[]={"WBK_lightsaber_sith_Second","WBK_lightsaber_sith","Put","Throw"};
  respawnWeapons[]={"WBK_lightsaber_sith_Second","WBK_lightsaber_sith","Put","Throw"};
  items[]={};
  respawnItems[]={};
  magazines[]={"Force_tir_Sith"};
  respawnMagazines[]={"Force_tir_Sith"};
  linkedItems[]={"WBK_lightsaber_sith_Second","ls_meme_theNut_uniform"};
  respawnLinkedItems[]={"WBK_lightsaber_sith_Second","ls_meme_theNut_uniform"};
  backpack="";
  class EventHandlers: DefaultEventhandlers{
    class melee_init {
      init = "_unit = _this select 0; if (local _unit) then {[_unit] execVM ""\WebKnight_StarWars_Mechanic\Ai_SW_Melee.sqf"";};";
    };
  };
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
  crew="187th_B1_Droid_Crew";
  typicalCargo[]={"187th_B1_Droid_Crew"};
};
  class 187th_Hellfire_Droid_AT: 3AS_Hailfire_AT
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
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Hellfire_Droid_SAM: 3AS_Hailfire_SAM
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Armor";
    side=0;
    displayName="Hellfire Droid (SAM)";
    crew="187th_B1_Droid_Crew";
    typicalCargo[]={"187th_B1_Droid_Crew"};
  };
  class 187th_Hellfire_Droid_Rocket_Arty: 3AS_Hailfire_Rocket
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
    crew="187th_B1_Droid";
    typicalCargo[]={"187th_B1_Droid"};
  };
  class 187th_Droideka: k_CIS_Droideka
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Droideka";
  };
  class 187th_Speedboat: RD501_speedboat_cis
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Boat";
    side=0;
    displayName="Speedboat";
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

 };
 class TransportItems
 {
   class _xx_ToolKit {count=1;name="ToolKit";};
 };
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
