/*
** EPITECH PROJECT, 2023
** event
** File description:
** true
*/

#include "all.h"

void prss_event(all_t *all)
{
    if (sf::Keyboard::isKeyPressed(sf::Keyboard::Numpad1))
        new_player(all);
}

void the_event(all_t *all)
{
    event_menu(all);
    //mousse_pos(all);
}