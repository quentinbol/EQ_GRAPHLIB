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
    std::string texturePath = __Texture;
    if (!__size.empty())
        circle.setRadius(std::stof(__size));
    if (!__FillColor.empty())
        circle.setFillColor(choose_color(__FillColor));
    if (!__OutlineColor.empty())
        circle.setOutlineColor(choose_color(__OutlineColor));
    if (!__OutlineThickness.empty())
        circle.setOutlineThickness(std::stof(__OutlineThickness));
    if (!__Position_x.empty() && !__Position_y.empty())
        circle.setPosition(sf::Vector2f(std::stof(__Position_x), std::stof(__Position_y)));
    if (!__Scale_x.empty() && !__Scale_y.empty()) 
        circle.setScale(sf::Vector2f(std::stof(__Scale_x), std::stof(__Scale_y)));
    if (!__Origin_x.empty() && !__Origin_y.empty())
        circle.setOrigin(sf::Vector2f(std::stof(__Origin_x), std::stof(__Origin_y)));
    if (!__Rotation.empty())
        circle.setRotation(std::stof(__Rotation));
    set_texture_or_not(texturePath, circle);
    return circle;
}