/*
** EPITECH PROJECT, 2023
** display
** File description:
** true
*/

#include "all.h"

void the_display(all_t *all)
{
    all->window.draw(all->menu.menu_back);
    all->window.draw(all->menu.b_play);
    all->window.draw(all->menu.b_opt);
    all->window.draw(all->menu.b_play_f);
    all->window.draw(all->menu.b_opt_f);
}