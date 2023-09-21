/*
** EPITECH PROJECT, 2023
** event menu
** File description:
** true
*/

#include "all.h"

void set_stat(all_t *all)
{
    char sex;
    if (all->menu.f == 2)
        sex = 'f';
        else
            sex = 'm';
    all->index = 1;
    all->playstat.setPerso(all->menu.name_enter, sex, 0);
}

void event_menu_scene_4(all_t *all)
{
    sf::Vector2i pos = sf::Mouse::getPosition(all->window);

    if (pos.x > 191 && pos.x < 373 && pos.y > 549 && pos.y < 719 && all->menu.result < 3)
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && all->menu.tag_2 == 0)
            all->menu.tag_1 = 1;

    if (pos.x > 486 && pos.x < 683 && pos.y > 549 && pos.y < 719 && all->menu.result < 3)
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left) && all->menu.tag_1 == 0)
            all->menu.tag_2 = 1;

    if (pos.x > 781 && pos.x < 978 && pos.y > 549 && pos.y < 719 && all->menu.result < 3)
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->menu.tag_3 = 1;

    if (pos.x > 1082 && pos.x < 1272 && pos.y > 549 && pos.y < 719 && all->menu.result < 3)
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->menu.tag_4 = 1;

    if (pos.x > 1389 && pos.x < 1579 && pos.y > 549 && pos.y < 719 && all->menu.result < 3)
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->menu.tag_5 = 1;



    if (pos.x > 88 && pos.x < 171 && pos.y > 459 && pos.y < 559) {
        all->menu.scene_3_left.setScale({0.4, 0.4});
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            all->index = 2;
            all->menu.result = 0;
            all->menu.tag_1 = 0;
            all->menu.tag_2 = 0;
            all->menu.tag_3 = 0;
            all->menu.tag_4 = 0;
            all->menu.tag_5 = 0;
        }
    } else
        all->menu.scene_3_left.setScale({0.3, 0.3});

    if (pos.x > 723 && pos.x < 1124 && pos.y > 290 && pos.y < 389 && all->menu.result == 3) {
        all->menu.begin_f.setColor(sf::Color::White);
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left)) {
            create_save(all); //crée la save à partir des config
            charge_save(all); //envoie les config dans la save
            set_stat(all);    //envoie les valeurs donnée lors de la création dans les stats
            save(all);        //sauvegarde le personnage
            //START
            all->menu.result = 0;
            all->menu.tag_1 = 0;
            all->menu.tag_2 = 0;
            all->menu.tag_3 = 0;
            all->menu.tag_4 = 0;
            all->menu.tag_5 = 0;
            all->menu.m = 0;
            all->menu.f = 0;
            all->menu.name_state = 0;
            all->menu.name_enter = "";
        }
    } else
        all->menu.begin_f.setColor(sf::Color::Black);
}

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
        if (all->event.text.unicode != '\b' && all->menu.name_enter.size() < 9)
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

    if (pos.x > 1673 && pos.x < 1752 && pos.y > 464 && pos.y < 557 &&
        all->menu.f + all->menu.m == 2 && all->menu.name_enter[0] != '\0') {
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
            all->index = 2;
        }
    } else
        all->menu.scene_2_new_f.setColor(sf::Color::Red);

    if (pos.x > 88 && pos.x < 171 && pos.y > 459 && pos.y < 559) {
        all->menu.scene_3_left.setScale({0.4, 0.4});
        if (sf::Mouse::isButtonPressed(sf::Mouse::Left))
            all->index = 0;
    } else
        all->menu.scene_3_left.setScale({0.3, 0.3});
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
    if (all->index == 3) event_menu_scene_4(all);
}
