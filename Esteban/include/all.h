/*
** EPITECH PROJECT, 2023
** header
** File description:
** header
*/

#include <SFML/Graphics.hpp>
#include <SFML/Graphics/RenderTexture.hpp>
#include <iostream>

#ifndef all_hpp
    #define all_hpp

    namespace PNJ {

    class villageois {
    private:
        std::string name;
        char sex;
        int age;
        int life = 100;

    public:
        void setStat(std::string name_in, int age_in, char sex_in) {
            name = name_in;
            age = age_in;
            sex = sex_in;
        }

        std::string& getName() {
            return name;
        }
        int getLife() {
            return life;
        }
        int getAge() {
            return age;
        }
        char getSex() {
            return sex;
        }
    };

    class enemy {
    private:
        std::string name;
        int age;

    public:
        void stop() {
            return;
        }
    };
}

    struct texture_t {
        sf::Texture my_cat;
    };

#endif /* !all_hpp */