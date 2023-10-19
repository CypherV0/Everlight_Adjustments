#include "script_component.hpp"

// Zeus events
["ModuleCurator_F", "initPost", {
    params ["_module"];
    _module addEventHandler ["CuratorPinged", {
        params ["_curator", "_unit"];
        private _zeus = getAssignedCuratorUnit _curator;
        if !(isNull _zeus) then {
            if (_zeus == player) then {
                systemChat format ["Pinged by %1", name _unit];
            } else {
                systemChat "Ping received!";
            };
        };
    }];

}, false, [], true] call CBA_fnc_addClassEventHandler;

if (isDedicated) then {
    [{
        GVAR(performanceChecks) = [
            [{diag_fps < 12}, {format ["fps is low: %1.", round diag_fps]}],
            [{
                count (allUnits select {simulationEnabled _x && !isPlayer _x}) > 120
            }, {"a lot of active AI (>120)"}],
            [{count (allGroups select {units _x isEqualTo []}) > 30}, {"a lot of empty groups (>30)"}],
            [{count allDead > 40}, {"a lot of corpses (>40)"}]
        ];

        GVAR(performancePfh) = [{
            (GVAR(performanceChecks) deleteAt 0) params ["_condition", "_msg"];
            if (call _condition) then {
                [QGVAR(chatMessage), ["SERVER", call _msg, "server", nil, false]] call CBA_fnc_globalEvent;
            };
            GVAR(performanceChecks) pushBack [_condition, _msg];
        }, 30, []] call CBA_fnc_addPerFrameHandler;
    }, 10] call CBA_fnc_waitAndExecute;
};

if (GVAR(disableRHSStartUp)) then {
    RHS_ENGINE_STARTUP_OFF = "fuck no";
};

//Able to pick up crates and turrets under this weight (it's not pounds!)
ACE_maxWeightCarry = 800;

//Able to jog while carrying crates and turrets under this weight
ace_dragging_maxWeightCarryRun = 800;