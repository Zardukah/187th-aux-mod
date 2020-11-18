class CfgWeapons
{
// main import
	class UniformItem;
	class Uniform_Base;
	
	
/***********************************************************************************************************
--------------------------------------------------------------Uniforms---------------------------------------
************************************************************************************************************/
// Other Uniform stuff imports
	class JLTS_CloneArmor;
	class 187th_Clone_Armor;
	class U_I_CombatUniform;
	class B_soldier_base_F;
	class 187th_CloneArmor_Recruit;
	
	
	class 187th_Clone_Recruit: U_I_CombatUniform //Current issue... DOESN'T SHOW UP
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		displayName = "[187th] Clone Armor (Recruit)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Recruit";
			containerClass	= "Supply150";
			mass = 40;
		};
		
	};
	
	class 187th_Clone_Trooper: U_I_CombatUniform
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		displayName = "[187th] Clone Armor (Trooper)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Trooper";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
	class 187th_Clone_Medic: U_I_CombatUniform
	{
		author 	= "PraetorPanda";
		dlc		= "187th Aux Mod";
		scope 	= 2;
		scopeCurator=2;
		displayName = "[187th] Clone Armor (Medic)";
		picture="\MRC\JLTS\characters\CloneArmor\data\ui\CloneArmor_ui_ca.paa";
		model="\MRC\JLTS\characters\CloneArmor\CloneArmor.p3d";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass = "187th_CloneArmor_Medic";
			containerClass	= "Supply150";
			mass = 40;
		};
	};
	
/***********************************************************************************************************
--------------------------------------------------------------Vests------------------------------------------
************************************************************************************************************/

	
};