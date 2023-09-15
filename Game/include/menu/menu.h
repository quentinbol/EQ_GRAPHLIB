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

        sf::Sprite menu_back;
        sf::Texture menu_back_t;

        sf::Sprite b_play;
        sf::Texture b_play_t;
        sf::Text b_play_f;

        sf::Sprite b_opt;
        sf::Texture b_opt_t;
        sf::Text b_opt_f;
    };

    struct all_t;
    void init_menu(all_t *all);
    void event_menu(all_t *all);
    void menu_display(all_t *all);


#endif /* !menu _h*/
