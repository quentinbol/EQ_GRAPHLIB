/*
** EPITECH PROJECT, 2023
** display menu
** File description:
** true
*/

#include "all.h"

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
}