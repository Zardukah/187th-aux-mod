// This file is to ensure that other aux mods do not break anything to do with the 187th LAAT by overwritting classes.
// Current issue as of the making of this file is that 501st Aux Mod overwrites 3as_laat_Base and 3as_LAAT_Mk1.
// All code in this file should be credited to 3AS as we only changed 2 class names to ensure the above issue does not affect us.


class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};
class VehicleSystemsTemplateLeftPilot: DefaultVehicleSystemsDisplayManagerLeft
{
	class components;
};
class VehicleSystemsTemplateRightPilot: DefaultVehicleSystemsDisplayManagerRight
{
	class components;
};

class CfgAmmo
{
	class BulletBase;
	class B_127x99_Ball;
	class M_Scalpel_AT;
	class 3AS_Sabre_HE;
	class B_65x39_Case: BulletBase
	{
		class CamShakeFire;
	};
	class 187th_laserAmmo: 3AS_Sabre_HE
	{
		airFriction = 0;
		maxSpeed = 10000;
		indirecthit = 30;
		indirectHitRange = 3;
		hit = 100;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		model = "a3\weapons_f\data\bullettracer\tracer_green";
	};
	class 187th_laserAmmo_F: 3AS_Sabre_HE
	{
		hit = 130;
		indirectHit = 8;
		indirectHitRange = 3;
		explosive = 0.8;
		caliber = 5.4;
		airlock = 1;
		aiAmmoUsageFlags = "64 + 128 + 256 + 512";
		tracerScale = 2.5;
		tracerStartTime = 0.1;
		tracerEndTime = 4.7;
		explosionEffects = "ExploAmmoExplosion";
		craterEffects = "ExploAmmoCrater";
		model = "a3\weapons_f\data\bullettracer\tracer_green";
	};
	class 3as_LAAT_AGM_Missile: M_Scalpel_AT
	{
		displayname = "High Explosive AT";
		warheadName = "AT";
		hit = 1000;
		model = "3AS\3as_Laat\LAATI\model\proton_torpedo.p3d";
		indirecthit = 500;
		indirecthitrange = 3;
		caliber = 50;
	};
};
class CfgMagazines
{
	class 200Rnd_65x39_Belt;
	class VehicleMagazine;
	class PylonMissile_1Rnd_Missile_AA_03_F;
	class PylonRack_Missile_AGM_02_x2;
	class 3as_LAAT_8Rnd_Missile_AGM: PylonRack_Missile_AGM_02_x2
	{
		displayName = "Torrent Air-to-Ground Missile";
		count = 8;
		model = "3AS\3as_arc170\Model\torrent_rail_x1";
		ammo = "3as_LAAT_AGM_Missile";
	};
	class 187th_Laser_Battery: 200Rnd_65x39_Belt
	{
		ammo = "laserAmmo";
		count = 5000;
		tracersEvery = 1;
		model = "a3\weapons_f\data\bullettracer\tracer_green";
	};
	class 187th_Laser_Battery_F: VehicleMagazine
	{
		ammo = "laserAmmo_F";
		model = "a3\weapons_f\data\bullettracer\tracer_green";
		scope = 2;
		displayName = "Particle Laser";
		displayNameShort = "HE";
		count = 5000;
		tracersEvery = 0;
		lastRoundsTracer = 0;
		initSpeed = 1035;
		maxLeadSpeed = 83.3333;
		nameSound = "mg";
		muzzleImpulseFactor[] = {0.01,0.01};
	};
	class 3as_PylonMissile_LAAT_8Rnd_Missile_AA: PylonMissile_1Rnd_Missile_AA_03_F
	{
		displayName = "Sidewinder Air-to-Air Missile";
		count = 8;
		model = "a3\weapons_f\empty.p3d";
	};
};
class Cfgweapons
{
	class CannonCore;
	class autocannon_Base_F: CannonCore
	{
		class player;
	};
	class mortar_155mm_AMOS: CannonCore{};
	class cannon_120mm: CannonCore{};
	class MGun;
	class GMG_F: MGun{};
	class GMG_20mm: GMG_F{};
	class GMG_40mm: GMG_F
	{
		class manual;
	};
	class LMG_RCWS: MGun{};
	class LMG_M200: LMG_RCWS{};
	class weapon_AGM_65Launcher;
	class 3as_LAAT_Missile_AGM: weapon_AGM_65Launcher
	{
		displayName = "Torrent Air-to-Ground Missile";
		magazines[] = {"3as_LAAT_8Rnd_Missile_AGM"};
		model = "a3\weapons_f\empty.p3d";
	};
	class 3as_ARC_Missile_AA;
	class 3as_LAAT_Missile_AA: 3as_ARC_Missile_AA
	{
		displayName = "Sidewinder Air-to-Air Missile";
		magazines[] = {"3as_PylonMissile_LAAT_8Rnd_Missile_AA"};
		model = "a3\weapons_f\empty.p3d";
	};
	class 3as_LAAT_autocannon_30mm: LMG_M200
	{
		displayName = "LAAT 30mm Autocannon";
		muzzles[] = {"HE"};
		class GunParticles{};
		class HE: autocannon_Base_F
		{
			displayName = "LAAT 30mm Autocannon (HE)";
			magazines[] = {"3as_saber_80Rnd_autocannon_30mm_mag"};
			magazineReloadTime = 10;
			class player: player
			{
				reloadTime = 0.3;
				dispersion = 0.0018;
				magazineReloadTime = 10;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"3as\3as_saber\sounds\wpn_saberTank_autocannon_fire",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33};
					soundsetshot[] = {"Autocannon30mmTurret_Shot_SoundSet","Autocannon30mmBody_tail_SoundSet"};
				};
			};
		};
	};
	class 187th_ParticleBeamCannon_F: 3as_LAAT_autocannon_30mm
	{
		class GunParticles
		{
			class Effect
			{
				effectName = "";
				positionName = "z_gunl_chamber";
				directionName = "z_gunl_muzzle";
			};
			class Effect1
			{
				effectName = "";
				positionName = "z_gunR_chamber";
				directionName = "z_gunR_muzzle";
			};
		};
		class HE: HE
		{
			displayName = "Particle Beam Cannon";
			magazines[] = {"187th_Laser_Battery"};
			magazineReloadTime = 10;
			class player: player
			{
				reloadTime = 0.08;
				dispersion = 0.0018;
				magazineReloadTime = 10;
				sounds[] = {"StandardSound"};
				class StandardSound
				{
					begin1[] = {"3AS\3as_Laat\sounds\LAAT_Cannon.wav",1.99526,1,1500};
					soundBegin[] = {"begin1",0.33};
					soundsetshot[] = {"3AS_LAATBall_SoundSet"};
				};
			};
		};
	};
	class 187th_ParticleBeamCannon: LMG_RCWS
	{
		displayName = "Particle Cannon";
		magazineReloadTime = 10;
		ballisticsComputer = 2;
		aiDispersionCoefY = 0.5;
		aiDispersionCoefX = 0.5;
		scope = 1;
		class GunParticles{};
		class manual: MGun
		{
			displayName = "Heavy Repeater";
			sounds[] = {"StandardSound"};
			class BaseSoundModeType
			{
				closure1[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_2",0.316228,1,20};
				closure2[] = {"A3\sounds_f\weapons\gatling\gatling_rotation_short_3",0.316228,1,20};
				soundClosure[] = {"closure1",0.5,"closure2",0.5};
			};
			class StandardSound: BaseSoundModeType
			{
				begin1[] = {"3AS\3as_Laat\sounds\LAAT_Cannon.wav",1.99526,1,1500};
				soundBegin[] = {"begin1",0.33};
				soundsetshot[] = {"3AS_LAATBall_SoundSet"};
			};
			soundContinuous = 1;
			soundBurst = 0;
			multiplier = 1;
			reloadTime = 0.0333333;
			dispersion = 0;
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 10;
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 1;
			midRangeProbab = 0.01;
			maxRange = 2;
			maxRangeProbab = 0.01;
		};
		class close: manual
		{
			soundBurst = 0;
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 12;
			burstRangeMax = 42;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 50;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 100;
			midRangeProbab = 0.75;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class short: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 36;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 150;
			minRange = 100;
			minRangeProbab = 0.75;
			midRange = 300;
			midRangeProbab = 0.75;
			maxRange = 600;
			maxRangeProbab = 0.2;
		};
		class medium: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 30;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 300;
			minRange = 300;
			minRangeProbab = 0.75;
			midRange = 600;
			midRangeProbab = 0.65;
			maxRange = 800;
			maxRangeProbab = 0.1;
		};
		class far: close
		{
			aiBurstTerminable = 1;
			showToPlayer = 0;
			burst = 8;
			burstRangeMax = 12;
			aiRateOfFire = 0.5;
			aiRateOfFireDispersion = 0;
			aiRateOfFireDistance = 800;
			minRange = 800;
			minRangeProbab = 0.65;
			midRange = 1000;
			midRangeProbab = 0.3;
			maxRange = 1500;
			maxRangeProbab = 0.05;
		};
		drySound[] = {"A3\Sounds_F\arsenal\weapons_vehicles\LMG_Minigun_65mm\LMGMinigun65mm_dry.wss",1,1,10};
		magazines[] = {"187th_Laser_Battery_F"};
	};
	class 187th_ParticleBeamCannon_B: 187th_ParticleBeamCannon_F
	{
		class GunParticles
		{
			class Effect
			{
				effectName = "";
				positionName = "b_start";
				directionName = "b_end";
			};
		};
	};
	class 187th_ParticleBeamCannon_R: 187th_ParticleBeamCannon{};
};
class CfgSoundShaders
{
	class 3AS_LAAT_SoundShader
	{
		samples[] = {{"3AS\3as_Laat\sounds\LAAT_Cannon.wav",1}};
		volume = 1;
		range = 800;
	};
	class 3AS_LAATBall_SoundShader
	{
		samples[] = {{"3AS\3as_Laat\sounds\LAAT_Ball.ogg",1}};
		volume = 1;
		range = 800;
	};
};
class CfgSoundSets
{
	class 3AS_LAAT_SoundSet
	{
		soundShaders[] = {"3AS_LAAT_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 1;
		loop = 0;
	};
	class 3AS_LAATBall_SoundSet
	{
		soundShaders[] = {"3AS_LAATBall_SoundShader"};
		volumeFactor = 1.0;
		volumeCurve = "InverseSquare2Curve";
		sound3DProcessingType = "WeaponMediumShot3DProcessingType";
		distanceFilter = "weaponShotDistanceFreqAttenuationFilter";
		occlusionFactor = 0.5;
		obstructionFactor = 0.3;
		spatial = 1;
		doppler = 1;
		loop = 0;
	};
};
