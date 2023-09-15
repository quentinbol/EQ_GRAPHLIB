/*
** EPITECH PROJECT, 2023
** Main
** File description:
** Lib
*/

#include "all.h"

void init_all(all_t *all)
{
    init_player(all);
}

void my_game(all_t *all)
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Black Window SFML");
    sf::Event event;
    while (window.isOpen()) {
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.display();
    }
}

int main()
{
    all_t all;

    init_all(&all);
    //my_game(&all);

    std::cout << all.player.getName() << "\n";

    return 0;
}
