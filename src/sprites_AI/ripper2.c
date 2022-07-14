#include "ripper2.h"
#include "../sprite_util.h"
#include "../../data/data.h"
#include "../globals.h"

void ripper2_init(void)
{
    gCurrentSprite.hitbox_top_offset = -0x24;
    gCurrentSprite.hitbox_bottom_offset = 0x8;
    gCurrentSprite.hitbox_left_offset = -0x28;
    gCurrentSprite.hitbox_right_offset = 0x28;
    gCurrentSprite.draw_distance_top_offset = 0x10;
    gCurrentSprite.draw_distance_bottom_offset = 0x8;
    gCurrentSprite.draw_distance_horizontal_offset = 0x28;
    gCurrentSprite.oam_pointer = ripper2_oam_2cc458;
    gCurrentSprite.anim_duration_counter = 0x0;
    gCurrentSprite.curr_anim_frame = 0x0;
    gCurrentSprite.samus_collision = SSC_HURTS_SAMUS;
    gCurrentSprite.health = primary_sprite_stats[gCurrentSprite.sprite_id][0x0];
    gCurrentSprite.y_position -= 0x8;
    sprite_util_choose_random_x_flip();
    gCurrentSprite.pose = 0x8;
}

void ripper2_gfx_init(void)
{
    gCurrentSprite.pose = 0x9;
    gCurrentSprite.oam_pointer = ripper2_oam_2cc458;
    gCurrentSprite.curr_anim_frame = 0x0;
    gCurrentSprite.anim_duration_counter = 0x0;
}

void ripper2_move(void)
{
    if (gCurrentSprite.status & SPRITE_STATUS_XFLIP)
    {
        sprite_util_check_collision_at_position(gCurrentSprite.y_position - 0x10, gCurrentSprite.x_position + 0x2C);
        if (gPreviousCollisionCheck != 0x11)
            gCurrentSprite.x_position += 0x8;
        else
            gCurrentSprite.pose = 0xA;
    }
    else
    {
        sprite_util_check_collision_at_position(gCurrentSprite.y_position - 0x10, gCurrentSprite.x_position - 0x2C);
        if (gPreviousCollisionCheck == 0x11)
            gCurrentSprite.pose = 0xA;
        else
            gCurrentSprite.x_position -= 0x8;
    }
}

void ripper2_turn_around_gfx_init(void)
{
    gCurrentSprite.pose = 0xB;
    gCurrentSprite.oam_pointer = ripper2_oam_2cc480;
    gCurrentSprite.curr_anim_frame = 0x0;
    gCurrentSprite.anim_duration_counter = 0x0;
    if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
        unk_2b20(0x267);
}

void ripper2_turn_around_begin(void)
{
    if (sprite_util_check_end_current_sprite_anim())
    {
        gCurrentSprite.status ^= SPRITE_STATUS_XFLIP;
        gCurrentSprite.pose = 0xC;
        gCurrentSprite.oam_pointer = ripper2_oam_2cc498;
        gCurrentSprite.anim_duration_counter = 0x0;
        gCurrentSprite.curr_anim_frame = 0x0;
    }
}

void ripper2_check_turned_around(void)
{
    if (sprite_util_check_near_end_current_sprite_anim())
        gCurrentSprite.pose = 0x8;
}

void ripper2(void)
{
    if (gCurrentSprite.properties & SP_UNKNOWN)
    {
        gCurrentSprite.properties &= ~SP_UNKNOWN;
        if (gCurrentSprite.status & SPRITE_STATUS_ONSCREEN)
            unk_2b20(0x268);
    }

    if (gCurrentSprite.freeze_timer != 0x0)
        sprite_util_update_freeze_timer();
    else
    {
        if (!sprite_util_is_sprite_stunned())
        {
            switch (gCurrentSprite.pose)
            {
                case 0x0:
                    ripper2_init();
                    break;
                case 0x8:
                    ripper2_gfx_init();
                case 0x9:
                    ripper2_move();
                    break;
                case 0xA:
                    ripper2_turn_around_gfx_init();
                case 0xB:
                    ripper2_turn_around_begin();
                    break;
                case 0xC:
                    ripper2_check_turned_around();
                    break;
                default:
                    sprite_util_sprite_death(DEATH_NORMAL, gCurrentSprite.y_position - 0x18, gCurrentSprite.x_position, TRUE, PE_SPRITE_EXPLOSION_MEDIUM);
            }
        }
    }
}