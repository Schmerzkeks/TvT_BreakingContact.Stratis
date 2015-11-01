calculateRussianVehicleCall = {
	_idc = _this select 0;
	_source_array = _this select 1;

	_displayName = [_idc] call russian_IDC_to_displayname;
	_countLeft = [_idc] call russian_IDC_to_countleft;
	_price = [_idc] call russian_IDC_to_price;
	_priceDisplay = [_idc] call russian_IDC_to_pricedisplay;
	_eta = [_idc] call russian_IDC_to_eta;

	if (_countLeft == 0) exitWith {	_target_array = [_idc]; _target_array };

	_countLeft = _countLeft - 1;

	_target_array= [
		_source_array select 0,
		_displayName,
        _countLeft,
        _price,
        _priceDisplay,
        _eta,
        _source_array select 6,
        _source_array select 7,
        _source_array select 8
	];

	//if (DEBUG) then { diag_log format ["calculateVehicleCall: %1",_target_array]; };

	_target_array

};

calculateUSVehicleCall = {
	_idc = _this select 0;
	_source_array = _this select 1;

	_displayName = [_idc] call US_IDC_to_displayname;
	_countLeft = [_idc] call US_IDC_to_countleft;
	_price = [_idc] call US_IDC_to_price;
	_priceDisplay = [_idc] call US_IDC_to_pricedisplay;
	_eta = [_idc] call US_IDC_to_eta;

	if (_countLeft == 0) exitWith {	_target_array = [_idc]; _target_array };

	_countLeft = _countLeft - 1;

	_target_array= [
		_source_array select 0,
		_displayName,
        _countLeft,
        _price,
        _priceDisplay,
        _eta,
        _source_array select 6,
        _source_array select 7,
        _source_array select 8
	];

	//if (DEBUG) then { diag_log format ["calculateVehicleCall: %1",_target_array]; };

	_target_array

};