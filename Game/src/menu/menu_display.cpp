/*
** EPITECH PROJECT, 2023
** display menu
** File description:
** true
*/

#include "all.h"

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
    if (all->index == 0)
        menu_scene_1(all);
}