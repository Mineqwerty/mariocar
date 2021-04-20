// clam.inc.c
#include "actors/common0.h"


void clam_act_0(void) {

}

void clam_act_1(void) {

}

void bhv_clam_loop(void) {
    
    gCurrentObject->oAnimations = wheels_anims;
    cur_obj_init_animation(0);

    o->oPosX = gMarioState->pos[0];
    o->oPosY = gMarioState->pos[1] + 105.0f;
    o->oPosZ = gMarioState->pos[2];
    o->oFaceAngleYaw = gMarioState->faceAngle[1];
    o->oMoveAngleYaw = gMarioState->marioObj->oMoveAngleYaw;
    o->oMoveAngleRoll = gMarioState->marioObj->oMoveAngleRoll;
}
