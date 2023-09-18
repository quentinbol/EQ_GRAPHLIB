/*
** EPITECH PROJECT, 2023
** event menu
** File description:
** true
*/

#include "all.h"

void event_menu_scene_2(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);

    if (pos.x > 728 && pos.x < 1042 && pos.y > 853 && pos.y < 930) {
        all->menu.scene_2_new_f.setColor(sf::Color::White);
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->index = 0;
    } else
        all->menu.scene_2_new_f.setColor(sf::Color::Red);
}

void event_menu_scene_1(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);
    if (pos.x > 99 && pos.x < 377 && pos.y > 448 && pos.y < 520) {
        all->menu.b_play_f.setColor(sf::Color::Red);
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->index = 1;
    } else
        all->menu.b_play_f.setColor(sf::Color::Black);
}

void event_menu(all_t *all)
{
    if (all->index == 0) event_menu_scene_1(all);
    if (all->index == 1) event_menu_scene_2(all);
}
