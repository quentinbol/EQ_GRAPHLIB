/*
** EPITECH PROJECT, 2023
** my_get_sprite
** File description:
** true
*/

#include "lib_graphic.h"

sf::Sprite my_get_sprite(sf::Texture& texture, std::string path)
{
    texture.loadFromFile(path);
    sf::Sprite sprite;
    sf::Vector2f scale = {0.1, 0.1};
    sf::Vector2f pos = {20, 20};
    sprite.setTexture(texture);
    sprite.setPosition(pos);
    sprite.setScale(scale);

    return sprite;
}
