/*
** EPITECH PROJECT, 2023
** event
** File description:
** true
*/

#include "all.h"

void my_event(all_t *all)
{
    std::cout << "true\n";
    all->playstat.addCoins(100);
    save(all);
}

void prss_event(all_t *all)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1))
        my_event(all);
}

void the_event(all_t *all)
{
    event_menu(all);
    prss_event(all);
    //mousse_pos(all);
}