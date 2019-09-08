diag_log "eras_fnc_tomahawk"
params ["_logic","_units","_activated"];

if ({local _x} count (objectcurators _logic) > 0) then {
	//--- Reveal the circle to curators
	_logic hideobject false;
	_logic setpos position _logic;
};
if !(isserver) exitwith {};

if (_activated) then {
	private _ammo = _logic getvariable ["type",gettext (configfile >> "cfgvehicles" >> typeof _logic >> "ammo")];
	if !(_ammo isEqualTo "") then {

		private _altitude = 2000;
		private _pitch = 45;

		private _posAmmo = +(getposatl _logic);
		private _dir = direction _logic;
		private _distance = _altitude * (tan (_pitch)) - 45 * (_altitude / 1000);

		_posAmmo = _posAmmo getPos [_distance, _dir + 180];
		_posAmmo set [2,_altitude];
			
		//--- Create projectile
		private _projectile = createvehicle [_ammo,_posAmmo,[],0,"none"];
		_projectile setpos _posAmmo;
		_projectile setDir _dir;
		[_projectile, - _pitch, 0] call BIS_fnc_setPitchBank;


		deletevehicle _logic;

	} else {
		["Cannot create projectile, 'ammo' config attribute is missing in %1",typeof _logic] call bis_fnc_error;
	};
};