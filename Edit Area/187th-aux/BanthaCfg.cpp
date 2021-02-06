class 212th_B_APC_Wheeled_01_cannon_F;
	class 212th_B_APC_Wheeled_01_cannon_F_OCimport_1: 212th_B_APC_Wheeled_01_cannon_F
	{
		scope = 0;
		class EventHandlers;
		class Turrets;
	};
	class 212th_B_APC_Wheeled_01_cannon_F_OCimport_2: 212th_B_APC_Wheeled_01_cannon_F_OCimport_1
	{
		class TransportMagazines
		{
			class _xx_DCStun_Mag
			{
				magazine = "DCStun_Mag";
				count = 40;
			};
			class _xx_3Rnd_UGL_FlareGreen_F
			{
				magazine = "3Rnd_UGL_FlareGreen_F";
				count = 2;
			};
			class _xx_3Rnd_UGL_FlareRed_F
			{
				magazine = "3Rnd_UGL_FlareRed_F";
				count = 2;
			};
			class _xx_3Rnd_UGL_FlareWhite_F
			{
				magazine = "3Rnd_UGL_FlareWhite_F";
				count = 2;
			};
			class _xx_3Rnd_SmokeRed_Grenade_shell
			{
				magazine = "3Rnd_SmokeRed_Grenade_shell";
				count = 5;
			};
			class _xx_3Rnd_SmokeGreen_Grenade_shell
			{
				magazine = "3Rnd_SmokeGreen_Grenade_shell";
				count = 2;
			};
			class _xx_3Rnd_SmokeBlue_Grenade_shell
			{
				magazine = "3Rnd_SmokeBlue_Grenade_shell";
				count = 2;
			};
			class _xx_212th_RPS6_HEAA
			{
				magazine = "212th_RPS6_HEAA";
				count = 4;
			};
			class _xx_212th_PLX1_Missile
			{
				magazine = "212th_PLX1_Missile";
				count = 2;
			};
			class _xx_212th_35Rnd_DC15A_mag
			{
				magazine = "212th_35Rnd_DC15A_mag";
				count = 40;
			};
			class _xx_212th_3Rnd_Smoke_Grenade_shell
			{
				magazine = "212th_3Rnd_Smoke_Grenade_shell";
				count = 10;
			};
			class _xx_SWOP_termDet_G
			{
				magazine = "SWOP_termDet_G";
				count = 10;
			};
			class _xx_SW_halfshield_Mag
			{
				magazine = "SW_halfshield_Mag";
				count = 10;
			};
			class _xx_212th_200Rnd_VALKEN38SAW_mag
			{
				magazine = "212th_200Rnd_VALKEN38SAW_mag";
				count = 8;
			};
			class _xx_3Rnd_HE_Grenade_shell
			{
				magazine = "3Rnd_HE_Grenade_shell";
				count = 10;
			};
			class _xx_212th_45Rnd_DC15S_mag
			{
				magazine = "212th_45Rnd_DC15S_mag";
				count = 40;
			};
			class _xx_OPTRE_M2_Smoke_Purple
			{
				magazine = "OPTRE_M2_Smoke_Purple";
				count = 6;
			};
			class _xx_212th_600Rnd_z6_mag
			{
				magazine = "212th_600Rnd_z6_mag";
				count = 2;
			};
			class _xx_212th_35Rnd_DC17_mag
			{
				magazine = "212th_35Rnd_DC17_mag";
				count = 40;
			};
			class _xx_OPTRE_M2_Smoke
			{
				magazine = "OPTRE_M2_Smoke";
				count = 20;
			};
			class _xx_OPTRE_M8_Flare_Green
			{
				magazine = "OPTRE_M8_Flare_Green";
				count = 6;
			};
			class _xx_OPTRE_M2_Smoke_Green
			{
				magazine = "OPTRE_M2_Smoke_Green";
				count = 6;
			};
			class _xx_OPTRE_M2_Smoke_Blue
			{
				magazine = "OPTRE_M2_Smoke_Blue";
				count = 6;
			};
			class _xx_OPTRE_M8_Flare_Blue
			{
				magazine = "OPTRE_M8_Flare_Blue";
				count = 6;
			};
			class _xx_OPTRE_M2_Smoke_Red
			{
				magazine = "OPTRE_M2_Smoke_Red";
				count = 6;
			};
		};
		class TransportWeapons
		{
			class _xx_212th_arifle_DC15S_F
			{
				weapon = "212th_arifle_DC15S_F";
				count = 3;
			};
		};
		class TransportItems
		{
			class _xx_ACE_packingBandage
			{
				name = "ACE_packingBandage";
				count = 50;
			};
			class _xx_ACE_elasticBandage
			{
				name = "ACE_elasticBandage";
				count = 50;
			};
			class _xx_ACE_quikclot
			{
				name = "ACE_quikclot";
				count = 100;
			};
			class _xx_ACE_salineIV_250
			{
				name = "ACE_salineIV_250";
				count = 20;
			};
			class _xx_ACE_salineIV_500
			{
				name = "ACE_salineIV_500";
				count = 10;
			};
			class _xx_ACE_CableTie
			{
				name = "ACE_CableTie";
				count = 10;
			};
			class _xx_ACE_tourniquet
			{
				name = "ACE_tourniquet";
				count = 10;
			};
		};
		class EventHandlers;
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};

class 187th_Bantha_MK1_01: 212th_B_APC_Wheeled_01_cannon_F_OCimport_2
	{
		author = "CW-1212 ""Umbra""";
		scope = 1;
		scopeCurator = 1;
		vehicleClass = "GAR_LNDCatNSub";
		editorSubcategory = "GAR_LNDCatNSub";
		displayName = "THIS Bantha";
		side = 1;
		faction = "B_SCI212thAB";
		crew = "B_SCI212thAB_212th_Crewman_01";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				gunnerType = "B_SCI212thAB_212th_Crewman_01";
			};
		};
		class EventHandlers: EventHandlers
		{
			class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base{};
			class ALiVE_orbatCreator
			{
				init = "if (local (_this select 0)) then {_onSpawn = {sleep 0.3; _unit = _this select 0;};_this spawn _onSpawn;(_this select 0) addMPEventHandler ['MPRespawn', _onSpawn];};";
			};
		};
		ALiVE_orbatCreator_owned = 1;
	};