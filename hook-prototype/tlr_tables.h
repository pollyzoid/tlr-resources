#pragma once

enum TLR_TABLE
{
	TLR_MSG_ACTIVE_HELP = 0,
	TLR_MSG_BATTLE_ACTION = 1,
	TLR_MSG_BATTLE_ACTION_CATEGORY = 2,
	TLR_MSG_BATTLE_COMMAND = 3,
	TLR_MSG_BATTLE_JIN = 4,
	TLR_MSG_BATTLE_SEQMES = 5,
	TLR_MSG_BATTLE_SPECIALS_IMPRESS = 6,
	TLR_MSG_BATTLE_STATUS = 7,
	TLR_MSG_BATTLE_TALK = 8,
	TLR_MSG_CHARA_MESSAGE = 9,
	TLR_MSG_CITYZONE = 10,
	TLR_MSG_EQUIPMENT = 11,
	TLR_MSG_GUILD_ADVENTURE = 12,
	TLR_MSG_ITEM_DAIJI = 13,
	TLR_MSG_ITEM_DOUGU = 14,
	TLR_MSG_ITEM_MATERIAL = 15,
	TLR_MSG_ITEM_MONS = 16,
	TLR_MSG_LOCATION = 17,
	TLR_MSG_MASCOT_SKILL = 18,
	TLR_MSG_PARTY_MESSAGE = 19,
	TLR_MSG_PARTY_TALK = 20,
	TLR_MSG_SHOP_TALK_HELP = 21,
	TLR_MSG_SYSTEM_DIALOG = 22,
	TLR_MSG_SYSTEM_MESSAGE = 23,
	TLR_MSG_UNIT_GROWTH = 24,
	TLR_MSG_MENU_TIPS_TITLE = 25,
	TLR_WORD_BATTLE_ACT_CATEGORY_EQ = 26,
	TLR_WORD_BATTLE_ACT_CATEGORY_MAIN = 27,
	TLR_WORD_BATTLE_ACT_CATEGORY_SUB = 28,
	TLR_WORD_BATTLE_ACTION = 29,
	TLR_WORD_BATTLE_COMMAND = 30,
	TLR_WORD_BATTLE_JIN = 31,
	TLR_WORD_BATTLE_SPECIALS_ATTRIBUTE = 32,
	TLR_WORD_BATTLE_SPECIALS_IMPRESS = 33,
	TLR_WORD_BATTLE_STATUS = 34,
	TLR_WORD_BATTLE_UNION = 35,
	TLR_WORD_CHARACTER = 36,
	TLR_WORD_EQUIPMENT = 37,
	TLR_WORD_EQUIPMENT_CATEGORY = 38,
	TLR_WORD_EQUIPMENT_EQSTYLE = 39,
	TLR_WORD_EQUIPMENT_SIZE = 40,
	TLR_WORD_EQUIPMENT_TYPE = 41,
	TLR_WORD_GUILD_ADVENTURE = 42,
	TLR_WORD_ITEM_CATEGORY = 43,
	TLR_WORD_ITEM_DAIJI = 44,
	TLR_WORD_ITEM_DOUGU = 45,
	TLR_WORD_ITEM_MATERIAL = 46,
	TLR_WORD_ITEM_MONS = 47,
	TLR_WORD_LOCATION = 48,
	TLR_WORD_MAP = 49,
	TLR_WORD_MASCOT_SKILL = 50,
	TLR_WORD_MENU_CAPTION = 51,
	TLR_WORD_MENU_COMMAND = 52,
	TLR_WORD_MENU_MISC = 53,
	TLR_WORD_PHRASE = 54,
	TLR_WORD_QUEST_TITLE = 55,
	TLR_WORD_SAISYU_CATEGORY = 56,
	TLR_WORD_STAFF_NAME = 57,
	TLR_WORD_UNION_SUFFIX = 58,
	TLR_WORD_UNIT_BREED = 59,
	TLR_WORD_UNIT_CLASS = 60,
	TLR_WORD_UNIT_EMBLEM = 61,
	TLR_WORD_UNIT_UNIQUE_PARAMETER = 62,
	TLR_WORD_MENU_TIPS_TITLE = 63,
	TLR_BATTLE_LOCKUP = 64,
	TLR_BATTLE_SITUATION = 65,
	TLR_BATTLE_ACT_CATEGORY_EQ = 66,
	TLR_BATTLE_ACT_CATEGORY_MAIN = 67,
	TLR_BATTLE_ACT_CATEGORY_SUB = 68,
	TLR_BATTLE_ACT_SKILL_CATEGORY = 69,
	TLR_BATTLE_ACTION_ARTS_DIRECTION = 70,
	TLR_BATTLE_ACTION_ATTACH_EFFECT = 71,
	TLR_BATTLE_ACTION_DATA = 72,
	TLR_BATTLE_ACTION_GROWTH = 73,
	TLR_BATTLE_ACTION_RANK = 74,
	TLR_BATTLE_ACTION_TYPE = 75,
	TLR_BATTLE_COMMAND = 76,
	TLR_BATTLE_COMMAND_ATTR = 77,
	TLR_BATTLE_JIN_DATA = 78,
	TLR_BATTLE_JIN_FORMATION = 79,
	TLR_BATTLE_MESSAGE_CTRL = 80,
	TLR_BATTLE_MESSAGE_TABLE = 81,
	TLR_BATTLE_MESSAGE_TYPE = 82,
	TLR_BATTLE_SPECIALS_ATTRIBUTE = 83,
	TLR_BATTLE_SPECIALS_IMPRESS = 84,
	TLR_BATTLE_STATUS_UNION = 85,
	TLR_BATTLE_STATUS_UNION_CHK = 86,
	TLR_BATTLE_STATUS_UNIT = 87,
	TLR_BATTLE_STATUS_UNIT_CHK = 88,
	TLR_BATTLE_TALK_TABLE = 89,
	TLR_DEFINE_BATTLE_CAMERA = 90,
	TLR_DEFINE_BATTLE_CLOSURE = 91,
	TLR_DEFINE_BATTLE_ENCOUNTER = 92,
	TLR_DEFINE_BATTLE_LOCATION = 93,
	TLR_DEFINE_BATTLE_PARTY_MAX = 94,
	TLR_DEFINE_BATTLE_SYS_AIM_EQ = 95,
	TLR_DEFINE_BATTLE_SYS_DROP_MAX = 96,
	TLR_DEFINE_BATTLE_SYS_GR_MESSAGE = 97,
	TLR_DEFINE_BATTLE_SYS_IDODDS = 98,
	TLR_DEFINE_BATTLE_SYS_LVDIF_OFFSET = 99,
	TLR_DEFINE_BATTLE_SYS_MCODDS = 100,
	TLR_DEFINE_BATTLE_SYS_MONS_CTYPE = 101,
	TLR_DEFINE_BATTLE_SYS_UNITPRM_EXP = 102,
	TLR_DEFINE_BATTLE_VOICE_CTRL = 103,
	TLR_DEFINE_BATTLE_VOICE_DATA = 104,
	TLR_DEFINE_BATTLE_VOICE_LOCK_COUNT = 105,
	TLR_DEFINE_CRITICAL_TRIGGER_ACT = 106,
	TLR_DEFINE_CRITICAL_TRIGGER_BUTTON = 107,
	TLR_DEFINE_CRITICAL_TRIGGER_EQ = 108,
	TLR_DEFINE_CRITICAL_TRIGGER_RESULT = 109,
	TLR_DEFINE_DEMISE = 110,
	TLR_DEFINE_EFFECT_NAME = 111,
	TLR_DEFINE_EQBIND_EFFECT = 112,
	TLR_DEFINE_EQSLOT_KIND = 113,
	TLR_DEFINE_GAMEPAD_ASSIGN = 114,
	TLR_DEFINE_SEQUENCE_COMMAND = 115,
	TLR_DEFINE_SOUND_NAME = 116,
	TLR_DEFINE_UNION_TYPE = 117,
	TLR_ENTRY_BATTLE_END_DATA = 118,
	TLR_ENTRY_BATTLE_WIN_CONDITION = 119,
	TLR_ENTRY_EXTRA_BATTLE_DATA = 120,
	TLR_ENTRY_EXTRA_BATTLE_POSITION = 121,
	TLR_ENTRY_INTERVAL = 122,
	TLR_ENTRY_MONSTER_UNION = 123,
	TLR_ENTRY_PARTY_SET = 124,
	TLR_ENTRY_POSITION = 125,
	TLR_EQUIPMENT_CATEGORY_SIZE = 126,
	TLR_EQUIPMENT_DATA = 127,
	TLR_EQUIPMENT_EQSTYLE = 128,
	TLR_EQUIPMENT_LEVEL = 129,
	TLR_EQUIPMENT_MODEL = 130,
	TLR_EQUIPMENT_TYPE = 131,
	TLR_EVENT_MORALS = 132,
	TLR_EVENT_PRICE = 133,
	TLR_EVENT_REWARD = 134,
	TLR_ITEM_CATEGORY = 135,
	TLR_ITEM_DAIJI = 136,
	TLR_ITEM_DOUGU = 137,
	TLR_ITEM_MATERIAL = 138,
	TLR_ITEM_MONS = 139,
	TLR_LOGIC_ACTION_ATTR = 140,
	TLR_LOGIC_TARGET_ACTIONPKG = 141,
	TLR_LOGIC_TARGET_AIMING = 142,
	TLR_LOGIC_TARGET_OBJECT = 143,
	TLR_LOGIC_TARGET_UNION = 144,
	TLR_LOGIC_TARGET_UNIT = 145,
	TLR_MAP_SAISYU = 146,
	TLR_MAP_SAISYU_CATEGORY = 147,
	TLR_MAP_TREASURE = 148,
	TLR_MAP_ZAIHO = 149,
	TLR_MASCOT_LEVEL = 150,
	TLR_MASCOT_SKILL = 151,
	TLR_OUTLET_CUSTOMISE_CREATE = 152,
	TLR_OUTLET_CUSTOMISE_IMPROVING = 153,
	TLR_OUTLET_GUILD_ADVENTURE = 154,
	TLR_OUTLET_GUILD_ADVENTURE_REWARD = 155,
	TLR_OUTLET_GUILD_UNIT = 156,
	TLR_OUTLET_SHOP_ASC = 157,
	TLR_OUTLET_SHOP_BAR = 158,
	TLR_OUTLET_SHOP_CPC = 159,
	TLR_OUTLET_SHOP_CTRL_CUSTORMIZE = 160,
	TLR_OUTLET_SHOP_CTRL_GENERAL = 161,
	TLR_OUTLET_SHOP_CTRL_GUILD_SU = 162,
	TLR_OUTLET_SHOP_ERC = 163,
	TLR_OUTLET_SHOP_ETC = 164,
	TLR_OUTLET_SHOP_GOL = 165,
	TLR_OUTLET_SHOP_MEL = 166,
	TLR_OUTLET_SHOP_NGP = 167,
	TLR_OUTLET_SHOP_RIO = 168,
	TLR_OUTLET_SHOP_TRADE = 169,
	TLR_OUTLET_SHOP_UNB = 170,
	TLR_OUTLET_SHOP_VAL = 171,
	TLR_T_ACCESSORY_GET_LOG = 172,
	TLR_T_BATTLE_ACTION_TURN = 173,
	TLR_T_BATTLE_BALANCER = 174,
	TLR_T_BATTLE_BASE = 175,
	TLR_T_BATTLE_BGM_CONFIG = 176,
	TLR_T_BATTLE_COMMAND_CANDIDATE_LIST = 177,
	TLR_T_BATTLE_IDLE_LIST = 178,
	TLR_T_BATTLE_LOCATION_COUNT = 179,
	TLR_T_BATTLE_LOCKUP_INFO = 180,
	TLR_T_BATTLE_LOGIC_NUMBER_CALC = 181,
	TLR_T_BATTLE_MAINWORK = 182,
	TLR_T_BATTLE_MENU_ACTION_LIST = 183,
	TLR_T_BATTLE_MENU_COMMAND_LIST = 184,
	TLR_T_BATTLE_MENU_COMMAND_TEMP = 185,
	TLR_T_BATTLE_MENU_CT_INFO = 186,
	TLR_T_BATTLE_MESSAGE_WORK = 187,
	TLR_T_BATTLE_OBSERVER = 188,
	TLR_T_BATTLE_REMAINS_PURPOSE = 189,
	TLR_T_BATTLE_REMAINS_UNION = 190,
	TLR_T_BATTLE_REMAINS_UNIT = 191,
	TLR_T_BATTLE_REWARD = 192,
	TLR_T_BATTLE_REWARD_RESERVE = 193,
	TLR_T_BATTLE_SEQUENCE_LIST = 194,
	TLR_T_BTLCMD_ATTACK = 195,
	TLR_T_BTLCMD_LOCKUP = 196,
	TLR_T_BTLCMD_LOCKUP_SCENE = 197,
	TLR_T_BTLCMD_STYLECHANGE = 198,
	TLR_T_CAST_COMMAND_LIST = 199,
	TLR_T_CAST_IDLE_BTLCMD = 200,
	TLR_T_CAST_UNIT_ACTION_ARTS = 201,
	TLR_T_CAST_UNIT_ACTION_ITEM = 202,
	TLR_T_CAST_UNIT_ACTION_MAGIC = 203,
	TLR_T_CAST_UNIT_GROWTH_AIM_WEAPON = 204,
	TLR_T_CAST_UNIT_SKILL_ARTS = 205,
	TLR_T_CAST_UNIT_SKILL_ARTS_DIR = 206,
	TLR_T_CAST_UNIT_SKILL_EQCATEGORY = 207,
	TLR_T_CAST_UNIT_SKILL_EQSTYLE = 208,
	TLR_T_CAST_UNIT_SKILL_ITEM = 209,
	TLR_T_CAST_UNIT_SKILL_ITEM_CATEGORY = 210,
	TLR_T_CAST_UNIT_SKILL_MAGIC = 211,
	TLR_T_CAST_UNIT_SKILL_MGC_CATEGORY = 212,
	TLR_T_CUSTOMISE_IMPRO_TARGET = 213,
	TLR_T_CUSTOMISE_LIST = 214,
	TLR_T_DEBUG_WORK = 215,
	TLR_T_ENCOUNT_DATA = 216,
	TLR_T_ENCOUNT_DESTROY_DATA = 217,
	TLR_T_ENCOUNT_DESTROY_INFO = 218,
	TLR_T_ENCOUNT_INFO = 219,
	TLR_T_ENCOUNT_REINFORCE = 220,
	TLR_T_FIELD_REWARD_HIST_WORK = 221,
	TLR_T_FIELD_REWARD_INFO_WORK = 222,
	TLR_T_FIELD_REWARD_LIST_WORK = 223,
	TLR_T_FIELD_REWARD_MASCOT_WORK = 224,
	TLR_T_GUILD_ADVENTURE_LIST = 225,
	TLR_T_GUILD_ADVENTURE_PROGRESS = 226,
	TLR_T_GUILD_EMPLOY_LIST = 227,
	TLR_T_MASCOT_WORK = 228,
	TLR_T_MONSTER_KILL_COUNT = 229,
	TLR_T_PARTY_COMMON = 230,
	TLR_T_PARTY_EQUIPMENT_ACCESSORY = 231,
	TLR_T_PARTY_EQUIPMENT_WEAPON = 232,
	TLR_T_PARTY_ITEM = 233,
	TLR_T_SYSTEM_WORK = 234,
	TLR_T_TEMP_WORK = 235,
	TLR_T_UNION_BATTLE = 236,
	TLR_T_UNION_PARAM = 237,
	TLR_T_UNIT_BATTLE = 238,
	TLR_T_UNIT_BATTLE_GROWTH_LOG = 239,
	TLR_T_UNIT_BATTLE_NEW_SKILL = 240,
	TLR_T_UNIT_BATTLE_TEMP_NEW_SKILL = 241,
	TLR_T_UNIT_EQUIPMENT_WEAPON = 242,
	TLR_T_UNIT_MAGIC_CHANCE_FLAG = 243,
	TLR_T_UNIT_MAGIC_CHANCE_GET_SKILL = 244,
	TLR_T_UNIT_PARAM = 245,
	TLR_T_UNIT_SKILL_ARTS = 246,
	TLR_T_UNIT_SKILL_ARTS_DIR = 247,
	TLR_T_UNIT_SKILL_EQCATEGORY = 248,
	TLR_T_UNIT_SKILL_EQSTYLE = 249,
	TLR_T_UNIT_SKILL_ITEM = 250,
	TLR_T_UNIT_SKILL_ITEM_CATEGORY = 251,
	TLR_T_UNIT_SKILL_MAGIC = 252,
	TLR_T_UNIT_SKILL_MGC_CATEGORY = 253,
	TLR_T_UNIT_SKILL_USABLE = 254,
	TLR_UNIT_ACTION_ARTS = 255,
	TLR_UNIT_ACTION_ITEM = 256,
	TLR_UNIT_ACTION_MAGIC = 257,
	TLR_UNIT_ACTION_PRESET_SKILL_TYPE = 258,
	TLR_UNIT_BATTLE_MONSTER = 259,
	TLR_UNIT_BATTLE_PC = 260,
	TLR_UNIT_BREED = 261,
	TLR_UNIT_CHARACTERS = 262,
	TLR_UNIT_CLASS = 263,
	TLR_UNIT_EMBLEM = 264,
	TLR_UNIT_GROWTH_AIM_ACCESSORY = 265,
	TLR_UNIT_GROWTH_AIM_WEAPON = 266,
	TLR_UNIT_GROWTH_LOOTMEG = 267,
	TLR_UNIT_GROWTH_PARA = 268,
	TLR_UNIT_GROWTH_PARTY_TALKCOUNT = 269,
	TLR_UNIT_GROWTH_PARTY_TALKMES = 270,
	TLR_UNIT_GROWTH_PRESET_PARAM_LV = 271,
	TLR_UNIT_GROWTH_SKILL = 272,
	TLR_UNIT_UNIQUE_PARAMETER = 273,
	TLR_T_SHOP_GOODS_LIST = 274,
	TLR_T_SHOP_TRADE_STOCK = 275,
	TLR_T_SHOP_TRADE_SOZAI = 276,
	TLR_DEFINE_BATTLE_SYS_PARTY_TALK = 277,
	TLR_T_DEBUG_TOMIOKA = 278,
	TLR_T_UNIT_PARTY_TALK = 279,
	TLR_T_PARTY_TALK_MSG = 280,
	TLR_T_CAST_IDLE_BTLCMD_MOVE = 281,
	TLR_T_CAST_IDLE_BTLCMD_TURN = 282,
	TLR_T_CAST_IDLE_BTLCMD_WAIT = 283,
	TLR_T_BATTLE_PARTY_DOUGU_FORECAST = 284,
	TLR_T_COMPONENT_HELP = 285,
	TLR_T_CAST_UNIT_GROWTH_PARA = 286,
	TLR_UNIT_GROWTH_REEMERGENCE_EXP = 287,
	TLR_T_BATTLE_BGM_CTRL = 288,
	TLR_BATTLE_GAME_RESIDENT = 289,
	TLR_BATTLE_ONLY_RESIDENT = 290,
	TLR_T_BTLCMD_NOACTION = 291,
	TLR_T_BATTLE_CALC_DAMAGE = 292,
	TLR_T_CAST_CALC_DAMAGE = 293,
	TLR_T_BATTLE_VOICE_CTRL = 294,
	TLR_T_BATTLE_REWARD_BREAK_MONS = 295,
	TLR_T_BATTLE_VOICE_RESPONSE_CTRL = 296,
	TLR_T_BATTLE_ACTION_HIT_LOG = 297,
	TLR_DEFINE_BATTLE_SYS_NAKAMA_TALK = 298,
	TLR_DEFINE_BATTLE_SYS_TENSION_ACT = 299,
	TLR_DEFINE_BATTLE_SYS_TENSION_RANK = 300,
	TLR_DEFINE_BATTLE_SYS_TENSION_MORAL = 301,
	TLR_DEFINE_BATTLE_SYS_BRANK_EXP = 302,
	TLR_DEFINE_BATTLE_SYS_BRANK_OFFSET1 = 303,
	TLR_DEFINE_BATTLE_SYS_BRANK_OFFSET2 = 304,
	TLR_DEFINE_BATTLE_SYS_BRANK_OFFSET3 = 305,
	TLR_DEFINE_BATTLE_SYS_BRANK_OFFSET4 = 306,
	TLR_DEFINE_BATTLE_SYS_BRANK_OFFSET5 = 307,
	TLR_DEFINE_BATTLE_SYS_BRANK_OFFSET6 = 308,
	TLR_T_TLR360_RESULTS = 309,
	TLR_T_BATTLE_SPEND_INFO = 310,
	TLR_UNIT_CLASS_CATEGORY = 311,
	TLR_UNIT_CLASS_TYPE = 312,
	TLR_DEFINE_BATTLE_SYS_DEC_OFFSET = 313,
	TLR_T_BATTLE_STATUS_INFO = 314,
	TLR_T_BATTLE_RANK_CALC = 315,
	TLR_T_AIM_EQ_TEMP = 316,
	TLR_BATTLE_STATUS_SET = 317,
	TLR_BATTLE_STATUS_RESET = 318,
	TLR_T_BATTLE_CALC_TEMP = 319,
};
