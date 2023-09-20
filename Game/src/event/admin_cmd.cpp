/*
** EPITECH PROJECT, 2023
** admin_command
** File description:
** true
*/

#include "all.h"

void admin_cmd(all_t *all)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1)) {
        all->playstat.addLevel(1);
        std::cout << "admin.cmd// add: 1.level --> (" << all->playstat.getLevel() << ")\n";
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad2)) {
        all->playstat.addCoins(100);
        std::cout << "admin.cmd// add: 100.coins --> (" << all->playstat.getCoins() << ")\n";
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad3)) {
        all->playstat.addPoints(10);
        std::cout << "admin.cmd// add: 10.points --> (" << all->playstat.getPoints() << ")\n";
    }
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::S)) {
        save(all);
        std::cout << "admin.cmd// saved\n";
    }
}
