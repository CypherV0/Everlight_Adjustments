#include "script_component.hpp"
#include "\A3\Ui_f\hpp\defineResinclDesign.inc"
#include "\z\ace\addons\arsenal\defines.hpp"

if (GVAR(arsenalAddMedicalTab)) then {
    [
        ["FirstAidKit","Medikit","ACE_adenosine","ACE_fieldDressing","ACE_elasticBandage","ACE_packingBandage","ACE_quikclot","ACE_SterileGauze","ACE_bodyBag","gm_ge_army_burnBandage","ACE_EarPlugs","ACE_epinephrine","Empty_bloodIV_250","Empty_bloodIV_500","ACE_morphine","ACE_plasmaIV","ACE_plasmaIV_250","ACE_plasmaIV_500","ACE_salineIV","ACE_salineIV_250","ACE_salineIV_500","ACE_splint","ACE_surgicalKit","ACE_tourniquet",QEGVAR(medical,basicAid),QEGVAR(medical,advancedAid)],
        "Medical",
        "\z\ace\addons\medical_gui\data\categories\medication.paa"
    ] call ace_arsenal_fnc_addRightPanelButton;
};

if (GVAR(arsenalAddAcreTab)) then {
    private _radios = [];
    {
        _radios pushBack _x;
        for "_i" from 1 to 512 do {
            _radios pushBack (format ["%1_ID_%2", _x, _i]);
        };
    } forEach [
        "ACRE_BF888S",
        "ACRE_PRC117F",
        "ACRE_PRC148",
        "ACRE_PRC152",
        "ACRE_PRC343",
        "ACRE_PRC77",
        "ACRE_SEM52SL",
        "ACRE_SEM70"
    ];
    [
        _radios,
        "Radios",
        "\A3\Ui_f\data\GUI\Rsc\RscDisplayArsenal\Radio_ca.paa"
    ] call ace_arsenal_fnc_addRightPanelButton;
};