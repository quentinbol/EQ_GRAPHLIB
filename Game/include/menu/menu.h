/*
** EPITECH PROJECT, 2023
** menu
** File description:
** true
*/

#ifndef menu_h
    #define menu_h

    #include <iostream>

    struct menu_t {
        sf::Font font;
        int save;

        sf::Sprite menu_back;
        sf::Texture menu_back_t;

        sf::Sprite b_play;
        sf::Texture b_play_t;
        sf::Text b_play_f;

        sf::Sprite b_opt;
        sf::Texture b_opt_t;
        sf::Text b_opt_f;


        sf::Sprite scene_2_back;
        sf::Texture scene_2_back_t;

        sf::Sprite scene_2_b_charge;
        sf::Texture scene_2_b_charge_t;

        sf::Sprite scene_2_b_new;
        sf::Texture scene_2_b_new_t;

        sf::Sprite scene_2_b_title;
        sf::Texture scene_2_b_title_t;

        sf::Sprite scene_2_b_next;
        sf::Texture scene_2_b_next_t;

        sf::Sprite scene_2_b_create;
        sf::Texture scene_2_b_create_t;

        sf::Text scene_2_new_f;

        sf::Text scene_2_name_f;
        sf::Text scene_2_sex_f;
        sf::Text scene_2_level_f;
        sf::Text scene_2_coins_f;
        sf::Text scene_2_points_f;

        sf::Sprite scene_3_b_title;
        sf::Texture scene_3_b_title_t;
        sf::Text scene_3_name_f;

        sf::Sprite scene_3_genre;
        sf::Texture scene_3_genre_t;
        sf::Sprite scene_3_genre_n;
        sf::Texture scene_3_genre_n_t;

        sf::Sprite scene_genre;
        sf::Texture scene_genre_t;

        sf::Sprite scene_genre_n;
        sf::Texture scene_genre_n_t;

        int m;
        sf::Text scene_3_male;
        int f;
        sf::Text scene_3_female;

        sf::Text name_input;
        std::string name_enter;
        int name_state;
        sf::FloatRect textRect3;

        sf::Sprite scene_3_right;
        sf::Texture scene_3_right_t;
        sf::Sprite scene_3_left;
        sf::Texture scene_3_left_t;


        sf::Sprite b_blue_1;
        sf::Texture b_blue_1_t;
        sf::Sprite b_blue_2;
        sf::Texture b_blue_2_t;
        sf::Sprite b_blue_3;
        sf::Texture b_blue_3_t;
        sf::Sprite b_blue_4;
        sf::Texture b_blue_4_t;
        sf::Sprite b_blue_5;
        sf::Texture b_blue_5_t;

        int tag_1;
        int tag_2;
        int tag_3;
        int tag_4;
        int tag_5;

        sf::Sprite b_red_1;
        sf::Texture b_red_1_t;
        sf::Sprite b_red_2;
        sf::Texture b_red_2_t;
        sf::Sprite b_red_3;
        sf::Texture b_red_3_t;
        sf::Sprite b_red_4;
        sf::Texture b_red_4_t;
        sf::Sprite b_red_5;
        sf::Texture b_red_5_t;

        sf::Sprite sword;
        sf::Texture sword_t;
        sf::Sprite bow;
        sf::Texture bow_t;
        sf::Sprite shield;
        sf::Texture shield_t;
        sf::Sprite start;
        sf::Texture start_t;
        sf::Sprite wings;
        sf::Texture wings_t;
        int result;

        sf::Sprite begin;
        sf::Texture begin_t;
        sf::Sprite begreen;
        sf::Texture begreen_t;
        sf::Text begin_f;
    };

    struct all_t;
    void init_menu(all_t *all);
    void menu_loop(all_t *all);
    void event_menu(all_t *all);
    void menu_display(all_t *all);

#endif /* !menu _h*/
