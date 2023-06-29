/*
** EPITECH PROJECT, 2023
** create_rect
** File description:
** lib
*/

#include "all.hpp"

void set_texture_or_not(std::string texturePath, sf::RectangleShape rect)
{
    if (!texturePath.empty()) {
        sf::Texture __Texture__;
        __Texture__.loadFromFile(texturePath);
        rect.setTexture(&__Texture__);
    }
}

sf::RectangleShape create_rect(std::string property[13])
{
    sf::RectangleShape rect;
    std::string texturePath = _r_Texture;
    if (!_r_size_x.empty() && !_r_size_y.empty())
        rect.setSize(sf::Vector2f(std::stof(_r_size_x), std::stof(_r_size_y)));
    if (!_r_FillColor.empty())
        rect.setFillColor(choose_color(_r_FillColor));
    if (!_r_OutlineColor.empty())
        rect.setOutlineColor(choose_color(_r_OutlineColor));
    if (!_r_OutlineThickness.empty())
        rect.setOutlineThickness(std::stof(_r_OutlineThickness));
    if (!_r_Position_x.empty() && !_r_Position_y.empty())
        rect.setPosition(sf::Vector2f(std::stof(_r_Position_x), std::stof(_r_Position_y)));
    if (!_r_Scale_x.empty() && !_r_Scale_y.empty()) 
        rect.setScale(sf::Vector2f(std::stof(_r_Scale_x), std::stof(_r_Scale_y)));
    if (!_r_Origin_x.empty() && !_r_Origin_y.empty())
        rect.setOrigin(sf::Vector2f(std::stof(_r_Origin_x), std::stof(_r_Origin_y)));
    if (!_r_Rotation.empty())
        rect.setRotation(std::stof(_r_Rotation));
    set_texture_or_not(texturePath, rect);
    return rect;
}