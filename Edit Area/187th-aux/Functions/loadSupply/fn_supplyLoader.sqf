cargoTypes = [player,"JLTS_Ammobox_ammo_GAR","JLTS_Ammobox_grenades_GAR","JLTS_Ammobox_launchers_GAR","JLTS_Ammobox_explosives_GAR","JLTS_Ammobox_support_GAR"];

private _veh = _this select 0;
private _cargo = _this select 0 nearEntities [cargoTypes, 20] select 0;
_veh setVehicleCargo _cargo;