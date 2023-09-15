/*
** EPITECH PROJECT, 2023
** init sprite 1
** File description:
** true
*/

#include "all.h"

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
}
