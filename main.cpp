/*
** EPITECH PROJECT, 2023
** Main
** File description:
** Lib
*/

#include "all.hpp"

int main()
{
    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Black Window SFML");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear(sf::Color::Black);
        window.display();
    }
    return 0;
}
