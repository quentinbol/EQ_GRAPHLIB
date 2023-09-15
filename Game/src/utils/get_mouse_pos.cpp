/*
** EPITECH PROJECT, 2023
** get mousse pos
** File description:
** true
*/

#include "all.h"

void mousse_pos(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);
    if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
        std::cout << "x = " << pos.x << "     ";
        std::cout << "y = " << pos.y << "\n";
    }
}