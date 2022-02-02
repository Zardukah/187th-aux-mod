// This file is to ensure that other aux mods do not break anything to do with the 187th LAAT by overwritting classes.
// Current issue as of the making of this file is that 501st Aux Mod overwrites 3as_laat_Base and 3as_LAAT_Mk1.
// All code in this file should be credited to 3AS as we only changed 2 class names to ensure the above issue does not affect us.

class Helicopter;
class Items_base_F;
class House_F;
class Helicopter_Base_F: Helicopter
{
	class Turrets;
	class HitPoints;
};
class Helicopter_Base_H: Helicopter_Base_F
{
	class CargoTurret;
	class ACE_selfActions;
	class Turrets: Turrets
	{
		class MainTurret;
	};
	class AnimationSources;
	class Eventhandlers;
	class Viewoptics;
	class ViewPilot;
	class RotorLibHelicopterProperties;
	class HitPoints: HitPoints
	{
		class HitHull;
		class HitFuel;
		class HitEngine;
		class HitHRotor;
		class HitVRotor;
		class HitAvionics;
	};
};
class 3as_laat_Base: Helicopter_Base_H
{
	tas_max_impulse = 800;
	tas_impulse_break = 100;
	tas_can_impulse = 1;
	author = "$STR_3as_Studio";
	unitInfoType = "RscOptics_CAS_Pilot";
	driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
	allowTabLock = 1;
	_generalMacro = "3as_laat_Base";
	scope = 0;
	displayName = "LAAT/I";
	model = "3as\3as_laat\LAATi\model\tcw_laat.p3d";
	icon = "\3AS\3as_Laat\LAATI\data\ui\Map_laat_CA.paa";
	picture = "3AS\3as_Laat\LAATI\data\ui\LAAT_Profile_ca.paa";
	editorpreview = "\3AS\3as_Laat\LAATI\data\editorpreview\3as_laat.jpg";
	editorSubcategory = "EdSubcat_Helicopters";
	memoryPointSupply = "doplnovani";
	memoryPointTaskMarker = "TaskMarker_1_pos";
	cargoaction[] = {"passenger_boat_holdleft","passenger_boat_holdleft","passenger_boat_holdleft"};
	class HitPoints
	{
		class HitHull
		{
			armor = 999;
			convexComponent = "hull_hit";
			depends = "Total";
			explosionShielding = 1;
			material = 51;
			name = "hull_hit";
			passThrough = 1;
			visual = "zbytek";
			radius = 0.01;
		};
		class HitFuel
		{
			convexcomponent = "engine_hit";
			hitpoint = "engine_hit";
			name = "engine_hit";
			explosionShielding = 2;
			radius = 0.1;
			visual = "";
			passthrough = 0.1;
			minimalhit = 0.1;
			material = -1;
			armor = 0.6;
		};
		class HitEngine
		{
			armor = 0.5;
			convexComponent = "engine_hit";
			explosionShielding = 2;
			material = 51;
			name = "engine_hit";
			hitpoint = "engine_hit";
			passThrough = 1;
			visual = "";
			radius = 0.2;
		};
		class HitEngine_1: HitEngine
		{
			convexComponent = "engine_hit_1";
			name = "engine_hit_1";
			hitpoint = "engine_hit_1";
		};
		class HitEngine_2: HitEngine
		{
			convexComponent = "engine_hit_2";
			name = "engine_hit_2";
			hitpoint = "engine_hit_2";
		};
		class HitHRotor
		{
			armor = 3;
			convexComponent = "main_rotor_hit";
			explosionShielding = 2.5;
			material = 51;
			name = "main_rotor_hit";
			passThrough = 0.1;
			visual = "";
			radius = 0.01;
		};
		class HitVRotor
		{
			armor = 3;
			convexComponent = "tail_rotor_hit";
			explosionShielding = 6;
			material = 51;
			name = "tail_rotor_hit";
			passThrough = 0.3;
			visual = "";
			radius = 0.01;
		};
		class HitAvionics
		{
			armor = 2;
			convexComponent = "avionics_hit";
			explosionShielding = 5;
			material = 51;
			name = "avionics_hit";
			passThrough = 1;
			visual = "";
			radius = 0.5;
		};
		class HitGlass1
		{
			armor = 2;
			name = "HitGlass1";
			radius = 0.4;
			visual = "";
			passThrough = 1;
			explosionShielding = 3;
		};
		class HitGlass2
		{
			armor = 2;
			name = "HitGlass2";
			radius = 0.4;
			visual = "";
			passThrough = 1;
			explosionShielding = 3;
		};
		class HitGlass3
		{
			armor = 2;
			name = "HitGlass3";
			radius = 0.4;
			visual = "";
			passThrough = 1;
			explosionShielding = 3;
		};
	};
	driveOnComponent[] = {"Skids"};
	accuracy = 0.5;
	geardowntime = 1.5;
	gearretracting = 1;
	gearuptime = 1.5;
	gearMinAlt = 0.0;
	gearsUpFrictionCoef = 0.001;
	nameSound = "veh_helicopter_s";
	fuelCapacity = 700;
	fuelConsumptionRate = 0.2;
	mainBladeRadius = 0.1;
	liftForceCoef = 3;
	bodyFrictionCoef = 1.9845;
	cyclicAsideForceCoef = 2.8;
	backRotorForceCoef = 1.8;
	cyclicForwardForceCoef = 2;
	acceleration = 450;
	maxSpeed = 600;
	brakeDistance = 400;
	mainRotorSpeed = -1;
	backRotorSpeed = 1;
	hasterminal = 1;
	maxMainRotorDive = 7;
	minMainRotorDive = -7;
	neutralMainRotorDive = 0;
	class RotorLibHelicopterProperties
	{
		RTDconfig = "A3\Air_F_Beta\Heli_Attack_02\RTD_Heli_Attack_02.xml";
		autoHoverCorrection[] = {3.2,0,0};
		defaultCollective = 0.805;
		retreatBladeStallWarningSpeed = 83;
		maxTorque = 5800;
		stressDamagePerSec = 0.01;
		maxHorizontalStabilizerLeftStress = 8000;
		maxHorizontalStabilizerRightStress = 8000;
		maxVerticalStabilizerStress = 4000;
		horizontalwingsAngleCollMin = 0;
		horizontalwingsAngleCollMax = 0;
		maxMainRotorStress = 225000;
		maxTailRotorStress = 225000;
	};
	startDuration = 4.5;
	castDriverShadow = 0;
	canFloat = 1;
	waterLeakiness = 0.2;
	waterResistanceCoef = 0.9;
	waterResistance = 1;
	waterLinearDampingCoefY = 3;
	waterLinearDampingCoefX = 2;
	waterAngularDampingCoef = 3;
	maxFordingDepth = 110.65;
	armor = 200;
	armorStructural = 1;
	altFullForce = 137400;
	altNoForce = 172400;
	crewCrashProtection = 0;
	explosionShielding = 0.33;
	epeImpulseDamageCoef = 0;
	soundEngineOnInt[] = {"3as\3as_laat\sounds\LAAT_Start.ogg","volume_sound/2",1};
	soundEngineOnExt[] = {"3as\3as_laat\sounds\LAAT_Start.ogg","volume_sound*1.5",1,300};
	soundEngineOffInt[] = {"3as\3as_laat\sounds\LAAT_End.ogg","volume_sound/2",1};
	soundEngineOffExt[] = {"3as\3as_laat\sounds\LAAT_End.ogg","volume_sound*1.5",1,300};
	hiddenSelections[] = {"camo","camo1","camo2","camo3","camo4"};
	hiddenSelectionsTextures[] = {"3AS\3as_Laat\LAATI\data\Hull_CO.paa","3AS\3as_Laat\LAATI\data\Wings_CO.paa","3AS\3as_Laat\LAATI\data\Weapons_CO.paa","3AS\3as_Laat\LAATI\data\Weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\Interior_CO.paa"};
	class TransportMagazines{};
	class TransportWeapons{};
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
			count = 50;
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
		class _xx_ACE_salineIV
		{
			name = "ACE_salineIV";
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
		class _xx_ACE_adenosine
		{
			name = "ACE_adenosine";
			count = 20;
		};
		class _xx_ACE_morphine
		{
			name = "ACE_morphine";
			count = 10;
		};
		class _xx_ACE_epinephrine
		{
			name = "ACE_epinephrine";
			count = 20;
		};
		class _xx_ToolKit
		{
			name = "ToolKit";
			count = 1;
		};
	};
	class UserActions
	{
		class rampOpen
		{
			available = 0;
			showWindow = 0;
			displayName = "Ramp Open";
			position = "pilotview";
			radius = 9;
			condition = "(player == driver this) AND (this animationphase 'ramp' ==0)";
			statement = "this animateSource ['ramp',1,1];";
			onlyforplayer = 0;
		};
		class rampClose
		{
			available = 0;
			showWindow = 0;
			displayName = "Ramp Close";
			position = "pilotview";
			radius = 9;
			condition = "(player == driver this) AND (this animationphase 'ramp' ==1)";
			statement = "this animateSource ['ramp',0,1];";
			onlyforplayer = 0;
		};
		class impulseOn
		{
			showWindow = 0;
			hideOnUse = 1;
			priority = 9;
			displayName = "Activate Impulse";
			position = "pilotview";
			radius = 6;
			onlyforplayer = 1;
			condition = "(player == driver this) AND !(this getvariable [""laat_boosting"",false])";
			statement = "[] spawn TAS_fnc_Impulse;";
		};
		class impulseOff
		{
			showWindow = 0;
			hideOnUse = 1;
			priority = 9;
			displayName = "Deactivate Impulse";
			position = "pilotview";
			radius = 6;
			onlyforplayer = 1;
			condition = "(player == driver this) AND (this getvariable [""laat_boosting"",false])";
			statement = "[] spawn TAS_fnc_ImpulseOff;";
		};
	};
	class Sounds
	{
		class EngineExt
		{
			sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",1.7782794,1,800};
			frequency = "rotorSpeed";
			volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
		};
		class RotorExt
		{
			sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",1.4125376,0.8,2000};
			frequency = "rotorSpeed*1.1";
			volume = "camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 0)/ 900),(((-150) max 500)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 500)/ 900),(((-200) max 500)/ 900)])) / 3";
			cone[] = {1.6,3.14,1.6,0.95};
		};
		class RotorSwistExt
		{
			sound[] = {"3as\3as_laat\sounds\LAAT_Impulse.ogg",2,1,2000};
			frequency = 1;
			volume = "2 * camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
			cone[] = {1,1.4,1,0};
		};
		class EngineInt
		{
			sound[] = {"3as\3as_laat\sounds\LAAT_Impulse.ogg",0.7943282,1};
			frequency = "rotorSpeed";
			volume = "(1-camPos)*(rotorSpeed factor[0.4,1])";
		};
		class RotorInt
		{
			sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",1,0.8};
			frequency = "rotorSpeed*1.1";
			volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
		};
		class TransmissionDamageExt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageExt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase1
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class TransmissionDamageInt_phase2
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
			frequency = "0.66 + rotorSpeed / 3";
			volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
		};
		class damageAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
		};
		class damageAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.22387211,1,20};
			frequency = 1;
			volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
		};
		class rotorLowAlarmInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
			frequency = 1;
			volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class rotorLowAlarmExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1,20};
			frequency = 1;
			volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
		};
		class scrubLandInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
			frequency = 1;
			volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubLandExt
		{
			sound[] = {"",1,1,100};
			frequency = 1;
			volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
			frequency = 1;
			volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
		};
		class scrubBuildingExt
		{
			sound[] = {"",1,1,100};
			frequency = 1;
			volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
		};
		class scrubTreeInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
			frequency = 1;
			volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
		};
		class scrubTreeExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
			frequency = 1;
			volume = "camPos * ((scrubTree) factor [0, 0.01])";
		};
		class RainExt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
			frequency = 1;
			volume = "camPos * (rain - rotorSpeed/2) * 2";
		};
		class RainInt
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
			frequency = 1;
			volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
		};
		class SlingLoadDownExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1.2589254,1,500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpExt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1.2589254,1,500};
			frequency = 1;
			volume = "camPos*(slingLoadActive factor [0,1])";
		};
		class SlingLoadDownInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
		};
		class SlingLoadUpInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
			frequency = 1;
			volume = "(1-camPos)*(slingLoadActive factor [0,1])";
		};
		class WindInt
		{
			sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.33095738,1,50};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
		};
		class GStress
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c",0.6,1,50};
			frequency = 1;
			volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
		};
		class SpeedStress
		{
			sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1,1,50};
			frequency = 1;
			volume = "(1-camPos)*(speed factor[50,80])";
		};
	};
	class SoundsExt
	{
		class SoundEvents{};
		class Sounds
		{
			class EngineExt
			{
				sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",1.7782794,1,800};
				frequency = "rotorSpeed";
				volume = "2 * camPos * (0 max (rotorSpeed-0.4))";
			};
			class RotorExt
			{
				sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",1.4125376,0.8,2000};
				frequency = "rotorSpeed*1.1";
				volume = "camPos**(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
				cone[] = {1.6,3.14,1.6,0.95};
			};
			class RotorSwistExt
			{
				sound[] = {"3as\3as_laat\sounds\LAAT_Impulse.ogg",1,1,2000};
				frequency = 1;
				volume = "2 * camPos*(((((-speed*3.6) max speed*3.6)/ 900) factor[(((-0) max 300)/ 900),(((-150) max 900)/ 900)]) * ((((-speed*3.6) max speed*3.6)/ 900) factor[(((-250) max 900)/ 900),(((-200) max 900)/ 900)]))";
				cone[] = {1,1.4,1,0};
			};
			class EngineInt
			{
				sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",0.7943282,1};
				frequency = "rotorSpeed";
				volume = "(1-camPos)*(rotorSpeed factor[0.4,1])";
			};
			class RotorInt
			{
				sound[] = {"3as\3as_laat\sounds\LAAT_Idle.ogg",1,0.8};
				frequency = "rotorSpeed*1.1";
				volume = "(1-camPos)*(0 max (rotorSpeed-0.1))*(1 + rotorThrust)";
			};
			class TransmissionDamageExt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageExt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_ext_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "camPos * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase1
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_1",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.3, 0.35]) * (transmissionDamage factor [0.5, 0.45]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class TransmissionDamageInt_phase2
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_damage_transmission_int_2",1,1,150};
				frequency = "0.66 + rotorSpeed / 3";
				volume = "(1 - camPos) * (transmissionDamage factor [0.45, 0.5]) * (rotorSpeed factor [0.2, 0.5])";
			};
			class damageAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0.0, 0.001])";
			};
			class damageAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_bluefor",0.22387211,1,20};
				frequency = 1;
				volume = "engineOn * camPos * ( 1 - ((transmissionDamage factor [0.61, 0.60]) * (motorDamage factor [0.61, 0.60]) * (rotorDamage factor [0.51, 0.50]))) * (rotorSpeed factor [0, 0.001])";
			};
			class rotorLowAlarmInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.31622776,1};
				frequency = 1;
				volume = "engineOn * (1 - camPos) * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class rotorLowAlarmExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\heli_alarm_rotor_low",0.22387211,1,20};
				frequency = 1;
				volume = "engineOn * camPos * (rotorSpeed factor [0.9, 0.8999]) * (rotorSpeed factor [-0.5, 1]) * (speed factor [3, 3.01])";
			};
			class scrubLandInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "2 * (1-camPos) * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubLandExt
			{
				sound[] = {"",1,100};
				frequency = 1;
				volume = "camPos * (scrubLand factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wheelsInt",1,1,100};
				frequency = 1;
				volume = "(1-camPos) * (scrubBuilding factor[0.02, 0.05]) * (1 - (lateralMovement factor [0.7,1]))";
			};
			class scrubBuildingExt
			{
				sound[] = {"",1,1,100};
				frequency = 1;
				volume = "camPos * (scrubBuilding factor[0.02, 0.05])";
			};
			class scrubTreeInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeInt",1,1,100};
				frequency = 1;
				volume = "(1 - camPos) * ((scrubTree) factor [0, 0.01])";
			};
			class scrubTreeExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\scrubTreeExt",1,1,100};
				frequency = 1;
				volume = "camPos * ((scrubTree) factor [0, 0.01])";
			};
			class RainExt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_ext",1,1,100};
				frequency = 1;
				volume = "camPos * (rain - rotorSpeed/2) * 2";
			};
			class RainInt
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\rain1_int",1,1,100};
				frequency = 1;
				volume = "(1-camPos)*(rain - rotorSpeed/2)*2";
			};
			class SlingLoadDownExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpExt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpEXT",1,1,500};
				frequency = 1;
				volume = "camPos*(slingLoadActive factor [0,1])";
			};
			class SlingLoadDownInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineDownINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,-1])";
			};
			class SlingLoadUpInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\SL_engineUpINT",1,1,500};
				frequency = 1;
				volume = "(1-camPos)*(slingLoadActive factor [0,1])";
			};
			class WindInt
			{
				sound[] = {"A3\Sounds_F\vehicles\air\noises\wind_closed",0.33095738,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[5, 60])*(speed factor[5, 60])";
			};
			class GStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress2c",0.6,1,50};
				frequency = 1;
				volume = "engineOn * (1-camPos) * ((gmeterZ factor[1.5, 2.5]) + (gmeterZ factor[0.5, -0.5]))";
			};
			class SpeedStress
			{
				sound[] = {"A3\Sounds_F\vehicles\noises\vehicle_stress3",1,1,50};
				frequency = 1;
				volume = "(1-camPos)*(speed factor[50,80])";
			};
		};
	};
	ace_fastroping_enabled = 1;
	ace_fastroping_ropeOrigins[] = {{1.5,1,-3.5},{1.5,2.5,-3.5},{1.5,-1,-3.5},{-1.5,1,-3.5},{-1.5,2.5,-3.5},{-1.5,-1,-3.5}};
	ace_fastroping_onCut = "ace_fastroping_fnc_onCutCommon";
	ace_fastroping_onPrepare = "ace_fastroping_fnc_onPrepareCommon";
	ace_cargo_space = 40;
	ace_cargo_hasCargo = 1;
	slingLoadMaxCargoMass = 50000;
	slingLoadMemoryPoint = "sling";
	radarType = 8;
	preciseGetInOut = 0;
	cargoPreciseGetInOut[] = {0};
	driverAction = "LAAT_Pilot";
	getInAction = "ChopperLight_L_In_H";
	getOutAction = "GetOutLow";
	memoryPointsGetInCargo[] = {"pos_cargo"};
	memoryPointsGetInCargoDir[] = {"pos_cargo_dir"};
	usePreciseGetInAction = 0;
	memoryPointsGetInDriverPrecise = "";
	memorypointsgetindriver = "pos_driver";
	memorypointsgetindriverdir = "pos_driver_dir";
	memoryPointsGetInCargoPrecise[] = {"GetIn_Cargo","GetIn_Cargo2"};
	cargoGetInAction[] = {"GetInLow"};
	cargoGetOutAction[] = {"GetOutLow"};
	getInRadius = 5;
	typicalCargo[] = {"B_HeliPilot_F"};
	memorypointlmissile = "Rocket_1";
	memorypointrmissile = "Rocket_2";
	memoryPointLRocket = "Rocket_1";
	memoryPointRRocket = "Rocket_2";
	driverHasFlares = 1;
	incomingMissileDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
	LockDetectionSystem = "1 + 2 + 4 + 8 + 16 + 32";
	weapons[] = {"ParticleBeamCannon_F","3as_LAAT_Missile_AGM","3as_LAAT_Missile_AA","CMFlareLauncher"};
	magazines[] = {"3as_PylonMissile_LAAT_8Rnd_Missile_AA","3as_LAAT_8Rnd_Missile_AGM","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","240Rnd_CMFlare_Chaff_Magazine","Laser_Battery","Laser_Battery","Laser_Battery"};
	memoryPointGun[] = {"z_gunL_muzzle","z_gunR_muzzle"};
	gunBeg[] = {"z_gunL_muzzle","z_gunR_muzzle"};
	gunEnd[] = {"z_gunL_chamber","z_gunR_chamber"};
	memoryPointDriverOptics = "PilotCamera";
	memorypointcm[] = {"flare_launcher1","flare_launcher2"};
	memorypointcmdir[] = {"flare_launcher1_dir","flare_launcher2_dir"};
	class pilotCamera
	{
		class OpticsIn
		{
			class Wide
			{
				opticsDisplayName = "WFOV";
				initAngleX = 0;
				minAngleX = 0;
				maxAngleX = 0;
				initAngleY = 0;
				minAngleY = 0;
				maxAngleY = 0;
				initFov = "(30 / 120)";
				minFov = "(30 / 120)";
				maxFov = "(30 / 120)";
				directionStabilized = 1;
				visionMode[] = {"Normal","Ti"};
				thermalMode[] = {0,1};
				gunnerOpticsModel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				opticsPPEffects[] = {"OpticsCHAbera2","OpticsBlur2"};
			};
			class Medium: Wide
			{
				opticsDisplayName = "MFOV";
				initFov = "(15 / 120)";
				minFov = "(15 / 120)";
				maxFov = "(15 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
			};
			class Narrow: Wide
			{
				opticsDisplayName = "NFOV";
				initFov = "(3.75 / 120)";
				minFov = "(3.75 / 120)";
				maxFov = "(3.75 / 120)";
				gunnerOpticsModel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
			};
			showMiniMapInOptics = 1;
			showUAVViewInOptics = 0;
			showSlingLoadManagerInOptics = 0;
		};
		minTurn = -120;
		maxTurn = 120;
		initTurn = 0;
		minElev = -120;
		maxElev = 10;
		initElev = 0;
		maxXRotSpeed = 0.3;
		maxYRotSpeed = 0.3;
		pilotOpticsShowCursor = 1;
		controllable = 1;
	};
	maximumLoad = 25000;
	class SpeechVariants
	{
		class Default
		{
			speechplural[] = {"veh_air_gunship_p"};
			speechsingular[] = {"veh_air_gunship_s"};
		};
	};
	class Components
	{
		class SensorsManagerComponent
		{
			class Components
			{
				class IRSensorComponent: SensorTemplateIR
				{
					class AirTarget
					{
						minRange = 0;
						maxRange = 0;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 0;
						maxRange = 0;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 70;
					animDirection = "mainGun";
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					aimdown = -0.25;
				};
				class VisualSensorComponent: SensorTemplateVisual
				{
					class AirTarget
					{
						minRange = 0;
						maxRange = 0;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = 1;
					};
					class GroundTarget
					{
						minRange = 0;
						maxRange = 0;
						objectDistanceLimitCoef = 1;
						viewDistanceLimitCoef = 1;
					};
					maxTrackableSpeed = 70;
					animDirection = "mainGun";
					angleRangeHorizontal = 46;
					angleRangeVertical = 34;
					aimdown = -0.25;
				};
				class ActiveRadarSensorComponent: SensorTemplateActiveRadar
				{
					class AirTarget
					{
						minRange = 5000;
						maxRange = 5000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					class GroundTarget
					{
						minRange = 4000;
						maxRange = 4000;
						objectDistanceLimitCoef = -1;
						viewDistanceLimitCoef = -1;
					};
					maxTrackableSpeed = 125;
					angleRangeHorizontal = 180;
					angleRangeVertical = 90;
					groundNoiseDistanceCoef = -1;
					maxGroundNoiseDistance = -1;
					minSpeedThreshold = 0;
					maxSpeedThreshold = 0;
					aimDown = 30;
				};
				class PassiveRadarSensorComponent: SensorTemplatePassiveRadar{};
				class LaserSensorComponent: SensorTemplateLaser{};
				class NVSensorComponent: SensorTemplateNV{};
			};
		};
		class VehicleSystemsDisplayManagerComponentLeft: DefaultVehicleSystemsDisplayManagerLeft
		{
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoAirborneMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class UAVDisplay
				{
					componentType = "UAVFeedDisplayComponent";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class VehicleMissileDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "Missile";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {4000,2000,16000,8000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class VehicleSystemsDisplayManagerComponentRight: DefaultVehicleSystemsDisplayManagerRight
		{
			defaultDisplay = "SensorDisplay";
			class Components: components
			{
				class EmptyDisplay
				{
					componentType = "EmptyDisplayComponent";
				};
				class MinimapDisplay
				{
					componentType = "MinimapDisplayComponent";
					resource = "RscCustomInfoAirborneMiniMap";
				};
				class CrewDisplay
				{
					componentType = "CrewDisplayComponent";
					resource = "RscCustomInfoCrew";
				};
				class UAVDisplay
				{
					componentType = "UAVFeedDisplayComponent";
				};
				class VehiclePrimaryGunnerDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "PrimaryGunner";
				};
				class VehicleMissileDisplay
				{
					componentType = "TransportFeedDisplayComponent";
					source = "Missile";
				};
				class SensorDisplay
				{
					componentType = "SensorsDisplayComponent";
					range[] = {4000,2000,16000,8000};
					resource = "RscCustomInfoSensors";
				};
			};
		};
		class TransportCounterMeasuresComponent;
	};
	scopeCurator = 2;
	transportsoldier = 28;
	cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
	getInProxyOrder[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34};
	class AnimationSources: AnimationSources
	{
		class muzzle_rot_laser
		{
			source = "ammorandom";
			weapon = "ParticleBeamCannon";
		};
		class muzzle_rot_laser_R
		{
			source = "ammorandom";
			weapon = "ParticleBeamCannon_R";
		};
		class Laser_L
		{
			source = "user";
			animPeriod = 0;
			initPhase = 0;
		};
		class Laser_R
		{
			source = "user";
			animPeriod = 0;
			initPhase = 0;
		};
		class ramp
		{
			source = "user";
			animPeriod = 2;
			initPhase = 0;
		};
		class Doors
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class Lamps
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class Turrets
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class HitGlass1
		{
			source = "Hit";
			hitpoint = "HitGlass1";
			raw = 1;
		};
		class HitGlass2
		{
			source = "Hit";
			hitpoint = "HitGlass2";
		};
		class HitGlass3
		{
			source = "Hit";
			hitpoint = "HitGlass3";
		};
	};
	class Turrets: Turrets
	{
		class Copilot: MainTurret
		{
			memoryPointGun = "rear_chamber";
			gunBeg = "rear_chamber";
			gunEnd = "rear_muzzle";
			caneject = 0;
			castgunnershadow = 1;
			commanding = -1;
			discretedistance[] = {100,200,300,400,500,600,700,800,1000,1200,1500,1800,2100};
			discretedistanceinitindex = 5;
			gunneraction = "LAAT_Pilot";
			gunnerforceoptics = 0;
			gunnername = "CoPilot";
			usePiP = 1;
			gunnergetinaction = "Heli_Attack_01_Gunner_Enter";
			gunnergetoutaction = "Heli_Attack_01_Gunner_Exit";
			gunnerinaction = "";
			gunnerlefthandanimname = "lever_copilot";
			gunneropticseffect[] = {"TankCommanderOptics1","BWTV"};
			gunneropticsmodel = "";
			gunnerrighthandanimname = "stick_copilot";
			initelev = -5;
			initturn = -180;
			iscopilot = 1;
			maxelev = 20;
			maxturn = -170;
			memorypointgunneroptics = "backview";
			memorypointsgetingunner = "pos_driver";
			memorypointsgetingunnerdir = "pos_driver_dir";
			minelev = -20;
			minturn = -190;
			outgunnermayfire = 1;
			precisegetinout = 1;
			primarygunner = 0;
			selectionfireanim = "zasleh";
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",0.362341,1,20};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",0.362341,1,30};
			startengine = 0;
			animationSourceBody = "mainTurret5";
			animationsourcegun = "Maingun5";
			animationsourcehatch = "";
			body = "mainTurret5";
			gun = "Maingun5";
			memorypointlmissile = "Rocket_1";
			memorypointrmissile = "Rocket_2";
			memoryPointLRocket = "Rocket_1";
			memoryPointRRocket = "Rocket_2";
			turretinfotype = "RscOptics_Heli_Attack_01_gunner";
			weapons[] = {"ParticleBeamCannon_B","SmokeLauncher"};
			magazines[] = {"Laser_Battery","Laser_Battery"};
			class OpticsIn
			{
				class Wide
				{
					gunneropticsmodel = "\A3\weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
					initanglex = 0;
					initangley = 0;
					initfov = 0.466;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 0.466;
					minanglex = -30;
					minangley = -100;
					minfov = 0.466;
					opticsdisplayname = "W";
					thermalmode[] = {0,1};
					visionmode[] = {"Normal","NVG","Ti"};
				};
				class Medium: Wide
				{
					gunneropticsmodel = "\A3\weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_medium_F";
					initfov = 0.093;
					maxfov = 0.093;
					minfov = 0.093;
					opticsdisplayname = "M";
				};
				class Narrow: Wide
				{
					gunneropticsmodel = "\A3\weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_narrow_F";
					initfov = 0.029;
					maxfov = 0.029;
					minfov = 0.029;
					opticsdisplayname = "N";
				};
			};
			class OpticsOut
			{
				class Monocular
				{
					gunneropticseffect[] = {};
					gunneropticsmodel = "";
					initanglex = 0;
					initangley = 0;
					initfov = 1.1;
					maxanglex = 30;
					maxangley = 100;
					maxfov = 1.1;
					minanglex = -30;
					minangley = -100;
					minfov = 0.133;
					visionmode[] = {"Normal","NVG"};
				};
			};
			class HitTurret
			{
				armor = 0.8;
				material = -1;
				name = "gun1";
				passthrough = 0.5;
				visual = "gun1";
			};
			class HitGun
			{
				armor = 0.4;
				material = -1;
				name = "gun2";
				passthrough = 0.2;
				visual = "gun2";
			};
		};
		class LeftDoorgun: MainTurret
		{
			weapons[] = {"ParticleBeamCannon"};
			magazines[] = {"Laser_Battery_F","Laser_Battery_F"};
			animationsourcebody = "mainTurret";
			animationsourcegun = "mainGun";
			animationsourcehatch = "";
			body = "mainTurret";
			gun = "mainGun";
			castgunnershadow = 1;
			commanding = -2;
			memoryPointGun = "laser_l_chamber";
			gunBeg = "laser_l_chamber";
			gunEnd = "laser_l_muzzle";
			gunneraction = "LAAT_Gunner";
			gunnercompartments = "Compartment8";
			gunnerdoor = "";
			gunnerforceoptics = 0;
			gunnerinaction = "gunner_Heli_Transport_01";
			gunnerlefthandanimname = "";
			gunnername = "Ball Turret (Left)";
			gunneropticsmodel = "\A3\weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
			gunneropticsshowcursor = 1;
			gunneroutopticsshowcursor = 1;
			gunnerrighthandanimname = "";
			iscopilot = 0;
			lodturnedin = 1000;
			lodturnedout = 1000;
			minElev = -90;
			maxElev = 90;
			initElev = 0;
			minTurn = 0;
			maxTurn = 130;
			initTurn = 0;
			selectionfireanim = "";
			memorypointgunneroptics = "laser_l_muzzle";
			memorypointsgetingunner = "pos_cargo_dir";
			memorypointsgetingunnerdir = "pos_cargo";
			primarygunner = 0;
			proxyindex = 3;
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",0.362341,1,20};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",0.362341,1,30};
			stabilizedinaxes = 0;
			viewgunnershadow = 1;
			class ViewOptics
			{
				initanglex = 0;
				initangley = 0;
				initfov = 0.6;
				maxanglex = 30;
				maxangley = 100;
				maxfov = 0.75;
				minanglex = -30;
				minangley = -100;
				minfov = 0.3;
			};
			class Reflectors
			{
				class Left
				{
					color[] = {7000,7500,10000};
					ambient[] = {70,75,100};
					intensity = 50;
					size = 5;
					innerAngle = 15;
					outerAngle = 65;
					coneFadeCoef = 10;
					position = "laser_l_muzzle";
					direction = "laser_l_chamber";
					hitpoint = "Light_b_hitpoint";
					selection = "Light_L";
					useFlare = 1;
					flareSize = 15;
					flareMaxDistance = 250;
					dayLight = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 1;
						hardLimitStart = 100;
						hardLimitEnd = 200;
					};
				};
			};
		};
		class RightDoorGun: LeftDoorgun
		{
			isCopilot = 0;
			body = "mainTurret2";
			gun = "mainGun2";
			inGunnerMayFire = 1;
			gunnerFireAlsoInInternalCamera = 1;
			outGunnerMayFire = 1;
			animationSourceBody = "MainTurret2";
			animationSourceGun = "MainGun2";
			memoryPointGun = "laser_R_muzzle";
			gunBeg = "laser_R_muzzle";
			gunEnd = "lazer_R_chamber";
			minElev = -90;
			maxElev = 90;
			initElev = 0;
			minTurn = -130;
			maxTurn = 0;
			initTurn = 0;
			gunnerlefthandanimname = "";
			gunnerrighthandanimname = "";
			gunnerLeftLegAnimName = "";
			gunnerRightLegAnimName = "";
			stabilizedInAxes = 3;
			selectionFireAnim = "";
			proxyIndex = 2;
			commanding = -5;
			primaryObserver = 0;
			primaryGunner = 0;
			turretFollowFreeLook = 0;
			isPersonTurret = 0;
			soundServo[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner",0.362341,1,20};
			soundServoVertical[] = {"A3\Sounds_F\vehicles\armor\noises\servo_armor_gunner_vertical",0.362341,1,30};
			gunneropticsmodel = "\A3\weapons_F_Beta\Reticle\Heli_Transport_01_Optics_Gunner_F";
			gunnerOutOpticsShowCursor = 1;
			gunnerOpticsShowCursor = 1;
			gunnerName = "Ball Turret (Right)";
			memoryPointGunnerOptics = "laser_R_muzzle";
			gunnerCompartments = "Compartment9";
			memorypointsgetingunner = "pos_cargo_dir";
			memorypointsgetingunnerdir = "pos_cargo";
			weapons[] = {"ParticleBeamCannon_R"};
			magazines[] = {"Laser_Battery_F","Laser_Battery_F"};
			class Reflectors
			{
				class Right
				{
					color[] = {7000,7500,10000};
					ambient[] = {70,75,100};
					intensity = 50;
					size = 5;
					innerAngle = 15;
					outerAngle = 65;
					coneFadeCoef = 10;
					position = "lazer_R_chamber";
					direction = "laser_r_muzzle";
					hitpoint = "Light_b_hitpoint";
					selection = "Light_R";
					useFlare = 1;
					flareSize = 15;
					flareMaxDistance = 250;
					dayLight = 0;
					class Attenuation
					{
						start = 0;
						constant = 0;
						linear = 1;
						quadratic = 1;
						hardLimitStart = 100;
						hardLimitEnd = 200;
					};
				};
			};
		};
		class CargoTurret_01: CargoTurret
		{
			gunnerAction = "passenger_inside_5";
			canHideGunner = 0;
			gunnerCompartments = "Compartment2";
			getOutAction = "GetOutLow";
			memoryPointsGetInCargo[] = {"pos_cargo"};
			memoryPointsGetInCargoDir[] = {"pos_cargo_dir"};
			proxyType = "CPCargo";
			viewGunnerInExternal = 1;
			showAsCargo = 1;
			gunnerName = "Ramp Gunner (Left)";
			proxyIndex = 15;
			soundAttenuationTurret = "HeliAttenuationGunner";
			isPersonTurret = 1;
			ejectDeadGunner = 1;
			class dynamicViewLimits
			{
				CargoTurret_02[] = {-65,95};
			};
			playerPosition = 4;
			gunnerGetInAction = "GetInHeli_Light_01bench";
		};
		class CargoTurret_02: CargoTurret_01
		{
			gunnerCompartments = "Compartment2";
			getOutAction = "GetOutLow";
			memoryPointsGetInCargo[] = {"pos_cargo"};
			memoryPointsGetInCargoDir[] = {"pos_cargo_dir"};
			gunnerName = "Ramp Gunner (Right)";
			proxyIndex = 14;
			class dynamicViewLimits
			{
				CargoTurret_01[] = {-65,95};
			};
		};
		class CargoTurret_03: CargoTurret
		{
			gunnerAction = "passenger_bench_1";
			gunnerCompartments = "Compartment2";
			memoryPointsGetInGunner = "pos_cargo";
			memoryPointsGetInGunnerDir = "pos_cargo_dir";
			gunnerName = "$STR_A3_TURRETS_BENCH_R1";
			proxyIndex = 17;
			proxyType = "CPCargo";
			viewGunnerInExternal = 1;
			showAsCargo = 1;
			isPersonTurret = 1;
			ejectDeadGunner = 0;
			class TurnOut
			{
				limitsArrayTop[] = {{9.4395,-94.8557},{12.5849,-34.3841},{14.0365,60.8758},{14.1021,95.0}};
				limitsArrayBottom[] = {{-32.2276,-94.9017},{-32.7616,-79.1958},{-45.0,-75.6488},{-44.9653,95.0}};
			};
			class TurnIn: TurnOut{};
			class dynamicViewLimits
			{
				CargoTurret_06[] = {-65,95};
			};
			playerPosition = 4;
			soundAttenuationTurret = "";
			disableSoundAttenuation = 1;
			gunnerGetInAction = "GetInHeli_Light_01bench";
		};
		class CargoTurret_04: CargoTurret_03
		{
			gunnerCompartments = "Compartment2";
			memoryPointsGetInGunner = "pos_cargo";
			memoryPointsGetInGunnerDir = "pos_cargo_dir";
			gunnerName = "$STR_A3_TURRETS_BENCH_L2";
			proxyIndex = 18;
			class dynamicViewLimits
			{
				CargoTurret_05[] = {-65,95};
			};
			class TurnOut
			{
				limitsArrayTop[] = {{10.6196,-94.8601},{11.1364,-69.1954},{14.0333,15.3744},{11.6789,94.9682}};
				limitsArrayBottom[] = {{-32.2081,-94.0381},{-32.3682,-78.5415},{-45.0,-72.8542},{-44.9186,94.8865}};
			};
			class TurnIn: TurnOut{};
		};
		class CargoTurret_05: CargoTurret_04
		{
			gunnerCompartments = "Compartment2";
			gunnerName = "$STR_A3_TURRETS_BENCH_L1";
			memoryPointsGetInGunner = "pos_cargo";
			memoryPointsGetInGunnerDir = "pos_cargo_dir";
			proxyIndex = 19;
			class dynamicViewLimits
			{
				CargoTurret_04[] = {-95,65};
			};
			class TurnOut
			{
				limitsArrayTop[] = {{14.705,-95.0},{14.1224,-62.859},{12.3049,32.9414},{9.0862,94.948}};
				limitsArrayBottom[] = {{-45.0,-94.9656},{-45.0,80.9904},{-31.9033,82.8465},{-31.7935,95.0}};
			};
			class TurnIn: TurnOut{};
		};
		class CargoTurret_06: CargoTurret_03
		{
			gunnerCompartments = "Compartment2";
			gunnerName = "$STR_A3_TURRETS_BENCH_R2";
			proxyIndex = 16;
			class dynamicViewLimits
			{
				CargoTurret_03[] = {-95,65};
			};
			class TurnOut
			{
				limitsArrayTop[] = {{12.1826,-95.0},{14.4163,-16.6983},{11.5046,68.8292},{11.8156,94.9809}};
				limitsArrayBottom[] = {{-44.8976,-94.9994},{-44.974,81.1906},{-32.4479,83.7916},{-32.7405,95.0}};
			};
			class TurnIn: TurnOut{};
		};
	};
	destrType = "DestructDefault";
	class Damage
	{
		tex[] = {};
		mat[] = {"3AS\3as_Laat\LAATI\data\Hull.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3AS\3as_Laat\LAATI\data\Interior.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3AS\3as_Laat\LAATI\data\Weapon_Details.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3AS\3as_Laat\LAATI\data\Weapons.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","3AS\3as_Laat\LAATI\data\Wings.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_base_destruct.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat","A3\Air_F_Beta\Heli_Attack_01\Data\Heli_Attack_01_glass_damage.rvmat"};
	};
	class Eventhandlers
	{
		fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
	};
	class VehicleTransport
	{
		class Carrier
		{
			cargoBayDimensions[] = {"Limit1","limit2"};
			disableHeightLimit = 1;
			maxLoadMass = 200000;
			cargoAlignment[] = {"center","front"};
			cargoSpacing[] = {0,0.15,0};
			exits[] = {"ramp_exit"};
			unloadingInterval = 2;
			loadingDistance = 10;
			loadingAngle = 60;
			parachuteClassDefault = "B_Parachute_02_F";
			parachuteHeightLimitDefault = 50;
		};
	};
	class RenderTargets
	{
		class mfd
		{
			rendertarget = "rendertarget0";
			class CameraView1
			{
				fov = 0.1;
				pointdirection = "PIP0_dir";
				pointposition = "PIP0_pos";
				renderquality = 2;
				rendervisionmode = 2;
			};
		};
		class BayCamera
		{
			RenderTarget = "rendertarget1";
			class CargoBay
			{
				pointPosition = "Pip_bay";
				pointDirection = "Pip_bay_dir";
				renderQuality = 2;
				renderVisionMode = 0;
				fov = 0.7;
			};
		};
	};
	class Exhausts
	{
		class Exhaust1
		{
			position = "exhaust1";
			direction = "exhaust1_dir";
			effect = "ExhaustsEffectHeliMed";
		};
		class Exhaust2
		{
			position = "exhaust2";
			direction = "exhaust2_dir";
			effect = "ExhaustsEffectHeliMed";
		};
	};
	defaultUserMFDvalues[] = {0,1,0,1,0};
	class MFD
	{
		class B_Plane_Fighter_01_static_HUD
		{
			enableParallax = 1;
			helmetMountedDisplay = 1;
			helmetPosition[] = {-0.0375,0.0375,0.1};
			helmetRight[] = {0.075,0,0};
			helmetDown[] = {0,-0.075,0};
			font = "PuristaLight";
			class Pos10Vector
			{
				type = "vector";
				pos0[] = {0.5,0.5};
				pos10[] = {1.225,1.1};
			};
			topLeft = "HUD LH";
			topRight = "HUD PH";
			bottomLeft = "HUD LD";
			borderLeft = 0;
			borderRight = 0;
			borderTop = 0;
			borderBottom = 0;
			color[] = {"user0","user1","user2"};
			class Bones
			{
				class PlaneW
				{
					type = "fixed";
					pos[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class Velocity: Pos10Vector
				{
					type = "vector";
					source = "velocityToView";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class PlaneOrientation
				{
					type = "vector";
					source = "forward";
					pos[] = {0.5,0.5};
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class WeaponAim
				{
					type = "vector";
					source = "weaponToView";
					pos0[] = {0.1,0.1};
					pos10[] = {0.1,0.1};
				};
				class MissileFlightTimeRot1
				{
					type = "rotational";
					source = "MissileFlightTime";
					sourceScale = 1.0;
					center[] = {0,0};
					min = 0;
					max = 0.5;
					minAngle = 0;
					maxAngle = 18;
					aspectRatio = 0.985402;
				};
				class MissileFlightTimeRot2: MissileFlightTimeRot1
				{
					maxAngle = 36;
					max = 1;
				};
				class MissileFlightTimeRot3: MissileFlightTimeRot1
				{
					maxAngle = 54;
					max = 1.5;
				};
				class MissileFlightTimeRot4: MissileFlightTimeRot1
				{
					maxAngle = 72;
					max = 2;
				};
				class MissileFlightTimeRot5: MissileFlightTimeRot1
				{
					maxAngle = 90;
					max = 2.5;
				};
				class MissileFlightTimeRot6: MissileFlightTimeRot1
				{
					maxAngle = 108;
					max = 3;
				};
				class MissileFlightTimeRot7: MissileFlightTimeRot1
				{
					maxAngle = 126;
					max = 3.5;
				};
				class MissileFlightTimeRot8: MissileFlightTimeRot1
				{
					maxAngle = 144;
					max = 4;
				};
				class MissileFlightTimeRot9: MissileFlightTimeRot1
				{
					maxAngle = 162;
					max = 4.5;
				};
				class MissileFlightTimeRot10: MissileFlightTimeRot1
				{
					maxAngle = 180;
					max = 5;
				};
				class MissileFlightTimeRot11: MissileFlightTimeRot1
				{
					maxAngle = 198;
					max = 5.5;
				};
				class MissileFlightTimeRot12: MissileFlightTimeRot1
				{
					maxAngle = 216;
					max = 6;
				};
				class MissileFlightTimeRot13: MissileFlightTimeRot1
				{
					maxAngle = 234;
					max = 6.5;
				};
				class MissileFlightTimeRot14: MissileFlightTimeRot1
				{
					maxAngle = 252;
					max = 7;
				};
				class MissileFlightTimeRot15: MissileFlightTimeRot1
				{
					maxAngle = 270;
					max = 7.5;
				};
				class MissileFlightTimeRot16: MissileFlightTimeRot1
				{
					maxAngle = 288;
					max = 8;
				};
				class MissileFlightTimeRot17: MissileFlightTimeRot1
				{
					maxAngle = 306;
					max = 8.5;
				};
				class MissileFlightTimeRot18: MissileFlightTimeRot1
				{
					maxAngle = 324;
					max = 9;
				};
				class MissileFlightTimeRot19: MissileFlightTimeRot1
				{
					maxAngle = 342;
					max = 9.5;
				};
				class MissileFlightTimeRot20: MissileFlightTimeRot1
				{
					maxAngle = 360;
					max = 10;
				};
				class Target
				{
					type = "vector";
					source = "targetToView";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class TargetingPodDir
				{
					source = "pilotcameratoview";
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class TargetingPodTarget
				{
					source = "pilotcameratargettoview";
					type = "vector";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class ImpactPoint
				{
					type = "vector";
					source = "ImpactPointToView";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class ImpactPointRelative
				{
					type = "vector";
					source = "impactpointtoviewweaponRelative";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class NormalizeBombCircle
				{
					type = "normalizedorsmaller";
					limit = 0.08;
					aspectRatio = 0.985402;
				};
				class Limit0109
				{
					type = "limit";
					limits[] = {0.1,0.1,0.9,0.9};
				};
				class LimitWaypoint
				{
					type = "limit";
					limits[] = {0.2,0.1,0.8,0.1};
				};
				class WPPoint
				{
					type = "vector";
					source = "WPPoint";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class WPPointToView: WPPoint
				{
					source = "WPPointToView";
				};
				class Airport1
				{
					type = "vector";
					source = "airportCorner1ToView";
					pos0[] = {0.5,0.5};
					pos10[] = {0.774,0.77};
				};
				class Airport2: Airport1
				{
					source = "airportCorner2ToView";
				};
				class Airport3: Airport1
				{
					source = "airportCorner3ToView";
				};
				class Airport4: Airport1
				{
					source = "airportCorner4ToView";
				};
				class ILS_H
				{
					type = "ils";
					pos0[] = {0.5,0.5};
					pos3[] = {0.5822,0.5};
				};
				class ILS_W: ILS_H
				{
					pos3[] = {0.5,0.581};
				};
				class HorizonBankRot
				{
					type = "rotational";
					source = "horizonBank";
					center[] = {0.5,0.5};
					min = "-rad(30)";
					max = "rad(30)";
					minAngle = "180.25-30";
					maxAngle = "180.75+30";
					aspectRatio = 1;
				};
				class Level0: Pos10Vector
				{
					pos0[] = {0.5,0.5};
					pos10[] = {0.884,0.88};
					type = "horizontoview";
					angle = 0;
				};
				class LevelP5: Level0
				{
					angle = 5;
				};
				class LevelM5: Level0
				{
					angle = -5;
				};
				class LevelP10: Level0
				{
					angle = 10;
				};
				class LevelM10: Level0
				{
					angle = -10;
				};
				class LevelP15: Level0
				{
					angle = 15;
				};
				class LevelM15: Level0
				{
					angle = -15;
				};
				class LevelP20: Level0
				{
					angle = 20;
				};
				class LevelM20: Level0
				{
					angle = -20;
				};
				class LevelP25: Level0
				{
					angle = 25;
				};
				class LevelM25: Level0
				{
					angle = -25;
				};
				class LevelP30: Level0
				{
					angle = 30;
				};
				class LevelM30: Level0
				{
					angle = -30;
				};
				class LevelP35: Level0
				{
					angle = 35;
				};
				class LevelM35: Level0
				{
					angle = -35;
				};
				class LevelP40: Level0
				{
					angle = 40;
				};
				class LevelM40: Level0
				{
					angle = -40;
				};
				class LevelP45: Level0
				{
					angle = 45;
				};
				class LevelM45: Level0
				{
					angle = -45;
				};
				class LevelP50: Level0
				{
					angle = 50;
				};
				class LevelM50: Level0
				{
					angle = -50;
				};
				class LevelP60: Level0
				{
					angle = 60;
				};
				class LevelM60: Level0
				{
					angle = -60;
				};
				class LevelP70: Level0
				{
					angle = 70;
				};
				class LevelM70: Level0
				{
					angle = -70;
				};
				class LevelP80: Level0
				{
					angle = 80;
				};
				class LevelM80: Level0
				{
					angle = -80;
				};
				class LevelP90: Level0
				{
					angle = 90;
				};
				class LevelM90: Level0
				{
					angle = -90;
				};
				class LarAmmoMax
				{
					type = "linear";
					source = "LarAmmoMax";
					sourceScale = 1.0;
					min = 0;
					max = 1;
					minPos[] = {0.0,1.0};
					maxPos[] = {0.0,0.0};
				};
				class LarAmmoMin: LarAmmoMax
				{
					source = "LarAmmoMin";
				};
				class LarTargetDist: LarAmmoMax
				{
					source = "LarTargetDist";
				};
			};
			class Draw
			{
				width = 1.0;
				alpha = "user3";
				color[] = {"user0","user1","user2"};
				condition = "on";
				class PlaneW
				{
					clipTL[] = {0.0,1.0};
					clipBR[] = {1.0,0.0};
					type = "line";
					width = 3.0;
					points[] = {{"PlaneOrientation",{-0.04,0},1},{"PlaneOrientation",{-0.015,0},1},{"PlaneOrientation",{-0.0075,0.015},1},{"PlaneOrientation",{0.0,0},1},{"PlaneOrientation",{0.0075,0.015},1},{"PlaneOrientation",{0.015,0},1},{"PlaneOrientation",{0.04,0},1}};
				};
				class PlaneMovementCrosshair
				{
					type = "line";
					width = 3.0;
					points[] = {{"Velocity",{0,-0.02},1},{"Velocity",{0.01,-0.01732},1},{"Velocity",{0.01732,-0.01},1},{"Velocity",{0.02,0},1},{"Velocity",{0.01732,0.01},1},{"Velocity",{0.01,0.01732},1},{"Velocity",{0,0.02},1},{"Velocity",{-0.01,0.01732},1},{"Velocity",{-0.01732,0.01},1},{"Velocity",{-0.02,0},1},{"Velocity",{-0.01732,-0.01},1},{"Velocity",{-0.01,-0.01732},1},{"Velocity",{0,-0.02},1},{},{"Velocity",{0.04,0},1},{"Velocity",{0.02,0},1},{},{"Velocity",{-0.04,0},1},{"Velocity",{-0.02,0},1},{},{"Velocity",{0,-0.04},1},{"Velocity",{0,-0.02},1}};
				};
				class MachineGunCrosshairGroup
				{
					type = "group";
					condition = "-2+(mgun+rocket)*ImpactDistance";
					class MachineGunCrosshair
					{
						type = "line";
						width = 3.0;
						points[] = {{"ImpactPointRelative",{0.0,-0.0886861},1},{"ImpactPointRelative",{0.0,-0.0788321},1},{},{"ImpactPointRelative",{0.0,0.0886861},1},{"ImpactPointRelative",{0.0,0.0788321},1},{},{"ImpactPointRelative",{-0.09,0.0},1},{"ImpactPointRelative",{-0.08,0.0},1},{},{"ImpactPointRelative",{0.09,0.0},1},{"ImpactPointRelative",{0.08,0.0},1},{},{"ImpactPointRelative",{0.0,-0.0019708},1},{"ImpactPointRelative",{0.0,0.0019708},1},{},{"ImpactPointRelative",{-0.002,0.0},1},{"ImpactPointRelative",{0.002,0.0},1},{}};
					};
					class Circle
					{
						type = "line";
						width = 6.0;
						points[] = {{"ImpactPointRelative",{0,-0.0630657},1},{"ImpactPointRelative",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPointRelative",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPointRelative",1}};
					};
					class Circle_Min_Range
					{
						type = "line";
						width = 3.0;
						points[] = {{"ImpactPointRelative",{0,-0.0788321},1},{"ImpactPointRelative",{0.013888,-0.0776339},1},{"ImpactPointRelative",{0.02736,-0.0740785},1},{"ImpactPointRelative",{0.04,-0.0682686},1},{"ImpactPointRelative",{0.051424,-0.0603854},1},{"ImpactPointRelative",{0.06128,-0.0506733},1},{"ImpactPointRelative",{0.06928,-0.0394161},1},{"ImpactPointRelative",{0.075176,-0.0269606},1},{"ImpactPointRelative",{0.078784,-0.0136853},1},{"ImpactPointRelative",{0.08,0},1},{"ImpactPointRelative",{0.078784,0.0136853},1},{"ImpactPointRelative",{0.075176,0.0269606},1},{"ImpactPointRelative",{0.06928,0.0394161},1},{"ImpactPointRelative",{0.06128,0.0506733},1},{"ImpactPointRelative",{0.051424,0.0603854},1},{"ImpactPointRelative",{0.04,0.0682686},1},{"ImpactPointRelative",{0.02736,0.0740785},1},{"ImpactPointRelative",{0.013888,0.0776339},1},{"ImpactPointRelative",{0,0.0788321},1},{"ImpactPointRelative",{-0.013888,0.0776339},1},{"ImpactPointRelative",{-0.02736,0.0740785},1},{"ImpactPointRelative",{-0.04,0.0682686},1},{"ImpactPointRelative",{-0.051424,0.0603854},1},{"ImpactPointRelative",{-0.06128,0.0506733},1},{"ImpactPointRelative",{-0.06928,0.0394161},1},{"ImpactPointRelative",{-0.075176,0.0269606},1},{"ImpactPointRelative",{-0.078784,0.0136853},1},{"ImpactPointRelative",{-0.08,0},1},{"ImpactPointRelative",{-0.078784,-0.0136853},1},{"ImpactPointRelative",{-0.075176,-0.0269606},1},{"ImpactPointRelative",{-0.06928,-0.0394161},1},{"ImpactPointRelative",{-0.06128,-0.0506733},1},{"ImpactPointRelative",{-0.051424,-0.0603854},1},{"ImpactPointRelative",{-0.04,-0.0682686},1},{"ImpactPointRelative",{-0.02736,-0.0740785},1},{"ImpactPointRelative",{-0.013888,-0.0776339},1},{"ImpactPointRelative",{0,-0.0788321},1}};
					};
					class Distance
					{
						type = "text";
						source = "ImpactDistance";
						sourceScale = 0.001;
						sourcePrecision = 1;
						max = 15;
						align = "center";
						scale = 1;
						pos[] = {"ImpactPointRelative",{-0.002,0.11},1};
						right[] = {"ImpactPointRelative",{0.045,0.11},1};
						down[] = {"ImpactPointRelative",{-0.002,0.15},1};
					};
				};
				class AAMissileCrosshairGroup
				{
					type = "group";
					condition = "AAmissile";
					class AAMissileCrosshair
					{
						type = "line";
						width = 4.0;
						points[] = {{"PlaneOrientation",{0,-0.24635},1},{"PlaneOrientation",{0.0434,-0.242606},1},{"PlaneOrientation",{0.0855,-0.231495},1},{"PlaneOrientation",{0.125,-0.213339},1},{"PlaneOrientation",{0.1607,-0.188704},1},{"PlaneOrientation",{0.1915,-0.158354},1},{"PlaneOrientation",{0.2165,-0.123175},1},{"PlaneOrientation",{0.234925,-0.0842518},1},{"PlaneOrientation",{0.2462,-0.0427664},1},{"PlaneOrientation",{0.25,0},1},{"PlaneOrientation",{0.2462,0.0427664},1},{"PlaneOrientation",{0.234925,0.0842518},1},{"PlaneOrientation",{0.2165,0.123175},1},{"PlaneOrientation",{0.1915,0.158354},1},{"PlaneOrientation",{0.1607,0.188704},1},{"PlaneOrientation",{0.125,0.213339},1},{"PlaneOrientation",{0.0855,0.231495},1},{"PlaneOrientation",{0.0434,0.242606},1},{"PlaneOrientation",{0,0.24635},1},{"PlaneOrientation",{-0.0434,0.242606},1},{"PlaneOrientation",{-0.0855,0.231495},1},{"PlaneOrientation",{-0.125,0.213339},1},{"PlaneOrientation",{-0.1607,0.188704},1},{"PlaneOrientation",{-0.1915,0.158354},1},{"PlaneOrientation",{-0.2165,0.123175},1},{"PlaneOrientation",{-0.234925,0.0842518},1},{"PlaneOrientation",{-0.2462,0.0427664},1},{"PlaneOrientation",{-0.25,0},1},{"PlaneOrientation",{-0.2462,-0.0427664},1},{"PlaneOrientation",{-0.234925,-0.0842518},1},{"PlaneOrientation",{-0.2165,-0.123175},1},{"PlaneOrientation",{-0.1915,-0.158354},1},{"PlaneOrientation",{-0.1607,-0.188704},1},{"PlaneOrientation",{-0.125,-0.213339},1},{"PlaneOrientation",{-0.0855,-0.231495},1},{"PlaneOrientation",{-0.0434,-0.242606},1},{"PlaneOrientation",{0,-0.24635},1}};
					};
					class Lines
					{
						type = "line";
						width = 4.0;
						points[] = {{{0.21,0.55},1},{{0.19,0.55},1},{{0.19,0.71},1},{{0.21,0.71},1},{},{{0.21,0.67},1},{{0.19,0.67},1},{},{{0.21,0.63},1},{{0.19,0.63},1},{},{{0.21,0.59},1},{{0.19,0.59},1},{},{"LarTargetDist",-0.16,{0.17,0.73},1},{"LarTargetDist",-0.16,{0.19,0.71},1},{"LarTargetDist",-0.16,{0.17,0.69},1},{}};
					};
					class Poly
					{
						type = "polygon";
						points[] = {{{"LarAmmoMin",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.191,0.71},1},{"LarAmmoMax",-0.16,{0.208,0.71},1},{"LarAmmoMin",-0.16,{0.208,0.71},1}}};
					};
					class TopText
					{
						type = "text";
						source = "LarTop";
						sourceScale = 0.001;
						scale = 1;
						pos[] = {{0.22,0.53},1};
						right[] = {{0.26,0.53},1};
						down[] = {{0.22,0.57},1};
						align = "right";
					};
					class MiddleText: TopText
					{
						source = "LarTop";
						sourcePrecision = -1;
						sourceScale = 0.0005;
						pos[] = {{0.22,0.61},1};
						right[] = {{0.26,0.61},1};
						down[] = {{0.22,0.65},1};
					};
					class SpeedText: TopText
					{
						source = "LarTargetSpeed";
						align = "left";
						sourceScale = 3.6;
						pos[] = {"LarTargetDist",-0.16,{0.16,0.69},1};
						right[] = {"LarTargetDist",-0.16,{0.2,0.69},1};
						down[] = {"LarTargetDist",-0.16,{0.16,0.73},1};
					};
				};
				class ATMissileCrosshairGroup
				{
					condition = "ATmissile";
					type = "group";
					class ATMissileCrosshair
					{
						type = "line";
						width = 4.0;
						points[] = {{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.15,-0.13},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.15,0.13},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.15,-0.13},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.15,0.13},1},{},{"WeaponAim",{-0.15,-0.15},1},{"WeaponAim",{-0.13,-0.15},1},{},{"WeaponAim",{-0.15,0.15},1},{"WeaponAim",{-0.13,0.15},1},{},{"WeaponAim",{0.15,-0.15},1},{"WeaponAim",{0.13,-0.15},1},{},{"WeaponAim",{0.15,0.15},1},{"WeaponAim",{0.13,0.15},1}};
					};
				};
				class RocketCrosshairGroup
				{
					type = "group";
					condition = "Rocket";
					class MachineGunCrosshair
					{
						type = "line";
						width = 3.0;
						points[] = {{"ImpactPoint",{0.0,-0.0394161},1},{"ImpactPoint",{0.0,-0.019708},1},{},{"ImpactPoint",{0.0,0.0394161},1},{"ImpactPoint",{0.0,0.019708},1},{},{"ImpactPoint",{-0.04,0.0},1},{"ImpactPoint",{-0.02,0.0},1},{},{"ImpactPoint",{0.04,0.0},1},{"ImpactPoint",{0.02,0.0},1},{},{"ImpactPoint",{0.01,-0.0394161},1},{"ImpactPoint",{-0.01,-0.0394161},1},{},{"ImpactPoint",{0.0,-0.0019708},1},{"ImpactPoint",{0.0,0.0019708},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{}};
					};
					class Distance
					{
						type = "text";
						source = "ImpactDistance";
						sourceScale = 0.001;
						sourcePrecision = 1;
						max = 15;
						align = "center";
						scale = 1;
						pos[] = {"ImpactPoint",{-0.002,0.07},1};
						right[] = {"ImpactPoint",{0.045,0.07},1};
						down[] = {"ImpactPoint",{-0.002,0.11},1};
					};
				};
				class BombCrosshairGroup
				{
					type = "group";
					condition = "bomb";
					class BombCrosshair
					{
						width = 4.0;
						type = "line";
						points[] = {{"ImpactPoint",{0.0,0.0886861},1},{"ImpactPoint",{0.0,0.0788321},1},{},{"ImpactPoint",{-0.09,0.0},1},{"ImpactPoint",{-0.08,0.0},1},{},{"ImpactPoint",{0.09,0.0},1},{"ImpactPoint",{0.08,0.0},1},{},{"ImpactPoint",{0.0,-0.0019708},1},{"ImpactPoint",{0.0,0.0019708},1},{},{"ImpactPoint",{-0.002,0.0},1},{"ImpactPoint",{0.002,0.0},1},{},{"ImpactPoint",{0,-0.0788321},1},{"ImpactPoint",{0.013888,-0.0776339},1},{"ImpactPoint",{0.02736,-0.0740785},1},{"ImpactPoint",{0.04,-0.0682686},1},{"ImpactPoint",{0.051424,-0.0603854},1},{"ImpactPoint",{0.06128,-0.0506733},1},{"ImpactPoint",{0.06928,-0.0394161},1},{"ImpactPoint",{0.075176,-0.0269606},1},{"ImpactPoint",{0.078784,-0.0136853},1},{"ImpactPoint",{0.08,0},1},{"ImpactPoint",{0.078784,0.0136853},1},{"ImpactPoint",{0.075176,0.0269606},1},{"ImpactPoint",{0.06928,0.0394161},1},{"ImpactPoint",{0.06128,0.0506733},1},{"ImpactPoint",{0.051424,0.0603854},1},{"ImpactPoint",{0.04,0.0682686},1},{"ImpactPoint",{0.02736,0.0740785},1},{"ImpactPoint",{0.013888,0.0776339},1},{"ImpactPoint",{0,0.0788321},1},{"ImpactPoint",{-0.013888,0.0776339},1},{"ImpactPoint",{-0.02736,0.0740785},1},{"ImpactPoint",{-0.04,0.0682686},1},{"ImpactPoint",{-0.051424,0.0603854},1},{"ImpactPoint",{-0.06128,0.0506733},1},{"ImpactPoint",{-0.06928,0.0394161},1},{"ImpactPoint",{-0.075176,0.0269606},1},{"ImpactPoint",{-0.078784,0.0136853},1},{"ImpactPoint",{-0.08,0},1},{"ImpactPoint",{-0.078784,-0.0136853},1},{"ImpactPoint",{-0.075176,-0.0269606},1},{"ImpactPoint",{-0.06928,-0.0394161},1},{"ImpactPoint",{-0.06128,-0.0506733},1},{"ImpactPoint",{-0.051424,-0.0603854},1},{"ImpactPoint",{-0.04,-0.0682686},1},{"ImpactPoint",{-0.02736,-0.0740785},1},{"ImpactPoint",{-0.013888,-0.0776339},1},{"ImpactPoint",{0,-0.0788321},1},{},{},{"ImpactPoint",-1,"Velocity",1,"NormalizeBombCircle",1,"ImpactPoint",1,{0.0,0.0},1},{"Velocity",1,"Limit0109",1,{0.0,0.0},1}};
					};
					class Circle
					{
						type = "line";
						width = 6.0;
						points[] = {{"ImpactPoint",{0,-0.0630657},1},{"ImpactPoint",{0,-0.0788321},1},{"MissileFlightTimeRot1",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot2",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot3",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot4",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot5",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot6",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot7",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot8",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot9",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot10",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot11",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot12",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot13",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot14",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot15",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot16",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot17",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot18",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot19",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.08},1,"ImpactPoint",1},{"MissileFlightTimeRot20",{0,0.064},1,"ImpactPoint",1}};
					};
					class Distance
					{
						type = "text";
						source = "ImpactDistance";
						sourceScale = 0.001;
						sourcePrecision = 1;
						max = 15;
						align = "center";
						scale = 1;
						pos[] = {"ImpactPoint",{-0.002,0.11},1};
						right[] = {"ImpactPoint",{0.045,0.11},1};
						down[] = {"ImpactPoint",{-0.002,0.15},1};
					};
				};
				class WeaponsText
				{
					condition = "1- mgun";
					class WeaponsText
					{
						type = "text";
						source = "weapon";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.032,0.84},1};
						right[] = {{0.087,0.84},1};
						down[] = {{0.032,0.885},1};
					};
				};
				class MGunText
				{
					condition = "mgun";
					class WeaponsText
					{
						type = "text";
						source = "static";
						text = "GUN";
						sourceScale = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.032,0.84},1};
						right[] = {{0.087,0.84},1};
						down[] = {{0.032,0.885},1};
					};
				};
				class AmmoText
				{
					type = "text";
					source = "ammo";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {{0.032,0.88},1};
					right[] = {{0.087,0.88},1};
					down[] = {{0.032,0.925},1};
				};
				class Laser
				{
					condition = "laseron";
					class LaserText
					{
						type = "text";
						source = "static";
						text = "LASER";
						align = "left";
						scale = 1;
						pos[] = {{0.932,0.8},1};
						right[] = {{0.987,0.8},1};
						down[] = {{0.932,0.845},1};
					};
				};
				class Flaps
				{
					condition = "flaps";
					class FlapsText
					{
						type = "text";
						source = "static";
						text = "FLAPS";
						align = "left";
						scale = 1;
						pos[] = {{0.932,0.92},1};
						right[] = {{0.987,0.92},1};
						down[] = {{0.932,0.965},1};
					};
				};
				class ILS
				{
					condition = "ils";
					class GearText
					{
						type = "text";
						source = "static";
						text = "GEAR";
						align = "left";
						scale = 1;
						pos[] = {{0.932,0.84},1};
						right[] = {{0.987,0.84},1};
						down[] = {{0.932,0.885},1};
					};
					class Glideslope
					{
						clipTL[] = {0.0,0.0};
						clipBR[] = {1.0,1.0};
						class airport
						{
							type = "line";
							points[] = {{"airport1",1},{"airport2",1},{"airport4",1},{"airport3",1},{"airport1",1}};
						};
					};
				};
				class TargetLocking
				{
					condition = "missilelocking";
					blinkingPattern[] = {0.2,0.2};
					blinkingStartsOn = 1;
					class shape
					{
						type = "line";
						width = 4;
						points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
					};
				};
				class TargetLocked
				{
					condition = "missilelocked";
					class shape
					{
						type = "line";
						width = 4;
						points[] = {{"Target",1,"Limit0109",1,{0,-0.029562},1},{"Target",1,"Limit0109",1,{0.03,0},1},{"Target",1,"Limit0109",1,{0,0.029562},1},{"Target",1,"Limit0109",1,{-0.03,0},1},{"Target",1,"Limit0109",1,{0,-0.029562},1}};
					};
				};
				class IncomingMissile
				{
					condition = "incomingmissile";
					blinkingPattern[] = {0.3,0.3};
					blinkingStartsOn = 1;
					class Text
					{
						type = "text";
						source = "static";
						text = "!INCOMING MISSILE!";
						align = "center";
						scale = 1;
						pos[] = {{0.485,0.216788},1};
						right[] = {{0.545,0.216788},1};
						down[] = {{0.485,0.266058},1};
					};
				};
				class StallGroup
				{
					type = "group";
					condition = "stall";
					color[] = {1.0,0.0,0.0};
					blinkingPattern[] = {0.2,0.2};
					blinkingStartsOn = 1;
					class StallText
					{
						type = "text";
						source = "static";
						text = "STALL";
						align = "center";
						scale = 1;
						pos[] = {{0.5,0.25},1};
						right[] = {{0.54,0.25},1};
						down[] = {{0.5,0.29},1};
					};
				};
				class TargetingPodGroup
				{
					condition = "1-pilotcameralock";
					class TargetingPodDir
					{
						type = "line";
						width = 3.0;
						points[] = {{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407807},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173806},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodDir",1,{-0.0208056,-0.00407807},1},{"TargetingPodDir",1,{-0.0208056,0.00407808},1},{},{"TargetingPodDir",1,{-0.0176381,0.0116134},1},{"TargetingPodDir",1,{-0.0117854,0.0173806},1},{},{"TargetingPodDir",1,{-0.00413849,0.0205019},1},{"TargetingPodDir",1,{0.00413849,0.0205019},1},{},{"TargetingPodDir",1,{0.0117854,0.0173806},1},{"TargetingPodDir",1,{0.0176381,0.0116134},1},{},{"TargetingPodDir",1,{0.0208056,0.00407807},1},{"TargetingPodDir",1,{0.0208056,-0.00407808},1},{},{"TargetingPodDir",1,{0.0176381,-0.0116134},1},{"TargetingPodDir",1,{0.0117854,-0.0173807},1},{},{"TargetingPodDir",1,{0.00413849,-0.0205019},1},{"TargetingPodDir",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodDir",1,{-0.0117854,-0.0173806},1},{"TargetingPodDir",1,{-0.0176381,-0.0116134},1},{},{}};
					};
				};
				class TargetingPodGroupOn
				{
					condition = "pilotcameralock";
					class TargetingPodDir
					{
						type = "line";
						width = 3.0;
						points[] = {{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,-0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0208056,0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,0.0173806},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.00413849,0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,0.0116134},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,0.00407807},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0208056,-0.00407808},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.0176381,-0.0116134},1},{"TargetingPodTarget",1,"Limit0109",1,{0.0117854,-0.0173807},1},{},{"TargetingPodTarget",1,"Limit0109",1,{0.00413849,-0.0205019},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0041385,-0.0205019},1},{},{"TargetingPodTarget",1,"Limit0109",1,{-0.0117854,-0.0173806},1},{"TargetingPodTarget",1,"Limit0109",1,{-0.0176381,-0.0116134},1},{},{}};
					};
				};
				class MainCenterLine1
				{
					type = "line";
					width = 3.0;
					points[] = {{"PlaneW",{-0.49,"0 + 0.025"},1},{"PlaneW",{-0.49,0},1},{"PlaneW",{-0.45,0},1}};
				};
				class MainCenterLine2
				{
					type = "line";
					width = 3.0;
					points[] = {{"PlaneW",{-0.33,0},1},{"PlaneW",{-0.25,0},1}};
				};
				class MainCenterLine3
				{
					type = "line";
					width = 3.0;
					points[] = {{"PlaneW",{0.49,"0 + 0.025"},1},{"PlaneW",{0.49,0},1},{"PlaneW",{0.25,0},1}};
				};
				class SpeedIndicatorBox
				{
					type = "line";
					width = 3.0;
					points[] = {{"PlaneW",{-0.49,-0.25},1},{"PlaneW",{-0.49,-0.2},1},{"PlaneW",{-0.3,-0.2},1},{"PlaneW",{-0.3,-0.25},1},{"PlaneW",{-0.49,-0.25},1}};
				};
				class SpeedNumber
				{
					type = "text";
					source = "speed";
					sourceScale = 3.6;
					align = "center";
					scale = 1;
					pos[] = {"PlaneW",{-0.4,-0.25},1};
					right[] = {"PlaneW",{-0.3,-0.25},1};
					down[] = {"PlaneW",{-0.4,-0.2},1};
				};
				class AltitudeIndicatorBox
				{
					type = "line";
					width = 3.0;
					points[] = {{"PlaneW",{0.49,-0.25},1},{"PlaneW",{0.49,-0.2},1},{"PlaneW",{0.3,-0.2},1},{"PlaneW",{0.3,-0.25},1},{"PlaneW",{0.49,-0.25},1}};
				};
				class AltitudeNumberASL
				{
					type = "text";
					source = "altitudeASL";
					sourceScale = 1;
					align = "center";
					scale = 1;
					pos[] = {"PlaneW",{0.4,-0.25},1};
					right[] = {"PlaneW",{0.48,-0.25},1};
					down[] = {"PlaneW",{0.4,-0.2},1};
				};
				class AltitudeRadarText
				{
					type = "text";
					source = "static";
					text = "AGL->";
					align = "left";
					scale = 1;
					sourceScale = 1;
					pos[] = {"PlaneW",{0.32,-0.192},1};
					right[] = {"PlaneW",{"+0.32 + 0.04",-0.192},1};
					down[] = {"PlaneW",{0.32,"-0.192 + 0.041"},1};
				};
				class AltitudeNumberAGL
				{
					type = "text";
					source = "altitudeAGL";
					sourceScale = 1;
					sourceLength = 4;
					sourceOffset = -2;
					align = "left";
					scale = 1;
					pos[] = {"PlaneW",{0.48,-0.19},1};
					right[] = {"PlaneW",{0.54,-0.19},1};
					down[] = {"PlaneW",{0.48,-0.15},1};
				};
				class PitchNumber
				{
					type = "text";
					source = "horizonDive";
					sourceScale = 57.2958;
					align = "right";
					scale = 1;
					pos[] = {"PlaneW",{-0.39,-0.076},1};
					right[] = {"PlaneW",{"-0.39 + 0.05",-0.076},1};
					down[] = {"PlaneW",{-0.39,"-0.076 + 0.05"},1};
				};
				class PitchText
				{
					type = "text";
					source = "static";
					text = "P:";
					align = "left";
					scale = 1;
					pos[] = {"PlaneW",{-0.41,-0.076},1};
					right[] = {"PlaneW",{"-0.41 + 0.04",-0.076},1};
					down[] = {"PlaneW",{-0.41,"-0.076 + 0.05"},1};
				};
				class RollNumber
				{
					type = "text";
					source = "horizonBank";
					sourceScale = 57.2958;
					align = "right";
					scale = 1;
					pos[] = {"PlaneW",{-0.39,-0.025},1};
					right[] = {"PlaneW",{"-0.39 + 0.05",-0.025},1};
					down[] = {"PlaneW",{-0.39,"-0.025 + 0.05"},1};
				};
				class RollText
				{
					type = "text";
					source = "static";
					text = "R:";
					align = "left";
					scale = 1;
					pos[] = {"PlaneW",{-0.41,-0.025},1};
					right[] = {"PlaneW",{"-0.41 + 0.04",-0.025},1};
					down[] = {"PlaneW",{-0.41,"-0.025 + 0.05"},1};
				};
				class ClimbNumber
				{
					type = "text";
					source = "vspeed";
					sourceScale = 1;
					align = "right";
					scale = 1;
					pos[] = {"PlaneW",{-0.39,0.026},1};
					right[] = {"PlaneW",{"-0.39 + 0.05",0.026},1};
					down[] = {"PlaneW",{-0.39,"+0.026 + 0.05"},1};
				};
				class ClimbText
				{
					type = "text";
					source = "static";
					text = "C:";
					align = "left";
					scale = 1;
					pos[] = {"PlaneW",{-0.41,0.026},1};
					right[] = {"PlaneW",{"-0.41 + 0.04",0.026},1};
					down[] = {"PlaneW",{-0.41,"+0.026 + 0.05"},1};
				};
				class fuelNumber
				{
					type = "text";
					source = "fuel";
					sourceScale = 100;
					align = "right";
					scale = 1;
					pos[] = {"PlaneW",{-0.4,0.07},1};
					right[] = {"PlaneW",{"-0.40 + 0.08",0.07},1};
					down[] = {"PlaneW",{-0.4,"0.07 + 0.08"},1};
				};
				class fuelText
				{
					type = "text";
					source = "static";
					text = "F:";
					align = "left";
					scale = 1;
					pos[] = {"PlaneW",{-0.41,0.08},1};
					right[] = {"PlaneW",{"-0.41 + 0.04",0.08},1};
					down[] = {"PlaneW",{-0.41,"0.08 + 0.05"},1};
				};
				class HeadingArrow
				{
					type = "line";
					width = 3.0;
					points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.042},1},{"WPPoint",1,"LimitWaypoint",1,{0,0.022},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.042},1}};
				};
				class WP
				{
					condition = "wpvalid";
					class WPdist
					{
						type = "text";
						source = "wpdist";
						sourceScale = 0.001;
						sourcePrecision = 1;
						align = "right";
						scale = 1;
						pos[] = {{0.924,0.505018},1};
						down[] = {{0.924,0.542464},1};
						right[] = {{0.964,0.505018},1};
					};
					class WPIndex
					{
						type = "text";
						source = "wpIndex";
						sourceScale = 1;
						sourceLength = 2;
						align = "right";
						scale = 1;
						pos[] = {{0.877,0.505018},1};
						right[] = {{0.917,0.505018},1};
						down[] = {{0.877,0.542464},1};
					};
					class WPstatic
					{
						type = "text";
						source = "static";
						text = "WP";
						scale = 1;
						sourceScale = 1;
						align = "right";
						pos[] = {{"0.825+0.01",0.5065},1};
						right[] = {{0.875,0.5065},1};
						down[] = {{"0.825+0.01",0.5415},1};
					};
					class WPKM
					{
						type = "text";
						source = "static";
						text = ":";
						scale = 1;
						sourceScale = 1;
						align = "left";
						pos[] = {{"0.825+0.09",0.5065},1};
						right[] = {{0.955,0.5065},1};
						down[] = {{"0.825+0.09",0.5415},1};
					};
				};
				class HeadingRotation
				{
					condition = "abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)-5";
					class HeadingHeadNumber
					{
						type = "text";
						source = "cameraDir";
						sourceScale = 1;
						align = "center";
						scale = 1;
						pos[] = {{"0.80-0.302","0.082+0.065"},1};
						right[] = {{"0.83-0.302","0.082+0.065"},1};
						down[] = {{"0.80-0.302","0.113+0.065"},1};
					};
					class HeadingArrow
					{
						type = "line";
						width = 3.0;
						points[] = {{{0.488,0.141},1},{{0.512,0.141},1},{{0.542,0.161},1},{{0.512,0.181},1},{{0.488,0.181},1},{{0.458,0.161},1},{{0.488,0.141},1},{}};
					};
				};
				class HeadingScale
				{
					type = "scale";
					NeverEatSeaWeed = 1;
					horizontal = 1;
					source = "heading";
					sourceScale = 1.0;
					width = 3.0;
					top = 0.1;
					center = 0.5;
					bottom = 0.9;
					lineXleft = 0.105;
					lineYright = 0.115;
					lineXleftMajor = 0.095;
					lineYrightMajor = 0.115;
					majorLineEach = 5;
					numberEach = 5;
					step = "18 / 9";
					stepSize = "(0.70 - 0.3) / 15";
					align = "center";
					scale = 1.0;
					pos[] = {0.096,0.0546};
					right[] = {0.143,0.0546};
					down[] = {0.096,0.093};
				};
				class HeadingIndicatorBox
				{
					type = "line";
					width = 3.0;
					points[] = {{"PlaneW",{-0.035,-0.455},1},{"PlaneW",{-0.035,-0.5},1},{"PlaneW",{0.035,-0.5},1},{"PlaneW",{0.035,-0.455},1},{"PlaneW",{-0.035,-0.455},1}};
				};
				class HeadingIndicatorArrow
				{
					type = "polygon";
					points[] = {{{"PlaneW",{-0.015,-0.455},1},{"PlaneW",{0,-0.445},1},{"PlaneW",{0.015,-0.455},1}}};
				};
				class HeadingNumber
				{
					type = "text";
					source = "heading";
					sourceScale = 1;
					align = "center";
					scale = 1;
					pos[] = {"PlaneW",{0,"(-0.5   )"},1};
					right[] = {"PlaneW",{0.03,"(-0.5   )"},1};
					down[] = {"PlaneW",{0,"(-0.5 + 0.045 )"},1};
				};
				class HorizonBankRot
				{
					type = "line";
					width = 2.0;
					points[] = {{"HorizonBankRot",{0,"0.39421001-0.109"},1},{"HorizonBankRot",{0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{-0.01,"0.41673699-0.109"},1},{"HorizonBankRot",{0,"0.39421001-0.109"},1}};
				};
				class HorizonBankRotLines
				{
					type = "line";
					width = 3.0;
					points[] = {{{0.619959,0.712986},1},{{0.631439,0.744203},1},{},{{0.58291,0.739019},1},{{0.588087,0.760778},1},{},{{0.540574,0.748504},1},{{0.543184,0.770838},1},{},{{0.4975,0.740421},1},{{0.4975,0.77421},1},{},{{0.454426,0.748504},1},{{0.451816,0.770838},1},{},{{0.41209,0.739019},1},{{0.406913,0.760778},1},{},{{0.375041,0.712986},1},{{0.363561,0.744203},1}};
				};
				class Horizont
				{
					clipTL[] = {0.2,0.2};
					clipBR[] = {0.8,0.8};
					class Dimmed
					{
						class Level0
						{
							type = "line";
							width = 3.0;
							points[] = {{"Level0",{0.75,0.0},1},{"Level0",{0.065,0.0},1},{},{"Level0",{-0.065,0.0},1},{"Level0",{-0.75,0.0},1}};
						};
					};
					class HideOnTurn
					{
						condition = "on";
						class Limiter
						{
							class Level0
							{
								type = "line";
								width = 2.0;
								points[] = {};
							};
							class LevelM5: Level0
							{
								type = "line";
								points[] = {{"LevelM5",{-0.235,-0.02},1},{"LevelM5",{-0.235,0},1},{},{"LevelM5",{-0.22,0},1},{"LevelM5",{-0.205,0},1},{},{"LevelM5",{-0.19,0},1},{"LevelM5",{-0.175,0},1},{},{"LevelM5",{-0.16,0},1},{"LevelM5",{-0.145,0},1},{},{"LevelM5",{-0.13,0},1},{"LevelM5",{-0.115,0},1},{},{"LevelM5",{-0.1,0},1},{"LevelM5",{-0.085,0},1},{},{"LevelM5",{-0.07,0},1},{"LevelM5",{-0.055,0},1},{},{},{"LevelM5",{0.235,-0.02},1},{"LevelM5",{0.235,0},1},{},{"LevelM5",{0.22,0},1},{"LevelM5",{0.205,0},1},{},{"LevelM5",{0.19,0},1},{"LevelM5",{0.175,0},1},{},{"LevelM5",{0.16,0},1},{"LevelM5",{0.145,0},1},{},{"LevelM5",{0.13,0},1},{"LevelM5",{0.115,0},1},{},{"LevelM5",{0.1,0},1},{"LevelM5",{0.085,0},1},{},{"LevelM5",{0.07,0},1},{"LevelM5",{0.055,0},1},{}};
							};
							class VALM_1_5
							{
								type = "text";
								source = "static";
								text = -5;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{-0.26,-0.032},1};
								right[] = {"LevelM5",{-0.2,-0.032},1};
								down[] = {"LevelM5",{-0.26,0.018},1};
							};
							class VALM_1_5_R
							{
								type = "text";
								source = "static";
								text = -5;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM5",{0.26,-0.032},1};
								right[] = {"LevelM5",{0.32,-0.032},1};
								down[] = {"LevelM5",{0.26,0.018},1};
							};
							class LevelP5: Level0
							{
								type = "line";
								points[] = {{"LevelP5",{"-0.22-0.015",0.02},1},{"LevelP5",{"-0.22-0.015",0},1},{"LevelP5",{-0.06,0},1},{},{"LevelP5",{0.06,0},1},{"LevelP5",{"+0.22+0.015",0},1},{"LevelP5",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_5
							{
								type = "text";
								source = "static";
								text = "5";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{-0.26,-0.017},1};
								right[] = {"LevelP5",{-0.2,-0.017},1};
								down[] = {"LevelP5",{-0.26,0.033},1};
							};
							class VALP_1_5_R
							{
								type = "text";
								source = "static";
								text = "5";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP5",{0.26,-0.017},1};
								right[] = {"LevelP5",{0.32,-0.017},1};
								down[] = {"LevelP5",{0.26,0.033},1};
							};
							class LevelM10: Level0
							{
								type = "line";
								points[] = {{"LevelM10",{-0.235,-0.02},1},{"LevelM10",{-0.235,0},1},{},{"LevelM10",{-0.22,0},1},{"LevelM10",{-0.205,0},1},{},{"LevelM10",{-0.19,0},1},{"LevelM10",{-0.175,0},1},{},{"LevelM10",{-0.16,0},1},{"LevelM10",{-0.145,0},1},{},{"LevelM10",{-0.13,0},1},{"LevelM10",{-0.115,0},1},{},{"LevelM10",{-0.1,0},1},{"LevelM10",{-0.085,0},1},{},{"LevelM10",{-0.07,0},1},{"LevelM10",{-0.055,0},1},{},{},{"LevelM10",{0.235,-0.02},1},{"LevelM10",{0.235,0},1},{},{"LevelM10",{0.22,0},1},{"LevelM10",{0.205,0},1},{},{"LevelM10",{0.19,0},1},{"LevelM10",{0.175,0},1},{},{"LevelM10",{0.16,0},1},{"LevelM10",{0.145,0},1},{},{"LevelM10",{0.13,0},1},{"LevelM10",{0.115,0},1},{},{"LevelM10",{0.1,0},1},{"LevelM10",{0.085,0},1},{},{"LevelM10",{0.07,0},1},{"LevelM10",{0.055,0},1},{}};
							};
							class VALM_1_10
							{
								type = "text";
								source = "static";
								text = -10;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{-0.26,-0.032},1};
								right[] = {"LevelM10",{-0.2,-0.032},1};
								down[] = {"LevelM10",{-0.26,0.018},1};
							};
							class VALM_1_10_R
							{
								type = "text";
								source = "static";
								text = -10;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM10",{0.26,-0.032},1};
								right[] = {"LevelM10",{0.32,-0.032},1};
								down[] = {"LevelM10",{0.26,0.018},1};
							};
							class LevelP10: Level0
							{
								type = "line";
								points[] = {{"LevelP10",{"-0.22-0.015",0.02},1},{"LevelP10",{"-0.22-0.015",0},1},{"LevelP10",{-0.06,0},1},{},{"LevelP10",{0.06,0},1},{"LevelP10",{"+0.22+0.015",0},1},{"LevelP10",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_10
							{
								type = "text";
								source = "static";
								text = "10";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{-0.26,-0.017},1};
								right[] = {"LevelP10",{-0.2,-0.017},1};
								down[] = {"LevelP10",{-0.26,0.033},1};
							};
							class VALP_1_10_R
							{
								type = "text";
								source = "static";
								text = "10";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP10",{0.26,-0.017},1};
								right[] = {"LevelP10",{0.32,-0.017},1};
								down[] = {"LevelP10",{0.26,0.033},1};
							};
							class LevelM15: Level0
							{
								type = "line";
								points[] = {{"LevelM15",{-0.235,-0.02},1},{"LevelM15",{-0.235,0},1},{},{"LevelM15",{-0.22,0},1},{"LevelM15",{-0.205,0},1},{},{"LevelM15",{-0.19,0},1},{"LevelM15",{-0.175,0},1},{},{"LevelM15",{-0.16,0},1},{"LevelM15",{-0.145,0},1},{},{"LevelM15",{-0.13,0},1},{"LevelM15",{-0.115,0},1},{},{"LevelM15",{-0.1,0},1},{"LevelM15",{-0.085,0},1},{},{"LevelM15",{-0.07,0},1},{"LevelM15",{-0.055,0},1},{},{},{"LevelM15",{0.235,-0.02},1},{"LevelM15",{0.235,0},1},{},{"LevelM15",{0.22,0},1},{"LevelM15",{0.205,0},1},{},{"LevelM15",{0.19,0},1},{"LevelM15",{0.175,0},1},{},{"LevelM15",{0.16,0},1},{"LevelM15",{0.145,0},1},{},{"LevelM15",{0.13,0},1},{"LevelM15",{0.115,0},1},{},{"LevelM15",{0.1,0},1},{"LevelM15",{0.085,0},1},{},{"LevelM15",{0.07,0},1},{"LevelM15",{0.055,0},1},{}};
							};
							class VALM_1_15
							{
								type = "text";
								source = "static";
								text = -15;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{-0.26,-0.032},1};
								right[] = {"LevelM15",{-0.2,-0.032},1};
								down[] = {"LevelM15",{-0.26,0.018},1};
							};
							class VALM_1_15_R
							{
								type = "text";
								source = "static";
								text = -15;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM15",{0.26,-0.032},1};
								right[] = {"LevelM15",{0.32,-0.032},1};
								down[] = {"LevelM15",{0.26,0.018},1};
							};
							class LevelP15: Level0
							{
								type = "line";
								points[] = {{"LevelP15",{"-0.22-0.015",0.02},1},{"LevelP15",{"-0.22-0.015",0},1},{"LevelP15",{-0.06,0},1},{},{"LevelP15",{0.06,0},1},{"LevelP15",{"+0.22+0.015",0},1},{"LevelP15",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_15
							{
								type = "text";
								source = "static";
								text = "15";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{-0.26,-0.017},1};
								right[] = {"LevelP15",{-0.2,-0.017},1};
								down[] = {"LevelP15",{-0.26,0.033},1};
							};
							class VALP_1_15_R
							{
								type = "text";
								source = "static";
								text = "15";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP15",{0.26,-0.017},1};
								right[] = {"LevelP15",{0.32,-0.017},1};
								down[] = {"LevelP15",{0.26,0.033},1};
							};
							class LevelM20: Level0
							{
								type = "line";
								points[] = {{"LevelM20",{-0.235,-0.02},1},{"LevelM20",{-0.235,0},1},{},{"LevelM20",{-0.22,0},1},{"LevelM20",{-0.205,0},1},{},{"LevelM20",{-0.19,0},1},{"LevelM20",{-0.175,0},1},{},{"LevelM20",{-0.16,0},1},{"LevelM20",{-0.145,0},1},{},{"LevelM20",{-0.13,0},1},{"LevelM20",{-0.115,0},1},{},{"LevelM20",{-0.1,0},1},{"LevelM20",{-0.085,0},1},{},{"LevelM20",{-0.07,0},1},{"LevelM20",{-0.055,0},1},{},{},{"LevelM20",{0.235,-0.02},1},{"LevelM20",{0.235,0},1},{},{"LevelM20",{0.22,0},1},{"LevelM20",{0.205,0},1},{},{"LevelM20",{0.19,0},1},{"LevelM20",{0.175,0},1},{},{"LevelM20",{0.16,0},1},{"LevelM20",{0.145,0},1},{},{"LevelM20",{0.13,0},1},{"LevelM20",{0.115,0},1},{},{"LevelM20",{0.1,0},1},{"LevelM20",{0.085,0},1},{},{"LevelM20",{0.07,0},1},{"LevelM20",{0.055,0},1},{}};
							};
							class VALM_1_20
							{
								type = "text";
								source = "static";
								text = -20;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{-0.26,-0.032},1};
								right[] = {"LevelM20",{-0.2,-0.032},1};
								down[] = {"LevelM20",{-0.26,0.018},1};
							};
							class VALM_1_20_R
							{
								type = "text";
								source = "static";
								text = -20;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM20",{0.26,-0.032},1};
								right[] = {"LevelM20",{0.32,-0.032},1};
								down[] = {"LevelM20",{0.26,0.018},1};
							};
							class LevelP20: Level0
							{
								type = "line";
								points[] = {{"LevelP20",{"-0.22-0.015",0.02},1},{"LevelP20",{"-0.22-0.015",0},1},{"LevelP20",{-0.06,0},1},{},{"LevelP20",{0.06,0},1},{"LevelP20",{"+0.22+0.015",0},1},{"LevelP20",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_20
							{
								type = "text";
								source = "static";
								text = "20";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{-0.26,-0.017},1};
								right[] = {"LevelP20",{-0.2,-0.017},1};
								down[] = {"LevelP20",{-0.26,0.033},1};
							};
							class VALP_1_20_R
							{
								type = "text";
								source = "static";
								text = "20";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP20",{0.26,-0.017},1};
								right[] = {"LevelP20",{0.32,-0.017},1};
								down[] = {"LevelP20",{0.26,0.033},1};
							};
							class LevelM25: Level0
							{
								type = "line";
								points[] = {{"LevelM25",{-0.235,-0.02},1},{"LevelM25",{-0.235,0},1},{},{"LevelM25",{-0.22,0},1},{"LevelM25",{-0.205,0},1},{},{"LevelM25",{-0.19,0},1},{"LevelM25",{-0.175,0},1},{},{"LevelM25",{-0.16,0},1},{"LevelM25",{-0.145,0},1},{},{"LevelM25",{-0.13,0},1},{"LevelM25",{-0.115,0},1},{},{"LevelM25",{-0.1,0},1},{"LevelM25",{-0.085,0},1},{},{"LevelM25",{-0.07,0},1},{"LevelM25",{-0.055,0},1},{},{},{"LevelM25",{0.235,-0.02},1},{"LevelM25",{0.235,0},1},{},{"LevelM25",{0.22,0},1},{"LevelM25",{0.205,0},1},{},{"LevelM25",{0.19,0},1},{"LevelM25",{0.175,0},1},{},{"LevelM25",{0.16,0},1},{"LevelM25",{0.145,0},1},{},{"LevelM25",{0.13,0},1},{"LevelM25",{0.115,0},1},{},{"LevelM25",{0.1,0},1},{"LevelM25",{0.085,0},1},{},{"LevelM25",{0.07,0},1},{"LevelM25",{0.055,0},1},{}};
							};
							class VALM_1_25
							{
								type = "text";
								source = "static";
								text = -25;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{-0.26,-0.032},1};
								right[] = {"LevelM25",{-0.2,-0.032},1};
								down[] = {"LevelM25",{-0.26,0.018},1};
							};
							class VALM_1_25_R
							{
								type = "text";
								source = "static";
								text = -25;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM25",{0.26,-0.032},1};
								right[] = {"LevelM25",{0.32,-0.032},1};
								down[] = {"LevelM25",{0.26,0.018},1};
							};
							class LevelP25: Level0
							{
								type = "line";
								points[] = {{"LevelP25",{"-0.22-0.015",0.02},1},{"LevelP25",{"-0.22-0.015",0},1},{"LevelP25",{-0.06,0},1},{},{"LevelP25",{0.06,0},1},{"LevelP25",{"+0.22+0.015",0},1},{"LevelP25",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_25
							{
								type = "text";
								source = "static";
								text = "25";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{-0.26,-0.017},1};
								right[] = {"LevelP25",{-0.2,-0.017},1};
								down[] = {"LevelP25",{-0.26,0.033},1};
							};
							class VALP_1_25_R
							{
								type = "text";
								source = "static";
								text = "25";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP25",{0.26,-0.017},1};
								right[] = {"LevelP25",{0.32,-0.017},1};
								down[] = {"LevelP25",{0.26,0.033},1};
							};
							class LevelM30: Level0
							{
								type = "line";
								points[] = {{"LevelM30",{-0.235,-0.02},1},{"LevelM30",{-0.235,0},1},{},{"LevelM30",{-0.22,0},1},{"LevelM30",{-0.205,0},1},{},{"LevelM30",{-0.19,0},1},{"LevelM30",{-0.175,0},1},{},{"LevelM30",{-0.16,0},1},{"LevelM30",{-0.145,0},1},{},{"LevelM30",{-0.13,0},1},{"LevelM30",{-0.115,0},1},{},{"LevelM30",{-0.1,0},1},{"LevelM30",{-0.085,0},1},{},{"LevelM30",{-0.07,0},1},{"LevelM30",{-0.055,0},1},{},{},{"LevelM30",{0.235,-0.02},1},{"LevelM30",{0.235,0},1},{},{"LevelM30",{0.22,0},1},{"LevelM30",{0.205,0},1},{},{"LevelM30",{0.19,0},1},{"LevelM30",{0.175,0},1},{},{"LevelM30",{0.16,0},1},{"LevelM30",{0.145,0},1},{},{"LevelM30",{0.13,0},1},{"LevelM30",{0.115,0},1},{},{"LevelM30",{0.1,0},1},{"LevelM30",{0.085,0},1},{},{"LevelM30",{0.07,0},1},{"LevelM30",{0.055,0},1},{}};
							};
							class VALM_1_30
							{
								type = "text";
								source = "static";
								text = -30;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{-0.26,-0.032},1};
								right[] = {"LevelM30",{-0.2,-0.032},1};
								down[] = {"LevelM30",{-0.26,0.018},1};
							};
							class VALM_1_30_R
							{
								type = "text";
								source = "static";
								text = -30;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM30",{0.26,-0.032},1};
								right[] = {"LevelM30",{0.32,-0.032},1};
								down[] = {"LevelM30",{0.26,0.018},1};
							};
							class LevelP30: Level0
							{
								type = "line";
								points[] = {{"LevelP30",{"-0.22-0.015",0.02},1},{"LevelP30",{"-0.22-0.015",0},1},{"LevelP30",{-0.06,0},1},{},{"LevelP30",{0.06,0},1},{"LevelP30",{"+0.22+0.015",0},1},{"LevelP30",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_30
							{
								type = "text";
								source = "static";
								text = "30";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{-0.26,-0.017},1};
								right[] = {"LevelP30",{-0.2,-0.017},1};
								down[] = {"LevelP30",{-0.26,0.033},1};
							};
							class VALP_1_30_R
							{
								type = "text";
								source = "static";
								text = "30";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP30",{0.26,-0.017},1};
								right[] = {"LevelP30",{0.32,-0.017},1};
								down[] = {"LevelP30",{0.26,0.033},1};
							};
							class LevelM35: Level0
							{
								type = "line";
								points[] = {{"LevelM35",{-0.235,-0.02},1},{"LevelM35",{-0.235,0},1},{},{"LevelM35",{-0.22,0},1},{"LevelM35",{-0.205,0},1},{},{"LevelM35",{-0.19,0},1},{"LevelM35",{-0.175,0},1},{},{"LevelM35",{-0.16,0},1},{"LevelM35",{-0.145,0},1},{},{"LevelM35",{-0.13,0},1},{"LevelM35",{-0.115,0},1},{},{"LevelM35",{-0.1,0},1},{"LevelM35",{-0.085,0},1},{},{"LevelM35",{-0.07,0},1},{"LevelM35",{-0.055,0},1},{},{},{"LevelM35",{0.235,-0.02},1},{"LevelM35",{0.235,0},1},{},{"LevelM35",{0.22,0},1},{"LevelM35",{0.205,0},1},{},{"LevelM35",{0.19,0},1},{"LevelM35",{0.175,0},1},{},{"LevelM35",{0.16,0},1},{"LevelM35",{0.145,0},1},{},{"LevelM35",{0.13,0},1},{"LevelM35",{0.115,0},1},{},{"LevelM35",{0.1,0},1},{"LevelM35",{0.085,0},1},{},{"LevelM35",{0.07,0},1},{"LevelM35",{0.055,0},1},{}};
							};
							class VALM_1_35
							{
								type = "text";
								source = "static";
								text = -35;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{-0.26,-0.032},1};
								right[] = {"LevelM35",{-0.2,-0.032},1};
								down[] = {"LevelM35",{-0.26,0.018},1};
							};
							class VALM_1_35_R
							{
								type = "text";
								source = "static";
								text = -35;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM35",{0.26,-0.032},1};
								right[] = {"LevelM35",{0.32,-0.032},1};
								down[] = {"LevelM35",{0.26,0.018},1};
							};
							class LevelP35: Level0
							{
								type = "line";
								points[] = {{"LevelP35",{"-0.22-0.015",0.02},1},{"LevelP35",{"-0.22-0.015",0},1},{"LevelP35",{-0.06,0},1},{},{"LevelP35",{0.06,0},1},{"LevelP35",{"+0.22+0.015",0},1},{"LevelP35",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_35
							{
								type = "text";
								source = "static";
								text = "35";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{-0.26,-0.017},1};
								right[] = {"LevelP35",{-0.2,-0.017},1};
								down[] = {"LevelP35",{-0.26,0.033},1};
							};
							class VALP_1_35_R
							{
								type = "text";
								source = "static";
								text = "35";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP35",{0.26,-0.017},1};
								right[] = {"LevelP35",{0.32,-0.017},1};
								down[] = {"LevelP35",{0.26,0.033},1};
							};
							class LevelM40: Level0
							{
								type = "line";
								points[] = {{"LevelM40",{-0.235,-0.02},1},{"LevelM40",{-0.235,0},1},{},{"LevelM40",{-0.22,0},1},{"LevelM40",{-0.205,0},1},{},{"LevelM40",{-0.19,0},1},{"LevelM40",{-0.175,0},1},{},{"LevelM40",{-0.16,0},1},{"LevelM40",{-0.145,0},1},{},{"LevelM40",{-0.13,0},1},{"LevelM40",{-0.115,0},1},{},{"LevelM40",{-0.1,0},1},{"LevelM40",{-0.085,0},1},{},{"LevelM40",{-0.07,0},1},{"LevelM40",{-0.055,0},1},{},{},{"LevelM40",{0.235,-0.02},1},{"LevelM40",{0.235,0},1},{},{"LevelM40",{0.22,0},1},{"LevelM40",{0.205,0},1},{},{"LevelM40",{0.19,0},1},{"LevelM40",{0.175,0},1},{},{"LevelM40",{0.16,0},1},{"LevelM40",{0.145,0},1},{},{"LevelM40",{0.13,0},1},{"LevelM40",{0.115,0},1},{},{"LevelM40",{0.1,0},1},{"LevelM40",{0.085,0},1},{},{"LevelM40",{0.07,0},1},{"LevelM40",{0.055,0},1},{}};
							};
							class VALM_1_40
							{
								type = "text";
								source = "static";
								text = -40;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{-0.26,-0.032},1};
								right[] = {"LevelM40",{-0.2,-0.032},1};
								down[] = {"LevelM40",{-0.26,0.018},1};
							};
							class VALM_1_40_R
							{
								type = "text";
								source = "static";
								text = -40;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM40",{0.26,-0.032},1};
								right[] = {"LevelM40",{0.32,-0.032},1};
								down[] = {"LevelM40",{0.26,0.018},1};
							};
							class LevelP40: Level0
							{
								type = "line";
								points[] = {{"LevelP40",{"-0.22-0.015",0.02},1},{"LevelP40",{"-0.22-0.015",0},1},{"LevelP40",{-0.06,0},1},{},{"LevelP40",{0.06,0},1},{"LevelP40",{"+0.22+0.015",0},1},{"LevelP40",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_40
							{
								type = "text";
								source = "static";
								text = "40";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{-0.26,-0.017},1};
								right[] = {"LevelP40",{-0.2,-0.017},1};
								down[] = {"LevelP40",{-0.26,0.033},1};
							};
							class VALP_1_40_R
							{
								type = "text";
								source = "static";
								text = "40";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP40",{0.26,-0.017},1};
								right[] = {"LevelP40",{0.32,-0.017},1};
								down[] = {"LevelP40",{0.26,0.033},1};
							};
							class LevelM45: Level0
							{
								type = "line";
								points[] = {{"LevelM45",{-0.235,-0.02},1},{"LevelM45",{-0.235,0},1},{},{"LevelM45",{-0.22,0},1},{"LevelM45",{-0.205,0},1},{},{"LevelM45",{-0.19,0},1},{"LevelM45",{-0.175,0},1},{},{"LevelM45",{-0.16,0},1},{"LevelM45",{-0.145,0},1},{},{"LevelM45",{-0.13,0},1},{"LevelM45",{-0.115,0},1},{},{"LevelM45",{-0.1,0},1},{"LevelM45",{-0.085,0},1},{},{"LevelM45",{-0.07,0},1},{"LevelM45",{-0.055,0},1},{},{},{"LevelM45",{0.235,-0.02},1},{"LevelM45",{0.235,0},1},{},{"LevelM45",{0.22,0},1},{"LevelM45",{0.205,0},1},{},{"LevelM45",{0.19,0},1},{"LevelM45",{0.175,0},1},{},{"LevelM45",{0.16,0},1},{"LevelM45",{0.145,0},1},{},{"LevelM45",{0.13,0},1},{"LevelM45",{0.115,0},1},{},{"LevelM45",{0.1,0},1},{"LevelM45",{0.085,0},1},{},{"LevelM45",{0.07,0},1},{"LevelM45",{0.055,0},1},{}};
							};
							class VALM_1_45
							{
								type = "text";
								source = "static";
								text = -45;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{-0.26,-0.032},1};
								right[] = {"LevelM45",{-0.2,-0.032},1};
								down[] = {"LevelM45",{-0.26,0.018},1};
							};
							class VALM_1_45_R
							{
								type = "text";
								source = "static";
								text = -45;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM45",{0.26,-0.032},1};
								right[] = {"LevelM45",{0.32,-0.032},1};
								down[] = {"LevelM45",{0.26,0.018},1};
							};
							class LevelP45: Level0
							{
								type = "line";
								points[] = {{"LevelP45",{"-0.22-0.015",0.02},1},{"LevelP45",{"-0.22-0.015",0},1},{"LevelP45",{-0.06,0},1},{},{"LevelP45",{0.06,0},1},{"LevelP45",{"+0.22+0.015",0},1},{"LevelP45",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_45
							{
								type = "text";
								source = "static";
								text = "45";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{-0.26,-0.017},1};
								right[] = {"LevelP45",{-0.2,-0.017},1};
								down[] = {"LevelP45",{-0.26,0.033},1};
							};
							class VALP_1_45_R
							{
								type = "text";
								source = "static";
								text = "45";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP45",{0.26,-0.017},1};
								right[] = {"LevelP45",{0.32,-0.017},1};
								down[] = {"LevelP45",{0.26,0.033},1};
							};
							class LevelM50: Level0
							{
								type = "line";
								points[] = {{"LevelM50",{-0.235,-0.02},1},{"LevelM50",{-0.235,0},1},{},{"LevelM50",{-0.22,0},1},{"LevelM50",{-0.205,0},1},{},{"LevelM50",{-0.19,0},1},{"LevelM50",{-0.175,0},1},{},{"LevelM50",{-0.16,0},1},{"LevelM50",{-0.145,0},1},{},{"LevelM50",{-0.13,0},1},{"LevelM50",{-0.115,0},1},{},{"LevelM50",{-0.1,0},1},{"LevelM50",{-0.085,0},1},{},{"LevelM50",{-0.07,0},1},{"LevelM50",{-0.055,0},1},{},{},{"LevelM50",{0.235,-0.02},1},{"LevelM50",{0.235,0},1},{},{"LevelM50",{0.22,0},1},{"LevelM50",{0.205,0},1},{},{"LevelM50",{0.19,0},1},{"LevelM50",{0.175,0},1},{},{"LevelM50",{0.16,0},1},{"LevelM50",{0.145,0},1},{},{"LevelM50",{0.13,0},1},{"LevelM50",{0.115,0},1},{},{"LevelM50",{0.1,0},1},{"LevelM50",{0.085,0},1},{},{"LevelM50",{0.07,0},1},{"LevelM50",{0.055,0},1},{}};
							};
							class VALM_1_50
							{
								type = "text";
								source = "static";
								text = -50;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{-0.26,-0.032},1};
								right[] = {"LevelM50",{-0.2,-0.032},1};
								down[] = {"LevelM50",{-0.26,0.018},1};
							};
							class VALM_1_50_R
							{
								type = "text";
								source = "static";
								text = -50;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM50",{0.26,-0.032},1};
								right[] = {"LevelM50",{0.32,-0.032},1};
								down[] = {"LevelM50",{0.26,0.018},1};
							};
							class LevelP50: Level0
							{
								type = "line";
								points[] = {{"LevelP50",{"-0.22-0.015",0.02},1},{"LevelP50",{"-0.22-0.015",0},1},{"LevelP50",{-0.06,0},1},{},{"LevelP50",{0.06,0},1},{"LevelP50",{"+0.22+0.015",0},1},{"LevelP50",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_50
							{
								type = "text";
								source = "static";
								text = "50";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{-0.26,-0.017},1};
								right[] = {"LevelP50",{-0.2,-0.017},1};
								down[] = {"LevelP50",{-0.26,0.033},1};
							};
							class VALP_1_50_R
							{
								type = "text";
								source = "static";
								text = "50";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP50",{0.26,-0.017},1};
								right[] = {"LevelP50",{0.32,-0.017},1};
								down[] = {"LevelP50",{0.26,0.033},1};
							};
							class LevelM60: Level0
							{
								type = "line";
								points[] = {{"LevelM60",{-0.235,-0.02},1},{"LevelM60",{-0.235,0},1},{},{"LevelM60",{-0.22,0},1},{"LevelM60",{-0.205,0},1},{},{"LevelM60",{-0.19,0},1},{"LevelM60",{-0.175,0},1},{},{"LevelM60",{-0.16,0},1},{"LevelM60",{-0.145,0},1},{},{"LevelM60",{-0.13,0},1},{"LevelM60",{-0.115,0},1},{},{"LevelM60",{-0.1,0},1},{"LevelM60",{-0.085,0},1},{},{"LevelM60",{-0.07,0},1},{"LevelM60",{-0.055,0},1},{},{},{"LevelM60",{0.235,-0.02},1},{"LevelM60",{0.235,0},1},{},{"LevelM60",{0.22,0},1},{"LevelM60",{0.205,0},1},{},{"LevelM60",{0.19,0},1},{"LevelM60",{0.175,0},1},{},{"LevelM60",{0.16,0},1},{"LevelM60",{0.145,0},1},{},{"LevelM60",{0.13,0},1},{"LevelM60",{0.115,0},1},{},{"LevelM60",{0.1,0},1},{"LevelM60",{0.085,0},1},{},{"LevelM60",{0.07,0},1},{"LevelM60",{0.055,0},1},{}};
							};
							class VALM_1_60
							{
								type = "text";
								source = "static";
								text = -60;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM60",{-0.26,-0.032},1};
								right[] = {"LevelM60",{-0.2,-0.032},1};
								down[] = {"LevelM60",{-0.26,0.018},1};
							};
							class VALM_1_60_R
							{
								type = "text";
								source = "static";
								text = -60;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM60",{0.26,-0.032},1};
								right[] = {"LevelM60",{0.32,-0.032},1};
								down[] = {"LevelM60",{0.26,0.018},1};
							};
							class LevelP60: Level0
							{
								type = "line";
								points[] = {{"LevelP60",{"-0.22-0.015",0.02},1},{"LevelP60",{"-0.22-0.015",0},1},{"LevelP60",{-0.06,0},1},{},{"LevelP60",{0.06,0},1},{"LevelP60",{"+0.22+0.015",0},1},{"LevelP60",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_60
							{
								type = "text";
								source = "static";
								text = "60";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP60",{-0.26,-0.017},1};
								right[] = {"LevelP60",{-0.2,-0.017},1};
								down[] = {"LevelP60",{-0.26,0.033},1};
							};
							class VALP_1_60_R
							{
								type = "text";
								source = "static";
								text = "60";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP60",{0.26,-0.017},1};
								right[] = {"LevelP60",{0.32,-0.017},1};
								down[] = {"LevelP60",{0.26,0.033},1};
							};
							class LevelM70: Level0
							{
								type = "line";
								points[] = {{"LevelM70",{-0.235,-0.02},1},{"LevelM70",{-0.235,0},1},{},{"LevelM70",{-0.22,0},1},{"LevelM70",{-0.205,0},1},{},{"LevelM70",{-0.19,0},1},{"LevelM70",{-0.175,0},1},{},{"LevelM70",{-0.16,0},1},{"LevelM70",{-0.145,0},1},{},{"LevelM70",{-0.13,0},1},{"LevelM70",{-0.115,0},1},{},{"LevelM70",{-0.1,0},1},{"LevelM70",{-0.085,0},1},{},{"LevelM70",{-0.07,0},1},{"LevelM70",{-0.055,0},1},{},{},{"LevelM70",{0.235,-0.02},1},{"LevelM70",{0.235,0},1},{},{"LevelM70",{0.22,0},1},{"LevelM70",{0.205,0},1},{},{"LevelM70",{0.19,0},1},{"LevelM70",{0.175,0},1},{},{"LevelM70",{0.16,0},1},{"LevelM70",{0.145,0},1},{},{"LevelM70",{0.13,0},1},{"LevelM70",{0.115,0},1},{},{"LevelM70",{0.1,0},1},{"LevelM70",{0.085,0},1},{},{"LevelM70",{0.07,0},1},{"LevelM70",{0.055,0},1},{}};
							};
							class VALM_1_70
							{
								type = "text";
								source = "static";
								text = -70;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM70",{-0.26,-0.032},1};
								right[] = {"LevelM70",{-0.2,-0.032},1};
								down[] = {"LevelM70",{-0.26,0.018},1};
							};
							class VALM_1_70_R
							{
								type = "text";
								source = "static";
								text = -70;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM70",{0.26,-0.032},1};
								right[] = {"LevelM70",{0.32,-0.032},1};
								down[] = {"LevelM70",{0.26,0.018},1};
							};
							class LevelP70: Level0
							{
								type = "line";
								points[] = {{"LevelP70",{"-0.22-0.015",0.02},1},{"LevelP70",{"-0.22-0.015",0},1},{"LevelP70",{-0.06,0},1},{},{"LevelP70",{0.06,0},1},{"LevelP70",{"+0.22+0.015",0},1},{"LevelP70",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_70
							{
								type = "text";
								source = "static";
								text = "70";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP70",{-0.26,-0.017},1};
								right[] = {"LevelP70",{-0.2,-0.017},1};
								down[] = {"LevelP70",{-0.26,0.033},1};
							};
							class VALP_1_70_R
							{
								type = "text";
								source = "static";
								text = "70";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP70",{0.26,-0.017},1};
								right[] = {"LevelP70",{0.32,-0.017},1};
								down[] = {"LevelP70",{0.26,0.033},1};
							};
							class LevelM80: Level0
							{
								type = "line";
								points[] = {{"LevelM80",{-0.235,-0.02},1},{"LevelM80",{-0.235,0},1},{},{"LevelM80",{-0.22,0},1},{"LevelM80",{-0.205,0},1},{},{"LevelM80",{-0.19,0},1},{"LevelM80",{-0.175,0},1},{},{"LevelM80",{-0.16,0},1},{"LevelM80",{-0.145,0},1},{},{"LevelM80",{-0.13,0},1},{"LevelM80",{-0.115,0},1},{},{"LevelM80",{-0.1,0},1},{"LevelM80",{-0.085,0},1},{},{"LevelM80",{-0.07,0},1},{"LevelM80",{-0.055,0},1},{},{},{"LevelM80",{0.235,-0.02},1},{"LevelM80",{0.235,0},1},{},{"LevelM80",{0.22,0},1},{"LevelM80",{0.205,0},1},{},{"LevelM80",{0.19,0},1},{"LevelM80",{0.175,0},1},{},{"LevelM80",{0.16,0},1},{"LevelM80",{0.145,0},1},{},{"LevelM80",{0.13,0},1},{"LevelM80",{0.115,0},1},{},{"LevelM80",{0.1,0},1},{"LevelM80",{0.085,0},1},{},{"LevelM80",{0.07,0},1},{"LevelM80",{0.055,0},1},{}};
							};
							class VALM_1_80
							{
								type = "text";
								source = "static";
								text = -80;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM80",{-0.26,-0.032},1};
								right[] = {"LevelM80",{-0.2,-0.032},1};
								down[] = {"LevelM80",{-0.26,0.018},1};
							};
							class VALM_1_80_R
							{
								type = "text";
								source = "static";
								text = -80;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM80",{0.26,-0.032},1};
								right[] = {"LevelM80",{0.32,-0.032},1};
								down[] = {"LevelM80",{0.26,0.018},1};
							};
							class LevelP80: Level0
							{
								type = "line";
								points[] = {{"LevelP80",{"-0.22-0.015",0.02},1},{"LevelP80",{"-0.22-0.015",0},1},{"LevelP80",{-0.06,0},1},{},{"LevelP80",{0.06,0},1},{"LevelP80",{"+0.22+0.015",0},1},{"LevelP80",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_80
							{
								type = "text";
								source = "static";
								text = "80";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP80",{-0.26,-0.017},1};
								right[] = {"LevelP80",{-0.2,-0.017},1};
								down[] = {"LevelP80",{-0.26,0.033},1};
							};
							class VALP_1_80_R
							{
								type = "text";
								source = "static";
								text = "80";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP80",{0.26,-0.017},1};
								right[] = {"LevelP80",{0.32,-0.017},1};
								down[] = {"LevelP80",{0.26,0.033},1};
							};
							class LevelM90: Level0
							{
								type = "line";
								points[] = {{"LevelM90",{-0.235,-0.02},1},{"LevelM90",{-0.235,0},1},{},{"LevelM90",{-0.22,0},1},{"LevelM90",{-0.205,0},1},{},{"LevelM90",{-0.19,0},1},{"LevelM90",{-0.175,0},1},{},{"LevelM90",{-0.16,0},1},{"LevelM90",{-0.145,0},1},{},{"LevelM90",{-0.13,0},1},{"LevelM90",{-0.115,0},1},{},{"LevelM90",{-0.1,0},1},{"LevelM90",{-0.085,0},1},{},{"LevelM90",{-0.07,0},1},{"LevelM90",{-0.055,0},1},{},{},{"LevelM90",{0.235,-0.02},1},{"LevelM90",{0.235,0},1},{},{"LevelM90",{0.22,0},1},{"LevelM90",{0.205,0},1},{},{"LevelM90",{0.19,0},1},{"LevelM90",{0.175,0},1},{},{"LevelM90",{0.16,0},1},{"LevelM90",{0.145,0},1},{},{"LevelM90",{0.13,0},1},{"LevelM90",{0.115,0},1},{},{"LevelM90",{0.1,0},1},{"LevelM90",{0.085,0},1},{},{"LevelM90",{0.07,0},1},{"LevelM90",{0.055,0},1},{}};
							};
							class VALM_1_90
							{
								type = "text";
								source = "static";
								text = -90;
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM90",{-0.26,-0.032},1};
								right[] = {"LevelM90",{-0.2,-0.032},1};
								down[] = {"LevelM90",{-0.26,0.018},1};
							};
							class VALM_1_90_R
							{
								type = "text";
								source = "static";
								text = -90;
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelM90",{0.26,-0.032},1};
								right[] = {"LevelM90",{0.32,-0.032},1};
								down[] = {"LevelM90",{0.26,0.018},1};
							};
							class LevelP90: Level0
							{
								type = "line";
								points[] = {{"LevelP90",{"-0.22-0.015",0.02},1},{"LevelP90",{"-0.22-0.015",0},1},{"LevelP90",{-0.06,0},1},{},{"LevelP90",{0.06,0},1},{"LevelP90",{"+0.22+0.015",0},1},{"LevelP90",{"+0.22+0.015",0.02},1}};
							};
							class VALP_1_90
							{
								type = "text";
								source = "static";
								text = "90";
								align = "left";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP90",{-0.26,-0.017},1};
								right[] = {"LevelP90",{-0.2,-0.017},1};
								down[] = {"LevelP90",{-0.26,0.033},1};
							};
							class VALP_1_90_R
							{
								type = "text";
								source = "static";
								text = "90";
								align = "right";
								scale = 1;
								sourceScale = 1;
								pos[] = {"LevelP90",{0.26,-0.017},1};
								right[] = {"LevelP90",{0.32,-0.017},1};
								down[] = {"LevelP90",{0.26,0.033},1};
							};
						};
					};
					class UnhideOnTurn
					{
						condition = "on";
						class Cross
						{
							type = "line";
							width = 3.0;
							points[] = {{"PlaneW",{-0.02,0},1},{"PlaneW",{-0.04,0},1},{},{"PlaneW",{0.02,0},1},{"PlaneW",{0.04,0},1},{},{"PlaneW",{0,-0.019708},1},{"PlaneW",{0,-0.0394161},1},{},{"PlaneW",{0,0.019708},1},{"PlaneW",{0,0.0394161},1},{}};
						};
					};
				};
				class RadarBoxes
				{
					type = "radartoview";
					pos0[] = {0.5,0.5};
					pos10[] = {0.773,0.773};
					width = 4;
					points[] = {{{-0.002,-0.002},1},{{0.002,-0.002},1},{{0.002,0.002},1},{{-0.002,0.002},1},{{-0.002,-0.002},1}};
				};
				class TargetDiamond
				{
					class shape
					{
						type = "line";
						width = 4;
						points[] = {{"Target",1,"Limit0109",1,{0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,0.02},1},{"Target",1,"Limit0109",1,{-0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,-0.02},1},{"Target",1,"Limit0109",1,{0.02,0.02},1}};
					};
				};
			};
		};
	};
	class Reflectors{};
	class TextureSources
	{
		class ARC
		{
			displayName = "ARC";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_ARC_CO.paa","3AS\3as_Laat\LAATI\data\wings_ARC_CO.paa","3AS\3as_Laat\LAATI\data\weapons_ARC_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
		class Imperial
		{
			displayName = "Imperial";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_Imp_CO.paa","3AS\3as_Laat\LAATI\data\wings_Imp_CO.paa","3AS\3as_Laat\LAATI\data\weapons_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
		class 212thAB
		{
			displayName = "212th Attack Battalion";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_212_CO.paa","3AS\3as_Laat\LAATI\data\wings_212_CO.paa","3AS\3as_Laat\LAATI\data\weapons_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
		class 501stLegion
		{
			displayName = "501st Legion";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_501_CO.paa","3AS\3as_Laat\LAATI\data\wings_501_CO.paa","3AS\3as_Laat\LAATI\data\weapons_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
		class 91stRecon
		{
			displayName = "91st Reconnisance";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_91_CO.paa","3AS\3as_Laat\LAATI\data\wings_CO.paa","3AS\3as_Laat\LAATI\data\weapons_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
		class 101stDoom
		{
			displayName = "101st Doom Company";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_101_CO.paa","3AS\3as_Laat\LAATI\data\wings_101_CO.paa","3AS\3as_Laat\LAATI\data\weapons_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
		class 327th
		{
			displayName = "327th Star Corps";
			author = "Charger";
			textures[] = {"3AS\3as_Laat\LAATI\data\Hull_327_CO.paa","3AS\3as_Laat\LAATI\data\wings_327_CO.paa","3AS\3as_Laat\LAATI\data\weapons_CO.paa","3AS\3as_Laat\LAATI\data\weapon_Details_CO.paa","3AS\3as_Laat\LAATI\data\interior_CO.paa"};
			factions[] = {"3as_rep"};
		};
	};
};
class 3as_LAAT_Mk1: 3as_laat_Base
{
	_generalmacro = "TCW_LAAT_i";
	accuracy = 5;
	author = "$STR_3as_Studio";
	availableforsupporttypes[] = {"CAS_Heli"};
	cost = "3e+006";
	crew = "3AS_Clone_P2_Pilot";
	displayname = "LAAT/I Mk.1";
	faction = "3as_rep";
	vehicleclass = "Helicopter";
	scope = 2;
	side = 1;
	typicalcargo[] = {"3AS_Clone_P2_Pilot"};
	class AnimationSources: AnimationSources
	{
		class Doors
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class Lamps
		{
			source = "user";
			animPeriod = 1;
			initPhase = 0;
		};
		class Turrets
		{
			source = "user";
			initPhase = 1;
			animPeriod = 1;
		};
	};
	class Library
	{
		libtextdesc = "";
	};
};