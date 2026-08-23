#pragma once

#include "mlink/MLink.hpp"

#include "internal/basic_string.hpp"

float mc_powf(float x, float y);

namespace mc
{
    class SoundEvent
    {
    public:
        static SoundEvent *back asm("0x109C6ABC - 0x502200");

        static SoundEvent *craft asm("0x109C6AC0 - 0x502200");

        static SoundEvent *craftfail asm("0x109C6AC4 - 0x502200");

        static SoundEvent *focus asm("0x109C6AC8 - 0x502200");

        static SoundEvent *press asm("0x109C6ACC - 0x502200");

        static SoundEvent *scroll asm("0x109C6AD0 - 0x502200");

        static SoundEvent *ambient_cave_cave asm("0x109C6158 - 0x502200");

        static SoundEvent *dig_stone asm("0x109C615C - 0x502200");

        static SoundEvent *random_anvil_break asm("0x109C6160 - 0x502200");

        static SoundEvent *random_anvil_land asm("0x109C6164 - 0x502200");

        static SoundEvent *step_stone asm("0x109C6168 - 0x502200");

        static SoundEvent *random_anvil_land_2 asm("0x109C616C - 0x502200");

        static SoundEvent *random_anvil_land_3 asm("0x109C6170 - 0x502200");

        static SoundEvent *step_stone_2 asm("0x109C6174 - 0x502200");

        static SoundEvent *random_anvil_use asm("0x109C6178 - 0x502200");

        static SoundEvent *entity_armorstand_break asm("0x109C617C - 0x502200");

        static SoundEvent *dig_wood asm("0x109C6180 - 0x502200");

        static SoundEvent *entity_armorstand_hit asm("0x109C6184 - 0x502200");

        static SoundEvent *dig_stone_2 asm("0x109C6188 - 0x502200");

        static SoundEvent *item_armor_equip_chain asm("0x109C618C - 0x502200");

        static SoundEvent *item_armor_equip_diamond asm("0x109C6190 - 0x502200");

        static SoundEvent *item_armor_equip_generic asm("0x109C6198 - 0x502200");

        static SoundEvent *item_armor_equip_gold asm("0x109C619C - 0x502200");

        static SoundEvent *item_armor_equip_iron asm("0x109C61A0 - 0x502200");

        static SoundEvent *item_armor_equip_leather asm("0x109C61A4 - 0x502200");

        static SoundEvent *mob_turtle_armor asm("0x109C6BC8 - 0x502200");

        static SoundEvent *random_bowhit asm("0x109C61A8 - 0x502200");

        static SoundEvent *random_successful_hit asm("0x109C61AC - 0x502200");

        static SoundEvent *random_bow asm("0x109C61B0 - 0x502200");

        static SoundEvent *mob_bat_idle asm("0x109C61B4 - 0x502200");

        static SoundEvent *mob_bat_death asm("0x109C61B8 - 0x502200");

        static SoundEvent *mob_bat_hurt asm("0x109C61BC - 0x502200");

        static SoundEvent *mob_bat_takeoff asm("0x109C61C0 - 0x502200");

        static SoundEvent *mob_blaze_breathe asm("0x109C61C4 - 0x502200");

        static SoundEvent *fire_fire asm("0x109C61C8 - 0x502200");

        static SoundEvent *mob_blaze_death asm("0x109C61CC - 0x502200");

        static SoundEvent *mob_blaze_hit asm("0x109C61D0 - 0x502200");

        static SoundEvent *mob_ghast_fireball asm("0x109C61D4 - 0x502200");

        static SoundEvent *entity_boat_paddle_land asm("0x109C6AA0 - 0x502200");

        static SoundEvent *entity_boat_paddle_water asm("0x109C6AA4 - 0x502200");

        static SoundEvent *entity_bobber_retrieve asm("0x109C6AA8 - 0x502200");

        static SoundEvent *entity_bobber_throw asm("0x109C61D8 - 0x502200");

        static SoundEvent *entity_bobber_retrieve_2 asm("0x109C61DC - 0x502200");

        static SoundEvent *item_bottle_empty asm("0x109C61E0 - 0x502200");

        static SoundEvent *item_bottle_fill asm("0x109C61E4 - 0x502200");

        static SoundEvent *item_bottle_fill_dragonbreath asm("0x109C61E8 - 0x502200");

        static SoundEvent *block_brewing_stand_brew asm("0x109C61EC - 0x502200");

        static SoundEvent *item_bucket_empty asm("0x109C61F0 - 0x502200");

        static SoundEvent *item_bucket_empty_lava asm("0x109C61F4 - 0x502200");

        static SoundEvent *item_bucket_fill asm("0x109C61F8 - 0x502200");

        static SoundEvent *item_bucket_fill_lava asm("0x109C61FC - 0x502200");

        static SoundEvent *item_bucket_fill_fish asm("0x109C6200 - 0x502200");

        static SoundEvent *item_bucket_empty_fish asm("0x109C6204 - 0x502200");

        static SoundEvent *mob_cat_meow asm("0x109C6208 - 0x502200");

        static SoundEvent *mob_cat_hit asm("0x109C620C - 0x502200");

        static SoundEvent *mob_cat_hiss asm("0x109C6210 - 0x502200");

        static SoundEvent *mob_cat_hit_2 asm("0x109C6214 - 0x502200");

        static SoundEvent *mob_cat_purr asm("0x109C6218 - 0x502200");

        static SoundEvent *mob_cat_purreow asm("0x109C621C - 0x502200");

        static SoundEvent *block_chest_close asm("0x109C6220 - 0x502200");

        static SoundEvent *random_door_close asm("0x109C6224 - 0x502200");

        static SoundEvent *block_chest_open asm("0x109C6228 - 0x502200");

        static SoundEvent *mob_chicken_idle asm("0x109C622C - 0x502200");

        static SoundEvent *mob_chicken_hurt asm("0x109C6230 - 0x502200");

        static SoundEvent *mob_chicken_plop asm("0x109C6234 - 0x502200");

        static SoundEvent *mob_chicken_hurt_2 asm("0x109C6238 - 0x502200");

        static SoundEvent *mob_chicken_step asm("0x109C623C - 0x502200");

        static SoundEvent *block_chorus_flower_death asm("0x109C6240 - 0x502200");

        static SoundEvent *block_chorus_flower_grow asm("0x109C6244 - 0x502200");

        static SoundEvent *mob_endermen_portal asm("0x109C6248 - 0x502200");

        static SoundEvent *dig_cloth asm("0x109C624C - 0x502200");

        static SoundEvent *step_cloth asm("0x109C6250 - 0x502200");

        static SoundEvent *step_cloth_2 asm("0x109C6254 - 0x502200");

        static SoundEvent *dig_cloth_2 asm("0x109C6258 - 0x502200");

        static SoundEvent *step_cloth_3 asm("0x109C625C - 0x502200");

        static SoundEvent *random_click asm("0x109C6260 - 0x502200");

        static SoundEvent *mob_cow_idle asm("0x109C6264 - 0x502200");

        static SoundEvent *mob_cow_hurt asm("0x109C6268 - 0x502200");

        static SoundEvent *mob_cow_hurt_2 asm("0x109C626C - 0x502200");

        static SoundEvent *entity_cow_milk asm("0x109C6270 - 0x502200");

        static SoundEvent *mob_cow_step asm("0x109C6274 - 0x502200");

        static SoundEvent *mob_creeper_death asm("0x109C6278 - 0x502200");

        static SoundEvent *mob_creeper_hurt asm("0x109C627C - 0x502200");

        static SoundEvent *random_fuse asm("0x109C6280 - 0x502200");

        static SoundEvent *random_click_2 asm("0x109C6284 - 0x502200");

        static SoundEvent *random_click_3 asm("0x109C6288 - 0x502200");

        static SoundEvent *random_bow_2 asm("0x109C628C - 0x502200");

        static SoundEvent *mob_horse_donkey_idle asm("0x109C6290 - 0x502200");

        static SoundEvent *mob_horse_donkey_angry asm("0x109C6294 - 0x502200");

        static SoundEvent *mob_chicken_plop_2 asm("0x109C6298 - 0x502200");

        static SoundEvent *mob_horse_donkey_death asm("0x109C629C - 0x502200");

        static SoundEvent *mob_horse_donkey_hit asm("0x109C62A0 - 0x502200");

        static SoundEvent *random_bow_3 asm("0x109C62A4 - 0x502200");

        static SoundEvent *mob_guardian_elder_idle asm("0x109C62A8 - 0x502200");

        static SoundEvent *mob_guardian_land_idle asm("0x109C62AC - 0x502200");

        static SoundEvent *mob_guardian_curse asm("0x109C62B0 - 0x502200");

        static SoundEvent *mob_guardian_elder_death asm("0x109C62B4 - 0x502200");

        static SoundEvent *mob_guardian_land_death asm("0x109C62B8 - 0x502200");

        static SoundEvent *mob_guardian_flop asm("0x109C62BC - 0x502200");

        static SoundEvent *mob_guardian_elder_hit asm("0x109C62C0 - 0x502200");

        static SoundEvent *mob_guardian_land_hit asm("0x109C62C4 - 0x502200");

        static SoundEvent *item_elytra_flying asm("0x109C62C8 - 0x502200");

        static SoundEvent *block_enchantment_table_enchant asm("0x109C62CC - 0x502200");

        static SoundEvent *block_enderchest_close asm("0x109C62D0 - 0x502200");

        static SoundEvent *block_enderchest_open asm("0x109C62D4 - 0x502200");

        static SoundEvent *mob_enderdragon_growl asm("0x109C62D8 - 0x502200");

        static SoundEvent *mob_enderdragon_end asm("0x109C62DC - 0x502200");

        static SoundEvent *random_explode asm("0x109C62E0 - 0x502200");

        static SoundEvent *mob_enderdragon_wings asm("0x109C62E4 - 0x502200");

        static SoundEvent *mob_enderdragon_growl_2 asm("0x109C62E8 - 0x502200");

        static SoundEvent *mob_enderdragon_hit asm("0x109C62EC - 0x502200");

        static SoundEvent *mob_ghast_fireball_2 asm("0x109C62F0 - 0x502200");

        static SoundEvent *entity_endereye_launch asm("0x109C62F4 - 0x502200");

        static SoundEvent *entity_endereye_death asm("0x109C62F8 - 0x502200");

        static SoundEvent *mob_endermen_idle asm("0x109C62FC - 0x502200");

        static SoundEvent *mob_endermen_death asm("0x109C6300 - 0x502200");

        static SoundEvent *mob_endermen_hit asm("0x109C6304 - 0x502200");

        static SoundEvent *mob_enderman_scream asm("0x109C6308 - 0x502200");

        static SoundEvent *mob_enderman_stare asm("0x109C630C - 0x502200");

        static SoundEvent *mob_endermen_portal_2 asm("0x109C6310 - 0x502200");

        static SoundEvent *mob_silverfish_idle asm("0x109C6314 - 0x502200");

        static SoundEvent *mob_silverfish_kill asm("0x109C6318 - 0x502200");

        static SoundEvent *mob_silverfish_hit asm("0x109C631C - 0x502200");

        static SoundEvent *mob_silverfish_step asm("0x109C6320 - 0x502200");

        static SoundEvent *random_bow_4 asm("0x109C6324 - 0x502200");

        static SoundEvent *random_explode_2 asm("0x109C6328 - 0x502200");

        static SoundEvent *block_end_portal_frame_fill asm("0x109C6AAC - 0x502200");

        static SoundEvent *block_end_portal_spawn asm("0x109C6AB0 - 0x502200");

        static SoundEvent *entity_evocation_fangs_attack asm("0x109C632C - 0x502200");

        static SoundEvent *entity_evocation_illager_ambient asm("0x109C6330 - 0x502200");

        static SoundEvent *entity_evocation_illager_cast_spell asm("0x109C6334 - 0x502200");

        static SoundEvent *entity_evocation_illager_death asm("0x109C6338 - 0x502200");

        static SoundEvent *entity_evocation_illager_hurt asm("0x109C633C - 0x502200");

        static SoundEvent *entity_evocation_illager_prepare_attack asm("0x109C6340 - 0x502200");

        static SoundEvent *entity_evocation_illager_prepare_summon asm("0x109C6344 - 0x502200");

        static SoundEvent *entity_evocation_illager_prepare_wololo asm("0x109C6348 - 0x502200");

        static SoundEvent *random_bow_5 asm("0x109C634C - 0x502200");

        static SoundEvent *random_orb asm("0x109C6350 - 0x502200");

        static SoundEvent *random_orb_2 asm("0x109C6354 - 0x502200");

        static SoundEvent *block_fence_gate_close asm("0x109C6358 - 0x502200");

        static SoundEvent *block_fence_gate_open asm("0x109C635C - 0x502200");

        static SoundEvent *mob_ghast_fireball_3 asm("0x109C6360 - 0x502200");

        static SoundEvent *fireworks_blast asm("0x109C6364 - 0x502200");

        static SoundEvent *fireworks_blast_far asm("0x109C6368 - 0x502200");

        static SoundEvent *fireworks_large_blast asm("0x109C636C - 0x502200");

        static SoundEvent *fireworks_large_blast_far asm("0x109C6370 - 0x502200");

        static SoundEvent *fireworks_launch asm("0x109C6374 - 0x502200");

        static SoundEvent *random_bow_6 asm("0x109C6378 - 0x502200");

        static SoundEvent *fireworks_twinkle asm("0x109C637C - 0x502200");

        static SoundEvent *fireworks_twinkle_far asm("0x109C6380 - 0x502200");

        static SoundEvent *fire_fire_2 asm("0x109C6384 - 0x502200");

        static SoundEvent *random_fizz asm("0x109C6388 - 0x502200");

        static SoundEvent *fire_ignite asm("0x109C638C - 0x502200");

        static SoundEvent *block_furnace_fire_crackle asm("0x109C6390 - 0x502200");

        static SoundEvent *game_hostile_hurt_fall_big asm("0x109C6394 - 0x502200");

        static SoundEvent *random_fizz_2 asm("0x109C6398 - 0x502200");

        static SoundEvent *game_player_hit asm("0x109C639C - 0x502200");

        static SoundEvent *random_drink asm("0x109C63A0 - 0x502200");

        static SoundEvent *random_eat asm("0x109C63A4 - 0x502200");

        static SoundEvent *random_explode_3 asm("0x109C63A8 - 0x502200");

        static SoundEvent *random_fizz_3 asm("0x109C63AC - 0x502200");

        static SoundEvent *game_player_hit_2 asm("0x109C63B0 - 0x502200");

        static SoundEvent *game_hostile_hurt_fall_small asm("0x109C63B4 - 0x502200");

        static SoundEvent *random_splash asm("0x109C63B8 - 0x502200");

        static SoundEvent *liquid_swim asm("0x109C63BC - 0x502200");

        static SoundEvent *mob_ghast_moan asm("0x109C63C0 - 0x502200");

        static SoundEvent *mob_ghast_death asm("0x109C63C4 - 0x502200");

        static SoundEvent *mob_ghast_scream asm("0x109C63C8 - 0x502200");

        static SoundEvent *mob_ghast_scream_2 asm("0x109C63CC - 0x502200");

        static SoundEvent *mob_ghast_fireball_4 asm("0x109C63D0 - 0x502200");

        static SoundEvent *mob_ghast_charge asm("0x109C63D4 - 0x502200");

        static SoundEvent *random_glass asm("0x109C63D8 - 0x502200");

        static SoundEvent *step_stone_3 asm("0x109C63DC - 0x502200");

        static SoundEvent *step_stone_4 asm("0x109C63E0 - 0x502200");

        static SoundEvent *dig_stone_3 asm("0x109C63E4 - 0x502200");

        static SoundEvent *step_stone_5 asm("0x109C63E8 - 0x502200");

        static SoundEvent *dig_grass asm("0x109C63EC - 0x502200");

        static SoundEvent *step_grass asm("0x109C63F0 - 0x502200");

        static SoundEvent *step_grass_2 asm("0x109C63F4 - 0x502200");

        static SoundEvent *dig_grass_2 asm("0x109C63F8 - 0x502200");

        static SoundEvent *step_grass_3 asm("0x109C63FC - 0x502200");

        static SoundEvent *dig_gravel asm("0x109C6400 - 0x502200");

        static SoundEvent *step_gravel asm("0x109C6404 - 0x502200");

        static SoundEvent *step_gravel_2 asm("0x109C6408 - 0x502200");

        static SoundEvent *dig_gravel_2 asm("0x109C640C - 0x502200");

        static SoundEvent *step_gravel_3 asm("0x109C6410 - 0x502200");

        static SoundEvent *entity_guardian_idle asm("0x109C6414 - 0x502200");

        static SoundEvent *mob_guardian_land_idle_2 asm("0x109C6418 - 0x502200");

        static SoundEvent *mob_guardian_attack asm("0x109C641C - 0x502200");

        static SoundEvent *mob_guardian_death asm("0x109C6420 - 0x502200");

        static SoundEvent *mob_guardian_land_death_2 asm("0x109C6424 - 0x502200");

        static SoundEvent *mob_guardian_flop_2 asm("0x109C6428 - 0x502200");

        static SoundEvent *mob_guardian_hit asm("0x109C642C - 0x502200");

        static SoundEvent *mob_guardian_land_hit_2 asm("0x109C6430 - 0x502200");

        static SoundEvent *item_hoe_till asm("0x109C6434 - 0x502200");

        static SoundEvent *mob_horse_idle asm("0x109C6438 - 0x502200");

        static SoundEvent *mob_horse_angry asm("0x109C643C - 0x502200");

        static SoundEvent *mob_horse_armor asm("0x109C6440 - 0x502200");

        static SoundEvent *mob_horse_breathe asm("0x109C6444 - 0x502200");

        static SoundEvent *mob_horse_death asm("0x109C6448 - 0x502200");

        static SoundEvent *entity_horse_eat asm("0x109C644C - 0x502200");

        static SoundEvent *mob_horse_gallop asm("0x109C6450 - 0x502200");

        static SoundEvent *mob_horse_hit asm("0x109C6454 - 0x502200");

        static SoundEvent *mob_horse_jump asm("0x109C6458 - 0x502200");

        static SoundEvent *mob_horse_land asm("0x109C645C - 0x502200");

        static SoundEvent *mob_horse_leather asm("0x109C6460 - 0x502200");

        static SoundEvent *mob_horse_soft asm("0x109C6464 - 0x502200");

        static SoundEvent *mob_horse_wood asm("0x109C6468 - 0x502200");

        static SoundEvent *game_hostile_hurt_fall_big_2 asm("0x109C646C - 0x502200");

        static SoundEvent *game_hostile_die asm("0x109C6470 - 0x502200");

        static SoundEvent *game_player_hit_3 asm("0x109C6474 - 0x502200");

        static SoundEvent *game_hostile_hurt_fall_small_2 asm("0x109C6478 - 0x502200");

        static SoundEvent *game_hostile_swim_splash asm("0x109C647C - 0x502200");

        static SoundEvent *game_hostile_swim asm("0x109C6480 - 0x502200");

        static SoundEvent *entity_husk_idle asm("0x109C6484 - 0x502200");

        static SoundEvent *entity_husk_death asm("0x109C6488 - 0x502200");

        static SoundEvent *entity_husk_hurt asm("0x109C648C - 0x502200");

        static SoundEvent *entity_husk_step asm("0x109C6490 - 0x502200");

        static SoundEvent *entity_husk_convert asm("0x109C6494 - 0x502200");

        static SoundEvent *entity_illusion_illager_ambient asm("0x109C6498 - 0x502200");

        static SoundEvent *entity_evocation_illager_cast_spell_2 asm("0x109C649C - 0x502200");

        static SoundEvent *entity_illusion_illager_death asm("0x109C64A0 - 0x502200");

        static SoundEvent *entity_illusion_illager_hurt asm("0x109C64A4 - 0x502200");

        static SoundEvent *entity_illusion_illager_mirror_move asm("0x109C64A8 - 0x502200");

        static SoundEvent *entity_illusion_illager_prepare_blindness asm("0x109C64AC - 0x502200");

        static SoundEvent *entity_illusion_illager_prepare_mirror asm("0x109C64B0 - 0x502200");

        static SoundEvent *mob_irongolem_throw asm("0x109C64B4 - 0x502200");

        static SoundEvent *mob_irongolem_death asm("0x109C64B8 - 0x502200");

        static SoundEvent *mob_irongolem_hit asm("0x109C64BC - 0x502200");

        static SoundEvent *mob_irongolem_walk asm("0x109C64C0 - 0x502200");

        static SoundEvent *block_iron_door_close asm("0x109C64C4 - 0x502200");

        static SoundEvent *block_iron_door_open asm("0x109C64C8 - 0x502200");

        static SoundEvent *block_iron_trapdoor_close asm("0x109C64CC - 0x502200");

        static SoundEvent *block_iron_trapdoor_open asm("0x109C64D0 - 0x502200");

        static SoundEvent *entity_itemframe_additem asm("0x109C64D4 - 0x502200");

        static SoundEvent *entity_itemframe_break asm("0x109C64D8 - 0x502200");

        static SoundEvent *entity_itemframe_place asm("0x109C64DC - 0x502200");

        static SoundEvent *entity_itemframe_removeitem asm("0x109C64E0 - 0x502200");

        static SoundEvent *entity_itemframe_rotateitem asm("0x109C64E4 - 0x502200");

        static SoundEvent *random_break asm("0x109C64E8 - 0x502200");

        static SoundEvent *random_pop asm("0x109C64EC - 0x502200");

        static SoundEvent *random_pop_2 asm("0x109C64F0 - 0x502200");

        static SoundEvent *dig_wood_2 asm("0x109C64F4 - 0x502200");

        static SoundEvent *step_ladder asm("0x109C64F8 - 0x502200");

        static SoundEvent *step_ladder_2 asm("0x109C64FC - 0x502200");

        static SoundEvent *dig_wood_3 asm("0x109C6500 - 0x502200");

        static SoundEvent *step_ladder_3 asm("0x109C6504 - 0x502200");

        static SoundEvent *random_fizz_4 asm("0x109C650C - 0x502200");

        static SoundEvent *liquid_lava asm("0x109C6508 - 0x502200");

        static SoundEvent *liquid_lavapop asm("0x109C6510 - 0x502200");

        static SoundEvent *entity_leashknot_break asm("0x109C6514 - 0x502200");

        static SoundEvent *entity_leashknot_place asm("0x109C6518 - 0x502200");

        static SoundEvent *random_click_4 asm("0x109C651C - 0x502200");

        static SoundEvent *random_explode_4 asm("0x109C6520 - 0x502200");

        static SoundEvent *ambient_weather_thunder asm("0x109C6524 - 0x502200");

        static SoundEvent *random_bow_7 asm("0x109C6528 - 0x502200");

        static SoundEvent *entity_llama_ambient asm("0x109C652C - 0x502200");

        static SoundEvent *entity_llama_angry asm("0x109C6530 - 0x502200");

        static SoundEvent *entity_llama_death asm("0x109C6538 - 0x502200");

        static SoundEvent *entity_llama_eat asm("0x109C653C - 0x502200");

        static SoundEvent *entity_llama_hurt asm("0x109C6540 - 0x502200");

        static SoundEvent *entity_llama_spit asm("0x109C6544 - 0x502200");

        static SoundEvent *entity_llama_step asm("0x109C6548 - 0x502200");

        static SoundEvent *entity_llama_swag asm("0x109C654C - 0x502200");

        static SoundEvent *mob_slime_big asm("0x109C6550 - 0x502200");

        static SoundEvent *mob_slime_big_2 asm("0x109C6554 - 0x502200");

        static SoundEvent *mob_magmacube_jump asm("0x109C6558 - 0x502200");

        static SoundEvent *mob_magmacube_big asm("0x109C655C - 0x502200");

        static SoundEvent *dig_stone_4 asm("0x109C6560 - 0x502200");

        static SoundEvent *step_stone_6 asm("0x109C6564 - 0x502200");

        static SoundEvent *step_stone_7 asm("0x109C6568 - 0x502200");

        static SoundEvent *dig_stone_5 asm("0x109C656C - 0x502200");

        static SoundEvent *step_stone_8 asm("0x109C6578 - 0x502200");

        static SoundEvent *random_click_5 asm("0x109C6570 - 0x502200");

        static SoundEvent *random_click_6 asm("0x109C6574 - 0x502200");

        static SoundEvent *minecart_inside asm("0x109C657C - 0x502200");

        static SoundEvent *minecart_base asm("0x109C6580 - 0x502200");

        static SoundEvent *mob_sheep_shear asm("0x109C6584 - 0x502200");

        static SoundEvent *mob_horse_donkey_idle_2 asm("0x109C6588 - 0x502200");

        static SoundEvent *mob_horse_donkey_death_2 asm("0x109C6590 - 0x502200");

        static SoundEvent *mob_horse_donkey_hit_2 asm("0x109C6594 - 0x502200");

        static SoundEvent *note_bd asm("0x109C659C - 0x502200");

        static SoundEvent *note_bassattack asm("0x109C65A0 - 0x502200");

        static SoundEvent *note_harp asm("0x109C65A4 - 0x502200");

        static SoundEvent *note_hat asm("0x109C65A8 - 0x502200");

        static SoundEvent *note_pling asm("0x109C65AC - 0x502200");

        static SoundEvent *note_snare asm("0x109C65B0 - 0x502200");

        static SoundEvent *block_note_bell asm("0x109C6A90 - 0x502200");

        static SoundEvent *block_note_chime asm("0x109C6A94 - 0x502200");

        static SoundEvent *block_note_flute asm("0x109C6A98 - 0x502200");

        static SoundEvent *block_note_guitar asm("0x109C6A9C - 0x502200");

        static SoundEvent *block_note_xylophone asm("0x109C6A8C - 0x502200");

        static SoundEvent *entity_painting_break asm("0x109C65B4 - 0x502200");

        static SoundEvent *entity_painting_place asm("0x109C65B8 - 0x502200");

        static SoundEvent *entity_parrot_ambient asm("0x109C65BC - 0x502200");

        static SoundEvent *entity_parrot_death asm("0x109C65C0 - 0x502200");

        static SoundEvent *entity_parrot_eat asm("0x109C65C4 - 0x502200");

        static SoundEvent *entity_parrot_fly asm("0x109C65C8 - 0x502200");

        static SoundEvent *entity_parrot_hurt asm("0x109C65CC - 0x502200");

        static SoundEvent *entity_parrot_step asm("0x109C663C - 0x502200");

        static SoundEvent *mob_pig_idle asm("0x109C6640 - 0x502200");

        static SoundEvent *mob_pig_death asm("0x109C6644 - 0x502200");

        static SoundEvent *mob_pig_idle_2 asm("0x109C6648 - 0x502200");

        static SoundEvent *mob_horse_leather_2 asm("0x109C664C - 0x502200");

        static SoundEvent *mob_pig_step asm("0x109C6650 - 0x502200");

        static SoundEvent *tile_piston_in asm("0x109C6654 - 0x502200");

        static SoundEvent *tile_piston_out asm("0x109C6658 - 0x502200");

        static SoundEvent *entity_player_attack_crit asm("0x109C665C - 0x502200");

        static SoundEvent *entity_player_attack_knockback asm("0x109C6660 - 0x502200");

        static SoundEvent *entity_player_attack_weak asm("0x109C6664 - 0x502200");

        static SoundEvent *entity_player_attack_strong asm("0x109C6668 - 0x502200");

        static SoundEvent *entity_player_attack_sweep asm("0x109C666C - 0x502200");

        static SoundEvent *entity_player_attack_weak_2 asm("0x109C6670 - 0x502200");

        static SoundEvent *game_hostile_hurt_fall_big_3 asm("0x109C6674 - 0x502200");

        static SoundEvent *random_breath asm("0x109C6678 - 0x502200");

        static SoundEvent *random_burp asm("0x109C667C - 0x502200");

        static SoundEvent *entity_player_death asm("0x109C6680 - 0x502200");

        static SoundEvent *entity_player_hurt asm("0x109C6684 - 0x502200");

        static SoundEvent *random_levelup asm("0x109C6688 - 0x502200");

        static SoundEvent *game_hostile_hurt_fall_small_3 asm("0x109C668C - 0x502200");

        static SoundEvent *liquid_heavy_splash asm("0x109C6694 - 0x502200");

        static SoundEvent *liquid_splash asm("0x109C6690 - 0x502200");

        static SoundEvent *liquid_swim_2 asm("0x109C6698 - 0x502200");

        static SoundEvent *entity_player_hurt_drown asm("0x109C6AB4 - 0x502200");

        static SoundEvent *entity_player_hurt_on_fire asm("0x109C6AB8 - 0x502200");

        static SoundEvent *entity_polarbear_idle asm("0x109C66A4 - 0x502200");

        static SoundEvent *entity_polarbear_babyidle asm("0x109C66A8 - 0x502200");

        static SoundEvent *entity_polarbear_death asm("0x109C66AC - 0x502200");

        static SoundEvent *entity_polarbear_hurt asm("0x109C66B0 - 0x502200");

        static SoundEvent *entity_polarbear_step asm("0x109C66B4 - 0x502200");

        static SoundEvent *entity_polarbear_warning asm("0x109C66B8 - 0x502200");

        static SoundEvent *portal_portal asm("0x109C66BC - 0x502200");

        static SoundEvent *portal_travel asm("0x109C66C0 - 0x502200");

        static SoundEvent *portal_trigger asm("0x109C66C4 - 0x502200");

        static SoundEvent *entity_rabbit_idle asm("0x109C66C8 - 0x502200");

        static SoundEvent *entity_rabbit_attack asm("0x109C66CC - 0x502200");

        static SoundEvent *mob_rabbit_death asm("0x109C66D0 - 0x502200");

        static SoundEvent *entity_rabbit_hurt asm("0x109C66D4 - 0x502200");

        static SoundEvent *entity_rabbit_hop asm("0x109C66D8 - 0x502200");

        static SoundEvent *_11 asm("0x109C66DC - 0x502200");

        static SoundEvent *_13 asm("0x109C66E0 - 0x502200");

        static SoundEvent *blocks asm("0x109C66E4 - 0x502200");

        static SoundEvent *cat asm("0x109C66E8 - 0x502200");

        static SoundEvent *chirp asm("0x109C66EC - 0x502200");

        static SoundEvent *far asm("0x109C66F0 - 0x502200");

        static SoundEvent *mall asm("0x109C66F4 - 0x502200");

        static SoundEvent *mellohi asm("0x109C66F8 - 0x502200");

        static SoundEvent *stal asm("0x109C66FC - 0x502200");

        static SoundEvent *strad asm("0x109C6700 - 0x502200");

        static SoundEvent *where_are_we_now asm("0x109C6704 - 0x502200");

        static SoundEvent *ward asm("0x109C6708 - 0x502200");

        static SoundEvent *random_fizz_5 asm("0x109C670C - 0x502200");

        static SoundEvent *dig_sand asm("0x109C6710 - 0x502200");

        static SoundEvent *step_sand asm("0x109C6714 - 0x502200");

        static SoundEvent *step_sand_2 asm("0x109C6718 - 0x502200");

        static SoundEvent *dig_sand_2 asm("0x109C671C - 0x502200");

        static SoundEvent *step_sand_3 asm("0x109C6720 - 0x502200");

        static SoundEvent *mob_sheep_idle asm("0x109C6724 - 0x502200");

        static SoundEvent *mob_sheep_idle_2 asm("0x109C6728 - 0x502200");

        static SoundEvent *mob_sheep_idle_3 asm("0x109C672C - 0x502200");

        static SoundEvent *mob_sheep_shear_2 asm("0x109C6730 - 0x502200");

        static SoundEvent *mob_sheep_step asm("0x109C6734 - 0x502200");

        static SoundEvent *item_shield_block asm("0x109C6738 - 0x502200");

        static SoundEvent *random_break_2 asm("0x109C673C - 0x502200");

        static SoundEvent *item_shovel_flatten asm("0x109C6740 - 0x502200");

        static SoundEvent *item_totem_use asm("0x109C6884 - 0x502200");

        static SoundEvent *block_shulker_box_close asm("0x109C6748 - 0x502200");

        static SoundEvent *block_shulker_box_open asm("0x109C674C - 0x502200");

        static SoundEvent *entity_shulker_ambient asm("0x109C6744 - 0x502200");

        static SoundEvent *entity_shulker_close asm("0x109C6758 - 0x502200");

        static SoundEvent *entity_shulker_death asm("0x109C675C - 0x502200");

        static SoundEvent *entity_shulker_hurt asm("0x109C6760 - 0x502200");

        static SoundEvent *entity_shulker_hurt_closed asm("0x109C6764 - 0x502200");

        static SoundEvent *entity_shulker_open asm("0x109C6768 - 0x502200");

        static SoundEvent *entity_shulker_shoot asm("0x109C676C - 0x502200");

        static SoundEvent *mob_endermen_portal_3 asm("0x109C6770 - 0x502200");

        static SoundEvent *entity_shulker_bullet_hit asm("0x109C6750 - 0x502200");

        static SoundEvent *entity_shulker_bullet_hit_2 asm("0x109C6754 - 0x502200");

        static SoundEvent *mob_silverfish_idle_2 asm("0x109C6774 - 0x502200");

        static SoundEvent *mob_silverfish_kill_2 asm("0x109C6778 - 0x502200");

        static SoundEvent *mob_silverfish_hit_2 asm("0x109C677C - 0x502200");

        static SoundEvent *mob_silverfish_step_2 asm("0x109C6780 - 0x502200");

        static SoundEvent *mob_skeleton_idle asm("0x109C6784 - 0x502200");

        static SoundEvent *mob_skeleton_death asm("0x109C6788 - 0x502200");

        static SoundEvent *mob_skeleton_hurt asm("0x109C67A8 - 0x502200");

        static SoundEvent *random_bow_8 asm("0x109C67AC - 0x502200");

        static SoundEvent *mob_skeleton_step asm("0x109C67B0 - 0x502200");

        static SoundEvent *mob_horse_skeleton_idle asm("0x109C678C - 0x502200");

        static SoundEvent *mob_horse_skeleton_death asm("0x109C6790 - 0x502200");

        static SoundEvent *mob_horse_skeleton_hit asm("0x109C6794 - 0x502200");

        static SoundEvent *mob_horse_skeleton_water_gallop asm("0x109C6798 - 0x502200");

        static SoundEvent *mob_horse_skeleton_water_idle asm("0x109C679C - 0x502200");

        static SoundEvent *mob_horse_skeleton_water_jump asm("0x109C67A0 - 0x502200");

        static SoundEvent *mob_horse_skeleton_water_soft asm("0x109C67A4 - 0x502200");

        static SoundEvent *mob_slime_big_3 asm("0x109C67B8 - 0x502200");

        static SoundEvent *mob_slime_small asm("0x109C67C0 - 0x502200");

        static SoundEvent *mob_slime_small_2 asm("0x109C67C4 - 0x502200");

        static SoundEvent *mob_slime_small_3 asm("0x109C67D0 - 0x502200");

        static SoundEvent *mob_slime_small_4 asm("0x109C67D8 - 0x502200");

        static SoundEvent *mob_slime_attack asm("0x109C67B4 - 0x502200");

        static SoundEvent *mob_slime_big_4 asm("0x109C67BC - 0x502200");

        static SoundEvent *mob_slime_big_5 asm("0x109C67C8 - 0x502200");

        static SoundEvent *mob_slime_big_6 asm("0x109C67CC - 0x502200");

        static SoundEvent *mob_slime_big_7 asm("0x109C67D4 - 0x502200");

        static SoundEvent *mob_slime_small_5 asm("0x109C67DC - 0x502200");

        static SoundEvent *mob_slime_small_6 asm("0x109C67E0 - 0x502200");

        static SoundEvent *mob_magmacube_small asm("0x109C67E4 - 0x502200");

        static SoundEvent *mob_slime_small_7 asm("0x109C67E8 - 0x502200");

        static SoundEvent *mob_slime_small_8 asm("0x109C67EC - 0x502200");

        static SoundEvent *mob_slime_small_9 asm("0x109C67F0 - 0x502200");

        static SoundEvent *mob_slime_small_10 asm("0x109C67F4 - 0x502200");

        static SoundEvent *random_bow_9 asm("0x109C67F8 - 0x502200");

        static SoundEvent *entity_snowman_ambient asm("0x109C67FC - 0x502200");

        static SoundEvent *entity_snowman_death asm("0x109C6800 - 0x502200");

        static SoundEvent *entity_snowman_hurt asm("0x109C6804 - 0x502200");

        static SoundEvent *random_bow_10 asm("0x109C6808 - 0x502200");

        static SoundEvent *dig_snow asm("0x109C680C - 0x502200");

        static SoundEvent *step_snow asm("0x109C6810 - 0x502200");

        static SoundEvent *step_snow_2 asm("0x109C6814 - 0x502200");

        static SoundEvent *dig_snow_2 asm("0x109C6818 - 0x502200");

        static SoundEvent *step_snow_3 asm("0x109C681C - 0x502200");

        static SoundEvent *mob_spider_idle asm("0x109C6820 - 0x502200");

        static SoundEvent *mob_spider_death asm("0x109C6824 - 0x502200");

        static SoundEvent *mob_spider_idle_2 asm("0x109C6828 - 0x502200");

        static SoundEvent *mob_spider_step asm("0x109C682C - 0x502200");

        static SoundEvent *random_glass_2 asm("0x109C6830 - 0x502200");

        static SoundEvent *random_bow_11 asm("0x109C6834 - 0x502200");

        static SoundEvent *entity_squid_idle asm("0x109C6838 - 0x502200");

        static SoundEvent *entity_squid_death asm("0x109C683C - 0x502200");

        static SoundEvent *entity_squid_hurt asm("0x109C6840 - 0x502200");

        static SoundEvent *entity_squid_squirt asm("0x109C6844 - 0x502200");

        static SoundEvent *dig_stone_6 asm("0x109C6848 - 0x502200");

        static SoundEvent *step_stone_9 asm("0x109C6854 - 0x502200");

        static SoundEvent *step_stone_10 asm("0x109C6858 - 0x502200");

        static SoundEvent *dig_stone_7 asm("0x109C685C - 0x502200");

        static SoundEvent *step_stone_11 asm("0x109C6868 - 0x502200");

        static SoundEvent *random_click_7 asm("0x109C684C - 0x502200");

        static SoundEvent *random_click_8 asm("0x109C6850 - 0x502200");

        static SoundEvent *random_click_9 asm("0x109C6860 - 0x502200");

        static SoundEvent *random_click_10 asm("0x109C6864 - 0x502200");

        static SoundEvent *entity_stray_idle asm("0x109C686C - 0x502200");

        static SoundEvent *entity_stray_death asm("0x109C6870 - 0x502200");

        static SoundEvent *entity_stray_hurt asm("0x109C6874 - 0x502200");

        static SoundEvent *entity_stray_step asm("0x109C6878 - 0x502200");

        static SoundEvent *enchant_thorns_hit asm("0x109C687C - 0x502200");

        static SoundEvent *random_fuse_2 asm("0x109C6880 - 0x502200");

        static SoundEvent *random_click_11 asm("0x109C6888 - 0x502200");

        static SoundEvent *random_click_12 asm("0x109C688C - 0x502200");

        static SoundEvent *random_click_13 asm("0x109C6890 - 0x502200");

        static SoundEvent *random_bowhit_2 asm("0x109C6894 - 0x502200");

        static SoundEvent *random_click_14 asm("0x109C6898 - 0x502200");

        static SoundEvent *entity_vex_idle asm("0x109C689C - 0x502200");

        static SoundEvent *entity_vex_charge asm("0x109C68A0 - 0x502200");

        static SoundEvent *entity_vex_death asm("0x109C68A4 - 0x502200");

        static SoundEvent *entity_vex_hurt asm("0x109C68A8 - 0x502200");

        static SoundEvent *mob_villager_idle asm("0x109C68AC - 0x502200");

        static SoundEvent *mob_villager_death asm("0x109C68B0 - 0x502200");

        static SoundEvent *mob_villager_hit asm("0x109C68B4 - 0x502200");

        static SoundEvent *mob_villager_no asm("0x109C68B8 - 0x502200");

        static SoundEvent *mob_villager_haggle asm("0x109C68BC - 0x502200");

        static SoundEvent *mob_villager_yes asm("0x109C68C0 - 0x502200");

        static SoundEvent *entity_vindication_illager_ambient asm("0x109C68C4 - 0x502200");

        static SoundEvent *entity_vindication_illager_death asm("0x109C68C8 - 0x502200");

        static SoundEvent *entity_vindication_illager_hurt asm("0x109C68CC - 0x502200");

        static SoundEvent *block_waterlily_place asm("0x109C68D0 - 0x502200");

        static SoundEvent *liquid_water asm("0x109C68D4 - 0x502200");

        static SoundEvent *ambient_weather_rain asm("0x109C68D8 - 0x502200");

        static SoundEvent *ambient_weather_rain_2 asm("0x109C68DC - 0x502200");

        static SoundEvent *entity_witch_idle asm("0x109C68E0 - 0x502200");

        static SoundEvent *entity_witch_death asm("0x109C68E4 - 0x502200");

        static SoundEvent *entity_witch_drink asm("0x109C68E8 - 0x502200");

        static SoundEvent *entity_witch_hurt asm("0x109C68EC - 0x502200");

        static SoundEvent *entity_witch_throw asm("0x109C68F0 - 0x502200");

        static SoundEvent *mob_wither_idle asm("0x109C68F4 - 0x502200");

        static SoundEvent *mob_zombie_woodbreak asm("0x109C68F8 - 0x502200");

        static SoundEvent *mob_wither_death asm("0x109C68FC - 0x502200");

        static SoundEvent *mob_wither_hurt asm("0x109C6900 - 0x502200");

        static SoundEvent *mob_wither_shoot asm("0x109C6904 - 0x502200");

        static SoundEvent *mob_wither_spawn asm("0x109C6918 - 0x502200");

        static SoundEvent *mob_wither_skeleton_idle asm("0x109C6908 - 0x502200");

        static SoundEvent *mob_wither_skeleton_death asm("0x109C690C - 0x502200");

        static SoundEvent *mob_wither_skeleton_hurt asm("0x109C6910 - 0x502200");

        static SoundEvent *mob_wither_skeleton_step asm("0x109C6914 - 0x502200");

        static SoundEvent *mob_wolf_bark asm("0x109C691C - 0x502200");

        static SoundEvent *mob_wolf_death asm("0x109C6920 - 0x502200");

        static SoundEvent *mob_wolf_growl asm("0x109C6924 - 0x502200");

        static SoundEvent *mob_wolf_howl asm("0x109C6928 - 0x502200");

        static SoundEvent *mob_wolf_hurt asm("0x109C692C - 0x502200");

        static SoundEvent *mob_wolf_panting asm("0x109C6930 - 0x502200");

        static SoundEvent *mob_wolf_shake asm("0x109C6934 - 0x502200");

        static SoundEvent *mob_wolf_step asm("0x109C6938 - 0x502200");

        static SoundEvent *mob_wolf_whine asm("0x109C693C - 0x502200");

        static SoundEvent *block_wooden_door_close asm("0x109C6940 - 0x502200");

        static SoundEvent *block_wooden_door_open asm("0x109C6944 - 0x502200");

        static SoundEvent *block_wooden_trapdoor_close asm("0x109C6948 - 0x502200");

        static SoundEvent *block_wooden_trapdoor_open asm("0x109C694C - 0x502200");

        static SoundEvent *dig_wood_4 asm("0x109C6950 - 0x502200");

        static SoundEvent *step_wood asm("0x109C695C - 0x502200");

        static SoundEvent *step_wood_2 asm("0x109C6960 - 0x502200");

        static SoundEvent *dig_wood_5 asm("0x109C6964 - 0x502200");

        static SoundEvent *step_wood_3 asm("0x109C6970 - 0x502200");

        static SoundEvent *random_click_15 asm("0x109C6954 - 0x502200");

        static SoundEvent *random_click_16 asm("0x109C6958 - 0x502200");

        static SoundEvent *random_click_17 asm("0x109C6968 - 0x502200");

        static SoundEvent *random_click_18 asm("0x109C696C - 0x502200");

        static SoundEvent *mob_zombie_idle asm("0x109C6974 - 0x502200");

        static SoundEvent *mob_zombie_wood asm("0x109C6978 - 0x502200");

        static SoundEvent *mob_zombie_metal asm("0x109C697C - 0x502200");

        static SoundEvent *mob_zombie_woodbreak_2 asm("0x109C6980 - 0x502200");

        static SoundEvent *mob_zombie_death asm("0x109C6984 - 0x502200");

        static SoundEvent *mob_zombie_hurt asm("0x109C6994 - 0x502200");

        static SoundEvent *mob_zombie_infect asm("0x109C6998 - 0x502200");

        static SoundEvent *mob_zombie_step asm("0x109C69AC - 0x502200");

        static SoundEvent *mob_horse_zombie_idle asm("0x109C6988 - 0x502200");

        static SoundEvent *mob_horse_zombie_death asm("0x109C698C - 0x502200");

        static SoundEvent *mob_horse_zombie_hit asm("0x109C6990 - 0x502200");

        static SoundEvent *mob_zombiepig_idle asm("0x109C699C - 0x502200");

        static SoundEvent *mob_zombiepig_angry asm("0x109C69A0 - 0x502200");

        static SoundEvent *mob_zombiepig_death asm("0x109C69A4 - 0x502200");

        static SoundEvent *mob_zombiepig_hurt asm("0x109C69A8 - 0x502200");

        static SoundEvent *mob_zombie_villager_idle asm("0x109C69B0 - 0x502200");

        static SoundEvent *mob_zombie_unfect asm("0x109C69B4 - 0x502200");

        static SoundEvent *mob_zombie_remedy asm("0x109C69B8 - 0x502200");

        static SoundEvent *mob_zombie_villager_death asm("0x109C69BC - 0x502200");

        static SoundEvent *mob_zombie_villager_hurt asm("0x109C69C0 - 0x502200");

        static SoundEvent *mob_zombie_step_2 asm("0x109C69C4 - 0x502200");

        static SoundEvent *MG01_showdown asm("0x109C69C8 - 0x502200");

        static SoundEvent *MG01_celebration asm("0x109C69CC - 0x502200");

        static SoundEvent *MG01_chest asm("0x109C69D0 - 0x502200");

        static SoundEvent *MG01_death asm("0x109C69D4 - 0x502200");

        static SoundEvent *MG01_grace asm("0x109C69D8 - 0x502200");

        static SoundEvent *MG01_gracezero asm("0x109C69DC - 0x502200");

        static SoundEvent *MG01_lobby asm("0x109C69E0 - 0x502200");

        static SoundEvent *MG01_lobbyaccent asm("0x109C69E4 - 0x502200");

        static SoundEvent *MG01_lobbyzero asm("0x109C69E8 - 0x502200");

        static SoundEvent *MG01_gamestart asm("0x109C69EC - 0x502200");

        static SoundEvent *MG01_startcountdown asm("0x109C69F0 - 0x502200");

        static SoundEvent *MG02_showdown asm("0x109C69F4 - 0x502200");

        static SoundEvent *MG02_gamestart asm("0x109C69F8 - 0x502200");

        static SoundEvent *MG02_gameend asm("0x109C69FC - 0x502200");

        static SoundEvent *MG02_death asm("0x109C6A00 - 0x502200");

        static SoundEvent *MG02_startcountdown asm("0x109C6A04 - 0x502200");

        static SoundEvent *MG02_falling asm("0x109C6A08 - 0x502200");

        static SoundEvent *MG03_death asm("0x109C6A0C - 0x502200");

        static SoundEvent *MG03_checkpoint asm("0x109C6A10 - 0x502200");

        static SoundEvent *MG03_boost asm("0x109C6A14 - 0x502200");

        static SoundEvent *MG03_bestTime asm("0x109C6A18 - 0x502200");

        static SoundEvent *MG03_finishLine asm("0x109C6A1C - 0x502200");

        static SoundEvent *MG03_finishLineBestScore asm("0x109C6A20 - 0x502200");

        static SoundEvent *MG03_finishLineBestTime asm("0x109C6A24 - 0x502200");

        static SoundEvent *MG03_finishLine1st asm("0x109C6A28 - 0x502200");

        static SoundEvent *MG03_finishLine1stBestScore asm("0x109C6A2C - 0x502200");

        static SoundEvent *MG03_finishLine1stBestTime asm("0x109C6A30 - 0x502200");

        static SoundEvent *MG03_finishLine2nd asm("0x109C6A34 - 0x502200");

        static SoundEvent *MG03_finishLine2ndBestScore asm("0x109C6A38 - 0x502200");

        static SoundEvent *MG03_finishLine2ndBestTime asm("0x109C6A3C - 0x502200");

        static SoundEvent *MG03_finishLine3rd asm("0x109C6A40 - 0x502200");

        static SoundEvent *MG03_finishLine3rdBestScore asm("0x109C6A44 - 0x502200");

        static SoundEvent *MG03_finishLine3rdBestTime asm("0x109C6A48 - 0x502200");

        static SoundEvent *MG03_thermalBoost asm("0x109C6A4C - 0x502200");

        static SoundEvent *MG03_winner asm("0x109C6A50 - 0x502200");

        static SoundEvent *MG03_winnerAnnounce asm("0x109C6A54 - 0x502200");

        static SoundEvent *MG03_bestScore asm("0x109C6A58 - 0x502200");

        static SoundEvent *MG03_redAlertLoop asm("0x109C6A5C - 0x502200");

        static SoundEvent *MG03_farAlertSolo asm("0x109C6A60 - 0x502200");

        static SoundEvent *MG03_emeraldPointTick asm("0x109C6A64 - 0x502200");

        static SoundEvent *MG03_emeraldPointTok asm("0x109C6A68 - 0x502200");

        static SoundEvent *MG03_goldPointTick asm("0x109C6A6C - 0x502200");

        static SoundEvent *MG03_goldPointTok asm("0x109C6A70 - 0x502200");

        static SoundEvent *MG03_diamondPoint asm("0x109C6A74 - 0x502200");

        static SoundEvent *MG03_respawn asm("0x109C6A78 - 0x502200");

        static SoundEvent *MG03_countdownZero asm("0x109C6A7C - 0x502200");

        static SoundEvent *MG03_fallBig asm("0x109C6A80 - 0x502200");

        static SoundEvent *MG03_fallSmall asm("0x109C6A84 - 0x502200");

        static SoundEvent *MG03_hit asm("0x109C6A88 - 0x502200");

        static SoundEvent *block_conduit_activate asm("0x109C6AF8 - 0x502200");

        static SoundEvent *block_conduit_ambient asm("0x109C6AFC - 0x502200");

        static SoundEvent *block_conduit_attack asm("0x109C6B00 - 0x502200");

        static SoundEvent *block_conduit_deactivate asm("0x109C6B04 - 0x502200");

        static SoundEvent *block_conduit_short asm("0x109C6B08 - 0x502200");

        static SoundEvent *block_beacon_activate asm("0x109C6B0C - 0x502200");

        static SoundEvent *block_beacon_ambient asm("0x109C6B10 - 0x502200");

        static SoundEvent *block_beacon_power asm("0x109C6B14 - 0x502200");

        static SoundEvent *block_beacon_deactivate asm("0x109C6B18 - 0x502200");

        static SoundEvent *block_pumpkin_carve asm("0x109C6B1C - 0x502200");

        static SoundEvent *entity_fish_flop asm("0x109C6B20 - 0x502200");

        static SoundEvent *entity_fish_hurt asm("0x109C6B24 - 0x502200");

        static SoundEvent *entity_fish_swim asm("0x109C6B28 - 0x502200");

        static SoundEvent *entity_pufferfish_blow_out asm("0x109C6B2C - 0x502200");

        static SoundEvent *entity_pufferfish_blow_up asm("0x109C6B30 - 0x502200");

        static SoundEvent *entity_pufferfish_death asm("0x109C6B34 - 0x502200");

        static SoundEvent *entity_pufferfish_flop asm("0x109C6B38 - 0x502200");

        static SoundEvent *entity_pufferfish_hurt asm("0x109C6B3C - 0x502200");

        static SoundEvent *entity_pufferfish_sting asm("0x109C6B40 - 0x502200");

        static SoundEvent *item_trident_ground_impact asm("0x109C6B44 - 0x502200");

        static SoundEvent *item_trident_pierce asm("0x109C6B48 - 0x502200");

        static SoundEvent *item_trident_return asm("0x109C6B4C - 0x502200");

        static SoundEvent *item_trident_riptide1 asm("0x109C6B50 - 0x502200");

        static SoundEvent *item_trident_riptide2 asm("0x109C6B54 - 0x502200");

        static SoundEvent *item_trident_riptide3 asm("0x109C6B58 - 0x502200");

        static SoundEvent *item_trident_throw asm("0x109C6B5C - 0x502200");

        static SoundEvent *item_trident_thunder asm("0x109C6B60 - 0x502200");

        static SoundEvent *mob_dolphin_attack asm("0x109C6B64 - 0x502200");

        static SoundEvent *mob_dolphin_blowhole asm("0x109C6B68 - 0x502200");

        static SoundEvent *mob_dolphin_death asm("0x109C6B6C - 0x502200");

        static SoundEvent *mob_dolphin_eat asm("0x109C6B70 - 0x502200");

        static SoundEvent *mob_dolphin_hurt asm("0x109C6B74 - 0x502200");

        static SoundEvent *mob_dolphin_idle asm("0x109C6B78 - 0x502200");

        static SoundEvent *mob_dolphin_idle_water asm("0x109C6B7C - 0x502200");

        static SoundEvent *mob_dolphin_jump asm("0x109C6B80 - 0x502200");

        static SoundEvent *mob_dolphin_play asm("0x109C6B84 - 0x502200");

        static SoundEvent *mob_dolphin_splash asm("0x109C6B88 - 0x502200");

        static SoundEvent *mob_dolphin_swim asm("0x109C6B8C - 0x502200");

        static SoundEvent *mob_drowned_convert asm("0x109C6B90 - 0x502200");

        static SoundEvent *mob_drowned_death asm("0x109C6B94 - 0x502200");

        static SoundEvent *mob_drowned_hurt asm("0x109C6B98 - 0x502200");

        static SoundEvent *mob_drowned_idle asm("0x109C6B9C - 0x502200");

        static SoundEvent *mob_drowned_step asm("0x109C6BA0 - 0x502200");

        static SoundEvent *mob_drowned_water_death asm("0x109C6BA4 - 0x502200");

        static SoundEvent *mob_drowned_water_hurt asm("0x109C6BA8 - 0x502200");

        static SoundEvent *mob_drowned_water_idle asm("0x109C6BAC - 0x502200");

        static SoundEvent *mob_phantom_bite asm("0x109C6BB0 - 0x502200");

        static SoundEvent *mob_phantom_death asm("0x109C6BB4 - 0x502200");

        static SoundEvent *mob_phantom_flap asm("0x109C6BB8 - 0x502200");

        static SoundEvent *mob_phantom_hurt asm("0x109C6BBC - 0x502200");

        static SoundEvent *mob_phantom_idle asm("0x109C6BC0 - 0x502200");

        static SoundEvent *mob_phantom_swoop asm("0x109C6BC4 - 0x502200");

        static SoundEvent *mob_turtle_death asm("0x109C6BCC - 0x502200");

        static SoundEvent *mob_turtle_idle asm("0x109C6BD0 - 0x502200");

        static SoundEvent *mob_turtle_hurt asm("0x109C6BD4 - 0x502200");

        static SoundEvent *mob_turtle_walk asm("0x109C6BD8 - 0x502200");

        static SoundEvent *mob_turtle_swim_swim asm("0x109C6BDC - 0x502200");

        static SoundEvent *mob_turtle_egg_drop_egg asm("0x109C6BE0 - 0x502200");

        static SoundEvent *mob_turtle_egg_egg_break asm("0x109C6BE4 - 0x502200");

        static SoundEvent *mob_turtle_egg_egg_crack asm("0x109C6BE8 - 0x502200");

        static SoundEvent *mob_turtle_egg_jump_egg asm("0x109C6BEC - 0x502200");

        static SoundEvent *mob_turtle_baby_death asm("0x109C6BF0 - 0x502200");

        static SoundEvent *mob_turtle_baby_egg_hatched asm("0x109C6BF4 - 0x502200");

        static SoundEvent *mob_turtle_baby_hurt asm("0x109C6BF8 - 0x502200");

        static SoundEvent *mob_turtle_baby_shamble asm("0x109C6BFC - 0x502200");

        static SoundEvent *ambient_underwater_enter asm("0x109C6C00 - 0x502200");

        static SoundEvent *ambient_underwater_exit asm("0x109C6C04 - 0x502200");

        static SoundEvent *block_bubble_column_bubble asm("0x109C6C08 - 0x502200");

        static SoundEvent *block_bubble_column_upwards_ambient asm("0x109C6C0C - 0x502200");

        static SoundEvent *block_bubble_column_upwards_inside asm("0x109C6C10 - 0x502200");

        static SoundEvent *block_bubble_column_whirlpool_ambient asm("0x109C6C14 - 0x502200");

        static SoundEvent *block_bubble_column_whirlpool_inside asm("0x109C6C18 - 0x502200");

        static float getNoteBlockPitch(int count)
        {
            switch (count)
            {
                case 0:
                    return 0.5F;
                case 12:
                    return 1.0F;
                default:
                    return mc_powf(2.0F, (-12.0F + MLink::ToFloat(count)) / 12.0F);
            };
        }

        void getName(const mstd::basic_string<wchar_t> &name) const
        {
            MLINK_FUNC(void, 0x028E11EC, const SoundEvent *, const mstd::basic_string<wchar_t> &)(this, name);
        }

        mstd::basic_string<wchar_t> getName() const
        {
            mstd::basic_string<wchar_t> name;
            getName(name);
            return name;
        }
    };
} // namespace mc
