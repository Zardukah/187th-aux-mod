class CfgPatches
{
	class 187th_CIS_Weapons
	{
		name = "187th CIS Weapons";
		author = "Panda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {};
		weapons[] = {"187th_JLTS_E5","187th_JLTS_E5_Stun","187th_JLTS_RG4D","187th_JLTS_RPS6","187th_JLTS_SBB3","187th_JLTS_E5S","187th_JLTS_DW32S","187th_JLTS_E5C_stock","187th_WBK_B2_NormalMod","187th_WBK_B2_GrenadeMod","187th_WBK_B2_ShotgunMod","187th_WBK_lightsaber_sith","187th_WBK_Dutch_Vibro"};
	};
};

class CfgWeapons
{
	class JLTS_E5;
	class JLTS_RG4D;
	class JLTS_RPS6;
	class JLTS_SBB3;
	class JLTS_E5S;
	class JLTS_DW32S;
	class JLTS_E5C_stock;
	class WBK_B2_NormalMod;
	class WBK_B2_GrenadeMod;
	class WBK_B2_ShotgunMod;
	class WBK_lightsaber_sith;
	class WBK_Dutch_Vibro;
	class JLTS_DC15A_plastic;
	class JLTS_DC17SA;
	class JLTS_stun_muzzle;
	class JLTS_E5_shield;

	class 187th_JLTS_E5: JLTS_E5
	{
	  displayName="E-5";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_E5_Stun: JLTS_E5
	{
	  displayName="E-5 (Stun)";
	  scope=2;
	  class LinkedItems
	  {
	  };
	  muzzles[] = {"this","Stun"};
	  class Stun: JLTS_stun_muzzle{};
	};

	class 187th_JLTS_RG4D: JLTS_RG4D
	{
	  displayName="RG-4D";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_RPS6: JLTS_RPS6
	{
	  displayName="RPS-6";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_SBB3: JLTS_SBB3
	{
	  displayName="SB-B3";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_E5S: JLTS_E5S
	{
	  displayName="E-5S";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_DW32S: JLTS_DW32S
	{
	  displayName="DW-32S";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_E5C_stock: JLTS_E5C_stock
	{
	  displayName="E-5C (stock)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_B2_NormalMod: WBK_B2_NormalMod
	{
	  displayName="B2 Super Battle Droid (Normal MOD)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_B2_GrenadeMod: WBK_B2_GrenadeMod
	{
	  displayName="B2 Super Battle Droid (GL MOD)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_B2_ShotgunMod: WBK_B2_ShotgunMod
	{
	  displayName="B2 Super Battle Droid (Shotgun MOD)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_lightsaber_sith: WBK_lightsaber_sith
	{
	  displayName="Lightsaber (Sii-Taa) (Red)";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_WBK_Dutch_Vibro: WBK_Dutch_Vibro
	{
	  displayName="BX Commando Vibroblade";
	  scope=1;
	  class LinkedItems
	  {
	  };
	};

	class 187th_JLTS_E5_shield: JLTS_E5_shield
	{
	    displayName = "[187th] E5 (Shield)"
	    scope = 1;
	    baseWeapon = "187th_JLTS_E5_shield";
	    class LinkedItems
	    {
	        class LinkedItemsUnder
	        {
	            slot = "UnderBarrelSlot";
	            item = "JLTS_riot_shield_droid_attachment";
	        };
	    };
	};
};