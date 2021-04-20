/**
 * Behavior for bhvCoffinSpawner and bhvCoffin.
 * The coffins are spawned by a singular spawner,
 * with half being able to stand up.
 * Coffins unload after leaving the room.
 */

/**
 * Struct with s16 values for a horizontal position.
 */


/**
 * Array of positions for all coffins relative to their spawner.
 */


/**
 * Loop behavior for the object that spawns the six coffins in BBH.
 * Loads the coffins when in the room, they unload themselves.
 */
void bhv_coffin_spawner_loop(void) {
    
}

/**
 * The main action for the coffins. Coffins with COFFIN_BP_STATIC skip the behavior, while
 * the other coffins will enter a standing action when Mario is near.
 * Also controls laying the coffin down after it has stood up.
 */
void coffin_act_idle(void) {
    
}

/**
 * Stand up the coffin and keep it standing until the timer hits 60.
 */

//struct Object *pedestrian;
void coffin_act_stand_up(void) {
   
}
int pedSpawned1;
int pedSpawned2;

void bhv_crosswalk_init() {
   int xdisp;
    int zdisp;
    if (gMarioState && gMarioObject) {

        switch (o->oBehParams2ndByte) {
            case 12:xdisp = 0; zdisp = 1000;
            break;
            case 13:xdisp = 0; zdisp = -1000;
            break;
            case 14:xdisp = 0; zdisp = -1000;
            break;
            case 15:xdisp = 0; zdisp = 1000;
            break;
        }

    
    if (o->oDistanceToMario < 12000.0f) {
        if (o->oSpawnPed == 0) {
    pedSpawned1 = random_sign();
    pedSpawned2 = random_sign();
    
        switch (pedSpawned1) {
            case 1: o->prevObj = spawn_object_relative(o->oBehParams2ndByte, xdisp, 0, zdisp, o, MODEL_GOOMBA, bhvGoomba); o->oSpawnPed = 1;
            break;
            case -1: if (pedSpawned2 == 1) {
                o->prevObj = spawn_object_relative(o->oBehParams2ndByte, xdisp, 0, zdisp, o, MODEL_KOOPA_WITH_SHELL, bhvKoopa); o->oSpawnPed = 1;
            }
            break;
        }
        }
    }
    else {
        if (o->oSpawnPed == 1) {
        mark_obj_for_deletion(o->prevObj);
        o->oSpawnPed = 0;
        }
    }
}
}
/**
 * Main behavior for each coffin. Unloads the coffin if the spawner enters
 * that action.
 */
void bhv_coffin_loop(void) {
    if (gMarioObject->platform == o && o->oPlatformCheck == 0) {
        o->oPlatformCheck = 1;
        gMarioState->starReqs[27] += 1;
    }
    else if (gMarioObject->platform == o){
        o->oPlatformCheck = 1;
    }
    else {
        o->oPlatformCheck = 0;
    }
    //print_text_fmt_int(100, 200, "%d", o->oPlatformCheck);
    
    load_object_collision_model();
    
    if (o->oDistanceToMario < 12000.0f) {
        if (o->oSpawnPed == 0) {
            
            bhv_crosswalk_init();
            
        }
    }
    else {
        
        bhv_crosswalk_init();
    }
    
}
