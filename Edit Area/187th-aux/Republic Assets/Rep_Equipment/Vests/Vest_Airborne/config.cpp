class CfgPatches
{
	class 187th_Airborne_Vests
	{
		name = "187th Airborne Vests";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_CloneVestAirborne","187th_JLTS_CloneVestAirborne_Stripe","187th_JLTS_CloneVestAirborneNCO","187th_JLTS_CloneVestAirborneSGT"};
	};
};

class CfgWeapons
{
	class JLTS_CloneVestAirborne;
	class VestItem;
	class 187th_JLTS_CloneVestAirborne: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone Vest";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","MRC\JLTS\characters\CloneArmor\data\Clone_vest_heavy_co.paa"};
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};

	class 187th_JLTS_CloneVestAirborne_Stripe: JLTS_CloneVestAirborne
	{
	   displayName = "[187th] Airborne Clone Vest (Stripe)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","187th-aux\Data\Vests\Clone_187thABRecon_vest_co.paa"};
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborne.p3d";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};

	class JLTS_CloneVestAirborneNCO;
	class 187th_JLTS_CloneVestAirborneNCO: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Airborne Clone Vest (Corporal)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};

	class 187th_JLTS_CloneVestAirborneSGT: JLTS_CloneVestAirborneNCO
	{
	   displayName = "[187th] Airborne Clone Vest (SGT)";
	   model = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	   picture = "\MRC\JLTS\characters\CloneArmor\data\ui\CloneVestHeavy_ui_ca.paa";
	   hiddenSelections[] = {"camo1","camo2"};
	   hiddenSelectionsTextures[] = {"MRC\JLTS\characters\CloneArmor\data\Clone_vest_officer_co.paa","187th-aux\Data\Vests\Clone_vest_heavy_sgtmjr.paa"};
	   class ItemInfo: VestItem
	   {
	      uniformModel = "\MRC\JLTS\characters\CloneArmor\CloneVestAirborneNCO.p3d";
	      containerClass = "Supply100";
	      hiddenSelections[] = {"camo1","camo2"};
	      mass = 80;
	   };
	};
};