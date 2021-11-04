class CfgPatches
{
	class 187th_SeparatistGroups
	{
		name = "187th Separatist Groups";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class cfgGroups
{
  class EAST
  {
    name="OPFOR";
    class 187th_Legion
    {
      name="187th Legion";

      class Infantry
      {
        name="Infantry";

        class 187THDroids_O_Fireteam
        {
          name="Fireteam (4 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_B1_Droid_Marksman";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class 187THDroids_O_Sniper_Team
        {
          name="Sniper Team (2 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid_Sniper";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_Sniper";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
        };
        class 187THDroids_O_Main_Squad
        {
          name="Main Squad (11 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_Marksman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit10
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-50,0};
          };
        };
        class 187THDroids_O_HQ_Element
        {
          name="HQ Element (4 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid_Commander";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class 187THDroids_O_B2_Team
        {
          name="B2 Team (4 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class 187THDroids_O_Security_Team
        {
          name="Security Team (6 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="187th_B1_Droid_Security";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
        };
        class 187THDroids_O_Tank_Crew
        {
          name="Tank Crew (3 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid_Crew";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_Crew";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_Crew";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
        class 187THDroids_O_AT_Team
        {
          name="AT Team (4 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class 187THDroids_O_Large_Squad
        {
          name="Large Squad (26 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid_Commander";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=0;
            vehicle="187th_B1_Droid_Marksman";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=0;
            vehicle="187th_B1_Droid_Marksman";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit10
          {
            side=0;
            vehicle="187th_B1_Droid_Sniper";
            rank="PRIVATE";
            position[]={0,-50,0};
          };
          class Unit11
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-55,0};
          };
          class Unit12
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit13
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-65,0};
          };
          class Unit14
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-70,0};
          };
          class Unit15
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit16
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-80,0};
          };
          class Unit17
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-85,0};
          };
          class Unit18
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit19
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-95,0};
          };
          class Unit20
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-100,0};
          };
          class Unit21
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit22
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-110,0};
          };
          class Unit23
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-115,0};
          };
          class Unit24
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
          class Unit25
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-125,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class 187THDroids_O_AAT_Section
        {
          name="AAT Section";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_AAT_Tan";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_AAT_Tan";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_AAT_Tan";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class 187THDroids_O_Heavy_GAT_Section
        {
          name="Heavy GAT Section";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_GAT_Heavy";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_GAT_Heavy";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_GAT_Heavy";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class 187THDroids_O_Light_GAT_Section
        {
          name="Light GAT Section";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_GAT_Light";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_GAT_Light";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_GAT_Light";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
      };
      class Mechanized
      {
        name="Mechanized";

      };
      class Armored
      {
        name="Armored";

      };
      class SpecOps
      {
        name="Special Forces";

        class 187THDroids_O_Commando_Melee_Team
        {
          name="Commando Melee Team (4 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_BX_Droid_Captain_Sword_F";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_BX_Droid_E5_Sword_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_BX_Droid_E5_Sword_F";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_BX_Droid_E5_Sword_F";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class 187THDroids_O_Commando_Fireteam
        {
          name="Commando Fireteam (5 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_BX_Droid_Captain_E5_F";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_BX_Droid_E5_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_BX_Droid_E5_F";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_BX_Droid_E5Shield_F";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="187th_BX_Droid_E5Shield_F";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
        };
        class 187THDroids_O_Diplomant_Team
        {
          name="Diplomant Team (4 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_BX_Droid_Diplomat_E5_F";
            rank="COLONEL";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_BX_Droid_Diplomat_E5_F";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_BX_Droid_Diplomat_E5_F";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_BX_Droid_Diplomat_E5_F";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
      };
      class Support
      {
        name="Support Infantry";

        class 187THDroids_O_HMP_Drop_Squad
        {
          name="HMP Drop Squad (10 droids)";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="MAJOR";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit3
          {
            side=0;
            vehicle="187th_B1_Droid";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
          class Unit4
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-60,0};
          };
          class Unit5
          {
            side=0;
            vehicle="187th_CIS_B2_F";
            rank="PRIVATE";
            position[]={0,-75,0};
          };
          class Unit6
          {
            side=0;
            vehicle="187th_B1_Droid_AT";
            rank="PRIVATE";
            position[]={0,-90,0};
          };
          class Unit7
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-105,0};
          };
          class Unit8
          {
            side=0;
            vehicle="187th_B1_Droid_Marine";
            rank="PRIVATE";
            position[]={0,-120,0};
          };
          class Unit9
          {
            side=0;
            vehicle="187th_B1_Droid_Marksman";
            rank="PRIVATE";
            position[]={0,-135,0};
          };
        };
      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

        class 187THDroids_O_Attack_HMP_Flight
        {
          name="Attack HMP Flight";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_HMP_Gunship";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_HMP_Gunship";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_HMP_Gunship";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class 187THDroids_O_Tranport_HMP_Flight
        {
          name="Tranport HMP Flight";
          faction="187THDroids_187th_Legion";
          side=0;
          class Unit0
          {
            side=0;
            vehicle="187th_HMP_Transport";
            rank="LIEUTENANT";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=0;
            vehicle="187th_HMP_Transport";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=0;
            vehicle="187th_HMP_Transport";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
      };
    };
  };
};
