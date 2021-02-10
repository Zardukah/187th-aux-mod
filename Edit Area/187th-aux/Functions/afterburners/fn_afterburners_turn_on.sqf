private _vehicle = vehicle player;
private _boostStatus = _vehicle getvariable ["laat_is_boosting",false];

private _187BurnList=["187th_LAAT","187th_LAAT_mk_1","187th_LAAT_mk_2","187th_LAAT_Floodlights"];

if ((driver _vehicle != player) OR _boostStatus OR !(isEngineOn _vehicle) OR (isTouchingGround _vehicle) OR (_187BurnList findIf {_x isEqualTo typeOf _vehicle} < 0)) exitWith{};

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
