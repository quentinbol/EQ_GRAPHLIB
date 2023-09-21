/*
** EPITECH PROJECT, 2023
** display
** File description:
** true
*/

#include "all.h"

void the_display(all_t *all)
{
    menu_display(all);
    if (all->index >= 10)
        all->window.draw(all->player.player);
}
