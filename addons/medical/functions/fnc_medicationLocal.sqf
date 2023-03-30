#include "script_component.hpp"

//Credit to diwako:
params ["_patient", "", "_classname"];

if (_classname == "Epinephrine") then {

private _heartRate = _patient getVariable ["ace_medical_heartRate", 80];
private _blood = _patient getVariable ["ace_medical_bloodVolume", 6.0];
private _bloodPressure = [_patient] call ace_medical_status_fnc_getBloodPressure;
_bloodPressure params ["_bloodPressureL", "_bloodPressureH"];

if (_heartRate < 40) then {
    _patient setVariable ["ace_medical_heartRate", 40, true];
    [{
        ["ace_medical_CPRSucceeded", _this] call CBA_fnc_localEvent;
    }, [_patient], 0.25] call CBA_fnc_waitAndExecute
};
if (_heartRate > 220) then {
    _patient setVariable ["ace_medical_heartRate", 80, true];
};
if (_bloodPressureH < 50) then {
    _bloodPressureH = 50;
};
if (_bloodPressureL < 40) then {
    _bloodPressureL = 40;
};
if (_bloodPressureL >= 190) then {
    _bloodPressureL = 180;
};
if (_blood <= 6.0) then {
    _blood = 6.0;
    _patient setVariable ["ace_medical_bloodVolume", _blood, true];
};

_patient setVariable ["ace_medical_bloodPressure", [_bloodPressureL, _bloodPressureH], true];

[{
    if ((_this select 0) getVariable ["ACE_isUnconscious",false]) then {
        ["ace_medical_WakeUp", _this] call CBA_fnc_localEvent;
    };
}, [_patient], 1] call CBA_fnc_waitAndExecute; //Remove the wait and execute? There's no reason to wait, in my opinion. I want the medical wakeup event to happen immediately.

};

///////////////////////////////////////////////////////////////////////////////////////////////////

if (_classname == "BasicAid") then {

//This will fill the patient's blood
_patient setVariable ["ace_medical_bloodVolume", 6.0, true];

//This will splint any fractures present. Credit to BaerMitUmlaut and KJW for this:
private _brokenBones = _patient getVariable ["ace_medical_fractures", [0,0,0,0,0,0]];
_brokenBones = _brokenBones apply { [_x, -1] select (_x == 1) };
_patient setVariable ["ace_medical_fractures", _brokenBones , true];
};