/*
** EPITECH PROJECT, 2023
** event menu
** File description:
** true
*/

#include "all.h"

void event_menu_scene_3_name(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);

    if (pos.x > 786 && pos.x < 1084 && pos.y > 149 && pos.y < 205) {
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->menu.name_state = 1;
    } else 
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->menu.name_state = 0;

    if (all->event.type == sf::Event::TextEntered && all->menu.name_state == 1) {
        if (all->event.text.unicode != '\b')
            all->menu.name_enter += all->event.text.unicode;
        if (all->event.text.unicode == '\b' && all->menu.name_enter.size() > 0)
            all->menu.name_enter.erase(all->menu.name_enter.size() - 1, 2);
    }
}

void event_menu_scene_3(all_t *all)
{
    event_menu_scene_3_name(all);
    if (all->menu.f == 1)
        all->menu.f = 0;
    if (all->menu.m == 1)
        all->menu.m = 0;
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);

    if (pos.x > 743 && pos.x < 814 && pos.y > 429 && pos.y < 492 && all->menu.m != 2) {
        all->menu.m = 1;
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            all->menu.m = 2;
            if (all->menu.f == 2)
                all->menu.f = 0;
        }
    }

    if (pos.x > 1043 && pos.x < 1113 && pos.y > 430 && pos.y < 489 && all->menu.f != 2) {
        all->menu.f = 1;
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            all->menu.f = 2;
            if (all->menu.m == 2)
                all->menu.m = 0;
        }
    }

    if (pos.x > 88 && pos.x < 171 && pos.y > 459 && pos.y < 559) {
        all->menu.scene_3_left.setScale({0.4, 0.4});
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            all->index = 1;
            all->menu.name_enter = "";
            all->menu.name_state = 0;
            all->menu.f = 0;
            all->menu.m = 0;
        }
    } else
        all->menu.scene_3_left.setScale({0.3, 0.3});

    if (pos.x > 1673 && pos.x < 1752 && pos.y > 464 && pos.y < 557) {
        all->menu.scene_3_right.setScale({0.4, 0.4});
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            all->index = 3;
        }
    } else
        all->menu.scene_3_right.setScale({0.3, 0.3});
}

void event_menu_scene_2(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);

    if (pos.x > 768 && pos.x < 1082 && pos.y > 853 && pos.y < 930) {
        all->menu.scene_2_new_f.setColor(sf::Color::White);
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            create_save(all);
            all->index = 2;
        }
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
    if (all->index == 2) event_menu_scene_3(all);
}
