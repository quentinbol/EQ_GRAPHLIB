/*
** EPITECH PROJECT, 2023
** init_player
** File description:
** true
*/

#include "all.h"

void init_player(all_t *all)
{
    all->player.player = my_get_sprite(all->player.player_t,
    "assets/player.png", {0.8, 0.8}, {250, 250});
    sf::FloatRect gb = all->player.player.getGlobalBounds();
    all->player.player.setOrigin((gb.width / 2) + 30, gb.height + 25);
}
