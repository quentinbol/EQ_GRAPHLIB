/*
** EPITECH PROJECT, 2023
** menuloop
** File description:
** true
*/

#include "all.h"

void menu_loop(all_t *all)
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

    all->menu.creation.textRect3 = all->menu.creation.name_input.getLocalBounds();
    all->menu.creation.name_input.setOrigin(all->menu.creation.textRect3.width/2,all->menu.creation.textRect3.height/2);
    all->menu.creation.name_input.setString(all->menu.creation.name_enter);

    all->menu.creation.result = all->menu.creation.tag_1 + all->menu.creation.tag_2 + all->menu.creation.tag_3
    + all->menu.creation.tag_4 + all->menu.creation.tag_5;
}
