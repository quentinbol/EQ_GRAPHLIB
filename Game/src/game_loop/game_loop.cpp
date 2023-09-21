/*
** EPITECH PROJECT, 2023
** game_loop
** File description:
** true
*/

#include "all.h"

void the_game_loop(all_t *all)
{
    all->menu.actuel = time(0);
    all->menu.ltm = localtime(&all->menu.actuel);

    menu_loop(all);
}
