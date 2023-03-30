class ace_medical_treatment {
    class Medication {
        class Epinephrine {
            painReduce = 0;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 60;
            timeTillMaxEffect = 0;
            // maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
        class Morphine {};
        class BasicAid: Morphine {
            painReduce = 0.2;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 10;
            timeTillMaxEffect = 0;
            // maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
    };
    class Bandaging {
        class basicBandage {};
        class PatchBandage: BasicBandage {
            effectiveness = 0.5;
            reopeningChance = 0;
            reopeningMinDelay = 0;
            reopeningMaxDelay = 0;
        };
    };
};