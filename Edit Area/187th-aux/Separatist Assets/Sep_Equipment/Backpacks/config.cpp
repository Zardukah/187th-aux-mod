class CfgPatches
{
	class 187th_CIS_Backpacks
	{
		name = "187th CIS Backpacks";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {};
	};
};

class CfgVehicles
{
	class JLTS_B1_backpack;
	class JLTS_B1_backpack_at_predef;
	class JLTS_B1_backpack_support_predef;
	class JLTS_B1_antenna;
	class 187_Clone_Beltbag;

	class 187th_B1_pack: JLTS_B1_backpack
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_E5_mag {count=10;magazine="JLTS_E5_mag";};
	  };
	  class TransportItems{};
	  class TransportWeapons{};
	};


	class 187th_B1_AT_pack: JLTS_B1_backpack_at_predef
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_RPS6_mag {count=2;magazine="JLTS_RPS6_mag";};
	   class _xx_JLTS_E5_mag {count=10;magazine="JLTS_E5_mag";};
	  };
	  class TransportItems
	  {
	   class _xx_FirstAidKit {count=2;name="FirstAidKit";};
	  };
	  class TransportWeapons{};
	};


	class 187th_B1_Security_pack: JLTS_B1_backpack
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_SBB3_mag {count=8;magazine="JLTS_SBB3_mag";};
	   class _xx_3AS_SonicDet {count=2;magazine="3AS_SonicDet";};
	   class _xx_3AS_SmokeWhite {count=2;magazine="3AS_SmokeWhite";};
	  };
	  class TransportItems
	  {
	   class _xx_FirstAidKit {count=1;name="FirstAidKit";};
	  };
	  class TransportWeapons{};
	};


	class 187th_B1_Sniper_pack: JLTS_B1_backpack
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_E5S_mag {count=4;magazine="JLTS_E5S_mag";};
	   class _xx_3AS_SmokeWhite {count=2;magazine="3AS_SmokeWhite";};
	  };
	  class TransportItems
	  {
	   class _xx_FirstAidKit {count=2;name="FirstAidKit";};
	  };
	  class TransportWeapons{};
	};


	class 187th_B1_Marksman_pack: JLTS_B1_backpack
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_DW32S_mag {count=4;magazine="JLTS_DW32S_mag";};
	   class _xx_3AS_SmokeWhite {count=2;magazine="3AS_SmokeWhite";};
	  };
	  class TransportItems
	  {
	   class _xx_FirstAidKit {count=2;name="FirstAidKit";};
	  };
	  class TransportWeapons{};
	};


	class 187th_B1_Support_pack: JLTS_B1_backpack_support_predef
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_E5C_mag {count=10;magazine="JLTS_E5C_mag";};
	   class _xx_3AS_ThermalDetonator {count=2;magazine="3AS_ThermalDetonator";};
	   class _xx_3AS_SmokeWhite {count=2;magazine="3AS_SmokeWhite";};
	  };
	  class TransportItems
	  {
	   class _xx_FirstAidKit {count=2;name="FirstAidKit";};
	  };
	  class TransportWeapons{};
	};


	class 187th_B1_Commander_pack: JLTS_B1_antenna
	{
	  scope=1;
	  class TransportMagazines{};
	  class TransportItems{};
	  class TransportWeapons{};
	};


	class 187th_B1_Crew_pack: JLTS_B1_backpack
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_E5_mag {count=8;magazine="JLTS_E5_mag";};
	  };
	  class TransportItems
	  {
	   class _xx_ToolKit {count=1;name="ToolKit";};
	   class _xx_FirstAidKit {count=2;name="FirstAidKit";};
	  };
	  class TransportWeapons{};
	};


	class 187th_BX_Commando_Covert_pack: 187_Clone_Beltbag
	{
	  scope=1;
	  class TransportMagazines
	  {
	   class _xx_JLTS_DC15A_mag {count=9;magazine="JLTS_DC15A_mag";};
	  };
	  class TransportItems{};
	  class TransportWeapons{};
	};
};