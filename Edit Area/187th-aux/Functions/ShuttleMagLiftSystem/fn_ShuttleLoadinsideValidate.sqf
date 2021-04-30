_shuttle = _this select 0;
_veh = _this select 1;
_loaded = false;

switch true do {

	case (_veh isKindOf "OPTRE_M808B_base") : {
		_veh attachTo [_shuttle,[0,-7.2, -0.37105]];
		_veh setDir 180;
		_loaded = true;
	};
	case (_veh isKindOf "187th_bantha_mk1") : {
		_veh attachTo [_shuttle,[0,0.75,4.4]];
		//0 = [vehicle player, 15, 0] call BIS_fnc_setPitchBank;
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M12_FAV") : {
		_veh attachTo [_shuttle,[0,-3.25,0.95]];
		_loaded = true;
	};
	case (_veh isKindOf "OPTRE_M413_base") : {
		_veh attachTo [_shuttle,[0,-3.6,0.30]];
		_loaded = true;
	};
	/*case (_veh isKindOf "OPTRE_falcon_base") : {
		_veh attachTo [_shuttle,[0,-4.8,-0.1]];
		_loaded = true;
	};
	case (_veh isKindOf "optre_hornet_base") : {
		_veh attachTo [_shuttle,[0,-5,-0.35]];
		_loaded = true;
	};*/
};

if (_loaded) then {
	_shuttle setVariable ["OPTRE_shuttle_AttachedToVehiclesEffect", [vehicle player], true];
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>VEHICLE LOADED!</t><br/>-------------------------------------------<br/>", "PLAIN DOWN", -1, true, true];
	playSound "FD_Finish_F";
} else {
	titleText ["-------------------------------------------<br/><t color='#ff0000' size='1.5'>CAN NOT LOAD!</t><br/>-------------------------------------------<br/>Your vehicle has not been designed to be transported by this aircraft.", "PLAIN DOWN", -1, true, true];
	//hint "Your vehicle has not been design to be lifted by the shuttle, operation aborted.";
	playSound "FD_CP_Not_Clear_F";
};
