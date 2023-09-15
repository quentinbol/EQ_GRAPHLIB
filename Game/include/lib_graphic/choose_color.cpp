/*
** EPITECH PROJECT, 2023
** choose_color
** File description:
** lib
*/

#include "lib_graphic.h"

sf::Color choose_color(std::string Color)
{
    if (Color == "Red")
        return sf::Color::Red;
    if (Color == "Blue")
        return sf::Color::Blue;
    if (Color == "Green")
        return sf::Color::Green;
    if (Color == "Yellow")
        return sf::Color::Yellow;
    if (Color == "Black")
        return sf::Color::Black;
    if (Color == "White")
        return sf::Color::White;
    return sf::Color::Black;
}
