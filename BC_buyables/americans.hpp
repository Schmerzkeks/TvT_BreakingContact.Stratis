//a different set of buyables
class AmericanStuff {    

    class Logistics {
        displayName = "Logistics";
        kindOf = "Vehicles";
        maxBuyCount = 9;

        class rhsusf_M1083A1P2_WD_fmtv_usarmy {
            displayName = "FMTV M1083";
            description = "The workhorse of your army.";
            price = 10;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['rhs_woodland',1],['hide_cover',0,'hide_spare',0,'hide_scaffold',0,'hide_bench',0]";
        };

        class rhsusf_M1083A1P2_D_fmtv_usarmy: rhsusf_M1083A1P2_WD_fmtv_usarmy {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['rhs_desert',1],['hide_cover',0,'hide_spare',0,'hide_scaffold',0,'hide_bench',0]";
        };

        class rhsusf_mrzr4_d {
            displayName = "MRZR 4";
            description = "The workhorse of your army.";
            price = 10;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['mud_olive',1],['tailgateHide',0,'tailgate_open',0,'cage_fold',0]";
        };

        class rhsusf_M1078A1R_SOV_M2_D_fmtv_socom: rhsusf_mrzr4_d {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['mud',1],['tailgateHide',0,'tailgate_open',0,'cage_fold',0]";
        };
    };


    class Recon {
        displayName = "Recon";
        kindOf = "Vehicles";
        maxBuyCount = 2;

        class RHS_MELB_H6M {
            displayName = "OH-6M";
            description = "The workhorse of your army.";
            price = 10;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            vehicleInit = "[[],[]]";
        };

        class rhsusf_CGRCAT1A2_usmc_wd {
            displayName = "Cougar IMV";
            description = "The workhorse of your army.";
            price = 10;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['rhs_woodland',1],['DUKE_Hide',1]";
        };

        class rhsusf_CGRCAT1A2_usmc_d: rhsusf_CGRCAT1A2_usmc_wd {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['rhs_desert',1],['DUKE_Hide',1]";
        };


        class rhsusf_m1025_w_m2 {
            displayName = "HMMWV M2";
            description = "The workhorse of your army.";
            price = 10;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['standard',1],['hide_snorkel',1,'hide_CIP',1,'hide_BFT',0,'hide_Antenna',0,'hide_A2_Parts',0,'Hide_A2Bumper',0,'Hide_Brushguard',1]";
        };

        class rhsusf_m1025_d_m2: rhsusf_m1025_w_m2 {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['Desert',1],['hide_snorkel',1,'hide_CIP',1,'hide_BFT',0,'hide_Antenna',0,'hide_A2_Parts',0,'Hide_A2Bumper',0,'Hide_Brushguard',1]";
        };

    };


    class Support {
        displayName = "Support";
        kindOf = "Vehicles";
        maxBuyCount = 2;

        class rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy {
            displayName = "FMTV M2";
            description = "The workhorse of your army.";
            price = 0;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "nil,['hide_cover',0,'hide_spare',0,'hide_scaffold',0,'hide_bench',0]";
        };

        class rhsusf_M1083A1P2_B_M2_D_fmtv_usarmy: rhsusf_M1083A1P2_B_M2_WD_fmtv_usarmy {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['rhs_desert',1],['hide_cover',0,'hide_spare',0,'hide_scaffold',0,'hide_bench',0]";
        };

        class rhsusf_m113_usarmy_M2_90 {
            displayName = "BRDM-AT";
            description = "The workhorse of your army.";
            price = 0;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['standard',1],['IFF_Panels_Hide',1]";
        };

        class rhsgref_hidf_m113a3_mk19: rhsusf_m113_usarmy_M2_90 {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['Desert',1],['IFF_Panels_Hide',1]";
        };

        class rhsusf_m113_usarmy_M240 {
            displayName = "BRDM-2";
            description = "The workhorse of your army.";
            price = 0;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "[['olive', 1], ['driverViewHatch',0,'commanderViewHatch',0,'hatchCommander',1]]";
        };

        class rhsusf_m113d_usarmy_M240: rhsusf_m113_usarmy_M240 {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "[['3tone', 1], ['driverViewHatch',0,'commanderViewHatch',0,'hatchCommander',1]]";
    
        };
    };

    class Heavy {
        displayName = "Heavy";
        kindOf = "Vehicles";
        maxBuyCount = 1;

        class rhsusf_m1045_w {
            displayName = "HMMWV TOW";
            description = "The workhorse of your army.";
            price = 0;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            condition = "BC_IS_WOODLAND";
            vehicleInit = "['standard',1], ['hide_snorkel',1,'hide_CIP',0,'hide_BFT',0,'hide_Antenna',0,'hide_A2_Parts',0,'Hide_A2Bumper',0,'Hide_Brushguard',1]";
        };

        class rhsusf_m1045_d: rhsusf_m1045_w {
            condition = "!BC_IS_WOODLAND";
            vehicleInit = "['Desert',1], ['hide_snorkel',1,'hide_CIP',0,'hide_BFT',0,'hide_Antenna',0,'hide_A2_Parts',0,'Hide_A2Bumper',0,'Hide_Brushguard',1]";
        };

        class RHS_UH60M2 {
            displayName = "UH-60M";
            description = "The workhorse of your army.";
            price = 0;
            stock = 7;
            code = "";
            spawnEmpty = 1;
            vehicleInit = "[['standard',1], ['crate_l1_unhide',1,'crate_l2_unhide',1,'crate_l3_unhide',1,'crate_r1_unhide',1,'crate_r2_unhide',1,'crate_r3_unhide',1,'wood_1_unhide',1,'maljutka_hide_source',1,'cargoHandler1',0]]";
        };
    };

    class Special {
        displayName = "Special";
        kindOf = "Vehicles";
        maxBuyCount = 2;

        class I_C_Boat_Transport_01_F {
            displayName = "Boats + Diving Equipments";
            description = "Get it in the Start Vehicle (ACE Interaction).";
            price = 0;
            stock = 1;
            code = "";
            spawnEmpty = 1;
        };

        class rhsusf_explosive_m112 {
            displayName = "Breaching Equipment";
            description = "Explosives and Wirecutter in Start Vehicle.";
            price = 0;
            stock = 1;
            code = "";
            spawnEmpty = 1;
        };

        class Land_JumpTarget_F {
            displayName = "Hunt IR Equipment";
            description = "Hunt IR Equipment in Start Vehicle.";
            price = 0;
            stock = 1;
            code = "";
            spawnEmpty = 1;
        };
    };
};