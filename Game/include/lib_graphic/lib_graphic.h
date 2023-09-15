/*
** EPITECH PROJECT, 2023
** prototypes
** File description:
** true
*/

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderTexture.hpp>
#include "define.h"

#ifndef lib_graph
    #define lib_graph

    /**
     * @brief Create a Sprite form Texture
     * 
     * @param Texture
     * @param FilePath
     */
    sf::Sprite my_get_sprite(sf::Texture& texture, std::string path);

    /**
     * @brief Create a circle object
     * 
     * @param Radius
     * @param FillColor
     * @param OutlineColor
     * @param OutlineThickness
     * @param Position_x
     * @param Position_y
     * @param Scale_x
     * @param Scale_y
     * @param Origin
     * @param Rotation
     * @param Texture
     * @param Texture_Rect
     */
    sf::CircleShape create_circle(std::string property[10]);
    sf::Color choose_color(std::string Color); 

#endif /* !lib_graph */
