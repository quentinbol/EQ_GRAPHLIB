/*
** EPITECH PROJECT, 2023
** Main
** File description:
** Lib
*/

#include "all.h"

void init_all(all_t *all)
{
    init_player_save(all);
    init_create_new_player(all);
    init_menu(all);
}

void my_game(all_t *all)
{
    all->window.create(sf::VideoMode(1920, 1080), "Black Window SFML");
    while (all->window.isOpen()) {
        all->window.clear();
        while (all->window.pollEvent(all->event)) {

            the_event(all);

            if (all->event.type == sf::Event::Closed)
                all->window.close();
        }

        the_game_loop(all);

        the_display(all);

        all->window.display();
    }
}

int main()
{
    all_t all;

    all.index = 0;

    init_all(&all);
    my_game(&all);

    return 0;
}
