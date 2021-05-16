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
class 3AS_GAT_tan;
class 3AS_GAT_urban;
class 3AS_GAT_Light;
class 3AS_GAT_Light_tan;
class 3AS_GAT_Light_Olive;
class 3AS_GAT_Light_urban;
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

class LandVehicle;
class Tank: LandVehicle
{
  class NewTurret;
  class Sounds;
  class HitPoints;
};
class Tank_F: Tank
{
  class Turrets
  {
    class MainTurret: NewTurret
    {
      class ViewGunner;
      class Turrets
      {
        class CommanderOptics;
      };
    };
  };
  class AnimationSources;
  class ViewPilot;
  class ViewOptics;
  class ViewCargo;
  class HeadLimits;
  class HitPoints: HitPoints
  {
    class HitHull;
    class HitFuel;
    class HitEngine;
    class HitLTrack;
    class HitRTrack;
  };
  class Sounds: Sounds
  {
    class Engine;
    class Movement;
  };
};

class 187th_3AS_AAT_base_F: Tank_F
  {
    attenuationEffectType = "TankAttenuation";
    soundGetIn[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1};
    soundGetOut[] = {"A3\sounds_f\vehicles\armor\noises\get_in_out",0.562341,1,20};
    soundDammage[] = {"",0.562341,1};
    soundEngineOnInt[] = {"3as\3as_saber\Sounds\tx130start.wss",2,1};
    soundEngineOnExt[] = {"3as\3as_saber\Sounds\tx130start.wss",4,1,200};
    soundEngineOffInt[] = {"3as\3as_saber\Sounds\tx130stop.wss",2,1};
    soundEngineOffExt[] = {"3as\3as_saber\Sounds\tx130stop.wss",4,1,200};
    buildCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
    buildCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
    buildCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
    buildCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
    soundBuildingCrash[] = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
    WoodCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
    WoodCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
    WoodCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
    WoodCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
    WoodCrash4[] = {"A3\sounds_f\Vehicles\crashes\crash_01",1,1,200};
    WoodCrash5[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
    soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
    ArmorCrash0[] = {"A3\sounds_f\Vehicles\crashes\crash_08",1,1,200};
    ArmorCrash1[] = {"A3\sounds_f\Vehicles\crashes\crash_09",1,1,200};
    ArmorCrash2[] = {"A3\sounds_f\Vehicles\crashes\crash_10",1,1,200};
    ArmorCrash3[] = {"A3\sounds_f\Vehicles\crashes\crash_11",1,1,200};
    soundArmorCrash[] = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
    class Sounds
    {
      class Idle_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130idle.wss",4,1,200};
        frequency = "0.95 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
      };
      class Engine
      {
        sound[] = {"3as\3as_saber\Sounds\tx130slow.wss",4.48808,1,240};
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
      };
      class Engine1_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130slow.wss",5.65016,1,280};
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
      };
      class Engine2_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",6.3396,1,320};
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
      };
      class Engine3_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",7.11313,1,360};
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
      };
      class Engine4_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",7.98104,1,400};
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*camPos*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
      };
      class Engine5_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",8.95489,1,440};
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*camPos*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
      };
      class IdleThrust
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",5.65016,1,200};
        frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
      };
      class EngineThrust
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",7.11313,1,200};
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
      };
      class Engine1_Thrust_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",8.95489,1,230};
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
      };
      class Engine2_Thrust_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",10.0475,1,290};
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
      };
      class Engine3_Thrust_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",8.95489,1,350};
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
      };
      class Engine4_Thrust_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",11.27353,1,400};
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
      };
      class Engine5_Thrust_ext
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",12.64913,1,450};
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
      };
      class Idle_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130idle.wss",2,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
      };
      class Engine_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",1.41589,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
      };
      class Engine1_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",1.58866,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
      };
      class Engine2_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",1.7825,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
      };
      class Engine3_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
      };
      class Engine4_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2.24404,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
      };
      class Engine5_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2.51785,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
      };
      class IdleThrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2.51785,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(400/ 2640),(900/ 2640)])*0.15";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(100/ 2640),(200/ 2640)]) * ((rpm/ 2640) factor[(900/ 2640),(700/ 2640)]))";
      };
      class EngineThrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",1.58866,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(700/ 2640),(1100/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(705/ 2640),(850/ 2640)]) * ((rpm/ 2640) factor[(1100 / 2640),(950/ 2640)]))";
      };
      class Engine1_Thrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",1.7825,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(950/ 2640),(1400/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(900/ 2640),(1050/ 2640)]) * ((rpm/ 2640) factor[(1400/ 2640),(1200/ 2640)]))";
      };
      class Engine2_Thrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",1.7825,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1200/ 2640),(1700/ 2640)])*0.2";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1170/ 2640),(1380/ 2640)]) * ((rpm/ 2640) factor[(1700/ 2640),(1500/ 2640)]))";
      };
      class Engine3_Thrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1500/ 2640),(2100/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1500/ 2640),(1670/ 2640)]) * ((rpm/ 2640) factor[(2100/ 2640),(1800/ 2640)]))";
      };
      class Engine4_Thrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2.24404,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(1800/ 2640),(2300/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/ 2640) factor[(1780/ 2640),(2060/ 2640)]) * ((rpm/ 2640) factor[(2450/ 2640),(2200/ 2640)]))";
      };
      class Engine5_Thrust_int
      {
        sound[] = {"3as\3as_saber\Sounds\tx130move.wss",2.51785,1};
        frequency = "0.8 + ((rpm/ 2640) factor[(2100/ 2640),(2640/ 2640)])*0.1";
        volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/ 2640) factor[(2150/ 2640),(2500/ 2640)])";
      };
      class NoiseInt
      {
        sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_int_1",0.501187,1};
        frequency = "1";
        volume = "(1-camPos)*(angVelocity max 0.04)*(speed factor[4, 15])";
      };
      class NoiseExt
      {
        sound[] = {"A3\sounds_f\vehicles\armor\noises\noise_tank_ext_1",0.891251,1,50};
        frequency = "1";
        volume = "camPos*(angVelocity max 0.04)*(speed factor[4, 15])";
      };
      class ThreadsOutH0
      {
        sound[] = {"",0.398107,1,140};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
      };
      class ThreadsOutH1
      {
        sound[] = {"",0.446684,1,160};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
      };
      class ThreadsOutH2
      {
        sound[] = {"",0.501187,1,180};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
      };
      class ThreadsOutH3
      {
        sound[] = {"",0.562341,1,200};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
      };
      class ThreadsOutH4
      {
        sound[] = {"",0.562341,1,220};
        frequency = "1";
        volume = "engineOn*camPos*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
      };
      class ThreadsOutS0
      {
        sound[] = {"",0.316228,1,120};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
      };
      class ThreadsOutS1
      {
        sound[] = {"",0.354813,1,140};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
      };
      class ThreadsOutS2
      {
        sound[] = {"",0.398107,1,160};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
      };
      class ThreadsOutS3
      {
        sound[] = {"",0.446684,1,180};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
      };
      class ThreadsOutS4
      {
        sound[] = {"",0.501187,1,200};
        frequency = "1";
        volume = "engineOn*(camPos)*(grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
      };
      class ThreadsInH0
      {
        sound[] = {"",0.251189,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
      };
      class ThreadsInH1
      {
        sound[] = {"",0.281838,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
      };
      class ThreadsInH2
      {
        sound[] = {"",0.316228,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
      };
      class ThreadsInH3
      {
        sound[] = {"",0.354813,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
      };
      class ThreadsInH4
      {
        sound[] = {"",0.398107,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*(1-grass)*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
      };
      class ThreadsInS0
      {
        sound[] = {"",0.316228,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-0) max 0)/ 60),(((-5) max 5)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-15) max 15)/ 60),(((-10) max 10)/ 60)]))";
      };
      class ThreadsInS1
      {
        sound[] = {"",0.316228,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-10) max 10)/ 60),(((-15) max 15)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-30) max 30)/ 60),(((-25) max 25)/ 60)]))";
      };
      class ThreadsInS2
      {
        sound[] = {"",0.354813,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-25) max 25)/ 60),(((-30) max 30)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-45) max 45)/ 60),(((-40) max 40)/ 60)]))";
      };
      class ThreadsInS3
      {
        sound[] = {"",0.354813,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*(((((-speed*3.6) max speed*3.6)/ 60) factor[(((-40) max 40)/ 60),(((-45) max 45)/ 60)]) * ((((-speed*3.6) max speed*3.6)/ 60) factor[(((-55) max 55)/ 60),(((-50) max 50)/ 60)]))";
      };
      class ThreadsInS4
      {
        sound[] = {"",0.398107,1};
        frequency = "1";
        volume = "engineOn*(1-camPos)*grass*((((-speed*3.6) max speed*3.6)/ 60) factor[(((-49) max 49)/ 60),(((-53) max 53)/ 60)])";
      };
    };
    simulation = "tankX";
    enginePower = 700;
    maxOmega = 276;
    maxSpeed = 65;
    peakTorque = 4832;
    torqueCurve[] = {{0,0},{"(1600/2640)","(2650/2850)"},{"(1800/2640)","(2800/2850)"},{"(1900/2640)","(2850/2850)"},{"(2000/2640)","(2800/2850)"},{"(2200/2640)","(2750/2850)"},{"(2400/2640)","(2600/2850)"},{"(2640/2640)","(2350/2850)"}};
    thrustDelay = 0.5;
    clutchStrength = 180.0;
    fuelCapacity = 50;
    brakeIdleSpeed = 1.78;
    latency = 0.1;
    tankTurnForce = 800000;
    idleRpm = 700;
    redRpm = 2640;
    engineLosses = 25;
    transmissionLosses = 15;
    class complexGearbox
    {
      GearboxRatios[] = {"R2",-3.9,"N",0,"D1",4.7,"D2",3.5,"D3",2.6,"D4",2.0,"D5",1.5,"D6",1.125,"D7",0.85};
      TransmissionRatios[] = {"High",15};
      gearBoxMode = "auto";
      moveOffGear = 1;
      driveString = "D";
      neutralString = "N";
      reverseString = "R";
      transmissionDelay = 0.1;
    };
    class Wheels
    {
      class L2
      {
        boneName = "wheel_podkoloL1";
        center = "wheel_1_2_axis";
        boundary = "wheel_1_2_bound";
        damping = 75.0;
        steering = 0;
        side = "left";
        weight = 150;
        mass = 150;
        MOI = 22;
        latStiffX = 25;
        latStiffY = 280;
        longitudinalStiffnessPerUnitGravity = 100000;
        maxBrakeTorque = 20000;
        sprungMass = 4000.0;
        springStrength = 324000;
        springDamperRate = 36000;
        dampingRate = 1.0;
        dampingRateInAir = 8000.0;
        dampingRateDamaged = 10.0;
        dampingRateDestroyed = 10000.0;
        maxDroop = 0.15;
        maxCompression = 0.15;
      };
      class L3: L2
      {
        boneName = "wheel_podkolol2";
        center = "wheel_1_3_axis";
        boundary = "wheel_1_3_bound";
      };
      class L4: L2
      {
        boneName = "wheel_podkolol3";
        center = "wheel_1_4_axis";
        boundary = "wheel_1_4_bound";
      };
      class L5: L2
      {
        boneName = "wheel_podkolol4";
        center = "wheel_1_5_axis";
        boundary = "wheel_1_5_bound";
      };
      class L6: L2
      {
        boneName = "wheel_podkolol5";
        center = "wheel_1_6_axis";
        boundary = "wheel_1_6_bound";
      };
      class L7: L2
      {
        boneName = "wheel_podkolol6";
        center = "wheel_1_7_axis";
        boundary = "wheel_1_7_bound";
      };
      class L9: L2
      {
        boneName = "wheel_podkolol9";
        center = "wheel_1_9_axis";
        boundary = "wheel_1_9_bound";
        sprungMass = 1500.0;
        springStrength = 37500;
        springDamperRate = 7500;
        maxDroop = 0;
        maxCompression = 0;
      };
      class L1: L2
      {
        boneName = "";
        center = "wheel_1_1_axis";
        boundary = "wheel_1_1_bound";
        sprungMass = 1500.0;
        springStrength = 37500;
        springDamperRate = 7500;
        maxDroop = 0;
        maxCompression = 0;
      };
      class R2: L2
      {
        boneName = "wheel_podkolop1";
        center = "wheel_2_2_axis";
        boundary = "wheel_2_2_bound";
        side = "right";
      };
      class R3: R2
      {
        boneName = "wheel_podkolop2";
        center = "wheel_2_3_axis";
        boundary = "wheel_2_3_bound";
      };
      class R4: R2
      {
        boneName = "wheel_podkolop3";
        center = "wheel_2_4_axis";
        boundary = "wheel_2_4_bound";
      };
      class R5: R2
      {
        boneName = "wheel_podkolop4";
        center = "wheel_2_5_axis";
        boundary = "wheel_2_5_bound";
      };
      class R6: R2
      {
        boneName = "wheel_podkolop5";
        center = "wheel_2_6_axis";
        boundary = "wheel_2_6_bound";
      };
      class R7: R2
      {
        boneName = "wheel_podkolop6";
        center = "wheel_2_7_axis";
        boundary = "wheel_2_7_bound";
      };
      class R9: R2
      {
        boneName = "wheel_podkolop9";
        center = "wheel_2_9_axis";
        boundary = "wheel_2_9_bound";
        sprungMass = 1500.0;
        springStrength = 37500;
        springDamperRate = 7500;
        maxDroop = 0;
        maxCompression = 0;
      };
      class R1: R2
      {
        boneName = "";
        center = "wheel_2_1_axis";
        boundary = "wheel_2_1_bound";
        sprungMass = 1500.0;
        springStrength = 37500;
        springDamperRate = 7500;
        maxDroop = 0;
        maxCompression = 0;
      };
    };
    author = "$STR_3as_Studio";
    armor = 500;
    ace_cookoff_probability = 0.5;
    destrType = "DestructWreck";
    armorStructural = 5;
    crewExplosionProtection = 0.9999;
    damageResistance = 0.00547;
    cost = 2500000;
    crewVulnerable = 0;
    epeImpulseDamageCoef = 18;
    waterPPInVehicle = 0;
    wheelCircumference = 2.15;
    tracksSpeed = 1.4;
    model = "\3AS\3AS_AAT\model\3AS_AAT.p3d";
    picture = "\A3\armor_f_gamma\MBT_01\Data\UI\Slammer_M2A1_Base_ca.paa";
    Icon = "\A3\armor_f_gamma\MBT_01\Data\ui\map_slammer_mk4_ca.paa";
    memoryPointTaskMarker = "TaskMarker_1_pos";
    hideWeaponsDriver = 1;
    hideWeaponsCargo = 1;
    class HitPoints: HitPoints
    {
      class HitHull: HitHull
      {
        armor = 4.5;
        material = -1;
        name = "telo";
        visual = "zbytek";
        passThrough = 1;
        minimalHit = 0.2;
        explosionShielding = 0.2;
        radius = 0.12;
      };
      class HitEngine: HitEngine
      {
        armor = 0.75;
        material = -1;
        name = "motor";
        passThrough = 0.2;
        minimalHit = 0.2;
        explosionShielding = 0.2;
        radius = 0.33;
      };
      class HitLTrack: HitLTrack
      {
        armor = 0.5;
        material = -1;
        name = "track_l_hit";
        passThrough = 0;
        minimalHit = 0.08;
        explosionShielding = 1.44;
        radius = 0.3;
      };
      class HitRTrack: HitRTrack
      {
        armor = 0.5;
        material = -1;
        name = "track_r_hit";
        passThrough = 0;
        minimalHit = 0.08;
        explosionShielding = 1.44;
        radius = 0.3;
      };
      class HitFuel: HitFuel
      {
        armor = 1.5;
        material = -1;
        name = "palivo";
        passThrough = 0.1;
        minimalHit = 0.1;
        explosionShielding = 0.6;
        radius = 0.25;
      };
    };
    animationSourceHatch = "";
    class Exhausts
    {
      class Exhaust_1
      {
        position = "Exhaust_1_pos";
        direction = "Exhaust_1_dir";
        effect = "ExhaustsEffectHeliBig";
      };
      class Exhaust_2
      {
        position = "Exhaust_2_pos";
        direction = "Exhaust_2_dir";
        effect = "ExhaustsEffectHeliBig";
      };
    };
    insideSoundCoef = 0.9;
    threat[] = {0.8,1,0.3};
    class RenderTargets
    {
      class commander_display
      {
        renderTarget = "rendertarget0";
        class CameraView1
        {
          pointPosition = "commanderview";
          pointDirection = "commanderview_dir";
          renderVisionMode = 0;
          renderQuality = 2;
          fov = 0.305731;
          turret[] = {0,0};
        };
        BBoxes[] = {"PIP_COM_TL","PIP_COM_TR","PIP_COM_BL","PIP_COM_BR"};
      };
      class driver_display
      {
        renderTarget = "rendertarget1";
        class CameraView1
        {
          pointPosition = "PIP0_pos";
          pointDirection = "PIP0_dir";
          renderVisionMode = 0;
          renderQuality = 2;
          fov = 0.8;
          turret[] = {-1};
        };
        BBoxes[] = {"PIP_DRV_TL","PIP_DRV_TR","PIP_DRV_BL","PIP_DRV_BR"};
      };
    };
    class compartmentsLights
    {
      class Comp1
      {
        class Light1
        {
          color[] = {13,20,20};
          ambient[] = {0,0,0};
          intensity = 2;
          size = 0;
          useFlare = 0;
          flareSize = 0;
          flareMaxDistance = 0;
          dayLight = 0;
          blinking = 0;
          class Attenuation
          {
            start = 0;
            constant = 0;
            linear = 1;
            quadratic = 70;
            hardLimitStart = 0.15;
            hardLimitEnd = 1.15;
          };
          point = "light_interior1";
        };
        class Light2: Light1
        {
          point = "light_interior2";
          color[] = {13,20,20};
          ambient[] = {0,0,0};
          intensity = 1.5;
        };
        class Light3: Light1
        {
          point = "light_interior3";
          color[] = {13,20,20};
          ambient[] = {0,0,0};
          intensity = 1.5;
        };
        class Light4: Light1
        {
          point = "light_interior4";
          color[] = {13,20,20};
          ambient[] = {0,0,0};
          intensity = 0.7;
        };
        class Light5: Light1
        {
          point = "light_interior5";
          color[] = {18,20,20};
          ambient[] = {0,0,0};
          intensity = 0.2;
          size = 0;
        };
        class Light6: Light1
        {
          point = "light_interior6";
          color[] = {18,20,20};
          ambient[] = {0,0,0};
          intensity = 3;
          size = 0;
        };
        class Light7: Light1
        {
          point = "light_interior7";
          color[] = {18,20,20};
          ambient[] = {0,0,0};
          intensity = 4;
          size = 0;
        };
        class Light8: Light1
        {
          point = "light_interior8";
          color[] = {18,20,20};
          ambient[] = {0,0,0};
          intensity = 4;
          size = 0;
        };
      };
    };
    class Reflectors
    {
      class Left
      {
        color[] = {1900,1800,1700};
        ambient[] = {5,5,5};
        position = "Light_L";
        direction = "Light_L_end";
        hitpoint = "Light_L";
        selection = "Light_L";
        size = 1;
        innerAngle = 100;
        outerAngle = 179;
        coneFadeCoef = 10;
        intensity = 1;
        useFlare = 0;
        dayLight = 0;
        flareSize = 1;
        class Attenuation
        {
          start = 1;
          constant = 0;
          linear = 0;
          quadratic = 0.25;
          hardLimitStart = 30;
          hardLimitEnd = 60;
        };
      };
      class Right: Left
      {
        position = "Light_R";
        direction = "Light_R_end";
        hitpoint = "Light_R";
        selection = "Light_R";
      };
      class Right2: Right
      {
        position = "light_R_flare";
        hitpoint = "Light_R_flare";
        useFlare = 1;
      };
      class Left2: Left
      {
        position = "light_L_flare";
        hitpoint = "Light_L_flare";
        useFlare = 1;
      };
    };
    aggregateReflectors[] = {{"Left","Right","Left2","Right2"}};
    soundLocked[] = {"\A3\Sounds_F\weapons\Rockets\opfor_lock_1",1,1};
    soundIncommingMissile[] = {"\A3\Sounds_F\vehicles\air\noises\alarm_locked_by_missile_1",0.31622776,1};
    smokeLauncherGrenadeCount = 8;
    smokeLauncherVelocity = 14;
    smokeLauncherOnTurret = 1;
    smokeLauncherAngle = 120;
    class Turrets: Turrets
    {
      class MainTurret: MainTurret
      {
        class Turrets: Turrets
        {
          class CommanderOptics: CommanderOptics
          {
            body = "Obsturret";
            gun = "Obsgun";
            proxyIndex = 1;
            viewGunnerInExternal = 0;
            proxytype = "CPCommander";
            gunnername = "Commander";
            animationSourceBody = "Obsturret";
            animationSourceGun = "Obsgun";
            minOutElev = -25;
            maxOutElev = 45;
            initOutElev = 0;
            minOutTurn = -90;
            maxOutTurn = 90;
            initOutTurn = 0;
            maxHorizontalRotSpeed = 1.8;
            maxVerticalRotSpeed = 1.8;
            stabilizedInAxes = 3;
            soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
            minElev = -10;
            maxElev = 20;
            initElev = 0;
            minTurn = -15;
            maxTurn = 15;
            initTurn = 0;
            gunnerAction = "";
            gunnerInAction = "mbt2_slot2b_in";
            forceHideGunner = 0;
            outGunnerMayFire = 1;
            inGunnerMayFire = 1;
            gunnerRightHandAnimName = "konec hlavne3";
            gunnerLeftHandAnimName = "konec hlavne3";
            soundAttenuationTurret = "HeliAttenuationGunner";
            isPersonTurret = 1;
            personTurretAction = "vehicle_turnout_1";
            memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
            weapons[] = {"187th_3AS_AATRepeater","SmokeLauncher"};
            magazines[] = {"3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","3AS_500Rnd_ATT_RedPlasma","SmokeLauncherMag"};
            turretInfoType = "RscWeaponRangeZeroing";
            discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
            discreteDistanceInitIndex = 2;
            memoryPointGunnerOptics = "CommanderView";
            memoryPointGunnerOutOptics = "commanderview";
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
            gunnerOutOpticsModel = "";
            gunnerOpticsEffect[] = {};
            gunnerHasFlares = 1;
            turretFollowFreeLook = 1;
            class ViewOptics: ViewOptics
            {
              initAngleX = 0;
              minAngleX = -15;
              maxAngleX = 15;
              initAngleY = 0;
              minAngleY = -10;
              maxAngleY = 60;
              initFov = 0.155;
              minFov = 0.034;
              maxFov = 0.155;
              visionMode[] = {"Normal","NVG","Ti"};
              thermalMode[] = {2,3,4};
            };
            gunnerGetInAction = "GetInHigh";
            gunnerGetOutAction = "GetOutHigh";
            startEngine = 0;
            LODTurnedOut = "VIEW_GUNNER";
            LODTurnedIn = "VIEW_GUNNER";
            class HitPoints
            {
              class HitTurret
              {
                armor = 0.6;
                material = -1;
                name = "Commander_Turret";
                visual = "commander_turret";
                passThrough = 0;
                minimalHit = 0.03;
                explosionShielding = 0.6;
                radius = 0.15;
              };
              class HitGun
              {
                armor = 0.6;
                material = -1;
                name = "Commander_Gun";
                visual = "Commander_Gun";
                passThrough = 0;
                minimalHit = 0.03;
                explosionShielding = 0.6;
                radius = 0.15;
              };
            };
            selectionFireAnim = "zasleh1";
          };
        };
        memoryPointGun = "usti hlavne";
        gunBeg = "usti hlavne";
        gunEnd = "konec hlavne";
        weapons[] = {"3AS_AATCannon","SmokeLauncher"};
        magazines[] = {"3as_24Rnd_AAT_AP","3as_24Rnd_AAT_AP","SmokeLauncherMag"};
        turretInfoType = "RscWeaponRangeZeroing";
        discreteDistance[] = {100,200,300,400,500,600,700,800,900,1000,1100,1200,1300,1400,1500};
        selectionFireAnim = "zasleh";
        animationSourceBody = "Mainturret";
        animationSourceGun = "MainGun";
        body = "Mainturret";
        gun = "MainGun";
        discreteDistanceInitIndex = 5;
        memoryPointGunnerOptics = "gunnerview";
        gunnerOutOpticsModel = "";
        gunnerOutOpticsEffect[] = {};
        gunnerOpticsEffect[] = {};
        gunnerForceOptics = 1;
        visionMode[] = {"Normal"};
        thermalMode[] = {};
        class OpticsIn
        {
          class Wide
          {
            initAngleX = 0;
            minAngleX = -30;
            maxAngleX = 30;
            initAngleY = 0;
            minAngleY = -100;
            maxAngleY = 100;
            initFov = 0.155;
            minFov = 0.155;
            maxFov = 0.155;
            visionMode[] = {"Normal","NVG","Ti"};
            thermalMode[] = {0,1};
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
            gunnerOpticsEffect[] = {};
          };
          class Narrow: Wide
          {
            gunnerOpticsModel = "\A3\weapons_f\reticle\Optics_Commander_02_F";
            initFov = 0.047;
            minFov = 0.047;
            maxFov = 0.047;
          };
        };
        gunnerAction = "mbt2_slot2b_in";
        forceHideGunner = 1;
        outGunnerMayFire = 1;
        gunnerInAction = "mbt2_slot2b_in";
        gunnerRightHandAnimName = "";
        gunnerLeftHandAnimName = "";
        gunnerFireAlsoInInternalCamera = 1;
        gunnerOutFireAlsoInInternalCamera = 1;
        proxyIndex = 1;
        viewGunnerInExternal = 0;
        gunnerName = "Gunner";
        proxytype = "CPGunner";
        isPersonTurret = 0;
        personTurretAction = "vehicle_turnout_1";
        minOutElev = -10;
        maxOutElev = 15;
        initOutElev = 0;
        minOutTurn = -90;
        maxOutTurn = 90;
        initOutTurn = 0;
        soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_best","db-40",1.0,50};
        minElev = -9;
        maxElev = 20;
        initElev = 0;
        inGunnerMayFire = 1;
        class HitPoints
        {
          class HitTurret
          {
            armor = 0.8;
            material = -1;
            name = "otocvez";
            visual = "vez";
            passThrough = 0;
            minimalHit = 0.02;
            explosionShielding = 1;
            radius = 0.15;
          };
          class HitGun
          {
            armor = 0.75;
            material = -1;
            name = "otocvez";
            visual = "";
            passThrough = 0;
            minimalHit = 0;
            explosionShielding = 1;
            radius = 0.15;
          };
        };
      };
    };
    class Damage
    {
      tex[] = {};
      mat[] = {"A3\armor_f_gamma\MBT_01\Data\MBT_01_body.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_body_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_body_destruct.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_int.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_int_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_int_destruct.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_tow_destruct.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_track.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_track_damage.rvmat","A3\armor_f_gamma\MBT_01\Data\MBT_01_track_destruct.rvmat"};
    };
    class AnimationSources
    {
      class muzzle_rot_cannon
      {
        source = "ammorandom";
        weapon = "3AS_AATRepeater";
      };
      class recoil_source
      {
        source = "reload";
        weapon = "3AS_AATCannon";
      };
      class muzzle_rot_coax
      {
        source = "ammorandom";
        weapon = "3AS_AATRepeater";
      };
    };
    animationList[] = {"showCamonetCannon",0,"showCamonetPlates1",0,"showCamonetPlates2",0,"showCamonetTurret",0,"showCamonetHull",0};
  };
class 187th_3AS_CIS_AAT_base_F: 187th_3AS_AAT_base_F
  {
    author = "$STR_3as_Studio";
    _generalMacro = "B_MBT_01_base_F";
    features = "Randomization: No      <br />Camo selections: 2 - hull, main turret      <br />Script door sources: None      <br />Script animations: None      <br />Executed scripts: None      <br />Firing from vehicles: No      <br />Slingload: No      <br />Cargo proxy indexes: 1 to 6";
    crew = "187th_B1_Droid_Crew";
    side = 0;
    faction = "3AS_CIS";
  };
class 187th_3AS_AAT: 187th_3AS_CIS_AAT_base_F
  {
    scope = 2;
    scopeCurator = 2;
    forceingarage = 1;
    displayname = "AAT";
    hiddenSelections[] = {"camo1"};
    hiddenSelectionsTextures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
    editorPreview = "\3as\3as_AAT\images\3AS_AAT.jpg";
    class TextureSources
    {
      class Tan
      {
        displayName = "Desert";
        author = "3AS Mod Team";
        textures[] = {"3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
        factions[] = {"3AS_CIS"};
      };
      class CIS
      {
        displayName = "Trade Federation";
        author = "3AS Mod Team";
        textures[] = {"3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
        factions[] = {"3AS_CIS"};
      };
      class Urban
      {
        displayName = "Urban";
        author = "3AS Mod Team";
        textures[] = {"3AS\3AS_AAT\data\Urban_AAT_CO.paa"};
        factions[] = {"3AS_CIS"};
      };
      class Tropic
      {
        displayName = "Tropical";
        author = "3AS Mod Team";
        textures[] = {"3AS\3AS_AAT\data\Tropic_AAT_CO.paa"};
        factions[] = {"3AS_CIS"};
      };
      class Snow
      {
        displayName = "Snow";
        author = "3AS Mod Team";
        textures[] = {"3AS\3AS_AAT\data\Snow_AAT_CO.paa"};
        factions[] = {"3AS_CIS"};
      };
    };
    accuracy = 1000;
  };

class 187th_AAT_Tan: 187th_3AS_AAT
{
  faction="187th_CIS";
  editorCategory = "187th_CIS_Assets";
  editorSubcategory = "187th_Armor";
  side=0;
  scope=2;
  scopeCurator=2;
  displayName="AAT (Tan)";
  hiddenSelectionsTextures[]={"3as\3as_aat\data\tan_aat_co.paa"};
  crew="187th_B1_Droid_Crew";
  typicalCargo[]={"187th_B1_Droid_Crew"};
};
class 187th_AAT: 187th_3AS_AAT
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
class 187th_AAT_Tropic: 187th_3AS_AAT
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
class 187th_AAT_Urban: 187th_3AS_AAT
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
class 187th_AAT_Snow: 187th_3AS_AAT
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
  class 187th_Droideka: k_CIS_Droideka
  {
    faction="187th_CIS";
    editorCategory = "187th_CIS_Assets";
    editorSubcategory = "187th_Turret";
    side=0;
    displayName="Droideka";
    hiddenSelectionsTextures[]={"kobra\442_turrets\droideka\data\Droideka_CO.paa"};
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
