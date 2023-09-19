/*
** EPITECH PROJECT, 2023
** display menu
** File description:
** true
*/

#include "all.h"

void menu_scene_4(all_t *all)
{
    all->window.draw(all->menu.scene_2_back);

    all->window.draw(all->menu.b_blue_1);
    all->window.draw(all->menu.b_blue_2);
    all->window.draw(all->menu.b_blue_3);
    all->window.draw(all->menu.b_blue_4);
    all->window.draw(all->menu.b_blue_5);

    if (all->menu.tag_1 == 1)
        all->window.draw(all->menu.b_red_1);
    if (all->menu.tag_2 == 1)
        all->window.draw(all->menu.b_red_2);
    if (all->menu.tag_3 == 1)
        all->window.draw(all->menu.b_red_3);
    if (all->menu.tag_4 == 1)
        all->window.draw(all->menu.b_red_4);
    if (all->menu.tag_5 == 1)
        all->window.draw(all->menu.b_red_5);

    all->window.draw(all->menu.sword);
    all->window.draw(all->menu.bow);
    all->window.draw(all->menu.shield);
    all->window.draw(all->menu.start);
    all->window.draw(all->menu.wings);

    all->window.draw(all->menu.scene_3_left);

    if (all->menu.result != 3)
        all->window.draw(all->menu.begin);
    if (all->menu.result == 3) {
        all->window.draw(all->menu.begreen);
        all->window.draw(all->menu.begin_f);
    }
}

void menu_scene_3(all_t *all)
{
    all->window.draw(all->menu.scene_2_back);
    all->window.draw(all->menu.scene_3_b_title);
    all->window.draw(all->menu.scene_3_name_f);
    all->window.draw(all->menu.scene_3_male);
    all->window.draw(all->menu.scene_3_female);
    if (all->menu.f != 0)
        all->window.draw(all->menu.scene_3_genre);
        else
            all->window.draw(all->menu.scene_3_genre_n);
    if (all->menu.m != 0)
        all->window.draw(all->menu.scene_genre);
        else
            all->window.draw(all->menu.scene_genre_n);
    
    all->window.draw(all->menu.name_input);
    all->window.draw(all->menu.scene_3_right);
    all->window.draw(all->menu.scene_3_left);
}

void menu_scene_2(all_t *all)
{
    all->window.draw(all->menu.scene_2_back);
    if (all->menu.save == 1) {
        all->window.draw(all->menu.scene_2_b_charge);
        all->window.draw(all->menu.scene_2_b_title);
        all->window.draw(all->menu.scene_2_name_f);
        all->window.draw(all->menu.scene_2_b_next);
        all->window.draw(all->menu.scene_2_sex_f);
        all->window.draw(all->menu.scene_2_level_f);
        all->window.draw(all->menu.scene_2_coins_f);
        all->window.draw(all->menu.scene_2_points_f);
    }
    all->window.draw(all->menu.scene_2_b_create);
    all->window.draw(all->menu.scene_2_new_f);
}

void menu_scene_1(all_t *all)
{
    all->window.draw(all->menu.menu_back);
    all->window.draw(all->menu.b_play);
    all->window.draw(all->menu.b_opt);
    all->window.draw(all->menu.b_play_f);
    all->window.draw(all->menu.b_opt_f);
}

void menu_display(all_t *all)
{
    if (all->index == 0) menu_scene_1(all);
    if (all->index == 1) menu_scene_2(all);
    if (all->index == 2) menu_scene_3(all);
    if (all->index == 3) menu_scene_4(all);
}
