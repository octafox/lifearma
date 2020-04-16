/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_blue", "", 125, "" },
            { "U_C_Poloshirt_burgundy", "", 125, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_tricolour", "", 125, "" },
            { "U_C_Poloshirt_salmon", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 125, "" },
            { "U_OrestesBody", "", 125, "" },
            { "U_Competitor", "", 125, "" },
            { "U_BG_Guerilla2_1", "", 125, "" },
            { "U_BG_Guerilla2_2", "", 125, "" },
            { "U_BG_Guerilla2_3", "", 125, "" },
            { "U_BG_Guerilla3_1", "", 125, "" },
            { "U_C_Poor_1", "", 125, "" },
            { "U_C_HunterBody_grn", "", 125, "" },
            { "U_I_G_Story_Protagonist_F", "", 125, "" },
            { "U_C_Journalist", "", 125, "" },
            { "U_Marshal", "", 125, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 125, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 125, "" },
            { "U_I_C_Soldier_Bandit_3_F", "", 125, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 125, "" },
            { "U_I_C_Soldier_Bandit_5_F", "", 125, "" },
            { "U_C_man_sport_1_F", "", 125, "" },
            { "U_C_man_sport_2_F", "", 125, "" },
            { "U_C_man_sport_3_F", "", 125, "" },
            { "U_C_Man_casual_1_F", "", 125, "" },
            { "U_C_Man_casual_2_F", "", 125, "" },
            { "U_C_Man_casual_3_F", "", 125, "" },
            { "U_C_Man_casual_4_F", "", 125, "" },
            { "U_C_Man_casual_5_F", "", 125, "" },
            { "U_C_Man_casual_6_F", "", 125, "" },
            { "U_C_IDAP_Man_shorts_F", "", 125, "" },
            { "U_C_IDAP_Man_casual_F", "", 125, "" },
            { "U_C_IDAP_Man_cargo_F", "", 125, "" },
            { "U_C_IDAP_Man_Tee_F", "", 125, "" },
            { "U_C_IDAP_Man_Jeans_F", "", 125, "" },
            { "U_C_IDAP_Man_TeeShorts_F", "", 125, "" },
            { "U_C_Mechanic_01_F", "", 125, "" },
            { "U_C_ConstructionCoverall_Red_F", "", 125, "" },
            { "U_C_ConstructionCoverall_Vrana_F", "", 125, "" },
            { "U_C_ConstructionCoverall_Black_F", "", 125, "" },
            { "U_C_ConstructionCoverall_Blue_F", "", 125, "" },
            { "U_C_Uniform_Farmer_01_F", "", 125, "" },
            { "U_C_E_LooterJacket_01_F", "", 125, "" },
            { "U_C_Uniform_Scientist_01_F", "", 125, "" },
            { "U_C_Uniform_Scientist_01_formal_F", "", 125, "" },
            { "U_C_Uniform_Scientist_02_F", "", 125, "" },
            { "U_C_Uniform_Scientist_02_formal_F", "", 125, "" },
            { "U_I_L_Uniform_01_tshirt_skull_F", "", 125, "" },
            { "U_I_L_Uniform_01_tshirt_black_F", "", 125, "" },
            { "U_I_L_Uniform_01_tshirt_sport_F", "", 125, "" },
            { "U_I_L_Uniform_01_tshirt_olive_F", "", 125, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 120, "" },
            { "V_BandollierB_khk", "", 120, "" },
            { "V_BandollierB_cbr", "", 120, "" },
            { "V_BandollierB_rgr", "", 120, "" },
            { "V_BandollierB_blk", "", 120, "" },
            { "V_BandollierB_oli", "", 120, "" },
            { "V_Chestrig_khk", "", 120, "" },
            { "V_Chestrig_rgr", "", 120, "" },
            { "V_Chestrig_blk", "", 120, "" },
            { "V_Chestrig_oli", "", 120, "" },
            { "V_TacVestIR_blk", "", 120, "" },
            { "V_HarnessO_brn", "", 120, "" },
            { "V_HarnessOGL_brn", "", 120, "" },
            { "V_HarnessO_gry", "", 120, "" },
            { "V_HarnessOGL_gry", "", 120, "" },
            { "V_TacChestrig_grn_F", "", 120, "" },
            { "V_TacChestrig_oli_F", "", 120, "" },
            { "V_TacChestrig_cbr_F", "", 120, "" },
            { "V_HarnessO_ghex_F", "", 120, "" },
            { "V_HarnessOGL_ghex_F", "", 120, "" },
            { "V_BandollierB_ghex_F", "", 120, "" },
            { "V_Plain_medical_F", "", 120, "" },
            { "V_Plain_crystal_F", "", 120, "" },
            { "V_Safety_yellow_F", "", 120, "" },
            { "V_Safety_orange_F", "", 120, "" },
            { "V_Safety_blue_F", "", 120, "" },
            { "V_LegStrapBag_black_F", "", 120, "" },
            { "V_LegStrapBag_coyote_F", "", 120, "" },
            { "V_LegStrapBag_olive_F", "", 120, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", "", 120, "" },
            { "B_AssaultPack_khk", "", 120, "" },
            { "B_AssaultPack_dgtl", "", 120, "" },
            { "B_AssaultPack_rgr", "", 120, "" },
            { "B_AssaultPack_sgg", "", 120, "" },
            { "B_AssaultPack_blk", "", 120, "" },
            { "B_AssaultPack_cbr", "", 120, "" },
            { "B_AssaultPack_mcamo", "", 120, "" },
            { "B_AssaultPack_ocamo", "", 120, "" },
            { "B_Kitbag_rgr", "", 120, "" },
            { "B_Kitbag_mcamo", "", 120, "" },
            { "B_Kitbag_sgg", "", 120, "" },
            { "B_Kitbag_cbr", "", 120, "" },
            { "B_Kitbag_tan", "", 120, "" },
            { "B_TacticalPack_rgr", "", 120, "" },
            { "B_TacticalPack_mcamo", "", 120, "" },
            { "B_TacticalPack_ocamo", "", 120, "" },
            { "B_TacticalPack_blk", "", 120, "" },
            { "B_TacticalPack_oli", "", 120, "" },
            { "B_FieldPack_khk", "", 120, "" },
            { "B_FieldPack_ocamo", "", 120, "" },
            { "B_FieldPack_oucamo", "", 120, "" },
            { "B_FieldPack_cbr", "", 120, "" },
            { "B_FieldPack_blk", "", 120, "" },
            { "B_Carryall_ocamo", "", 120, "" },
            { "B_Carryall_oucamo", "", 120, "" },
            { "B_Carryall_mcamo", "", 120, "" },
            { "B_Carryall_khk", "", 120, "" },
            { "B_Carryall_cbr", "", 120, "" },
            { "B_Parachute", "", 120, "" },
            { "B_Carryall_oli", "", 120, "" },
            { "B_Respawn_TentDome_F", "", 120, "" },
            { "B_Respawn_TentA_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_blue_F", "", 120, "" },
            { "B_Respawn_Sleeping_bag_brown_F", "", 120, "" },
            { "B_Bergen_mcamo_F", "", 120, "" },
            { "B_Bergen_dgtl_F", "", 120, "" },
            { "B_Bergen_hex_F", "", 120, "" },
            { "B_Bergen_tna_F", "", 120, "" },
            { "B_AssaultPack_tna_F", "", 120, "" },
            { "B_Carryall_ghex_F", "", 120, "" },
            { "B_FieldPack_ghex_F", "", 120, "" },
            { "B_ViperHarness_blk_F", "", 120, "" },
            { "B_ViperHarness_ghex_F", "", 120, "" },
            { "B_ViperHarness_hex_F", "", 120, "" },
            { "B_ViperHarness_khk_F", "", 120, "" },
            { "B_ViperHarness_oli_F", "", 120, "" },
            { "B_ViperLightHarness_blk_F", "", 120, "" },
            { "B_ViperLightHarness_ghex_F", "", 120, "" },
            { "B_ViperLightHarness_hex_F", "", 120, "" },
            { "B_ViperLightHarness_khk_F", "", 120, "" },
            { "B_ViperLightHarness_oli_F", "", 120, "" },
            { "B_Patrol_Respawn_bag_F", "", 120, "" },
            { "B_Messenger_Coyote_F", "", 120, "" },
            { "B_Messenger_Olive_F", "", 120, "" },
            { "B_Messenger_Black_F", "", 120, "" },
            { "B_Messenger_Gray_F", "", 120, "" },
            { "B_Messenger_IDAP_F", "", 120, "" },
            { "B_LegStrapBag_black_F", "", 120, "" },
            { "B_LegStrapBag_coyote_F", "", 120, "" },
            { "B_LegStrapBag_olive_F", "", 120, "" },
            { "B_Carryall_green_F", "", 120, "" },
            { "B_Carryall_taiga_F", "", 120, "" },
            { "B_Carryall_wdl_F", "", 120, "" },
            { "B_Carryall_eaf_F", "", 120, "" },
            { "B_FieldPack_green_F", "", 120, "" },
            { "B_FieldPack_taiga_F", "", 120, "" },
            { "B_AssaultPack_wdl_F", "", 120, "" },
            { "B_AssaultPack_eaf_F", "", 120, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_uniforms, 25, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 350, "call life_coplevel >= 1" },
            { "U_B_CombatUniform_mcam_worn", "", 550, "call life_coplevel >= 2" },
            { "U_B_survival_uniform", "", 1250, "call life_coplevel >= 1" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Booniehat_mcamo", "", 120, "call life_coplevel >= 1" },
            { "H_HelmetB_plain_mcamo", "", 75, "call life_coplevel >= 1" },
            { "H_HelmetB_Enh_tna_F", "", 80, "call life_coplevel >= 1" }, //Apex DLC
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_MilCap_mcamo", "", 100, "call life_coplevel >= 2" },
            { "H_MilCap_gen_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_tna_F", "", 1200, "call life_coplevel >= 2" }, //Apex DLC
            { "H_MilCap_oucamo", "", 1200, "call life_coplevel >= 2" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Squares", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "" },
            { "G_Sport_Checkered", "", 20, "" },
            { "G_Sport_Blackyellow", "", 20, "" },
            { "G_Sport_BlackWhite", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Combat", "", 55, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "" },
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 1" },
            { "V_TacVest_gen_F", "", 1000, "call life_coplevel >= 1" }, //Apex DLC
            { "V_PlateCarrier2_rgr", "", 1500, "call life_coplevel >= 2" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_cbr", "", 500, "" },
            { "B_AssaultPack_cbr", "", 700, "" },
            { "B_Kitbag_cbr", "", 800, "" },
            { "B_Bergen_sgg", "", 2500, "" },
            { "B_Carryall_cbr", "", 3500, "" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_FieldPack_oli", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerilla1_1", "", 5000, "" },
            { "U_I_G_Story_Protagonist_F", "", 7500, "" },
            { "U_I_G_resistanceLeader_F", "", 11500, "" },
            { "U_IG_leader", "", 15340, "" },
            { "U_O_PilotCoveralls", "", 15610, "" },
            { "U_O_SpecopsUniform_ocamo", "", 17500, "" },
            { "U_O_GhillieSuit", "", 50000, "" },
            { "U_B_T_Soldier_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_1_F", "", 50000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_2_F", "", 51000, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_3_F", "", 50032, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_4_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Bandit_5_F", "", 50020, "" }, //Apex DLC
            { "U_I_C_Soldier_Camo_F", "", 52000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" },
            { "H_ShemagOpen_tan", "", 850, "" },
            { "H_Shemag_olive", "", 850, "" },
            { "H_HelmetO_ocamo", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_BandollierB_cbr", "", 4500, "" },
            { "V_HarnessO_brn", "", 7500, "" },
            { "V_TacVest_khk", "", 12500, "" },
            { "V_TacChestrig_grn_F", "", 17500, "" } //Apex DLC
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
