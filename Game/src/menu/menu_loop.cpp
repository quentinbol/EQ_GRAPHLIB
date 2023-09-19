/*
** EPITECH PROJECT, 2023
** menuloop
** File description:
** true
*/

#include "all.h"

void loop_scene_2(all_t *all)
{
    all->menu.scene_2_name_f.setString(all->playstat.getName());
    sf::FloatRect textRect = all->menu.scene_2_name_f.getLocalBounds();
    all->menu.scene_2_name_f.setOrigin(textRect.width/2,textRect.height/2);

    if (all->playstat.getSex() == 'm') {
        all->menu.scene_2_sex_f.setString("Male");
        all->menu.scene_2_sex_f.setColor(sf::Color::Blue);
    } else {
            all->menu.scene_2_sex_f.setString("Female");
            all->menu.scene_2_sex_f.setColor(sf::Color::Magenta);
    }

    std::stringstream level;
    level << all->playstat.getLevel();
    all->menu.scene_2_level_f.setString("lvl " + level.str());

    std::stringstream coins;
    coins << all->playstat.getCoins();
    all->menu.scene_2_coins_f.setString(coins.str() + " coins");
    sf::FloatRect textRect2 = all->menu.scene_2_coins_f.getLocalBounds();
    all->menu.scene_2_coins_f.setOrigin(textRect2.width,textRect2.height);

    std::stringstream points;
    points << all->playstat.getPoints();
    all->menu.scene_2_points_f.setString(points.str() + " points");
    sf::FloatRect textRect3 = all->menu.scene_2_points_f.getLocalBounds();
    all->menu.scene_2_points_f.setOrigin(textRect3.width,textRect3.height);

    all->menu.textRect3 = all->menu.name_input.getLocalBounds();
    all->menu.name_input.setOrigin(all->menu.textRect3.width/2,all->menu.textRect3.height/2);
    all->menu.name_input.setString(all->menu.name_enter);
}

void menu_loop(all_t *all)
{
    loop_scene_2(all);
}
