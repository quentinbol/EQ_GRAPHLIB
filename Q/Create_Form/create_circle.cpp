/*
** EPITECH PROJECT, 2023
** create_circle
** File description:
** lib
*/

#include "all.hpp"

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

void set_texture_or_not(std::string texturePath, sf::CircleShape circle)
{
    if (!texturePath.empty()) {
        sf::Texture __Texture__;
        __Texture__.loadFromFile(texturePath);
        circle.setTexture(&__Texture__);
    }
}

sf::CircleShape create_circle(std::string property[12])
{
    sf::CircleShape circle;
    std::string texturePath = _c_Texture;
    if (!_c_size.empty())
        circle.setRadius(std::stof(_c_size));
    if (!_c_FillColor.empty())
        circle.setFillColor(choose_color(_c_FillColor));
    if (!_c_OutlineColor.empty())
        circle.setOutlineColor(choose_color(_c_OutlineColor));
    if (!_c_OutlineThickness.empty())
        circle.setOutlineThickness(std::stof(_c_OutlineThickness));
    if (!_c_Position_x.empty() && !_c_Position_y.empty())
        circle.setPosition(sf::Vector2f(std::stof(_c_Position_x), std::stof(_c_Position_y)));
    if (!_c_Scale_x.empty() && !_c_Scale_y.empty()) 
        circle.setScale(sf::Vector2f(std::stof(_c_Scale_x), std::stof(_c_Scale_y)));
    if (!_c_Origin_x.empty() && !_c_Origin_y.empty())
        circle.setOrigin(sf::Vector2f(std::stof(_c_Origin_x), std::stof(_c_Origin_y)));
    if (!_c_Rotation.empty())
        circle.setRotation(std::stof(_c_Rotation));
    set_texture_or_not(texturePath, circle);
    return circle;
}