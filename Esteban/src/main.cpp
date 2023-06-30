/*
** EPITECH PROJECT, 2023
** Main
** File description:
** Lib
*/

#include "all.h"

void my_test()
{
    PNJ::villageois Paris[10];

    Paris[0].setStat("Gerar", 34, 'M');
    Paris[1].setStat("Quentin", 19, 'M');
    Paris[2].setStat("Mauricette", 94, 'F');
    Paris[3].setStat("Momo", 19, 'M');
    Paris[4].setStat("Louise", 20, 'F');
    Paris[5].setStat("Lucas", 21, 'M');
    Paris[6].setStat("Adrien", 19, 'M');
    Paris[7].setStat("Ana", 44, 'F');
    Paris[8].setStat("Jason", 29, 'M');
    Paris[9].setStat("Noan", 21, 'M');

    for (int a = 0; a != 10; a++) {
        if (Paris[a].getAge() < 20)
            std::cout << Paris[a].getLife() << "\n";
    }
}

sf::Sprite my_get_sprite(texture_t& t, std::string path)
{
    t.my_cat.loadFromFile(path);
    sf::Sprite test;
    test.setTexture(t.my_cat);
    sf::Vector2f myscale = {0.1, 0.1};
    sf::Vector2f pos = {20, 20};
    test.setPosition(pos);
    test.setScale(myscale);

    return test;
}

int main()
{
    texture_t t;
    sf::Sprite test = my_get_sprite(t, "my_cat.jpg");

    sf::RenderWindow window(sf::VideoMode(1920, 1080), "Black Window SFML");
    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }
        window.clear();
        window.draw(test);
        window.display();
    }
    return 0;
}
