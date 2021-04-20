// breakable_box.c.inc
#include "actors/common0.h"

void bhv_breakable_box_loop(void) {
    obj_set_hitbox(o, &sBreakableBoxHitbox);
    if (o->oBehParams2ndByte == 6) {
        //o->collisionData = window_collision;
    }
    else {
    cur_obj_set_model(MODEL_BREAKABLE_BOX_SMALL);
    }
    if (o->oTimer == 0)
        breakable_box_init();
    if (cur_obj_was_attacked_or_ground_pounded() != 0) {
        if (o->oBehParams2ndByte == 6) {
        gMarioState->starReqs[18] = 1;
        }
        gMarioState->starReqs[19] += 1;
        obj_explode_and_spawn_coins(46.0f, 1);
        create_sound_spawner(SOUND_GENERAL_BREAK_BOX);
    }
}
