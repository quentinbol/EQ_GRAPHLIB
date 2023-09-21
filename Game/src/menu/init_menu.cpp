/*
** EPITECH PROJECT, 2023
** init sprite 1
** File description:
** true
*/

#include "all.h"

void init_menu_scene_4(all_t *all)
{
    all->menu.option.board = my_get_sprite(all->menu.option.board_t,
    "assets/b_charge_save.png", {2.4, 2.4}, {250, 0});
}

void init_menu_scene_3(all_t *all)
{
    all->menu.creation.result = 0;
    all->menu.creation.tag_1 = 0;
    all->menu.creation.tag_2 = 0;
    all->menu.creation.tag_3 = 0;
    all->menu.creation.tag_4 = 0;
    all->menu.creation.tag_5 = 0;

    all->menu.creation.b_blue_1 = my_get_sprite(all->menu.creation.b_blue_1_t,
    "assets/b_blue.png", {2.4, 2.4}, {150, 500});
    all->menu.creation.b_blue_2 = my_get_sprite(all->menu.creation.b_blue_2_t,
    "assets/b_blue.png", {2.4, 2.4}, {450, 500});
    all->menu.creation.b_blue_3 = my_get_sprite(all->menu.creation.b_blue_3_t,
    "assets/b_blue.png", {2.4, 2.4}, {750, 500});
    all->menu.creation.b_blue_4 = my_get_sprite(all->menu.creation.b_blue_4_t,
    "assets/b_blue.png", {2.4, 2.4}, {1050, 500});
    all->menu.creation.b_blue_5 = my_get_sprite(all->menu.creation.b_blue_5_t,
    "assets/b_blue.png", {2.4, 2.4}, {1350, 500});

    all->menu.creation.b_red_1 = my_get_sprite(all->menu.creation.b_red_1_t,
    "assets/b_red.png", {2.4, 2.4}, {170, 500});
    all->menu.creation.b_red_2 = my_get_sprite(all->menu.creation.b_red_2_t,
    "assets/b_red.png", {2.4, 2.4}, {470, 500});
    all->menu.creation.b_red_3 = my_get_sprite(all->menu.creation.b_red_3_t,
    "assets/b_red.png", {2.4, 2.4}, {770, 500});
    all->menu.creation.b_red_4 = my_get_sprite(all->menu.creation.b_red_4_t,
    "assets/b_red.png", {2.4, 2.4}, {1070, 500});
    all->menu.creation.b_red_5 = my_get_sprite(all->menu.creation.b_red_5_t,
    "assets/b_red.png", {2.4, 2.4}, {1370, 500});

    all->menu.creation.sword = my_get_sprite(all->menu.creation.sword_t,
    "assets/sword.png", {0.2, 0.2}, {250, 580});
    all->menu.creation.bow = my_get_sprite(all->menu.creation.bow_t,
    "assets/bow.png", {0.25, 0.25}, {540, 570});
    all->menu.creation.shield = my_get_sprite(all->menu.creation.shield_t,
    "assets/shield.png", {0.5, 0.5}, {850, 580});
    all->menu.creation.start = my_get_sprite(all->menu.creation.start_t,
    "assets/start.png", {0.2, 0.2}, {1455, 580});
    all->menu.creation.wings = my_get_sprite(all->menu.creation.wings_t,
    "assets/wings.png", {0.3, 0.3}, {1125, 550});

    all->menu.creation.begin = my_get_sprite(all->menu.creation.begin_t,
    "assets/b_title_charge_save.png", {0.5, 0.5}, {710, 280});
    all->menu.creation.begreen = my_get_sprite(all->menu.creation.begreen_t,
    "assets/b_start_green.png", {0.56, 0.56}, {700, 250});

    all->menu.creation.begin_f.setFont(all->menu.font);
    all->menu.creation.begin_f.setString("Save");
    all->menu.creation.begin_f.setPosition({850, 280});
    all->menu.creation.begin_f.setScale({2.5, 2.5});
    all->menu.creation.begin_f.setColor(sf::Color::Black);
}

void init_menu_scene_2(all_t *all)
{
    all->menu.creation.name_state = 0;
    all->menu.creation.f = 0;
    all->menu.creation.m = 0;
    all->menu.creation.scene_3_b_title = my_get_sprite(all->menu.creation.scene_3_b_title_t,
    "assets/b_title_charge_save.png", {0.4, 0.4}, {760, 130});

    all->menu.creation.scene_3_name_f.setString("Choose a name :");
    all->menu.creation.scene_3_name_f.setFont(all->menu.font);
    all->menu.creation.scene_3_name_f.setPosition({1160, 90});
    all->menu.creation.scene_3_name_f.setScale({2, 2});
    all->menu.creation.scene_3_name_f.setColor(sf::Color::White);
    sf::FloatRect textRect2 = all->menu.creation.scene_3_name_f.getLocalBounds();
    all->menu.creation.scene_3_name_f.setOrigin(textRect2.width,textRect2.height);

    all->menu.creation.scene_3_genre = my_get_sprite(all->menu.creation.scene_3_genre_t,
    "assets/b_genre.png", {0.3, 0.3}, {1010, 400});
    all->menu.creation.scene_3_genre_n = my_get_sprite(all->menu.creation.scene_3_genre_n_t,
    "assets/b_genre_n.png", {0.3, 0.3}, {1015, 400});

    all->menu.creation.scene_3_male.setString("Male");
    all->menu.creation.scene_3_male.setFont(all->menu.font);
    all->menu.creation.scene_3_male.setPosition({710, 300});
    all->menu.creation.scene_3_male.setScale({2, 2});
    all->menu.creation.scene_3_male.setColor(sf::Color::Blue);

    all->menu.creation.scene_genre = my_get_sprite(all->menu.creation.scene_genre_t,
    "assets/b_genre.png", {0.3, 0.3}, {710, 400});
    all->menu.creation.scene_genre_n = my_get_sprite(all->menu.creation.scene_3_genre_n_t,
    "assets/b_genre_n.png", {0.3, 0.3}, {715, 400});

    all->menu.creation.scene_3_female.setString("Female");
    all->menu.creation.scene_3_female.setFont(all->menu.font);
    all->menu.creation.scene_3_female.setPosition({1010, 300});
    all->menu.creation.scene_3_female.setScale({2, 2});
    all->menu.creation.scene_3_female.setColor(sf::Color::Magenta);

    all->menu.creation.name_input.setFont(all->menu.font);
    all->menu.creation.name_input.setPosition({930, 160});
    all->menu.creation.name_input.setScale({2, 2});
    all->menu.creation.name_input.setColor(sf::Color::Black);

    all->menu.creation.scene_3_right = my_get_sprite(all->menu.creation.scene_3_right_t,
    "assets/b_right.png", {0.3, 0.3}, {1650, 450});
    all->menu.creation.scene_3_left = my_get_sprite(all->menu.creation.scene_3_left_t,
    "assets/b_left.png", {0.3, 0.3}, {70, 450});
}

void init_menu_scene_1(all_t *all)
{
    all->menu.scene_2_back = my_get_sprite(all->menu.scene_2_back_t,
    "assets/chose_save_back.jpg", {2.8, 2.5}, {0, 0});

    all->menu.scene_2_b_charge = my_get_sprite(all->menu.scene_2_b_charge_t,
    "assets/b_charge_save.png", {1.5, 1.5}, {510, 120});

    all->menu.scene_2_b_title = my_get_sprite(all->menu.scene_2_b_title_t,
    "assets/b_title_charge_save.png", {0.5, 0.5}, {720, 130});

    all->menu.scene_2_b_next = my_get_sprite(all->menu.scene_2_b_next_t,
    "assets/b_right.png", {0.25, 0.25}, {1180, 580});

    all->menu.scene_2_b_next_g = my_get_sprite(all->menu.scene_2_b_next_g_t,
    "assets/b_right_g.png", {0.25, 0.25}, {1180, 580});

    all->menu.scene_2_b_create = my_get_sprite(all->menu.scene_2_b_create_t,
    "assets/b_opt.png", {0.5, 0.5}, {720, 820});

    all->menu.scene_2_new_f.setFont(all->menu.font);
    all->menu.scene_2_new_f.setString("New");
    all->menu.scene_2_new_f.setPosition({850, 840});
    all->menu.scene_2_new_f.setScale({2.5, 2.5});
    all->menu.scene_2_new_f.setColor(sf::Color::Red);

    all->menu.scene_2_name_f.setFont(all->menu.font);
    all->menu.scene_2_name_f.setPosition({940, 160});
    all->menu.scene_2_name_f.setScale({2.5, 2.5});
    all->menu.scene_2_name_f.setColor(sf::Color::Black);

    all->menu.scene_2_sex_f.setFont(all->menu.font);
    all->menu.scene_2_sex_f.setPosition({850, 270});
    all->menu.scene_2_sex_f.setScale({2, 2});

    all->menu.scene_2_level_f.setFont(all->menu.font);
    all->menu.scene_2_level_f.setPosition({840, 370});
    all->menu.scene_2_level_f.setScale({2, 2});
    all->menu.scene_2_level_f.setColor(sf::Color::Green);

    all->menu.scene_2_coins_f.setFont(all->menu.font);
    all->menu.scene_2_coins_f.setPosition({1105, 490});
    all->menu.scene_2_coins_f.setScale({2.5, 2.5});
    all->menu.scene_2_coins_f.setColor(sf::Color::Yellow);

    all->menu.scene_2_points_f.setFont(all->menu.font);
    all->menu.scene_2_points_f.setPosition({1140, 610});
    all->menu.scene_2_points_f.setScale({2.5, 2.5});
    all->menu.scene_2_points_f.setColor(sf::Color::White);
}

void init_menu(all_t *all)
{
    all->menu.font.loadFromFile("assets/font.ttf");

    all->menu.menu_back_morning = my_get_sprite(all->menu.menu_back_morning_t, 
    "assets/wall_2.png", {2.65, 2.33}, {0, 0});
    all->menu.menu_back_day = my_get_sprite(all->menu.menu_back_day_t, 
    "assets/wall_1.png", {2.65, 2.33}, {0, 0});
    all->menu.menu_back_night = my_get_sprite(all->menu.menu_back_night_t, 
    "assets/wall_3.png", {2.65, 2.33}, {0, 0});

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
    all->menu.b_opt_f.setString("Settings");
    all->menu.b_opt_f.setPosition({110, 615});
    all->menu.b_opt_f.setScale({2, 2});
    all->menu.b_opt_f.setColor(sf::Color::Black);

    init_menu_scene_1(all);
    init_menu_scene_2(all);
    init_menu_scene_3(all);
    init_menu_scene_4(all);
}
