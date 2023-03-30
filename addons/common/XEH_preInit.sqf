
#include "script_component.hpp"

ADDON = false;

#include "XEH_PREP.hpp"

[
    QGVAR(arsenalAddMedicalTab),
    "CHECKBOX",
    "Add medical tab",
    [EVLT_SETTINGS, "Arsenal"],
    true,
    false
] call CBA_fnc_addSetting;

[
    QGVAR(arsenalAddAcreTab),
    "CHECKBOX",
    "Add radio tab",
    [EVLT_SETTINGS, "Arsenal"],
    true,
    false
] call CBA_fnc_addSetting;

[
    QGVAR(disableRHSStartUp),
    "CHECKBOX",
    "Disable RHS engine start up",
    [EVLT_SETTINGS, "General"],
    true,
    true
] call CBA_fnc_addSetting;


ADDON = true;
