/*
** EPITECH PROJECT, 2023
** event_player
** File description:
** true
*/

#include "all.h"

void player_moove(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);

    if (sf::Mouse::isButtonPressed(sf::Mouse::Right))
        all->player.player.setPosition({pos.x, pos.y});
}

void event_player(all_t *all)
{
    if (all->index >= 10)
        player_moove(all);
}
