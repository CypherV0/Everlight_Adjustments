class ace_medical_treatment_actions {
    // - Misc -------------------------------------------------------------
    class Morphine;
    class BasicAid: Morphine {
        displayName = "Use Basic Aid Kit";
        displayNameProgress = "Treating...";
        category = "advanced";
        medicRequired = 0;
        allowSelfTreatment = 1;
        allowedSelections[] = {"All"};
        treatmentLocations = TREATMENT_LOCATIONS_ALL;
        treatmentTime = 20;
        animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
        items[] = {QGVAR(basicAid)};
        condition = "";
    };
    class PersonalAidKit;
    class AdvancedAid: PersonalAidKit {
        displayName = "Use Advanced Aid Kit";
        displayNameProgress = "Treating...";
        items[] = {QGVAR(advancedAid)};
        condition = "";
    };
    class BasicBandage;
    class PatchBandage: BasicBandage {
        displayName = "Patch";
        displayNameProgress = "Patching...";
        icon = "";
        category = "bandage";

        items[] = {};

        medicRequired = 0;
        allowSelfTreatment = 1;
        allowedSelections[] = {"All"};
        condition = "";
        treatmentLocations = TREATMENT_LOCATIONS_ALL;

        animationMedic = "AinvPknlMstpSlayW[wpn]Dnon_medicOther";
        animationMedicProne = "AinvPpneMstpSlayW[wpn]Dnon_medicOther";
        animationMedicSelf = "AinvPknlMstpSlayW[wpn]Dnon_medic";
        animationMedicSelfProne = "AinvPpneMstpSlayW[wpn]Dnon_medic";

        litter[] = {};
    };
    class Diagnose: BasicBandage {
        allowedSelections[] = {"All"};
    };
    class CPR: BasicBandage {
        displayName = "No Pulse - (Perform CPR)";
        category = "examine";
        allowedSelections[] = {"All"};
    };
};