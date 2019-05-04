class bwGM {
    class AllUnits {
        primaryWeapon = "gm_g3a3_oli";
        primaryWeaponMagazine = "gm_20rnd_762x51mm_b_t_dm21a1_g3_blk";
        primaryWeaponPointer = "";
        primaryWeaponOptics = "";
        handgunWeapon = "";
        handgunWeaponMagazine = "";
        uniform = "gm_ge_army_uniform_soldier_80_oli";
        vest = "gm_dk_army_vest_54_rifleman";
        backpack = "gm_ge_army_backpack_80_oli";
        headgear = "gm_ge_headgear_m62_net";
        binoculars = "gm_ferod16_oli";
        map = "ItemMap";
        radio = "TFAR_anprc152";
        compass = "gm_ge_army_conat2";
        watch = "gm_watch_kosei_80";
        nvgoggles = "";
    };

    class Type {
        class Soldier_F {
            gps = "";
            addItemsToUniform[] = {
                LIST_7("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "ACE_key_west"
            };
            addItemsToVest[] = {
                LIST_6("gm_20rnd_762x51mm_b_t_dm21a1_g3_blk"),
                LIST_2("gm_handgrenade_frag_dm51"),
                LIST_2("gm_smokeshell_wht_dm25")
            };
        };
        class Engineer_F: Soldier_F{
            backpack = "gm_ge_backpack_satchel_80_blk";
            addItemsToBackpack[] = {
                "toolkit",
                LIST_6("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_2("ACE_morphine"),
                "grad_axe",
                "ACE_EntrenchingTool",
                "ACE_DefusalKit"
            };
        };
        class HeavyGunner_F: Soldier_F {
            primaryWeapon = "gm_mg3_blk";
            primaryWeaponMagazine = "gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn";
            vest = "gm_ge_army_vest_80_machinegunner";
            addItemsToUniform[] = {
                LIST_5("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50"
            };
            addItemsToVest[] = {
                "gm_handgrenade_frag_dm51",
                "gm_smokeshell_wht_dm25",
                LIST_2("gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn")
            };
            addItemsToBackpack[] = {
                LIST_2("gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn")
            };
        };
        class Soldier_AR_F: Soldier_F {
            primaryWeapon = "gm_mg3_blk";
            primaryWeaponMagazine = "gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn";
            vest = "gm_ge_army_vest_80_machinegunner";
            addItemsToUniform[] = {
                LIST_5("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50"
            };
            addItemsToVest[] = {
                "gm_handgrenade_frag_dm51",
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_2("gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn")
            };
            addItemsToBackpack[] = {
                LIST_2("gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn")
            };
        };
        class Soldier_AAR_F: Soldier_F {
            addItemsToUniform[] = {
                LIST_5("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50"
            };
            addItemsToBackpack[] = {
                LIST_2("gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn")
            };
        };

        class Soldier_A_F: Soldier_F {
            addItemsToVest[] = {
                LIST_8("gm_20rnd_762x51mm_b_t_dm21a1_g3_blk"),
                LIST_2("gm_handgrenade_frag_dm51"),
                LIST_2("gm_smokeshell_wht_dm25")
            };
            addItemsToBackpack[] = {
                LIST_2("gm_120rnd_762x51mm_b_t_dm21a1_mg3_grn")
            };
        };

        // heavy at
        class Soldier_AT_F: Soldier_F {
            secondaryWeapon = "gm_pzf84_oli";
            secondaryWeaponMagazine = "gm_1rnd_84x245mm_heat_t_dm12a1_carlgustaf";
            backpack = "B_Carryall_cbr";
            addItemsToUniform[] = {
                LIST_5("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50"
            };
            addItemsToVest[] = {
                LIST_3("gm_20rnd_762x51mm_b_t_dm21a1_g3_blk"),
                "gm_smokeshell_wht_dm25"
            };
            addItemsToBackpack[] = {
                "gm_1rnd_84x245mm_heat_t_dm12a1_carlgustaf"
            };
        };

        // heavy at ammo carrier
        class Soldier_AAT_F: Soldier_F {
            addItemsToBackpack[] = {
                LIST_6("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_2("ACE_morphine"),
                LIST_2("gm_1rnd_84x245mm_heat_t_dm12a1_carlgustaf")
            };
        };

        class Soldier_LAT_F: Soldier_F {
            secondaryWeapon = "gm_pzf44_2_oli";
            secondaryWeaponMagazine = "gm_1rnd_44x537mm_heat_dm32_pzf44_2";
            addItemsToUniform[] = {
                LIST_5("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_3("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "gm_1rnd_84x245mm_heat_t_dm12a1_carlgustaf"
            };
        };

        class Medic_F: Soldier_F {
            vest = "gm_ge_army_vest_80_medic";
            backpack = "gm_ge_backpack_satchel_80_san";
            addItemsToBackpack[] = {
                LIST_10("ACE_fieldDressing"),
                LIST_10("ACE_morphine"),
                LIST_10("ACE_epinephrine"),
                LIST_8("ACE_bloodIV_250"),
                LIST_2("gm_handgrenade_frag_dm51")
            };
        };
        class Soldier_TL_F: Soldier_F {
            vest = "gm_ge_army_vest_80_leader";
            gps = "ItemGPS";
            addItemsToUniform[] = {
                LIST_7("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_4("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "ACE_key_west"
            };
            addItemsToVest[] = {
                LIST_2("gm_handgrenade_frag_dm51"),
                LIST_2("gm_smokeshell_wht_dm25"),
                LIST_3("gm_20rnd_762x51mm_b_t_dm21a1_g3_blk"),
                LIST_5("1Rnd_SmokeGreen_Grenade_shell"),
                LIST_5("1Rnd_SmokeRed_Grenade_shell")
            };
            addItemsToBackpack[] = {
                LIST_5("gm_20rnd_762x51mm_b_t_dm21a1_g3_blk")
            };
        };
        class Soldier_SL_F: Soldier_TL_F {
            backpack = "TFAR_rt1523g_sage";
            addItemsToUniform[] = {
                LIST_7("ACE_fieldDressing"),
                LIST_2("ACE_epinephrine"),
                LIST_4("ACE_morphine"),
                LIST_2("ACE_tourniquet"),
                "ACE_MapTools",
                "ACE_Flashlight_XL50",
                "ACE_key_west"
            };
        };
        class officer_F: Soldier_SL_F {};
        class Crew_F {};
        class Helipilot_F: Crew_F {};
    };
};