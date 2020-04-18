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
            { "hgun_Rook40_F", "", 6500, 3250, "" },
            { "hgun_Pistol_01_F", "", 7000, 3500, "" }, //Apex DLC
            { "hgun_Pistol_heavy_02_F", "", 9850, 4925, "" },
            { "hgun_ACPC2_F", "", 11500, 5750, "" },
            { "SMG_05_F", "", 18000, 9000, "" }, //Apex DLC
            { "hgun_PDW2000_F", "", 20000, 10000, "" }
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
            { "acc_flashlight_pistol", "", 1000, 500, "" },//Pistol Flashlight
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Mohammed's Jihadi Shop";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 25000, 12500, "" },
            { "arifle_Katiba_F", "", 30000, 15000, "" },
            { "srifle_DMR_01_F", "", 50000, 25000, "" },
            { "arifle_SDAR_F", "", 20000, 10000, "" },
            { "arifle_AK12_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKS_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_AKM_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_ARX_blk_F", "", 22000, 11000, "" }, //Apex DLC
            { "arifle_SPAR_01_blk_F", "", 33000, 16500, "" }, //Apex DLC
            { "arifle_CTAR_blk_F", "", 30000, 15000, "" } //Apex DLC
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 300, 150, "" },
            { "30Rnd_762x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_545x39_Mag_F", "", 300, 150, "" }, //Apex DLC
            { "30Rnd_65x39_caseless_green", "", 275, 140, "" },
            { "10Rnd_762x54_Mag", "", 500, 250, "" },
            { "20Rnd_556x45_UW_mag", "", 125, 60, "" },
            { "30Rnd_580x42_Mag_F", "", 125, 60, "" } //Apex DLC
        };
        accs[] = {
            { "optic_ACO_grn", "", 3500, 1750, "" },
            { "optic_Holosight", "", 3600, 1800, "" },
            { "optic_Hamr", "", 7500, 3750, "" },
            { "acc_flashlight", "", 1000, 500, "" }
        };
    };

    class gang {
        name = "Hideout Armament";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 1500, 750, "" },
            { "hgun_Pistol_heavy_02_F", "", 2500, 1250, "" },
            { "hgun_ACPC2_F", "", 4500, 2250, "" },
            { "hgun_PDW2000_F", "", 9500, 4750, "" }
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
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
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
            { "30Rnd_45ACP_Mag_SMG_01", "", 2000, 1000, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 2000, 1000, "" },
            { "16Rnd_9x21_Mag", "", 2000, 1000, "" },
            { "50Rnd_570x28_SMG_03", "", 2000, 1000, "" },
            { "2Rnd_12Gauge_Pellets", "", 2000, 1000, "" },
            { "2Rnd_12Gauge_Slug", "", 2000, 1000, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 650, 325, "" },
            { "optic_MRD", "", 2750, 1375, "call life_coplevel >= 1" },
            { "acc_flashlight_pistol", "", 250, 125, "call life_coplevel >= 1" },//Pistol Flashlight
            { "acc_flashlight", "", 750, 375, "call life_coplevel >= 2" },
            { "optic_Holosight", "", 1200, 600, "call life_coplevel >= 2" },
            { "optic_Arco", "", 2500, 1250, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 2750, 1375, "call life_coplevel >= 2" }
        };
    };


    //Ctrg Shops
    class ctrg_basic {
        name = "ctrg";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
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
            { "sgun_HunterShotgun_01_sawedoff_F", "", 2000, 1000, "" },
            { "arifle_MX_F", "", 2000, 1000, "" },
            { "arifle_MXC_Black_F", "", 2000, 1000, "" },
            { "arifle_MX_Black_F", "", 2000, 1000, "" },
            { "arifle_ARX_blk_F", "", 2000, 1000, "" },
            { "arifle_SPAR_01_blk_F", "", 2000, 1000, "" },
            { "arifle_MX_SW_F", "", 2000, 1000, "" },
            { "arifle_MX_SW_Black_F", "", 2000, 1000, "" },
            { "arifle_SPAR_02_blk_F", "", 2000, 1000, "" },
            { "srifle_LRR_F", "", 2000, 1000, "" },
            { "hgun_ACPC2_F", "", 2000, 1000, "" },
            { "hgun_P07_F", "", 2000, 1000, "" },
            { "hgun_Pistol_heavy_01_F", "", 2000, 1000, "" },
            { "hgun_Pistol_heavy_02_F", "", 2000, 1000, "" },
            { "hgun_Rook40_F", "", 2000, 1000, "" },
            { "hgun_Pistol_01_F", "", 2000, 1000, "" },
            { "hgun_Pistol_heavy_01_green_F", "", 2000, 1000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 125, 60, "" },
            { "30Rnd_45ACP_Mag_SMG_01", $STR_W_mags_TaserRifle, 125, 60, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 2000, 1000, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 2000, 1000, "" },
            { "16Rnd_9x21_Mag", "", 2000, 1000, "" },
            { "50Rnd_570x28_SMG_03", "", 2000, 1000, "" },
            { "2Rnd_12Gauge_Pellets", "", 2000, 1000, "" },
            { "2Rnd_12Gauge_Slug", "", 2000, 1000, "" },
            { "100Rnd_65x39_caseless_mag", "", 2000, 1000, "" },
            { "100Rnd_65x39_caseless_black_mag", "", 2000, 1000, "" },
            { "150Rnd_556x45_Drum_Mag_F", "", 2000, 1000, "" },
            { "7Rnd_408_Mag", "", 2000, 1000, "" },
            { "9Rnd_45ACP_Mag", "", 2000, 1000, "" },
            { "11Rnd_45ACP_Mag", "", 2000, 1000, "" },
            { "6Rnd_45ACP_Cylinder", "", 2000, 1000, "" },
            { "10Rnd_9x21_Mag", "", 2000, 1000, "" }
        };
        accs[] = {
            { "optic_Arco", "", 2000, 1000, "" },
            { "optic_Hamr", "", 2000, 1000, "" },
            { "optic_Aco", "", 2000, 1000, "" },
            { "optic_ACO_grn", "", 2000, 1000, "" },
            { "optic_Aco_smg", "", 2000, 1000, "" },
            { "optic_ACO_grn_smg", "", 2000, 1000, "" },
            { "optic_Holosight", "", 2000, 1000, "" },
            { "optic_Holosight_smg", "", 2000, 1000, "" },
            { "optic_SOS", "", 2000, 1000, "" },
            { "optic_MRCO", "", 2000, 1000, "" },
            { "optic_DMS", "", 2000, 1000, "" },
            { "optic_LRPS", "", 2000, 1000, "" },
            { "optic_AMS", "", 2000, 1000, "" },
            { "optic_AMS_khk", "", 2000, 1000, "" },
            { "optic_AMS_snd", "", 2000, 1000, "" },
            { "optic_KHS_blk", "", 2000, 1000, "" },
            { "optic_KHS_old", "", 2000, 1000, "" },
            { "optic_Arco_blk_F", "", 2000, 1000, "" },
            { "optic_Arco_ghex_F", "", 2000, 1000, "" },
            { "optic_DMS_ghex_F", "", 2000, 1000, "" },
            { "optic_Hamr_khk_F", "", 2000, 1000, "" },
            { "optic_ERCO_blk_F", "", 2000, 1000, "" },
            { "optic_ERCO_khk_F", "", 2000, 1000, "" },
            { "optic_ERCO_snd_F", "", 2000, 1000, "" },
            { "optic_Holosight_blk_F", "", 2000, 1000, "" },
            { "optic_Holosight_khk_F", "", 2000, 1000, "" },
            { "optic_Holosight_smg_blk_F", "", 2000, 1000, "" },
            { "optic_Holosight_smg_khk_F", "", 2000, 1000, "" },
            { "optic_Holosight_lush_F", "", 2000, 1000, "" },
            { "optic_Holosight_arid_F", "", 2000, 1000, "" },
            { "optic_Arco_lush_F", "", 2000, 1000, "" },
            { "optic_Arco_arid_F", "", 2000, 1000, "" },
            { "optic_DMS_weathered_F", "", 2000, 1000, "" },
            { "optic_DMS_weathered_Kir_F", "", 2000, 1000, "" },
            { "muzzle_snds_L", "", 2000, 1000, "" },
            { "muzzle_snds_M", "", 2000, 1000, "" },
            { "muzzle_snds_65_TI_blk_F", "", 2000, 1000, "" },
            { "muzzle_snds_acp", "", 2000, 1000, "" },
            { "acc_flashlight", "", 2000, 1000, "" },
            { "acc_flashlight_smg_01", "", 2000, 1000, "" },
            { "acc_flashlight_pistol", "", 2000, 1000, "" },
            { "acc_pointer_IR", "", 2000, 1000, "" },
            { "bipod_01_F_snd", "", 2000, 1000, "" },
            { "bipod_01_F_blk", "", 2000, 1000, "" },
            { "bipod_01_F_mtp", "", 2000, 1000, "" },
            { "bipod_01_F_khk", "", 2000, 1000, "" },
            { "ChemicalDetector_01_olive_F", "", 2000, 1000, "" },
            { "ChemicalDetector_01_black_F", "", 2000, 1000, "" },
            { "ChemicalDetector_01_tan_F", "", 2000, 1000, "" }
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
