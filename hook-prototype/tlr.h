#pragma once

#define TLR_GLOBALDATA_OFFS 0x1DB04E0
#define TLR_DEBUGPRINTF_OFFS 0x6C0620
#define TLR_DEBUGPRINTTHING_OFFS 0x6E3700
#define TLR_DEBUGPRINT123_OFFS 0x7783E0
#define TLR_DUMPSHEET_OFFS 0x6DF920

struct tlr_GlobalData_t;
struct tlr_BaseData_t;
struct tlr_MasterTable_t;
struct tlr_TableDesc_t;
struct tlr_Table_t;

struct tlr_GlobalData_t {
	char gap0[60];

	tlr_BaseData_t * BaseData;
};

struct tlr_BaseData_t {
	char gap0[60];
	tlr_MasterTable_t * MasterTable;
};

struct tlr_TableDesc_t {
	int unk0;
	int unk1;
	int RecordLength;
	int RecordCount;
	int unk2;
	int unk3;
	int unk4;
	int unk5;
	int unk6;
	int unk7;
	int unk8;
	tlr_Table_t *Table;
	int unk9;
};

struct tlr_MasterTable_t {
	tlr_TableDesc_t TableData[320];
};

struct tlr_Table_t {

};

__declspec(align(4)) struct tlr_t_monster_kill_count_t
{
	signed short km_id;
	unsigned short km_kill_num;
};

__declspec(align(4)) struct tlr_t_party_common_t
{
	signed long km_money;
	signed long km_money_use_reserve;
	signed long km_money_battle_reward;
	signed long km_rush_enable_equip;
};

__declspec(align(4)) struct tlr_entry_monster_union_t
{
	unsigned short km_entry_id;
	unsigned char km_check_num;
	signed short km_union_type;
	unsigned char km_bgm_boss;
	signed char km_bgm_boss_num;
	signed short km_entry_position;
	unsigned short km_entry_interval_x;
	unsigned short km_entry_interval_y;
	unsigned char km_union_id;
	signed short km_namen;
	signed short km_union_jin;
	unsigned short km_jin_interval_x;
	unsigned short km_jin_interval_y;
	unsigned char km_unit_id;
	signed short km_e0_mons_label;
	unsigned char km_e0_lv_default;
	unsigned char km_e0_lv_max;
	unsigned char km_e0_start_hp;
	unsigned char km_e1_btl_rank;
	signed short km_e1_mons_label;
	unsigned char km_e1_lv_default;
	unsigned char km_e1_lv_max;
	unsigned char km_e1_start_hp;
	unsigned char km_e2_btl_rank;
	signed short km_e2_mons_label;
	unsigned char km_e2_lv_default;
	unsigned char km_e2_lv_max;
	unsigned char km_e2_start_hp;
	unsigned char km_over_lv_limit;
	signed char km_over_lv_add_min;
	signed char km_over_lv_add_max;
};

// This is very possibly incorrect until I can find the proper types and
// lengths from table metadata
struct tlr_t_unit_param_t
{
	unsigned char km_is_appear;
	signed char km_is_party_member;
	signed char km_is_party_leader;
	signed char km_is_loaded;
	unsigned short km_chara_pc_id;
	unsigned short km_btl_pc_id;
	signed char km_union_id;
	signed short km_class_id;
	signed char km_push_flag;
	signed char km_push_union_id;
	signed char km_push_unit_id;
	signed long km_hp_exp;
	unsigned char km_hp_level;
	signed long km_hp_base;
	signed short km_hp_now;
	signed long km_ap_exp;
	unsigned char km_ap_level;
	signed long km_ap_base;
	signed short km_ap_now;
	signed short km_ap_charge_base;
	signed short km_ap_charge_now;
	signed long km_str_exp;
	unsigned char km_str_level;
	signed short km_str_base;
	unsigned char km_str_now;
	signed long km_mgc_exp;
	unsigned char km_mgc_level;
	signed short km_mgc_base;
	unsigned char km_mgc_now;
	signed long km_spd_exp;
	unsigned char km_spd_level;
	signed short km_spd_base;
	unsigned char km_spd_now;
	signed long km_idn_exp;
	unsigned char km_idn_level;
	signed short km_idn_base;
	unsigned char km_idn_now;
	signed short km_attr_def_zan_base;
	unsigned char km_attr_def_zan_now;
	signed short km_attr_def_da_base;
	unsigned char km_attr_def_da_now;
	signed short km_attr_def_syo_base;
	unsigned char km_attr_def_syo_now;
	signed short km_attr_def_kan_base;
	unsigned char km_attr_def_kan_now;
	signed short km_type_def_fire_base;
	unsigned char km_type_def_fire_now;
	signed short km_type_def_thunder_base;
	unsigned char km_type_def_thunder_now;
	signed short km_type_def_ice_base;
	unsigned char km_type_def_ice_now;
	signed short km_type_def_acid_base;
	unsigned char km_type_def_acid_now;
	signed short km_type_def_poison_base;
	unsigned char km_type_def_poison_now;
	signed short km_add_impress[11];
	signed short km_tension_base;
	signed short km_tension_now;
	unsigned char km_weight_base;
	unsigned char km_weight_now;
	signed short km_eq_id_main;
	signed short km_eq_id_sub;
	signed long km_eq_accessory1;
	signed long km_eq_accessory2;
	signed long km_eq_accessory_special;
	unsigned char km_eq_style;
	unsigned char asd;
	//unsigned char km_eq_style_enable_oh_oh;
	//unsigned char km_eq_style_enable_oh_th;
	//unsigned char km_eq_style_enable_oh_ww;
	//unsigned char km_eq_style_enable_th_th;
	//unsigned char km_eq_style_enable_s_fw;
	//unsigned char km_eq_style_enable_s_oh;
	//unsigned char km_eq_style_enable_s_th;
	//unsigned char km_eq_style_enable_eqs_reserve;
	signed short km_hp_jin;
	signed short km_ap_jin;
	signed short km_ap_charge_jin;
	unsigned char km_str_jin;
	unsigned char km_mgc_jin;
	unsigned char km_spd_jin;
	unsigned char km_idn_jin;
	unsigned char km_ap_butsu_jin;
	unsigned char km_ap_mgc__jin;
	unsigned char km_dp_butsu_jin;
	unsigned char km_dp_mgc_jin;
	unsigned char km_attr_def_zan_jin;
	unsigned char km_attr_def_da_jin;
	unsigned char km_attr_def_syo_jin;
	unsigned char km_attr_def_kan_jin;
	unsigned char km_type_def_fire_jin;
	unsigned char km_type_def_thunder_jin;
	unsigned char km_type_def_ice_jin;
	unsigned char km_type_def_acid_jin;
	unsigned char km_type_def_poison_jin;
	signed short km_hp_eq_forecast;
	signed short km_ap_eq_forecast;
	signed short km_ap_charge_eq_forecast;
	unsigned char km_str_eq_forecast;
	unsigned char km_mgc_eq_forecast;
	unsigned char km_spd_eq_forecast;
	unsigned char km_idn_eq_forecast;
	signed short km_add_impress_eq_forecast[11];
	signed long km_money;
	signed long km_debit;
	signed long km_item1;
	signed char km_num1;
	signed long km_item2;
	signed char km_num2;
	signed long km_item3;
	signed char km_num3;
	signed long km_item4;
	signed char km_num4;
	signed long km_item5;
	signed char km_num5;
	signed long km_item6;
	signed char km_num6;
	signed long km_item7;
	signed char km_num7;
	signed long km_item8;
	signed char km_num8;
	signed char km_aim_main;
	signed long km_aim_main_eq_id;
	signed long km_aim_main_customise;
	signed char km_aim_sub;
	signed long km_aim_sub_eq_id;
	signed long km_aim_sub_customise;
	signed long km_need_money_main;
	unsigned char km_need_money_mode_main;
	signed long km_need_item_main_01;
	signed char km_need_num_main_01;
	signed long km_need_item_main_02;
	signed char km_need_num_main_02;
	signed long km_need_item_main_03;
	signed char km_need_num_main_03;
	signed long km_need_item_main_04;
	signed char km_need_num_main_04;
	signed long km_need_money_sub;
	unsigned char km_need_money_mode_sub;
	signed long km_need_item_sub_01;
	signed char km_need_num_sub_01;
	signed long km_need_item_sub_02;
	signed char km_need_num_sub_02;
	signed long km_need_item_sub_03;
	signed char km_need_num_sub_03;
	signed long km_need_item_sub_04;
	signed char km_need_num_sub_04;
	unsigned char km_reserve_main;
	unsigned char km_reserve_sub;
	unsigned char km_reserve_acce_01;
	unsigned char km_reserve_acce_02;
	unsigned char km_reserve_mons;
	unsigned char km_aim_type;
	unsigned long km_phy_atk_count;
	unsigned long km_mgc_atk_count;
	unsigned long km_previous_btl_count;
	unsigned char km_heikin_open;
	unsigned char km_phy_open;
	unsigned char km_mgc_open;
	signed short km_asgl_oh_oh;
	signed short km_asgl_oh_th;
	signed short km_asgl_oh_ww;
	signed short km_asgl_th_th;
	signed short km_asgl_s_fw;
	signed short km_asgl_s_oh;
	signed short km_asgl_s_th;
	signed short km_msgl_tostugeki;
	signed short km_msgl_sogeki;
	signed short km_msgl_kosaku;
	signed short km_msgl_kyujo;
	signed short km_msgl_senjutsu;
	signed short km_msgl_senryaku;
	signed short km_msgl_kinki;
	signed short km_isgl_yakuso;
	signed short km_isgl_potion;
	signed short km_isgl_nuri;
	signed short km_isgl_bakuyaku;
	signed short km_isgl_mahen;
	signed short km_isgl_special;
	signed short km_as_dir_gl_oh_oh;
	signed short km_as_dir_gl_oh_th;
	signed short km_as_dir_gl_oh_ww;
	signed short km_as_dir_gl_th_th;
	signed short km_as_dir_gl_s_fw;
	signed short km_as_dir_gl_s_oh;
	signed short km_as_dir_gl_s_th;
	signed short km_eqstyle_growth;
	signed short km_eqcategory_growth;
	signed short km_mgccategory_growth;
	signed short km_itemcategory_growth;
	signed short km_skill_usable;
	signed short km_new_skill;
	signed short km_magic_chance_flag;
	signed short km_magic_chance_get_skill;
	unsigned char km_is_employ_list_up;
	unsigned char km_is_party_in;
	unsigned char km_set_param_flag;
	unsigned char km_out_btl_rank;
	unsigned long km_need_battle_count;
	unsigned long km_need_play_time;
	signed short km_party_talk_work;
	unsigned char km_nakama_talk_bonus;
	signed short km_menu_sort_id;
};