#include "script_component.hpp"

if (!hasInterface) exitWith {};

[
    EVLT_SETTINGS,
    QGVAR(toggleScreenshot),
    ['Toggle Screenshot Mode', 'Hides UI elements for taking screenshots'],
    {
        [] call FUNC(toggleScreenshotMode);
        false
    }, {},
    [0x0E, [false, false, false]]] call CBA_fnc_addKeybind;