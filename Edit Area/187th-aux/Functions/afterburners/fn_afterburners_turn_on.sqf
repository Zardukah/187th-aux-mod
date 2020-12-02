private _vehicle = vehicle player;
private _boostStatus = _vehicle getvariable ["laat_is_boosting",false];

private _3asBurnList=["187th_LAAT","101st_LAAT_MK2","212th_LAAT_MK2","327th_LAAT_MK2","615th_LAAT_MK2","501st_LAAT_MK2","91st_LAAT_MK2","ARC_LAAT_MK2","101st_LAAT_MK2Light","212th_LAAT_MK2Light","501st_LAAT_MK2Light","327th_LAAT_MK2Light","91st_LAAT_MK2Light","ARC_LAAT_MK2Light","3as_LAAT_Mk1","101st_LAAT","212th_LAAT","327th_LAAT","501st_LAAT","615th_LAAT","91st_LAAT","ARC_LAAT","3as_LAAT_Mk1Lights","101st_LAATLights","212th_LAATLights","327th_LAATLights","501st_LAATLights","615th_LAATLights","91st_LAATLights","ARC_LAATLights","3as_LAAT_Mk2","3as_LAAT_Mk2Lights","3as_nuclass","3as_arc_170_blue","3as_arc_170_green","3as_arc_170_yellow","3as_arc_170_orange","3as_arc_170_razor","3as_arc_170_red"];

if ((driver _vehicle != player) OR _boostStatus OR !(isEngineOn _vehicle) OR (isTouchingGround _vehicle) OR (_3asBurnList findIf {_x isEqualTo typeOf _vehicle} < 0)) exitWith{};

private ["_vel", "_dir"];

_vehicle setvariable ["laat_is_boosting",true,true];
hint "Activated Impulse";
if (speed _vehicle <= 600) then {
	_vel = velocity _vehicle;
	_dir = direction _vehicle;
	_vehicle setVelocity [
	(_vel select 0) + (sin _dir * 10),
	(_vel select 1) + (cos _dir * 10),
	(_vel select 2)
	];
};
sleep 1;
hintSilent "";

while {((_vehicle getvariable ["laat_is_boosting",false]) AND (alive _vehicle))} do
{
	if (speed _vehicle <= 600) then {
		_vel = velocity _vehicle;
		_dir = direction _vehicle;
		_vehicle setVelocity [
		(_vel select 0) + (sin _dir * 10),
		(_vel select 1) + (cos _dir * 10),
		(_vel select 2)
		];
	};
	sleep 0.5;
};
