/*
** EPITECH PROJECT, 2023
** event menu
** File description:
** true
*/

#include "all.h"

void event_menu(all_t *all)
{
    if (all->index == 0) {
        sf::Vector2i pos = sf::Mouse::getPosition(all->window);
        if (pos.x > 99 && pos.x < 377 && pos.y > 448 && pos.y < 520) {
            all->menu.b_play_f.setColor(sf::Color::Red);
            if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
                all->index = 1;
        } else
            all->menu.b_play_f.setColor(sf::Color::Black);
    }
}
