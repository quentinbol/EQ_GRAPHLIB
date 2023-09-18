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
    };

    struct all_t;
    void init_menu(all_t *all);
    void menu_loop(all_t *all);
    void event_menu(all_t *all);
    void menu_display(all_t *all);

    void new_player(all_t *all);


#endif /* !menu _h*/
