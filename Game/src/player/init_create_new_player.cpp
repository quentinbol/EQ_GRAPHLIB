/*
** EPITECH PROJECT, 2023
** init create new player
** File description:
** true
*/

#include "all.h"

void init_create_new_player(all_t *all)
{
    all->player.player_create_back= my_get_sprite(all->player.player_create_back_t, 
    "assets/create_player_back.jpg", {3, 3}, {0, 0});
}
