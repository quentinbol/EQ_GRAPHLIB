/*
** EPITECH PROJECT, 2023
** init sprite 1
** File description:
** true
*/

#include "all.h"

void init_menu_scene_2(all_t *all)
{
    all->menu.scene_2_back = my_get_sprite(all->menu.scene_2_back_t,
    "assets/chose_save_back.jpg", {2.65, 2.5}, {0, 0});

    all->menu.scene_2_b_charge = my_get_sprite(all->menu.scene_2_b_charge_t,
    "assets/b_charge_save.png", {1.5, 1.5}, {470, 120});

    all->menu.scene_2_b_title = my_get_sprite(all->menu.scene_2_b_title_t,
    "assets/b_title_charge_save.png", {0.5, 0.5}, {680, 130});

    all->menu.scene_2_b_next = my_get_sprite(all->menu.scene_2_b_next_t,
    "assets/b_next_charge_save.png", {0.25, 0.25}, {1140, 580});

    all->menu.scene_2_b_create = my_get_sprite(all->menu.scene_2_b_create_t,
    "assets/b_opt.png", {0.5, 0.5}, {680, 820});

    all->menu.scene_2_new_f.setFont(all->menu.font);
    all->menu.scene_2_new_f.setString("New");
    all->menu.scene_2_new_f.setPosition({810, 840});
    all->menu.scene_2_new_f.setScale({2.5, 2.5});
    all->menu.scene_2_new_f.setColor(sf::Color::Red);

    all->menu.scene_2_name_f.setFont(all->menu.font);
    all->menu.scene_2_name_f.setPosition({900, 160});
    all->menu.scene_2_name_f.setScale({2.5, 2.5});
    all->menu.scene_2_name_f.setColor(sf::Color::Black);

    all->menu.scene_2_sex_f.setFont(all->menu.font);
    all->menu.scene_2_sex_f.setPosition({810, 270});
    all->menu.scene_2_sex_f.setScale({2, 2});

    all->menu.scene_2_level_f.setFont(all->menu.font);
    all->menu.scene_2_level_f.setPosition({800, 370});
    all->menu.scene_2_level_f.setScale({2, 2});
    all->menu.scene_2_level_f.setColor(sf::Color::Green);

    all->menu.scene_2_coins_f.setFont(all->menu.font);
    all->menu.scene_2_coins_f.setPosition({1065, 490});
    all->menu.scene_2_coins_f.setScale({2.5, 2.5});
    all->menu.scene_2_coins_f.setColor(sf::Color::Yellow);

    all->menu.scene_2_points_f.setFont(all->menu.font);
    all->menu.scene_2_points_f.setPosition({1100, 610});
    all->menu.scene_2_points_f.setScale({2.5, 2.5});
    all->menu.scene_2_points_f.setColor(sf::Color::White);
}

void init_menu(all_t *all)
{
    all->menu.font.loadFromFile("assets/font.ttf");

    all->menu.menu_back = my_get_sprite(all->menu.menu_back_t, 
    "assets/menu_background.jpg", {3, 3}, {0, 0});

    all->menu.b_play = my_get_sprite(all->menu.b_play_t, 
    "assets/b_play.png", {0.6, 0.6}, {50, 380});
    all->menu.b_play_f.setFont(all->menu.font);
    all->menu.b_play_f.setString("Play");
    all->menu.b_play_f.setPosition({170, 440});
    all->menu.b_play_f.setScale({2, 2});
    all->menu.b_play_f.setColor(sf::Color::Black);

    all->menu.b_opt = my_get_sprite(all->menu.b_opt_t, 
    "assets/b_opt.png", {0.4, 0.4}, {50, 600});
    all->menu.b_opt_f.setFont(all->menu.font);
    all->menu.b_opt_f.setString("Option");
    all->menu.b_opt_f.setPosition({110, 615});
    all->menu.b_opt_f.setScale({2, 2});
    all->menu.b_opt_f.setColor(sf::Color::Black);

    init_menu_scene_2(all);
}
