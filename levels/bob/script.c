#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _wdw_skybox_yay0SegmentRomStart, _wdw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_GOOMBA, -4301, 320, -13168, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3592, 320, -13365, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3804, 320, -12826, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3993, 320, -11772, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3651, 320, -12005, 0, 0, 0, 0x00000000, bhvGoomba),
		OBJECT(MODEL_CROSSWALK, -2812, 320, -1851, 0, 0, 0, 0x000C0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, -7055, 320, -1851, 0, 0, 0, 0x000D0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, -18084, 320, -1851, 0, 0, 0, 0x000C0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, 373, 320, -11773, 0, 90, 0, 0x000E0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, 22034, 320, 13792, 0, 90, 0, 0x000E0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, 8420, 320, 12321, 0, 90, 0, 0x000E0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, 360, 320, 10264, 0, 90, 0, 0x000F0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, 19127, 320, -1849, 0, 0, 0, 0x000D0000, bhvCoffin),
		OBJECT(MODEL_GOOMBA, -1195, 320, 10025, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -9412, 320, 15489, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -10638, 320, -8676, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -1180, 320, -24513, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -15357, 320, -26091, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -18127, 320, -12400, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 23272, 320, -221, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_THWOMP, -18039, 5687, 21151, 0, 90, 0, 0x000C0000, bhvThwomp),
		OBJECT(MODEL_STAR, -1576, 415, -1875, 0, 0, 0, 0x00100000, bhvStar),
		OBJECT(MODEL_STAR, 6753, 465, -7818, 0, 0, 0, 0x000B0000, bhvStar),
		OBJECT(MODEL_STAR, -3930, 473, -13831, 0, 0, 0, 0x000C0000, bhvStar),
		OBJECT(MODEL_STAR, 4118, 4788, -20392, 0, 0, 0, 0x000D0000, bhvStar),
		OBJECT(MODEL_STAR, 18747, 402, -12494, 0, 0, 0, 0x000E0000, bhvStar),
		OBJECT(MODEL_STAR, 14699, 819, 11939, 0, 0, 0, 0x000F0000, bhvStar),
		OBJECT(MODEL_BREAKABLE_BOX, 18372, 320, -9735, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 17813, 320, -9225, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 16340, 320, -10397, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 15383, 320, -7280, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 14766, 320, -12471, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 21066, 320, -8901, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 21930, 320, -11580, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 19393, 320, -13947, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 20943, 320, -16824, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 24754, 320, -10261, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 23567, 320, -6521, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 17878, 320, -6266, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 13490, 320, -5164, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 21746, 320, -4760, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 22392, 320, -13660, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 19223, 320, -8658, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 24920, 320, -16692, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 14062, 320, -4908, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 12711, 320, -10638, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_BREAKABLE_BOX, 24296, 320, -9665, 0, 0, 0, 0x000E0000, bhvBreakableBox),
		OBJECT(MODEL_WINDOW, 8024, 1181, -4390, 0, 90, 0, 0x00060000, bhvBreakableBox),
		OBJECT(MODEL_PETER, 10012, 320, -18740, 0, 0, 0, 0x00110000, bhvStar),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -12570, 320, -7532, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -14964, 320, -8474, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -12371, 320, -9376, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -14404, 320, -10201, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -12287, 320, -11444, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -14735, 320, -11838, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -13345, 320, -10636, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -13763, 320, -8716, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_KOOPA_WITHOUT_SHELL, -14484, 320, -6585, 0, 0, 0, 0x00090000, bhvKoopa),
		OBJECT(MODEL_GOOMBA, 10633, 320, 5343, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 23429, 320, 11812, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, 13045, 320, 18065, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -23215, 320, 18663, 0, 0, 0, 0x000D0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -13687, 5687, 9559, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -4285, 5687, 17364, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_GOOMBA, -18065, 320, 6347, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_CROSSWALK, -13457, 320, -1852, 0, 0, 0, 0x000D0000, bhvCoffin),
		OBJECT(MODEL_CROSSWALK, 8409, 320, -1856, 0, 0, 0, 0x000D0000, bhvCoffin),
		OBJECT(MODEL_GOOMBA, -15312, 320, -17525, 0, 0, 0, 0x000C0000, bhvGoomba),
		OBJECT(MODEL_PENGUIN, 21267, 320, -22508, 0, 0, 0, 0x00000000, bhvSmallPenguin),
		OBJECT(MODEL_NONE, 342, 346, 14664, 0, 107, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 107, 10410, 501, -8022),
		TERRAIN(bob_area_1_collision),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_STREAMED_CITY_FUNK),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 107, 10410, 501, -8022),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
