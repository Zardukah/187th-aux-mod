/* Run Via Server */

playSound "FD_Finish_F";

_shuttle = 	_this;
_vehicles = (_shuttle getVariable ["OPTRE_shuttle_AttachedToVehiclesEffect",[]]);
//{_x disableCollisionWith vehicle player; vehicle player disableCollisionWith _x;} forEach _vehicles;
_shuttle allowDamage false;

{
	detach _x;
	_v = (velocity vehicle player);
	_x setVelocity [_v select 0, _v select 1, ((_v select 2) - 2)];
	_x allowDamage false;
	if (random 100 > 15) then {_x setCenterOfMass [[0,0,-2],10];};
	_x addEventHandler ["HandleDamage",{
		playSound3d ["A3\Sounds_F\sfx\missions\vehicle_collision.wss", (_this select 0),false, getPos (_this select 0), 0.5, 1, 300];
		_shuttle removeAllEventHandlers "HandleDamage";
	}];
	sleep 0.5;
} forEach _vehicles;

sleep 0.5;

_shuttle allowDamage true;
//{_x enableCollisionWith vehicle player; vehicle player enableCollisionWith _x;} forEach _vehicles;

{_x allowDamage true;} forEach _vehicles;
_shuttle allowDamage true;
_shuttle setVariable ["OPTRE_shuttle_AttachedToVehiclesEffect", [], true];

//0 = _vehicles spawn OPTRE_Fnc_SupplyPodCleanUp;

true