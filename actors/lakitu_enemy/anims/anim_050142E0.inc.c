// 0x05014100
static const s16 lakitu_enemy_seg5_animvalue_05014100[] = {
    0x0000, 0x003F, 0xFFC2, 0x3FFF, 0xFCF0, 0xFD3F, 0xFDFC, 0xFEDD,
    0xFF9A, 0xFFE9, 0xFFB1, 0xFF24, 0xFE6D, 0xFDB5, 0xFD28, 0xFCF0,
    0xFE8D, 0x007B, 0x0517, 0x0A97, 0x0F34, 0x1123, 0x0FC2, 0x0C51,
    0x07D7, 0x035D, 0xFFED, 0xFE8D, 0x8B77, 0x8C25, 0x8DC6, 0x8FB7,
    0x9158, 0x9206, 0x918A, 0x9053, 0x8EBF, 0x8D2A, 0x8BF3, 0x8B77,
    0xFA65, 0xFB92, 0xFE69, 0x01E1, 0x04F3, 0x0699, 0x0695, 0x05A2,
    0x042C, 0x029D, 0x015F, 0x00DD, 0x1B41, 0x1A6B, 0x1847, 0x1564,
    0x124E, 0x0F94, 0x0CE0, 0x09C3, 0x06A4, 0x03E9, 0x01FB, 0x013F,
    0x3F20, 0x45A5, 0x559D, 0x69A6, 0x7C5E, 0x8867, 0x8D5C, 0x8F25,
    0x8EC6, 0x8D40, 0x8B98, 0x8AD2, 0xFA65, 0xFB92, 0xFE69, 0x01E1,
    0x04F3, 0x0699, 0x0695, 0x05A2, 0x042C, 0x029D, 0x015F, 0x00DD,
    0x1B41, 0x1A6B, 0x1847, 0x1564, 0x124E, 0x0F94, 0x0CE0, 0x09C3,
    0x06A4, 0x03E9, 0x01FB, 0x013F, 0x3F20, 0x45A5, 0x559D, 0x69A6,
    0x7C5E, 0x8867, 0x8D5C, 0x8F25, 0x8EC6, 0x8D40, 0x8B98, 0x8AD2,
    0xA2CB, 0xA2CB, 0x0810, 0x076A, 0x05D2, 0x03D3, 0x01F7, 0x00C7,
    0x004E, 0x0028, 0x003A, 0x0069, 0x0099, 0x00AF, 0xF0E1, 0xF43F,
    0xFC65, 0x065D, 0x0F39, 0x1404, 0x1418, 0x118E, 0x0D8E, 0x0942,
    0x05D4, 0x046D, 0x2964, 0x297B, 0x29B2, 0x29F5, 0x2A2F, 0x2A4C,
    0x2A47, 0x2A2E, 0x2A09, 0x29E4, 0x29C7, 0x29BB, 0xEA72, 0xEE3A,
    0xF75E, 0x028C, 0x0C79, 0x11D2, 0x11DD, 0x0EF1, 0x0A61, 0x057D,
    0x0197, 0x0000, 0x007C, 0xFF61, 0xFCBA, 0xF98F, 0xF6E3, 0xF5BE,
    0xF679, 0xF85D, 0xFAD7, 0xFD53, 0xFF3C, 0x0000, 0x5576, 0x55AC,
    0x5636, 0x56F2, 0x57BD, 0x5874, 0x592F, 0x5A09, 0x5AE5, 0x5BA7,
    0x5C31, 0x5C65,
};

// 0x05014274
static const u16 lakitu_enemy_seg5_animindex_05014274[] = {
    0x0001, 0x0000, 0x0001, 0x0001, 0x0001, 0x0002, 0x0001, 0x0000, 0x0001, 0x0003, 0x0001, 0x0000,
    0x000C, 0x0096, 0x000C, 0x00A2, 0x000C, 0x00AE,
    0x000C, 0x0072, 0x000C, 0x007E, 0x000C, 0x008A,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0071,
    0x000C, 0x0004, 0x000C, 0x0010, 0x000C, 0x001C,
    0x0001, 0x0000, 0x0001, 0x0000, 0x0001, 0x0070,
    0x000C, 0x004C, 0x000C, 0x0058, 0x000C, 0x0064,
    0x000C, 0x0028, 0x000C, 0x0034, 0x000C, 0x0040,
};

// 0x050142E0
static const struct Animation lakitu_enemy_seg5_anim_050142E0 = {
    0,
    0,
    0,
    0,
    0x0C,
    ANIMINDEX_NUMPARTS(lakitu_enemy_seg5_animindex_05014274),
    lakitu_enemy_seg5_animvalue_05014100,
    lakitu_enemy_seg5_animindex_05014274,
    0,
};