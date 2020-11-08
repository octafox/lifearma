/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Billy Joe's Firearms";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 25000, 7000, "" },
            { "hgun_Pistol_01_F", "", 30000, 8000, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 30000, 8000, "" },
            { "hgun_ACPC2_F", "", 35000, 5750, "" },
            { "SMG_05_F", "", 60000, 15000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 65000, 17000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 250, 125, "" }, //Apex DLC
            { "10Rnd_9x21_Mag", "", 250, 125, "" } //Apex DLC
        };
        accs[] = {
          
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };
    
    class illegalguns_guns {
        name = "STR_License_IllegalGuns";
        side = "civ";
        conditions = "license_civ_illegalguns";
        items[] = {
            { "SMG_01_F", "Vektor", 0, 0, "" },
            { "arifle_SDAR_F", "SDAR", 0, 0, "" },
            { "arifle_TRG20_F", "TRG", 0, 0, "" },
            { "arifle_AKS_F", "AKs", 0, 0, "" },
            { "SMG_02_F", "Sting", 0, 0, "" },
            { "arifle_Mk20_plain_F", "MK20", 0, 0, "" }
        };
        mags[] = {
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },
            { "30Rnd_545x39_Mag_F", "", 0, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag", "", 0, 0, "" }
        };
        accs[] = {
            { "", "", 0, 0, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1000, 1000, "" },
            { "hgun_PDW2000_F", "", 800, 500, "" },
            { "SMG_01_F", "", 800, 500, "" },
            { "SMG_02_F", "", 800, 500, "" },
            { "SMG_05_F", "", 800, 500, "" },
            { "arifle_SDAR_F", "", 800, 500, "" },
            { "sgun_HunterShotgun_01_F", "", 800, 500, "" },
            { "sgun_HunterShotgun_01_sawedoff_F", "", 800, 500, "" },
            { "hgun_ACPC2_F", "", 800, 500, "" },
            { "hgun_P07_F", "", 800, 500, "" },
            { "hgun_Pistol_heavy_02_F", "", 800, 500, "" },
            { "hgun_Rook40_F", "", 800, 500, "" },
            { "hgun_Pistol_01_F", "", 800, 500, "" },
            { "arifle_Katiba_F", "", 800, 500, "" },
            { "arifle_Mk20_F", "", 800, 500, "" },
            { "arifle_TRG21_F", "", 800, 500, "" },
            { "arifle_AKS_F", "", 800, 500, "" },
            { "arifle_CTAR_blk_F", "", 800, 500, "" }
        };
        mags[] = {
            { "30Rnd_45ACP_Mag_SMG_01", "", 800, 500, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 800, 500, "" },
            { "16Rnd_9x21_Mag", "", 800, 500, "" },
            { "2Rnd_12Gauge_Pellets", "", 800, 500, "" },
            { "2Rnd_12Gauge_Slug", "", 800, 500, "" },
            { "9Rnd_45ACP_Mag", "", 800, 500, "" },
            { "11Rnd_45ACP_Mag", "", 800, 500, "" },
            { "6Rnd_45ACP_Cylinder", "", 800, 500, "" },
            { "10Rnd_9x21_Mag", "", 800, 500, "" },
            { "30Rnd_65x39_caseless_green", "", 800, 500, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 800, 500, "" },
            { "30Rnd_545x39_Mag_Green_F", "", 800, 500, "" },
            { "30Rnd_580x42_Mag_F", "", 800, 500, "" },
            { "5Rnd_127x108_Mag", "", 800, 500, "" }
        };
        accs[] = {
            { "optic_Arco", "", 350, 175, "" },
            { "optic_Hamr", "", 350, 175, "" },
            { "optic_Aco", "", 350, 175, "" },
            { "optic_ACO_grn", "", 350, 175, "" },
            { "optic_Aco_smg", "", 350, 175, "" },
            { "optic_ACO_grn_smg", "", 350, 175, "" },
            { "optic_Holosight", "", 350, 175, "" },
            { "optic_Holosight_smg", "", 350, 175, "" },
            { "optic_SOS", "", 350, 175, "" },
            { "optic_MRCO", "", 350, 175, "" },
            { "optic_DMS", "", 350, 175, "" },
            { "optic_LRPS", "", 350, 175, "" },
            { "optic_AMS", "", 350, 175, "" },
            { "optic_AMS_khk", "", 350, 175, "" },
            { "optic_AMS_snd", "", 350, 175, "" },
            { "optic_KHS_blk", "", 350, 175, "" },
            { "optic_KHS_old", "", 350, 175, "" },
            { "optic_Arco_blk_F", "", 350, 175, "" },
            { "optic_Arco_ghex_F", "", 350, 175, "" },
            { "optic_DMS_ghex_F", "", 350, 175, "" },
            { "optic_Hamr_khk_F", "", 350, 175, "" },
            { "optic_ERCO_blk_F", "", 350, 175, "" },
            { "optic_ERCO_khk_F", "", 350, 175, "" },
            { "optic_ERCO_snd_F", "", 350, 175, "" },
            { "optic_Holosight_blk_F", "", 350, 175, "" },
            { "optic_Holosight_khk_F", "", 350, 175, "" },
            { "optic_Holosight_smg_blk_F", "", 350, 175, "" },
            { "optic_Holosight_smg_khk_F", "", 350, 175, "" },
            { "optic_Holosight_lush_F", "", 350, 175, "" },
            { "optic_Holosight_arid_F", "", 350, 175, "" },
            { "optic_Arco_lush_F", "", 350, 175, "" },
            { "optic_Arco_arid_F", "", 350, 175, "" },
            { "optic_DMS_weathered_F", "", 350, 175, "" },
            { "optic_DMS_weathered_Kir_F", "", 350, 175, "" },
            { "muzzle_snds_L", "", 350, 175, "" },
            { "muzzle_snds_M", "", 350, 175, "" },
            { "muzzle_snds_acp", "", 350, 175, "" },
            { "muzzle_snds_65_TI_blk_F", "", 350, 175, "" },
            { "acc_flashlight", "", 350, 175, "" },
            { "acc_flashlight_smg_01", "", 350, 175, "" },
            { "acc_flashlight_pistol", "", 350, 175, "" },
            { "acc_pointer_IR", "", 350, 175, "" },
            { "ChemicalDetector_01_olive_F", "", 350, 175, "" },
            { "ChemicalDetector_01_black_F", "", 350, 175, "" },
            { "ChemicalDetector_01_tan_F", "", 350, 175, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 15000, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 20000, 1250, "" },
            { "hgun_ACPC2_F", "", 25000, 2250, "" },
            { "hgun_PDW2000_F", "", 45000, 4750, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "6Rnd_45ACP_Cylinder", "", 150, 75, "" },
            { "9Rnd_45ACP_Mag", "", 200, 100, "" },
            { "30Rnd_9x21_Mag", "", 250, 125, "" }
        };
        accs[] = {
            { "acc_flashlight_pistol", "", 500, 250, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Altis Cop Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 100, 75, "" },
            { "NVGoggles", "", 1000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "hgun_PDW2000_F", "", 2000, 1000, "" },
            { "SMG_01_F", "", 2000, 1000, "" },
            { "SMG_02_F", "", 2000, 1000, "" },
            { "SMG_05_F", "", 2000, 1000, "" },
            { "arifle_SDAR_F", "", 2000, 1000, "" },
            { "SMG_03C_TR_black", "", 2000, 1000, "" },
            { "SMG_03_black", "", 2000, 1000, "" },
            { "SMG_03C_black", "", 2000, 1000, "" },
            { "sgun_HunterShotgun_01_F", "", 2000, 1000, "" },
            { "sgun_HunterShotgun_01_sawedoff_F", "", 2000, 1000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "30Rnd_45ACP_Mag_SMG_01", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 200, 100, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 200, 100, "" },
            { "16Rnd_9x21_Mag", "", 200, 100, "" },
            { "50Rnd_570x28_SMG_03", "", 200, 100, "" },
            { "2Rnd_12Gauge_Pellets", "", 200, 100, "" },
            { "2Rnd_12Gauge_Slug", "", 200, 100, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 275, 137, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 120, 60, "call life_coplevel >= 2" },
            { "optic_Arco", "", 250, 125, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 275, 137, "call life_coplevel >= 2" }
        };
    };


    //Ctrg Shops
    class ctrg_basic {
        name = "ctrg";
        side = "cop";
        conditions = "call life_coplevel >= 5";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1000, 1000, "" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "" },
            { "hgun_PDW2000_F", "", 0, 0, "" },
            { "SMG_01_F", "", 0, 0, "" },
            { "SMG_02_F", "", 0, 0, "" },
            { "SMG_05_F", "", 0, 0, "" },
            { "arifle_SDAR_F", "", 0, 0, "" },
            { "SMG_03C_TR_black", "", 0, 0, "" },
            { "SMG_03_black", "", 0, 0, "" },
            { "SMG_03C_black", "", 0, 0, "" },
            { "sgun_HunterShotgun_01_F", "", 0, 0, "" },
            { "sgun_HunterShotgun_01_sawedoff_F", "", 0, 0, "" },
            { "arifle_MX_F", "", 0, 0, "" },
            { "arifle_MXC_Black_F", "", 0, 0, "" },
            { "arifle_MX_Black_F", "", 0, 0, "" },
            { "arifle_ARX_blk_F", "", 0, 0, "" },
            { "arifle_SPAR_01_blk_F", "", 0, 0, "" },
            { "arifle_MX_SW_F", "", 0, 0, "" },
            { "arifle_MX_SW_Black_F", "", 0, 0, "" },
            { "arifle_SPAR_02_blk_F", "", 0, 0, "" },   
            { "hgun_ACPC2_F", "", 0, 0, "" },
            { "hgun_P07_F", "", 0, 0, "" },
            { "hgun_Pistol_heavy_01_F", "", 0, 0, "" },
            { "hgun_Pistol_heavy_02_F", "", 0, 0, "" },
            { "hgun_Rook40_F", "", 0, 0, "" },
            { "hgun_Pistol_01_F", "", 0, 0, "" },
            { "hgun_Pistol_heavy_01_green_F", "", 0, 0, "" }
        };
        mags[] = {
            { "30Rnd_65x39_caseless_green_mag_Tracer", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Yellow", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Green", "", 0, 0, "" },
            { "100Rnd_65x39_caseless_black_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_Tracer_Red", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_khaki_mag", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_green", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_green", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_green", "", 0, 0, "" },
            { "100Rnd_65x39_caseless_mag", "", 0, 0, "" },
            { "150Rnd_556x45_Drum_Mag_F", "", 0, 0, "" },
            { "30Rnd_65x39_caseless_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_red", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag_red", "", 0, 0, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 0, 0, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 0, 0, "" },
            { "2Rnd_12Gauge_Pellets", "", 0, 0, "" },
            { "20Rnd_556x45_UW_mag", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },
            { "50Rnd_570x28_SMG_03", "", 0, 0, "" },
            { "30Rnd_556x45_Stanag", "", 0, 0, "" },
            { "6Rnd_45ACP_Cylinder", "", 0, 0, "" },
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "2Rnd_12Gauge_Slug", "", 0, 0, "" },
            { "10Rnd_50BW_Mag_F", "", 0, 0, "" },
            { "11Rnd_45ACP_Mag", "", 0, 0, "" },
            { "16Rnd_9x21_Mag", "", 0, 0, "" },
            { "9Rnd_45ACP_Mag", "", 0, 0, "" },
            { "10Rnd_9x21_Mag", "", 0, 0, "" },
            { "7Rnd_408_Mag", "", 0, 0, "" }
        };
        accs[] = {
            { "optic_Arco", "", 0, 0, "" },
            { "optic_Hamr", "", 0, 0, "" },
            { "optic_Aco", "", 0, 0, "" },
            { "optic_ACO_grn", "", 0, 0, "" },
            { "optic_Aco_smg", "", 0, 0, "" },
            { "optic_ACO_grn_smg", "", 0, 0, "" },
            { "optic_Holosight", "", 0, 0, "" },
            { "optic_Holosight_smg", "", 0, 0, "" },
            { "optic_SOS", "", 0, 0, "" },
            { "optic_MRCO", "", 0, 0, "" },
            { "optic_DMS", "", 0, 0, "" },
            { "optic_LRPS", "", 0, 0, "" },
            { "optic_AMS", "", 0, 0, "" },
            { "optic_AMS_khk", "", 0, 0, "" },
            { "optic_AMS_snd", "", 0, 0, "" },
            { "optic_KHS_blk", "", 0, 0, "" },
            { "optic_KHS_old", "", 0, 0, "" },
            { "optic_Arco_blk_F", "", 0, 0, "" },
            { "optic_Arco_ghex_F", "", 0, 0, "" },
            { "optic_DMS_ghex_F", "", 0, 0, "" },
            { "optic_Hamr_khk_F", "", 0, 0, "" },
            { "optic_ERCO_blk_F", "", 0, 0, "" },
            { "optic_ERCO_khk_F", "", 0, 0, "" },
            { "optic_ERCO_snd_F", "", 0, 0, "" },
            { "optic_Holosight_blk_F", "", 0, 0, "" },
            { "optic_Holosight_khk_F", "", 0, 0, "" },
            { "optic_Holosight_smg_blk_F", "", 0, 0, "" },
            { "optic_Holosight_smg_khk_F", "", 0, 0, "" },
            { "optic_Holosight_lush_F", "", 0, 0, "" },
            { "optic_Holosight_arid_F", "", 0, 0, "" },
            { "optic_Arco_lush_F", "", 0, 0, "" },
            { "optic_Arco_arid_F", "", 0, 0, "" },
            { "optic_DMS_weathered_F", "", 0, 0, "" },
            { "optic_DMS_weathered_Kir_F", "", 0, 0, "" },

            { "muzzle_snds_L", "", 0, 0, "" },
            { "muzzle_snds_M", "", 0, 0, "" },
            { "muzzle_snds_acp", "", 0, 0, "" },
            { "muzzle_snds_65_TI_blk_F", "", 0, 0, "" },

            { "acc_flashlight", "", 0, 0, "" },
            { "acc_flashlight_smg_01", "", 0, 0, "" },
            { "acc_flashlight_pistol", "", 0, 0, "" },
            { "acc_pointer_IR", "", 0, 0, "" },


            { "bipod_01_F_snd", "", 0, 0, "" },
            { "bipod_01_F_blk", "", 0, 0, "" },
            { "bipod_01_F_mtp", "", 0, 0, "" },
            { "bipod_01_F_khk", "", 0, 0, "" },


            { "ChemicalDetector_01_olive_F", "", 0, 0, "" },
            { "ChemicalDetector_01_black_F", "", 0, 0, "" },
            { "ChemicalDetector_01_tan_F", "", 0, 0, "" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
