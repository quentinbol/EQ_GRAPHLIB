/*
** EPITECH PROJECT, 2023
** my_get_text
** File description:
** true
*/

#include "lib_graphic.h"
#include <iostream>

sf::Text my_get_text(sf::Font font, std::string str, sf::Vector2f scale, sf::Vector2f pos)
{
    sf::Text text;
    //text.setFont(font);
    text.setString(str);
    text.setPosition(pos);
    text.setScale(scale);

    return text;
}