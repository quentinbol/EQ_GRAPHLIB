/*
** EPITECH PROJECT, 2023
** my_get_sprite
** File description:
** true
*/

#include "lib_graphic.h"

sf::Sprite my_get_sprite(sf::Texture& texture, std::string path, sf::Vector2f scale, sf::Vector2f pos)
{
    texture.loadFromFile(path);
    sf::Sprite sprite;
    sprite.setTexture(texture);
    sprite.setPosition(pos);
    sprite.setScale(scale);

    return sprite;
}
