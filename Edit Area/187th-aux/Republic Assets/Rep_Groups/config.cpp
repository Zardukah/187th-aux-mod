class CfgPatches
{
	class 187th_RepublicGroups
	{
		name = "187th Republic Groups";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class cfgGroups
{
  class WEST
  {
    name="BLUFOR";
    class 187th_Legion
    {
      name="187th Legion";

      class Infantry
      {
        name="Infantry";

        class 187TH_B_Squad
        {
          name="Squad";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_Sergeant";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_Trooper_Medic";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_Corporal";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="187th_Corporal";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="187th_Trooper_Genadier";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
          class Unit5
          {
            side=1;
            vehicle="187th_Trooper_Marksman";
            rank="PRIVATE";
            position[]={0,-25,0};
          };
          class Unit6
          {
            side=1;
            vehicle="187th_Trooper_AT";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
          class Unit7
          {
            side=1;
            vehicle="187th_Trooper_Support";
            rank="PRIVATE";
            position[]={0,-35,0};
          };
          class Unit8
          {
            side=1;
            vehicle="187th_Trooper_EOD";
            rank="PRIVATE";
            position[]={0,-40,0};
          };
          class Unit9
          {
            side=1;
            vehicle="187th_Trooper";
            rank="PRIVATE";
            position[]={0,-45,0};
          };
        };
        class 187TH_B_Team
        {
          name="Team";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_Corporal";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_Trooper";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_Trooper_Support";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="187th_Trooper_Genadier";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class 187TH_B_Platoon_HQ
        {
          name="Platoon HQ";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_Lieutenant";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_Sergeant";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_Trooper_RTO";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="187th_Trooper_Medic";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
        };
        class 187TH_B_Company_HQ
        {
          name="Company HQ";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_Captain";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_Lieutenant";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_Sergeant_Major";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
          class Unit3
          {
            side=1;
            vehicle="187th_Trooper_RTO";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit4
          {
            side=1;
            vehicle="187th_Trooper_Medic";
            rank="PRIVATE";
            position[]={0,-20,0};
          };
        };
        class 187TH_B_Vehicle_Crew
        {
          name="Vehicle Crew";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_Trooper_Crewman";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_Trooper_Crewman";
            rank="PRIVATE";
            position[]={0,-5,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_Trooper_Crewman";
            rank="PRIVATE";
            position[]={0,-10,0};
          };
        };
      };
      class Motorized
      {
        name="Motorized";

        class 187TH_B_Bantha_Section
        {
          name="Bantha Section";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_bantha_mk1";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_bantha_mk1";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_bantha_mk1";
            rank="PRIVATE";
            position[]={0,-30,0};
          };
        };
        class 187TH_B_Saber_Section
        {
          name="Saber Section";
          faction="187TH_187th_Legion";
          side=1;
          class Unit0
          {
            side=1;
            vehicle="187th_Saber_Tank";
            rank="PRIVATE";
            position[]={0,-0,0};
          };
          class Unit1
          {
            side=1;
            vehicle="187th_Saber_Tank";
            rank="PRIVATE";
            position[]={0,-15,0};
          };
          class Unit2
          {
            side=1;
            vehicle="187th_Saber_Tank_Super";
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

      };
      class Support
      {
        name="Support Infantry";

      };
      class Airborne
      {
        name="Airborne";

      };
      class Air
      {
        name="Air";

      };
    };
  };
};
