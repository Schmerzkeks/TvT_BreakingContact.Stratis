class russia {
     class AllUnits {
          primaryWeapon = "rhs_weap_ak105_zenitco01_b33";
          primaryWeaponMagazine = "rhs_30Rnd_545x39_7N10_AK"; 
          primaryWeaponMuzzle = "rhs_acc_dtk1";
          primaryWeaponPointer = "rhs_acc_perst3";
          primaryWeaponOptics = "rhs_acc_1p87";
          handgunWeapon = "rhs_weap_pya";
          handgunWeaponMagazine = "rhs_mag_9x19_17";
          uniform = "rhs_uniform_flora_patchless_alt";
          vest = "rhs_6b13_6sh92_vog";
          backpack = "rhs_assault_umbts";
          headgear = "rhs_6b26";
          binoculars = "Binocular";
          map = "ItemMap";
          radio = "TFAR_fadak";
          compass = "ItemCompass";
          watch = "ItemWatch";
          nvgoggles = "";
     };

     class Type {
          class Soldier_F {
               gps = "";
               addItemsToUniform[] = {"ACE_fieldDressing","ACE_MapTools","ACE_Flashlight_KSF1",LIST_2("rhs_mag_9x19_17")};
               addItemsToVest[] = {"SmokeShell",LIST_4("rhs_30Rnd_545x39_7N10_AK"),LIST_2("rhs_mag_rgd5"),LIST_2("rhs_mag_rdg2_white")};
               addItemsToBackpack[] = {LIST_6("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine")};
          };
          class Engineer_F: Soldier_F {
               addItemsToVest[] = {"SmokeShell",LIST_7("rhs_30Rnd_545x39_7N10_AK"),LIST_2("rhs_mag_rgd5"),LIST_2("rhs_mag_rdg2_white")};
               backpack = "rhssaf_kitbag_smb";
               addItemsToBackpack[] = {"toolkit", LIST_6("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine"),"grad_axe","ACE_Fortify","ACE_EntrenchingTool","ACE_DefusalKit"};
          };

          class HeavyGunner_F: Soldier_F {
               primaryWeapon = "rhs_weap_pkp";
               primaryWeaponMagazine = "rhs_100Rnd_762x54mmR_green"; 
               primaryWeaponOptics = "rhs_acc_ekp8_02";
               vest = "rhs_6b13_6sh92_vog";
               addItemsToVest[] = {LIST_2("rhs_mag_rgd5"),LIST_2("rhs_mag_rdg2_white"),"rhs_100Rnd_762x54mmR_green"};
               backpack = "rhssaf_kitbag_smb";
               addItemsToBackpack[] = {LIST_6("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine"),LIST_2("rhs_100Rnd_762x54mmR_green")};
          };
          class Soldier_AHAT_F: Soldier_F {
               addItemsToBackpack[] = {LIST_6("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine"),LIST_2("rhs_rpg7_PG7V_mag")};
          };
          class Soldier_AR_F: Soldier_F {
               primaryWeapon = "rhs_weap_akmn";
               primaryWeaponMagazine = "rhs_75Rnd_762x39mm_tracer"; 
               primaryWeaponMuzzle = "rhs_acc_dtk1l";
               addItemsToVest[] = {LIST_2("HandGrenade"),"SmokeShell","SmokeShellRed",LIST_2("rhs_mag_rdg2_white"),LIST_2("rhs_mag_rgd5"),"rhs_75Rnd_762x39mm_tracer"};
               backpack = "rhssaf_kitbag_smb";
               addItemsToBackpack[] = {LIST_8("rhs_75Rnd_762x39mm_tracer")};
          };

          class Soldier_AAR_F: Soldier_F {
               addItemsToVest[] = {LIST_2("HandGrenade"),"SmokeShell","SmokeShellRed",LIST_2("rhs_mag_rdg2_white"),LIST_2("rhs_mag_rgd5"),"rhs_75Rnd_762x39mm_tracer"};
          };

          class Soldier_AT_F: Soldier_F {
               secondaryWeapon = "rhs_weap_rpg7";
               addItemsToBackpack[] = {LIST_6("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine"),"rhs_rpg7_PG7V_mag"};
          };
          class Soldier_A_F: Soldier_F {
               addItemsToUniform[] = {"ACE_fieldDressing","ACE_MapTools","ACE_Flashlight_KSF1",LIST_2("rhs_mag_9x19_17")};
               backpack = "rhssaf_kitbag_smb";
               addItemsToBackpack[] = {LIST_6("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine"),LIST_4("rhs_100Rnd_762x54mmR_green")};
          };

          class Soldier_LAT_F: Soldier_F {
               secondaryWeapon = "rhs_weap_rpg26";
               addItemsToVest[] = {"SmokeShell",LIST_7("rhs_30Rnd_545x39_7N10_AK"),LIST_2("rhs_mag_rgd5"),LIST_2("rhs_mag_rdg2_white"),"rhs_rpg26_mag"};
               backpack = "rhs_assault_umbts";       
          };

          class Medic_F: Soldier_F {
               addItemsToBackpack[] = {LIST_10("ACE_fieldDressing"), LIST_10("ACE_morphine"), LIST_10("ACE_epinephrine"), LIST_8("ACE_bloodIV_250"), LIST_2("HandGrenade")};
          };
          class Soldier_TL_F: Soldier_F {
               gps = "ItemGPS";
               primaryWeapon = "rhs_weap_ak103_gp25_npz";
               primaryWeaponMagazine = "rhs_30Rnd_762x39mm_polymer_tracer";
               handgunWeapon = "hgun_Rook40_F";
               handgunWeaponMagazine = "";
               addItemsToUniform[] = {LIST_7("ACE_fieldDressing"),LIST_2("ACE_epinephrine"),LIST_2("ACE_morphine"),LIST_2("rhs_mag_9x19_17")};
               addItemsToVest[] = {LIST_2("rhs_mag_rdg2_white"),LIST_2("rhs_mag_rgd5"),LIST_5("rhs_30Rnd_762x39mm_polymer_tracer")};
               backpack = "TFAR_mr3000_rhs";
               addItemsToBackpack[] = {"ACE_Flashlight_KSF1",LIST_2("ACE_tourniquet"),"rhs_mag_rdg2_white",LIST_3("rhs_30Rnd_762x39mm_polymer_tracer"),LIST_2("rhs_VG40MD_Green"),LIST_2("rhs_VG40MD_Red"),"rhs_VG40MD_White"};
          };
          class Soldier_SL_F: Soldier_TL_F {
          };
          class officer_F: Soldier_SL_F {
               // same
          };
          class Crew_F {
             
          };
          class Helipilot_F: Crew_F {};
     };
};