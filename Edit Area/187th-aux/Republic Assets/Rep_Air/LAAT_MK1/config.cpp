class CfgPatches
{
	class 187th_LAAT_MK1
	{
		name = "187th LAAT MK1";
		author = "PraetorPanda";
		requiredVersion = 0.01;
		requiredAddons[] = {};
		units[] = {"187th_LAAT_mk_1"};
		weapons[] = {};
		magazines[] = {};
		ammo[] = {};
	};
};

/*#include "MK1Fix.cpp"*/

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

class CfgVehicles
{
	#include "3ASFix.cpp"

	class 187th_LAAT_mk_1: 3as_LAAT_Mk1
	{
		displayName = "LAAT Mk 1";
		scope = 2;
		scopeCurator = 2;
		faction = "187th_Republic"; //187th_Republic, 187th_CIS
		editorCategory = "187th_Rep_Assets"; //187th_Rep_Assets, 187th_CIS_Assets, 187th_Test_Assets
		editorSubcategory = "187th_Helicopter"; //187th_Infantry, 187th_Armor, 187th_Boat, 187th_Helicopter, 187th_Special, 187th_Plane, 187th_Turret, 187th_Transport, 187th_Sith, 187th_Car, 187th_Artillery, 187th_AntiAir, 187th_Crates
		crew="187th_Pilot";
		weapons[]=
		{
			"ParticleBeamCannon_F",
			"3as_LAAT_Missile_AGM",
			"3as_LAAT_Missile_AA",
			"CMFlareLauncher"
		};
		magazines[]=
		{
			"Laser_Battery",
			"3as_LAAT_8Rnd_Missile_AGM",
			"3as_LAAT_8Rnd_Missile_AGM",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"3as_PylonMissile_LAAT_8Rnd_Missile_AA",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		tcw_emp_protection = 1;
		tcw_can_use_afterburner = 1;
		tcw_afterburner_max_boost_speed = 650;
		tcw_afterburner_min_boost_speed = 20;
		tcw_afterburner_min_brake_speed = 20;
		tcw_afterburner_increment = 10;
		tcw_afterburner_fuel_drag = 2000;
		tcw_afterburner_fuel_multi = 4;
		tcw_afterburner_force_array[] = {{0,100,2562500},{100,316,4562500},{316,650,8750000}};
		class UserActions
		{
			class rampOpen
			{
				available = 0;
				showWindow = 0;
				displayName = "Ramp Open";
				position = "pilotview";
				radius = 9;
				condition = "this animationphase 'ramp' ==0 AND (player == driver this)";
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
				condition = "this animationphase 'ramp' ==1 AND (alive this) AND (player == driver this)";
				statement = "this animateSource ['ramp',0,1];";
				onlyforplayer = 0;
			};
			class afterburners_turn_on
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Activate Impulse";
				position = "pilotview";
				radius = 6;
		        shortcut = "User13";
				onlyforplayer = 0;
				condition = "(alive this) AND (player == driver this) AND (isEngineOn this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_on;";
			};
			class afterburners_turn_off
			{
				showWindow = 0;
				hideOnUse = 0;
				priority = 9;
				role = 0;
				displayName = "Deactivate Impulse";
				position = "pilotview";
				radius = 6;
		        shortcut = "User14";
				onlyforplayer = 0;
				condition = "(alive this) AND ((speed this) > 50) AND (player == driver this)";
				statement = "0 = this spawn OES_fnc_afterburners_turn_off;";
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
						gunneropticsmodel = "\a3\weapons_f\Reticle\Optics_Gunship_wide_F.p3d";
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
						gunneropticsmodel = "\a3\weapons_f\Reticle\Optics_Gunship_medium_F.p3d";
						initfov = 0.093;
						maxfov = 0.093;
						minfov = 0.093;
						opticsdisplayname = "M";
					};
					class Narrow: Wide
					{
						gunneropticsmodel = "\a3\weapons_f\Reticle\Optics_Gunship_narrow_F.p3d";
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
				magazines[] = {"Laser_Battery","Laser_Battery"};
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
				gunneropticsmodel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
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
				turretinfotype = "RscOptics_Heli_Attack_01_gunner";
				class MFD
				{
					class MFD_Pilot_10
					{
						topLeft = "MFD_10_TL";
						topRight = "MFD_10_TR";
						bottomLeft = "MFD_10_BL";
						borderLeft = 0;
						borderRight = 0;
						borderTop = 0;
						borderBottom = 0;
						color[] = {1.0,1.0,1.0,1.0};
						helmetMountedDisplay = 0;
						helmetPosition[] = {-0.0375,0.0375,0.1};
						helmetRight[] = {0.075,0.0,0.0};
						helmetDown[] = {0.0,-0.075,0.0};
						font = "LucidaConsoleB";
						turret[] = {-2};
						class Bones{};
						class Draw
						{
							alpha = 1.0;
							color[] = {0.25,1.0,0.25};
							condition = "on";
							class ReticleGroup
							{
								color[] = {1.0,1.0,1.0};
								class Reticle
								{
									type = "line";
									width = 4.0;
									points[] = {{{0.491429,0.452766},1},{{0.495,0.452766},1},{{0.495,0.457802},1},{{0.491429,0.457802},1},{{0.491429,0.452766},1},{},{{0.499286,0.455788},1},{{0.577143,0.455788},1},{},{{0.492857,0.462839},1},{{0.492857,0.557527},1},{},{{0.488571,0.455788},1},{{0.41,0.455788},1},{},{{0.492857,0.354048},1},{{0.492857,0.446722},1},{},{{0.61,0.299652},1},{{0.642857,0.299652},1},{{0.642857,0.342967},1},{},{{0.642857,0.575659},1},{{0.642857,0.619982},1},{{0.610714,0.619982},1},{},{{0.374286,0.619982},1},{{0.341429,0.619982},1},{{0.341429,0.575659},1},{},{{0.374286,0.299652},1},{{0.341429,0.299652},1},{{0.341429,0.342967},1}};
								};
								class ModeText
								{
									type = "text";
									source = "static";
									text = "Mode: TI WHOT";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.04,0.32},1};
									right[] = {{0.07,0.32},1};
									down[] = {{0.04,0.345},1};
								};
								class RangeText
								{
									type = "text";
									source = "static";
									text = "Range:";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.36,0.81},1};
									right[] = {{0.4,0.81},1};
									down[] = {{0.36,0.845},1};
								};
								class Fuel
								{
									type = "text";
									source = "laserDist";
									sourceScale = 1;
									sourceLength = 4;
									align = "right";
									scale = 1;
									pos[] = {{0.51,0.81},1};
									right[] = {{0.55,0.81},1};
									down[] = {{0.51,0.845},1};
								};
							};
						};
					};
					class MFD_Pilot_8
					{
						topLeft = "MFD_8_TL";
						topRight = "MFD_8_TR";
						bottomLeft = "MFD_8_BL";
						borderLeft = 0;
						borderRight = 0;
						borderTop = 0;
						borderBottom = 0;
						color[] = {1.0,1.0,1.0,1.0};
						helmetMountedDisplay = 0;
						helmetPosition[] = {-0.0375,0.0375,0.1};
						helmetRight[] = {0.075,0.0,0.0};
						helmetDown[] = {0.0,-0.075,0.0};
						font = "LucidaConsoleB";
						turret[] = {-2};
						class Bones{};
						class Draw
						{
							alpha = 1.0;
							color[] = {0,0.12,0};
							condition = "on";
							class Time
							{
								type = "text";
								source = "time";
								text = "%X";
								sourceScale = 1;
								align = "right";
								scale = 1;
								pos[] = {{0.03,0.11},1};
								right[] = {{0.13,0.11},1};
								down[] = {{0.03,0.2},1};
							};
							class Fuel
							{
								type = "text";
								source = "fuel";
								text = "%X";
								sourceScale = 2517;
								sourceLength = 4;
								align = "right";
								scale = 1;
								pos[] = {{0.03,0.31},1};
								right[] = {{0.13,0.31},1};
								down[] = {{0.03,0.4},1};
							};
							class LBSText
							{
								type = "text";
								source = "static";
								text = "LBS";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.3,0.31},1};
								right[] = {{0.4,0.31},1};
								down[] = {{0.3,0.4},1};
							};
							class GridX
							{
								type = "text";
								source = "coordinateX";
								sourceScale = 0.01;
								sourceOffset = -0.5;
								sourceLength = 3;
								align = "right";
								scale = 1;
								pos[] = {{0.03,0.61},1};
								right[] = {{0.13,0.61},1};
								down[] = {{0.03,0.7},1};
							};
							class GridY: GridX
							{
								source = "coordinateY";
								pos[] = {{0.24,0.61},1};
								right[] = {{0.34,0.61},1};
								down[] = {{0.24,0.7},1};
							};
							class GridText
							{
								type = "text";
								source = "static";
								text = "GRID:";
								scale = 1;
								sourceScale = 1;
								align = "right";
								pos[] = {{0.03,0.51},1};
								right[] = {{0.13,0.51},1};
								down[] = {{0.03,0.6},1};
							};
						};
					};
					class MFD_Pilot_9
					{
						topLeft = "MFD_9_TL";
						topRight = "MFD_9_TR";
						bottomLeft = "MFD_9_BL";
						borderLeft = 0;
						borderRight = 0;
						borderTop = 0;
						borderBottom = 0;
						color[] = {1.0,1.0,1.0,1.0};
						helmetMountedDisplay = 0;
						helmetPosition[] = {-0.0375,0.0375,0.1};
						helmetRight[] = {0.075,0.0,0.0};
						helmetDown[] = {0.0,-0.075,0.0};
						font = "LucidaConsoleB";
						turret[] = {-2};
						class Bones{};
						class Draw
						{
							alpha = 1.0;
							color[] = {0,0.12,0};
							condition = "on";
							class CollectiveGroup
							{
								condition = "simulRTD";
								class CollectiveText
								{
									type = "text";
									source = "static";
									text = "%";
									align = "right";
									scale = 1;
									pos[] = {{0.22,0.2},1};
									right[] = {{0.28,0.2},1};
									down[] = {{0.22,0.24},1};
								};
								class CollectiveNumber
								{
									type = "text";
									source = "rtdCollective";
									sourceScale = 100;
									align = "left";
									scale = 1;
									pos[] = {{0.22,0.2},1};
									right[] = {{0.28,0.2},1};
									down[] = {{0.22,0.24},1};
								};
							};
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 3.6;
								align = "left";
								scale = 1;
								pos[] = {{0.28,0.452},1};
								right[] = {{0.32,0.452},1};
								down[] = {{0.28,0.492},1};
							};
							class AltNumber
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 1;
								sourceOffset = -2;
								align = "left";
								scale = 1;
								pos[] = {{0.75,0.452},1};
								right[] = {{0.79,0.452},1};
								down[] = {{0.75,0.492},1};
							};
							class CruiseMode
							{
								condition = "1+((altitudeASL-27) min 1) - autohover";
								class AltNumberASL
								{
									type = "text";
									source = "altitudeASL";
									sourceScale = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.81,0.16},1};
									right[] = {{0.85,0.16},1};
									down[] = {{0.81,0.2},1};
								};
							};
						};
					};
					class MFD_Pilot_11: MFD_Pilot_10
					{
						topLeft = "MFD_11_TL";
						topRight = "MFD_11_TR";
						bottomLeft = "MFD_11_BL";
						turret[] = {-2};
						class Draw
						{
							color[] = {0,0.12,0};
							condition = "on";
							class BlackBackgroundGroup
							{
								color[] = {0.0,0.0,0.0};
								class BlackBackground
								{
									type = "polygon";
									points[] = {{{{0,0.1},1},{{1,0.1},1},{{1,1},1},{{0,1},1}}};
								};
							};
							class ReticleGroup
							{
								color[] = {0,0.12,0};
								class Reticle
								{
									type = "line";
									width = 4.0;
									points[] = {{{0.43,0.490598},1},{{0.164,0.490598},1},{{0.164,0.490598},1},{{0.164,0.630171},1},{{0.164,0.630171},1},{{0.438,0.630171},1},{{0.438,0.630171},1},{{0.438,0.732393},1},{{0.622,0.732393},1},{{0.622,0.630171},1},{{0.622,0.630171},1},{{0.898,0.630171},1},{{0.898,0.630171},1},{{0.898,0.490598},1},{{0.63,0.490598},1},{{0.63,0.490598},1},{{0.616,0.482735},1},{{0.616,0.297949},1},{{0.592,0.297949},1},{{0.558,0.286154},1},{{0.558,0.272393},1},{{0.5,0.272393},1},{{0.5,0.286154},1},{{0.468,0.297949},1},{{0.446,0.297949},1},{{0.446,0.482735},1},{{0.43,0.490598},1},{},{{0.46,0.6},1},{{0.6,0.6},1},{{0.6,0.72},1},{{0.46,0.72},1},{{0.46,0.6},1},{},{{0.04,0.8},1},{{0.24,0.8},1},{{0.24,0.86},1},{{0.04,0.86},1},{{0.04,0.8},1},{},{{-0.06,0.83},1},{{0.04,0.83},1},{},{{0.04,0.93},1},{{0.24,0.93},1},{{0.24,0.99},1},{{0.04,0.99},1},{{0.04,0.93},1},{},{{-0.06,0.96},1},{{0.04,0.96},1},{},{{0.27,0.86},1},{{0.83,0.86},1},{{0.83,0.98},1},{{0.27,0.98},1},{{0.27,0.86},1},{},{{0.23,0.18},1},{{0.37,0.18},1},{{0.37,0.26},1},{{0.23,0.26},1},{{0.23,0.18},1},{},{{0.7,0.18},1},{{0.84,0.18},1},{{0.84,0.26},1},{{0.7,0.26},1},{{0.7,0.18},1},{},{{0.24,0.29},1},{{0.36,0.29},1},{{0.36,0.37},1},{{0.24,0.37},1},{{0.24,0.29},1},{},{{0.71,0.29},1},{{0.83,0.29},1},{{0.83,0.37},1},{{0.71,0.37},1},{{0.71,0.29},1}};
								};
								class SightSelect1
								{
									type = "text";
									source = "static";
									text = "SIGHT";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.53-0.29",0.187},1};
									right[] = {{0.28,0.187},1};
									down[] = {{"0.53-0.29",0.222},1};
								};
								class SightSelect2
								{
									type = "text";
									source = "static";
									text = "FCR";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.53-0.29",0.227},1};
									right[] = {{0.28,0.227},1};
									down[] = {{"0.53-0.29",0.262},1};
								};
								class AcqSelect1
								{
									type = "text";
									source = "static";
									text = "ACQ";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{"0.53+0.29",0.187},1};
									right[] = {{0.86,0.187},1};
									down[] = {{"0.53+0.29",0.222},1};
								};
								class AcqSelect2
								{
									type = "text";
									source = "static";
									text = "FCR";
									scale = 1;
									sourceScale = 1;
									align = "left";
									pos[] = {{"0.53+0.29",0.227},1};
									right[] = {{0.86,0.227},1};
									down[] = {{"0.53+0.29",0.262},1};
								};
								class LSTSelect1
								{
									type = "text";
									source = "static";
									text = "LST";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53-0.23",0.297},1};
									right[] = {{0.34,0.297},1};
									down[] = {{"0.53-0.23",0.332},1};
								};
								class LSTSelect2
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53-0.23",0.337},1};
									right[] = {{0.34,0.337},1};
									down[] = {{"0.53-0.23",0.372},1};
								};
								class LRFDSelect1
								{
									type = "text";
									source = "static";
									text = "LRFD";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53+0.24",0.297},1};
									right[] = {{0.81,0.297},1};
									down[] = {{"0.53+0.24",0.332},1};
								};
								class LRFDSelect2
								{
									type = "text";
									source = "static";
									text = "B";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53+0.24",0.337},1};
									right[] = {{0.81,0.337},1};
									down[] = {{"0.53+0.24",0.372},1};
								};
								class PilotText
								{
									type = "text";
									source = "static";
									text = "PILOT";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.53-0.48",0.815},1};
									right[] = {{0.09,0.815},1};
									down[] = {{"0.53-0.48",0.85},1};
								};
								class CopilotText
								{
									type = "text";
									source = "static";
									text = "COPILOT";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.53-0.48",0.945},1};
									right[] = {{0.09,0.945},1};
									down[] = {{"0.53-0.48",0.98},1};
								};
								class PylonText6
								{
									type = "text";
									source = "static";
									text = "#6";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53-0.31 + 0.00",0.55},1};
									right[] = {{0.26,0.55},1};
									down[] = {{"0.53-0.31 + 0.00",0.585},1};
								};
								class PylonText5
								{
									type = "text";
									source = "static";
									text = "#5";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53-0.31 + 0.09",0.55},1};
									right[] = {{0.35,0.55},1};
									down[] = {{"0.53-0.31 + 0.09",0.585},1};
								};
								class PylonText4
								{
									type = "text";
									source = "static";
									text = "#4";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53-0.31 + 0.09*2",0.55},1};
									right[] = {{0.44,0.55},1};
									down[] = {{"0.53-0.31 + 0.09*2",0.585},1};
								};
								class PylonText3
								{
									type = "text";
									source = "static";
									text = "#3";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53+0.31 - 0.09*2",0.55},1};
									right[] = {{0.7,0.55},1};
									down[] = {{"0.53+0.31 - 0.09*2",0.585},1};
								};
								class PylonText2
								{
									type = "text";
									source = "static";
									text = "#2";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53+0.31 - 0.09",0.55},1};
									right[] = {{0.79,0.55},1};
									down[] = {{"0.53+0.31 - 0.09",0.585},1};
								};
								class PylonText1
								{
									type = "text";
									source = "static";
									text = "#1";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{"0.53+0.31 - 0.00",0.55},1};
									right[] = {{0.88,0.55},1};
									down[] = {{"0.53+0.31 - 0.00",0.585},1};
								};
								class CurrentWeaponText
								{
									type = "text";
									source = "static";
									text = "CURRENT WEAPON";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.55,0.82},1};
									right[] = {{0.59,0.82},1};
									down[] = {{0.55,0.855},1};
								};
								class Weapons
								{
									type = "text";
									source = "weapon";
									sourceScale = 1;
									align = "center";
									scale = 1;
									pos[] = {{0.55,0.87},1};
									right[] = {{0.59,0.87},1};
									down[] = {{0.55,0.905},1};
								};
								class Ammo
								{
									type = "text";
									source = "ammo";
									sourceScale = 1;
									align = "center";
									scale = 1;
									pos[] = {{0.55,0.92},1};
									right[] = {{0.59,0.92},1};
									down[] = {{0.55,0.955},1};
								};
							};
							class MGun
							{
								class Default
								{
									condition = "ammo0 > 0";
									color[] = {0,0.12,0};
									class Shape
									{
										type = "line";
										width = 4.0;
										points[] = {{{0.556,0.38641},1},{{0.502,0.38641},1},{{0.458,0.38641},1},{{0.458,0.449316},1},{{0.6,0.449316},1},{{0.6,0.38641},1},{{0.556,0.38641},1},{},{{0.502,0.38641},1},{{0.502,0.32547},1},{{0.522,0.32547},1},{{0.522,0.284188},1},{{0.54,0.284188},1},{{0.54,0.327436},1},{{0.556,0.327436},1},{{0.556,0.38641},1},{{0.502,0.38641},1}};
									};
									class Ammo
									{
										type = "text";
										source = "ammo";
										sourceIndex = 0;
										sourceScale = 1;
										sourceLength = 4;
										align = "center";
										scale = 1;
										pos[] = {{0.53,0.41},1};
										right[] = {{0.57,0.41},1};
										down[] = {{0.53,0.445},1};
									};
								};
								class Selected: Default
								{
									condition = "(mgun +  (ammo0 min 1))/2";
									color[] = {0.99,0.94,0.59};
									class Shape: Shape{};
									class Ammo: Ammo{};
								};
								class Empty: Default
								{
									condition = "ammo0 <= 0";
									color[] = {1.0,0.0,0.0,1.0};
									class Shape: Shape{};
									class Ammo: Ammo
									{
										source = "static";
										text = "EMPTY";
									};
								};
							};
							class Pylon1
							{
								type = "pylonicon";
								pos[] = {{0.82,0.5},1};
								pylon = 1;
								name = "Heli_Attack_01";
							};
							class Pylon2: Pylon1
							{
								pos[] = {{0.73,0.5},1};
								pylon = 2;
							};
							class Pylon3: Pylon1
							{
								pos[] = {{0.64,0.5},1};
								pylon = 3;
							};
							class Pylon4: Pylon1
							{
								pos[] = {{0.36,0.5},1};
								pylon = 4;
							};
							class Pylon5: Pylon1
							{
								pos[] = {{0.27,0.5},1};
								pylon = 5;
							};
							class Pylon6: Pylon1
							{
								pos[] = {{0.18,0.5},1};
								pylon = 6;
							};
							class ArmBackground
							{
								color[] = {0.19,0.04,0};
								class BlackBackground
								{
									type = "polygon";
									points[] = {{{{"0.0+0.48","0.0+0.14"},1},{{"0.1+0.48","0.0+0.14"},1},{{"0.1+0.48","0.1+0.14"},1},{{"0.0+0.48","0.1+0.14"},1}}};
								};
							};
							class BlackText
							{
								color[] = {0.15,0.01,0};
								class CMText
								{
									type = "text";
									source = "static";
									text = "ARM";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.53,0.17},1};
									right[] = {{0.57,0.17},1};
									down[] = {{0.53,0.205},1};
								};
							};
						};
					};
					class MFD_Pilot_11_CM: MFD_Pilot_11
					{
						turret[] = {-2};
						class Draw
						{
							color[] = {0,0.12,0};
							condition = "on";
							class CMText
							{
								type = "text";
								source = "static";
								text = "CM";
								scale = 1;
								sourceScale = 1;
								align = "center";
								pos[] = {{0.53,0.61},1};
								right[] = {{0.57,0.61},1};
								down[] = {{0.53,0.645},1};
							};
							class CMAmmo
							{
								type = "text";
								source = "cmammo";
								sourceScale = 1;
								sourceLength = 3;
								align = "center";
								scale = 1;
								pos[] = {{0.53,0.66},1};
								right[] = {{0.57,0.66},1};
								down[] = {{0.53,0.695},1};
							};
						};
					};
					class AirplaneHUD
					{
						topLeft = "HUD_top_left";
						topRight = "HUD_top_right";
						bottomLeft = "HUD_bottom_left";
						borderLeft = 0;
						borderRight = 0;
						borderTop = 0;
						borderBottom = 0;
						color[] = {1.0,1.0,1.0,1.0};
						helmetMountedDisplay = 1;
						helmetPosition[] = {-0.0375,0.0375,0.1};
						helmetRight[] = {0.075,0.0,0.0};
						helmetDown[] = {0.0,-0.075,0.0};
						font = "LucidaConsoleB";
						turret[] = {-2};
						class Bones
						{
							class HUDCenter
							{
								type = "fixed";
								pos[] = {0.5,0.5};
							};
							class WeaponAim
							{
								type = "vector";
								source = "weapon";
								pos0[] = {0.5,0.5};
								pos10[] = {0.734,0.73};
							};
							class WeaponAimRelative: WeaponAim
							{
								source = "weapontoview";
							};
							class VelocityVector
							{
								type = "vector";
								source = "velocityToView";
								pos0[] = {0.5,0.5};
								pos10[] = {0.734,0.73};
							};
							class ForwardVector
							{
								type = "vector";
								source = "forward";
								pos0[] = {0,0};
								pos10[] = {0.234,0.23};
							};
							class HorizonVector
							{
								type = "horizontoview";
								pos0[] = {0.5,0.5};
								pos10[] = {0.830923,0.825266};
								angle = 0;
							};
							class GunnerAim
							{
								type = "vector";
								source = "turret";
								pos0[] = {0,-2.0};
								pos10[] = {0.0068,-0.01};
								projection = 0;
							};
							class VerticalSpeedBone
							{
								type = "linear";
								source = "vspeed";
								sourceScale = 1;
								min = -10;
								max = 10;
								minPos[] = {0,-0.32};
								maxPos[] = {0,0.32};
							};
							class HorizonBankRot
							{
								type = "linear";
								source = "horizonBank";
								min = -0.5236;
								max = 0.5236;
								minPos[] = {0.41,0.84};
								maxPos[] = {0.59,0.84};
								aspectRatio = 1;
							};
							class ImpactPoint
							{
								type = "vector";
								source = "ImpactPointToView";
								pos0[] = {0.5,0.5};
								pos10[] = {0.734,0.73};
							};
							class Target
							{
								source = "targettoview";
								type = "vector";
								pos0[] = {0.5,0.5};
								pos10[] = {0.734,0.73};
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
								pos10[] = {0.734,0.73};
							};
							class WPPointToView: WPPoint
							{
								source = "WPPointToView";
							};
							class RadarHeight
							{
								type = "linear";
								source = "altitudeAGL";
								sourceScale = 1;
								sourceOffset = -2;
								min = 0;
								max = 100;
								minPos[] = {0.903,0.18};
								maxPos[] = {0.903,0.82};
							};
							class HorizonBankRotFull
							{
								type = "rotational";
								source = "horizonBank";
								center[] = {0,0};
								min = -3.1416;
								max = 3.1416;
								minAngle = -180;
								maxAngle = 180;
								aspectRatio = 1;
							};
						};
						class Draw
						{
							alpha = 1.0;
							color[] = {0.25,1.0,0.25};
							condition = "on - (cameraHeadingDiffY<=-19) + (abs(cameraHeadingDiffX)>=24)";
							class Static
							{
								type = "line";
								width = 4.0;
								points[] = {{{0.5,0.11},1},{{0.5,0.14},1},{},{{0.4,0.86},1},{{0.4,0.94},1},{{0.6,0.94},1},{{0.6,0.86},1},{{0.4,0.86},1},{},{{0.4,0.885},1},{{0.408,0.885},1},{},{{0.6,0.885},1},{{0.592,0.885},1},{},{{0.5,0.86},1},{{0.5,0.868},1},{},{{0.5,0.94},1},{{0.5,0.932},1},{},{{0.52,0.86},1},{{0.52,0.82},1},{},{{0.48,0.86},1},{{0.48,0.82},1},{},{{0.55,0},1},{{0.55,0.04},1},{{0.45,0.04},1},{{0.45,0},1},{{0.55,0},1}};
							};
							class HeadingNumber
							{
								type = "text";
								source = "Heading";
								sourceScale = 1;
								align = "center";
								scale = 1;
								pos[] = {{0.5,0.006},1};
								right[] = {{0.55,0.006},1};
								down[] = {{0.5,0.046},1};
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
									pos[] = {{"0.80-0.302","0.082-0.025"},1};
									right[] = {{"0.83-0.302","0.082-0.025"},1};
									down[] = {{"0.80-0.302","0.113-0.025"},1};
								};
								class HeadingArrow
								{
									type = "line";
									width = 3.0;
									points[] = {{{0.478,0.045},1},{{0.522,0.045},1},{{0.552,0.07},1},{{0.522,0.095},1},{{0.478,0.095},1},{{0.448,0.07},1},{{0.478,0.045},1},{}};
								};
								class HeadingScaleRight
								{
									clipTL[] = {0.55,0.05};
									clipBR[] = {0.83,0.11};
									class lines
									{
										type = "scale";
										horizontal = 1;
										source = "heading";
										sourceScale = 1;
										width = 4.0;
										top = 0.5;
										center = 0.5;
										bottom = 0.85;
										lineXleft = 0.11;
										lineYright = 0.1;
										lineXleftMajor = 0.11;
										lineYrightMajor = 0.09;
										majorLineEach = 2;
										numberEach = 2;
										step = 22.5;
										stepSize = 0.075;
										align = "center";
										scale = 1;
										pos[] = {0.496,0.05};
										right[] = {0.536,0.05};
										down[] = {0.496,0.09};
									};
								};
								class HeadingScaleMidle
								{
									type = "scale";
									horizontal = 1;
									source = "heading";
									sourceScale = 1;
									width = 4.0;
									top = 0.45;
									center = 0.5;
									bottom = 0.55;
									lineXleft = 0.11;
									lineYright = 0.1;
									lineXleftMajor = 0.11;
									lineYrightMajor = 0.1;
									majorLineEach = 2;
									step = 22.5;
									stepSize = 0.075;
									align = "center";
									scale = 1;
									numberEach = 0;
									pos[] = {0.47,0.05};
									right[] = {0.5,0.05};
									down[] = {0.45,0.09};
								};
								class HeadingScaleLeft
								{
									clipTL[] = {0.18,0.05};
									clipBR[] = {0.45,0.11};
									class lines
									{
										type = "scale";
										horizontal = 1;
										source = "heading";
										sourceScale = 1;
										width = 4.0;
										top = 0.15;
										center = 0.5;
										bottom = 0.55;
										lineXleft = 0.11;
										lineYright = 0.1;
										lineXleftMajor = 0.11;
										lineYrightMajor = 0.09;
										majorLineEach = 2;
										numberEach = 2;
										step = 22.5;
										stepSize = 0.075;
										align = "center";
										scale = 1;
										pos[] = {0.146,0.05};
										right[] = {0.186,0.05};
										down[] = {0.146,0.09};
									};
								};
							};
							class HeadingScaleFull
							{
								condition = "5-abs(cameraDir-heading)*( (abs(heading-cameraDir))<=355)";
								class HeadingScale
								{
									clipTL[] = {0.18,0.0};
									clipBR[] = {0.83,1.0};
									class lines
									{
										type = "scale";
										horizontal = 1;
										source = "heading";
										sourceScale = 1;
										width = 4.0;
										top = 0.15;
										center = 0.5;
										bottom = 0.85;
										lineXleft = 0.11;
										lineYright = 0.1;
										lineXleftMajor = 0.11;
										lineYrightMajor = 0.09;
										majorLineEach = 2;
										numberEach = 2;
										step = 22.5;
										stepSize = 0.075;
										align = "center";
										scale = 1;
										pos[] = {0.146,0.05};
										right[] = {0.186,0.05};
										down[] = {0.146,0.09};
									};
								};
							};
							class HorizonBankRot
							{
								type = "polygon";
								width = 4.0;
								points[] = {{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,-0.0145196},1},{"HorizonBankRot",{0.0051303,-0.0138544},1},{"HorizonBankRot",{0.0075,-0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,-0.0127683},1},{"HorizonBankRot",{0.00964181,-0.0112942},1},{"HorizonBankRot",{0.0114907,-0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,-0.009477},1},{"HorizonBankRot",{0.0129904,-0.00737179},1},{"HorizonBankRot",{0.0140954,-0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,-0.0050426},1},{"HorizonBankRot",{0.0147721,-0.0025602},1},{"HorizonBankRot",{0.015,6.44463e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.015,6.44463e-10},1},{"HorizonBankRot",{0.0147721,0.0025602},1},{"HorizonBankRot",{0.0140954,0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0140954,0.0050426},1},{"HorizonBankRot",{0.0129904,0.0073718},1},{"HorizonBankRot",{0.0114907,0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0114907,0.009477},1},{"HorizonBankRot",{0.00964181,0.0112942},1},{"HorizonBankRot",{0.0075,0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.0075,0.0127683},1},{"HorizonBankRot",{0.0051303,0.0138544},1},{"HorizonBankRot",{0.00260472,0.0145196},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{0.00260472,0.0145196},1},{"HorizonBankRot",{-1.31134e-09,0.0147436},1},{"HorizonBankRot",{-0.00260473,0.0145196},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260473,0.0145196},1},{"HorizonBankRot",{-0.0051303,0.0138544},1},{"HorizonBankRot",{-0.0075,0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,0.0127683},1},{"HorizonBankRot",{-0.00964181,0.0112942},1},{"HorizonBankRot",{-0.0114907,0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,0.009477},1},{"HorizonBankRot",{-0.0129904,0.00737179},1},{"HorizonBankRot",{-0.0140954,0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,0.0050426},1},{"HorizonBankRot",{-0.0147721,0.0025602},1},{"HorizonBankRot",{-0.015,-1.75816e-10},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.015,-1.75816e-10},1},{"HorizonBankRot",{-0.0147721,-0.0025602},1},{"HorizonBankRot",{-0.0140954,-0.0050426},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0140954,-0.0050426},1},{"HorizonBankRot",{-0.0129904,-0.0073718},1},{"HorizonBankRot",{-0.0114907,-0.009477},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0114907,-0.009477},1},{"HorizonBankRot",{-0.00964181,-0.0112942},1},{"HorizonBankRot",{-0.0075,-0.0127683},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.0075,-0.0127683},1},{"HorizonBankRot",{-0.00513031,-0.0138544},1},{"HorizonBankRot",{-0.00260472,-0.0145196},1}},{{"HorizonBankRot",1,{0,0},1},{"HorizonBankRot",{-0.00260472,-0.0145196},1},{"HorizonBankRot",{2.62268e-09,-0.0147436},1},{"HorizonBankRot",{0.00260472,-0.0145196},1}}};
							};
							class CollectiveGroup
							{
								condition = "simulRTD";
								class CollectiveText
								{
									type = "text";
									source = "static";
									text = "%";
									align = "right";
									scale = 1;
									pos[] = {{0.22,0.2},1};
									right[] = {{0.28,0.2},1};
									down[] = {{0.22,0.24},1};
								};
								class CollectiveNumber
								{
									type = "text";
									source = "rtdCollective";
									sourceScale = 100;
									align = "left";
									scale = 1;
									pos[] = {{0.22,0.2},1};
									right[] = {{0.28,0.2},1};
									down[] = {{0.22,0.24},1};
								};
							};
							class SpeedNumber
							{
								type = "text";
								source = "speed";
								sourceScale = 3.6;
								align = "right";
								scale = 1;
								pos[] = {{0.16,0.48},1};
								right[] = {{0.22,0.48},1};
								down[] = {{0.16,0.52},1};
							};
							class AltNumber
							{
								type = "text";
								source = "altitudeAGL";
								sourceScale = 1;
								sourceOffset = -2;
								align = "left";
								scale = 1;
								pos[] = {{0.81,0.48},1};
								right[] = {{0.87,0.48},1};
								down[] = {{0.81,0.52},1};
							};
							class HoverMode
							{
								condition = "autohover";
								class HoverText
								{
									type = "text";
									source = "static";
									text = "HOVER";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.075},1};
									right[] = {{0.045,0.075},1};
									down[] = {{0.005,0.11},1};
								};
							};
							class CruiseMode
							{
								condition = "((altitudeASL-27) min 1) - autohover";
								class CruiseText
								{
									type = "text";
									source = "static";
									text = "CRUISE";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.075},1};
									right[] = {{0.045,0.075},1};
									down[] = {{0.005,0.11},1};
								};
								class AltNumberASL
								{
									type = "text";
									source = "altitudeASL";
									sourceScale = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.81,0.16},1};
									right[] = {{0.87,0.16},1};
									down[] = {{0.81,0.2},1};
								};
							};
							class TransitionMode
							{
								condition = "((27-altitudeASL) min 1) - autohover";
								class TransText
								{
									type = "text";
									source = "static";
									text = "TRANS";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.005,0.075},1};
									right[] = {{0.045,0.075},1};
									down[] = {{0.005,0.11},1};
								};
							};
							class HoverModeHide
							{
								condition = "1-autohover";
								class VelocityLine
								{
									type = "line";
									width = 4.0;
									points[] = {{"VelocityVector",{0,-0.0196581},1},{"VelocityVector",{0.01,-0.0170239},1},{"VelocityVector",{0.01732,-0.00982906},1},{"VelocityVector",{0.02,0},1},{"VelocityVector",{0.01732,0.00982906},1},{"VelocityVector",{0.01,0.0170239},1},{"VelocityVector",{0,0.0196581},1},{"VelocityVector",{-0.01,0.0170239},1},{"VelocityVector",{-0.01732,0.00982906},1},{"VelocityVector",{-0.02,0},1},{"VelocityVector",{-0.01732,-0.00982906},1},{"VelocityVector",{-0.01,-0.0170239},1},{"VelocityVector",{0,-0.0196581},1},{},{"VelocityVector",{0.04,0},1},{"VelocityVector",{0.02,0},1},{},{"VelocityVector",{-0.04,0},1},{"VelocityVector",{-0.02,0},1},{},{"VelocityVector",{0,-0.0393162},1},{"VelocityVector",{0,-0.0196581},1},{}};
								};
							};
							class GearGroup
							{
								type = "group";
								condition = "ils";
								class GearText
								{
									type = "text";
									source = "static";
									text = "GEAR";
									align = "right";
									scale = 1;
									pos[] = {{0.015,0.334188},1};
									right[] = {{0.055,0.334188},1};
									down[] = {{0.015,0.363675},1};
								};
							};
							class LaserGroup
							{
								condition = "laseron";
								class laserText
								{
									type = "text";
									source = "static";
									text = "LASER";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.015,0.37},1};
									right[] = {{0.055,0.37},1};
									down[] = {{0.015,0.405},1};
								};
							};
							class RadarGroup
							{
								condition = "activeSensorsOn";
								class radarText
								{
									type = "text";
									source = "static";
									text = "RADAR";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.015,0.41},1};
									right[] = {{0.055,0.41},1};
									down[] = {{0.015,0.445},1};
								};
							};
							class VerticalSpeedScale
							{
								type = "line";
								width = 4.0;
								points[] = {{"WeaponAimRelative",1,{-0.03,0.0},1},{"WeaponAimRelative",1,{-0.02,0.0},1},{},{"WeaponAimRelative",1,{0.02,0.0},1},{"WeaponAimRelative",1,{0.03,0.0},1},{},{"WeaponAimRelative",1,{0.0,-0.02},1},{"WeaponAimRelative",1,{0.0,-0.03},1},{},{"WeaponAimRelative",1,{0.0,0.02},1},{"WeaponAimRelative",1,{0.0,0.03},1},{},{"HUDCenter",1,{-0.03,0.0},1},{"HUDCenter",1,{-0.01,0.0},1},{},{"HUDCenter",1,{0.01,0.0},1},{"HUDCenter",1,{0.03,0.0},1},{},{"HUDCenter",1,{0.0,-0.01},1},{"HUDCenter",1,{0.0,-0.03},1},{},{"HUDCenter",1,{0.0,0.01},1},{"HUDCenter",1,{0.0,0.03},1},{},{{0.915,0.18},1},{{0.935,0.18},1},{},{{0.87,0.18},1},{{0.89,0.18},1},{},{{0.915,0.34},1},{{0.935,0.34},1},{},{{0.87,0.34},1},{{0.89,0.34},1},{},{{0.875,0.372},1},{{0.885,0.372},1},{},{{0.875,0.404},1},{{0.885,0.404},1},{},{{0.875,0.436},1},{{0.885,0.436},1},{},{{0.875,0.468},1},{{0.885,0.468},1},{},{{0.87,0.5},1},{{0.89,0.5},1},{},{{0.915,0.5},1},{{0.935,0.5},1},{},{{0.915,0.66},1},{{0.935,0.66},1},{},{{0.87,0.66},1},{{0.89,0.66},1},{},{{0.875,0.628},1},{{0.885,0.628},1},{},{{0.875,0.596},1},{{0.885,0.596},1},{},{{0.875,0.564},1},{{0.885,0.564},1},{},{{0.875,0.532},1},{{0.885,0.532},1},{},{{0.92,0.692},1},{{0.93,0.692},1},{},{{0.92,0.724},1},{{0.93,0.724},1},{},{{0.92,0.756},1},{{0.93,0.756},1},{},{{0.92,0.788},1},{{0.93,0.788},1},{},{{0.915,0.82},1},{{0.935,0.82},1},{},{{0.87,0.82},1},{{0.89,0.82},1},{}};
							};
							class VerticalSpeedArrow
							{
								type = "polygon";
								points[] = {{{"VerticalSpeedBone",{0.85,0.488},1},{"VerticalSpeedBone",{0.87,0.5},1},{"VerticalSpeedBone",{0.85,0.512},1}}};
							};
							class RadarAltitude
							{
								condition = "101-altitudeAGL";
								class RadarHeight
								{
									type = "line";
									width = 15;
									points[] = {{{0.903,0.82},1},{"RadarHeight",{0,0.0},1},{}};
								};
							};
							class HorizonLine
							{
								condition = "1-autohover";
								clipTL[] = {0.2,0.145};
								clipBR[] = {0.8,0.855};
								class HorizonLineDraw
								{
									type = "line";
									width = 4.0;
									points[] = {{"HorizonVector",{-0.225,0.0},1},{"HorizonVector",{-0.1875,0.0},1},{},{"HorizonVector",{-0.15,0.0},1},{"HorizonVector",{-0.1125,0.0},1},{},{"HorizonVector",{-0.075,0.0},1},{"HorizonVector",{-0.0375,0.0},1},{},{"HorizonVector",{0.0375,0.0},1},{"HorizonVector",{0.075,0.0},1},{},{"HorizonVector",{0.1125,0.0},1},{"HorizonVector",{0.15,0.0},1},{},{"HorizonVector",{0.1875,0.0},1},{"HorizonVector",{0.225,0.0},1}};
								};
							};
							class Gunner
							{
								type = "line";
								width = 4.0;
								points[] = {{"GunnerAim",{0.485,0.892},1},{"GunnerAim",{0.485,0.908},1},{"GunnerAim",{0.515,0.908},1},{"GunnerAim",{0.515,0.892},1},{"GunnerAim",{0.485,0.892},1}};
							};
							class WeaponsText
							{
								condition = "1- mgun";
								class Weapons
								{
									type = "text";
									source = "weapon";
									sourceScale = 1;
									align = "left";
									scale = 0.5;
									pos[] = {{0.38,0.869},1};
									right[] = {{0.415,0.869},1};
									down[] = {{0.38,0.904},1};
								};
							};
							class Ammo
							{
								type = "text";
								source = "ammo";
								sourceScale = 1;
								align = "left";
								scale = 0.5;
								pos[] = {{0.38,0.901},1};
								right[] = {{0.415,0.901},1};
								down[] = {{0.38,0.936},1};
							};
							class MGun
							{
								condition = "mgun";
								class Weapons
								{
									type = "text";
									source = "static";
									text = "GUN";
									sourceScale = 1;
									align = "left";
									scale = 0.5;
									pos[] = {{0.38,0.869},1};
									right[] = {{0.415,0.869},1};
									down[] = {{0.38,0.904},1};
								};
								class Circle
								{
									type = "line";
									width = 4.0;
									points[] = {{"ImpactPoint",{0.025,0},1},{"ImpactPoint",{0.01,0},1},{},{"ImpactPoint",{0,0.0245726},1},{"ImpactPoint",{0,0.00982906},1},{},{"ImpactPoint",{-0.025,0},1},{"ImpactPoint",{-0.01,0},1},{},{"ImpactPoint",{0,-0.0245726},1},{"ImpactPoint",{0,-0.00982906},1},{},{"ImpactPoint",{0,-0.00982906},1},{"ImpactPoint",{0.005,-0.00851197},1},{"ImpactPoint",{0.00866,-0.00491453},1},{"ImpactPoint",{0.01,0},1},{"ImpactPoint",{0.00866,0.00491453},1},{"ImpactPoint",{0.005,0.00851197},1},{"ImpactPoint",{0,0.00982906},1},{"ImpactPoint",{-0.005,0.00851197},1},{"ImpactPoint",{-0.00866,0.00491453},1},{"ImpactPoint",{-0.01,0},1},{"ImpactPoint",{-0.00866,-0.00491453},1},{"ImpactPoint",{-0.005,-0.00851197},1},{"ImpactPoint",{0,-0.00982906},1}};
								};
							};
							class AAMissile
							{
								condition = "AAmissile";
								class Circle
								{
									type = "line";
									width = 4.0;
									points[] = {{"ForwardVector",1,"HUDCenter",{0,-0.245726},1},{"ForwardVector",1,"HUDCenter",{0.0434,-0.241991},1},{"ForwardVector",1,"HUDCenter",{0.0855,-0.230909},1},{"ForwardVector",1,"HUDCenter",{0.125,-0.212799},1},{"ForwardVector",1,"HUDCenter",{0.1607,-0.188226},1},{"ForwardVector",1,"HUDCenter",{0.1915,-0.157953},1},{"ForwardVector",1,"HUDCenter",{0.2165,-0.122863},1},{"ForwardVector",1,"HUDCenter",{0.234925,-0.0840385},1},{"ForwardVector",1,"HUDCenter",{0.2462,-0.0426581},1},{"ForwardVector",1,"HUDCenter",{0.25,0},1},{"ForwardVector",1,"HUDCenter",{0.2462,0.0426581},1},{"ForwardVector",1,"HUDCenter",{0.234925,0.0840385},1},{"ForwardVector",1,"HUDCenter",{0.2165,0.122863},1},{"ForwardVector",1,"HUDCenter",{0.1915,0.157953},1},{"ForwardVector",1,"HUDCenter",{0.1607,0.188226},1},{"ForwardVector",1,"HUDCenter",{0.125,0.212799},1},{"ForwardVector",1,"HUDCenter",{0.0855,0.230909},1},{"ForwardVector",1,"HUDCenter",{0.0434,0.241991},1},{"ForwardVector",1,"HUDCenter",{0,0.245726},1},{"ForwardVector",1,"HUDCenter",{-0.0434,0.241991},1},{"ForwardVector",1,"HUDCenter",{-0.0855,0.230909},1},{"ForwardVector",1,"HUDCenter",{-0.125,0.212799},1},{"ForwardVector",1,"HUDCenter",{-0.1607,0.188226},1},{"ForwardVector",1,"HUDCenter",{-0.1915,0.157953},1},{"ForwardVector",1,"HUDCenter",{-0.2165,0.122863},1},{"ForwardVector",1,"HUDCenter",{-0.234925,0.0840385},1},{"ForwardVector",1,"HUDCenter",{-0.2462,0.0426581},1},{"ForwardVector",1,"HUDCenter",{-0.25,0},1},{"ForwardVector",1,"HUDCenter",{-0.2462,-0.0426581},1},{"ForwardVector",1,"HUDCenter",{-0.234925,-0.0840385},1},{"ForwardVector",1,"HUDCenter",{-0.2165,-0.122863},1},{"ForwardVector",1,"HUDCenter",{-0.1915,-0.157953},1},{"ForwardVector",1,"HUDCenter",{-0.1607,-0.188226},1},{"ForwardVector",1,"HUDCenter",{-0.125,-0.212799},1},{"ForwardVector",1,"HUDCenter",{-0.0855,-0.230909},1},{"ForwardVector",1,"HUDCenter",{-0.0434,-0.241991},1},{"ForwardVector",1,"HUDCenter",{0,-0.245726},1}};
								};
							};
							class ATMissile
							{
								condition = "ATmissile";
								class Circle
								{
									type = "line";
									width = 4.0;
									points[] = {{"ForwardVector",1,"HUDCenter",{-0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.15,-0.127778},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.15,0.127778},1},{},{"ForwardVector",1,"HUDCenter",{0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{0.15,-0.127778},1},{},{"ForwardVector",1,"HUDCenter",{0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{0.15,0.127778},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.13,-0.147436},1},{},{"ForwardVector",1,"HUDCenter",{-0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{-0.13,0.147436},1},{},{"ForwardVector",1,"HUDCenter",{0.15,-0.147436},1},{"ForwardVector",1,"HUDCenter",{0.13,-0.147436},1},{},{"ForwardVector",1,"HUDCenter",{0.15,0.147436},1},{"ForwardVector",1,"HUDCenter",{0.13,0.147436},1}};
								};
							};
							class Rockets
							{
								condition = "rocket";
								class RocketDummy
								{
									type = "line";
									width = 3.0;
									points[] = {{"ImpactPoint",{0.01,-0.0294872},1},{"ImpactPoint",{-0.01,-0.0294872},1},{},{"ImpactPoint",{0.01,0.0294872},1},{"ImpactPoint",{-0.01,0.0294872},1},{},{"ImpactPoint",{0.0,-0.0294872},1},{"ImpactPoint",{0.0,0.0294872},1},{}};
								};
							};
							class WP
							{
								condition = "wpvalid - autohover";
								class WPdist
								{
									type = "text";
									source = "wpdist";
									sourceScale = 0.001;
									sourcePrecision = 1;
									align = "left";
									scale = 1;
									pos[] = {{0.235,0.774038},1};
									right[] = {{0.275,0.774038},1};
									down[] = {{0.235,0.80156},1};
								};
								class WPIndex
								{
									type = "text";
									source = "wpIndex";
									sourceScale = 1;
									sourceLength = 2;
									align = "right";
									scale = 1;
									pos[] = {{0.096,0.776004},1};
									right[] = {{0.126,0.776004},1};
									down[] = {{0.096,0.799594},1};
								};
								class WPstatic
								{
									type = "text";
									source = "static";
									text = "W";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{0.075,0.775},1};
									right[] = {{0.105,0.775},1};
									down[] = {{0.075,0.8},1};
								};
								class WPAuto
								{
									type = "text";
									source = "static";
									text = "A";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.075 +0.035",0.8},1};
									right[] = {{0.14,0.8},1};
									down[] = {{"0.075 +0.035",0.825},1};
								};
								class WPKM
								{
									type = "text";
									source = "static";
									text = "KM";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.075 +0.16",0.775},1};
									right[] = {{0.265,0.775},1};
									down[] = {{"0.075 +0.16",0.803},1};
								};
								class WPTime
								{
									type = "text";
									source = "static";
									text = "-:--";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.075 +0.11",0.8},1};
									right[] = {{0.215,0.8},1};
									down[] = {{"0.075 +0.11",0.825},1};
								};
								class WP
								{
									width = 2;
									type = "line";
									points[] = {{"WPPoint",1,"LimitWaypoint",1,{-0.02,0.04},1},{"WPPoint",1,"LimitWaypoint",1,{0.0,0.02},1},{"WPPoint",1,"LimitWaypoint",1,{0.02,0.04},1},{}};
								};
							};
							class WeaponsLocking
							{
								condition = "missilelocking";
								blinkingPattern[] = {0.2,0.2};
								blinkingStartsOn = 1;
								class Text
								{
									type = "text";
									source = "static";
									text = "LOCKING";
									align = "center";
									scale = 1;
									pos[] = {{0.493,0.766667},1};
									right[] = {{0.553,0.766667},1};
									down[] = {{0.493,0.815812},1};
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
									pos[] = {{0.485,0.216239},1};
									right[] = {{0.545,0.216239},1};
									down[] = {{0.485,0.265385},1};
								};
							};
							class RadarTargets
							{
								class RadarBoxes
								{
									type = "radartoview";
									pos0[] = {0.5,0.5};
									pos10[] = {0.734,0.73};
									width = 4;
									points[] = {{{-0.0035,-0.00344017},1},{{0.0035,-0.00344017},1},{{0.0035,0.00344017},1},{{-0.0035,0.00344017},1},{{-0.0035,-0.00344017},1}};
								};
							};
							class TargetDiamond
							{
								class shape
								{
									type = "line";
									width = 3;
									points[] = {{"Target",1,"Limit0109",1,{0.0075,0},1},{"Target",1,"Limit0109",1,{0.0125,0},1},{},{"Target",1,"Limit0109",1,{0.0175,0},1},{"Target",1,"Limit0109",1,{0.0225,0},1},{},{"Target",1,"Limit0109",1,{0.0275,0},1},{"Target",1,"Limit0109",1,{0.0325,0},1},{},{"Target",1,"Limit0109",1,{0.0375,0},1},{"Target",1,"Limit0109",1,{0.0425,0},1},{},{"Target",1,"Limit0109",1,{0.0475,0},1},{"Target",1,"Limit0109",1,{0.0525,0},1},{},{"Target",1,"Limit0109",1,{-0.0075,0},1},{"Target",1,"Limit0109",1,{-0.0125,0},1},{},{"Target",1,"Limit0109",1,{-0.0175,0},1},{"Target",1,"Limit0109",1,{-0.0225,0},1},{},{"Target",1,"Limit0109",1,{-0.0275,0},1},{"Target",1,"Limit0109",1,{-0.0325,0},1},{},{"Target",1,"Limit0109",1,{-0.0375,0},1},{"Target",1,"Limit0109",1,{-0.0425,0},1},{},{"Target",1,"Limit0109",1,{-0.0475,0},1},{"Target",1,"Limit0109",1,{-0.0525,0},1},{},{"Target",1,"Limit0109",1,{0,0.00737179},1},{"Target",1,"Limit0109",1,{0,0.0122863},1},{},{"Target",1,"Limit0109",1,{0,0.0172009},1},{"Target",1,"Limit0109",1,{0,0.0221154},1},{},{"Target",1,"Limit0109",1,{0,0.0270299},1},{"Target",1,"Limit0109",1,{0,0.0319444},1},{},{"Target",1,"Limit0109",1,{0,0.036859},1},{"Target",1,"Limit0109",1,{0,0.0417735},1},{},{"Target",1,"Limit0109",1,{0,0.046688},1},{"Target",1,"Limit0109",1,{0,0.0516026},1},{},{"Target",1,"Limit0109",1,{0,-0.00737179},1},{"Target",1,"Limit0109",1,{0,-0.0122863},1},{},{"Target",1,"Limit0109",1,{0,-0.0172009},1},{"Target",1,"Limit0109",1,{0,-0.0221154},1},{},{"Target",1,"Limit0109",1,{0,-0.0270299},1},{"Target",1,"Limit0109",1,{0,-0.0319444},1},{},{"Target",1,"Limit0109",1,{0,-0.036859},1},{"Target",1,"Limit0109",1,{0,-0.0417735},1},{},{"Target",1,"Limit0109",1,{0,-0.046688},1},{"Target",1,"Limit0109",1,{0,-0.0516026},1},{}};
								};
							};
							class TargetLocked
							{
								condition = "missilelocked";
								class TargetLockedText
								{
									type = "text";
									source = "static";
									text = "VALID LOCK";
									scale = 1;
									sourceScale = 1;
									align = "center";
									pos[] = {{0.493,0.779},1};
									right[] = {{0.533,0.779},1};
									down[] = {{0.493,0.81},1};
								};
								class TimeOfFlightText
								{
									type = "text";
									source = "static";
									text = "TOF:";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.127+0.49",0.869},1};
									right[] = {{0.652,0.869},1};
									down[] = {{"0.127+0.49",0.904},1};
								};
								class DistanceText
								{
									type = "text";
									source = "static";
									text = "DIST:";
									scale = 1;
									sourceScale = 1;
									align = "right";
									pos[] = {{"0.125+0.49",0.901},1};
									right[] = {{0.65,0.901},1};
									down[] = {{"0.125+0.49",0.936},1};
								};
								class TOF_source
								{
									type = "text";
									scale = 1;
									sourceScale = 1;
									source = "missileflighttime";
									align = "right";
									pos[] = {{0.739,0.869},1};
									right[] = {{0.774,0.869},1};
									down[] = {{0.739,0.904},1};
								};
								class TargetDistance: TOF_source
								{
									source = "targetDist";
									sourceLength = 0;
									sourcePrecision = 1;
									sourceScale = 0.001;
									align = "right";
									pos[] = {{0.739,0.901},1};
									right[] = {{0.774,0.901},1};
									down[] = {{0.739,0.936},1};
								};
							};
						};
					};
				};
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
					minfov = 0.03;
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
				gunneropticsmodel = "\A3\Drones_F\weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d";
				gunnerOutOpticsShowCursor = 1;
				gunnerOpticsShowCursor = 1;
				gunnerName = "Ball Turret (Right)";
				memoryPointGunnerOptics = "laser_R_muzzle";
				gunnerCompartments = "Compartment9";
				memorypointsgetingunner = "pos_cargo_dir";
				memorypointsgetingunnerdir = "pos_cargo";
				weapons[] = {"ParticleBeamCannon_R"};
				magazines[] = {"Laser_Battery","Laser_Battery"};
				turretinfotype = "RscOptics_Heli_Attack_01_gunner";
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
		class EventHandlers
		{
			init = "(_this select 0) execVM '\187th-aux\Functions\loadSupply\fn_masterLoader.sqf';";
			fired = "_this execVM '\3AS\3as_Laat\LAATI\scripts\fired_laser.sqf';";
		};
	};
};

